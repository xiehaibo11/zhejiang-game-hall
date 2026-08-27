#!/usr/bin/env python3
"""反汇编 xxtea_decrypt 调用点所在函数 + Unzipper key 体系函数。"""
import re
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

SO = "/Users/mosc/Downloads/逆向/浙江游戏大厅/plugin-extracted/old-apk/lib/arm64-v8a/libcocos2djs.so"

f = open(SO, "rb")
elf = ELFFile(f)
loads = [(s["p_offset"], s["p_vaddr"], s["p_filesz"]) for s in elf.iter_segments() if s["p_type"] == "PT_LOAD"]
secs = {s.name: (s["sh_addr"], s["sh_offset"], s["sh_size"]) for s in elf.iter_sections()}

def vaddr2off(va):
    for o, v, sz in loads:
        if v <= va < v + sz:
            return o + (va - v)
    return None

symnames = {}
funcsyms = []
for secname in (".dynsym", ".symtab"):
    sec = elf.get_section_by_name(secname)
    if sec is None:
        continue
    for sym in sec.iter_symbols():
        if sym["st_value"] and sym.name:
            symnames.setdefault(sym["st_value"], sym.name)
            if sym["st_info"]["type"] in ("STT_FUNC", 2):  # STT_FUNC
                funcsyms.append((sym["st_value"], sym["st_size"], sym.name))
funcsyms.sort()

# GOT 槽 -> 符号名
gotmap = {}
relptr = {}
for sec in elf.iter_sections():
    if isinstance(sec, RelocationSection):
        for rel in sec.iter_relocations():
            t = rel["r_info_type"]
            if t in (1025, 1026):
                symidx = rel["r_info_sym"]
                if symidx:
                    nm = elf.get_section_by_name(".dynsym").get_symbol(symidx).name
                    if nm:
                        gotmap[rel["r_offset"]] = nm
            elif t == 1027:
                relptr[rel["r_offset"]] = rel["r_addend"] if "r_addend" in rel.entry else 0

# PLT stub -> 符号
md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
plt_map = {}
for secname in (".plt", ".plt.got", ".iplt"):
    if secname not in secs:
        continue
    a, o, sz = secs[secname]
    f.seek(o)
    code = f.read(sz)
    cur_adrp = None
    stub_start = None
    for insn in md.disasm(code, a):
        if insn.mnemonic == "adrp" and insn.op_str.startswith("x16, "):
            cur_adrp = int(insn.op_str.split(", ")[1].lstrip("#"), 0)
            stub_start = insn.address
        elif insn.mnemonic == "ldr" and cur_adrp is not None and insn.op_str.startswith("x17, [x16"):
            m = re.search(r"#(0x[0-9a-f]+|\d+)", insn.op_str)
            off = int(m.group(1), 0) if m else 0
            got = cur_adrp + off
            if got in gotmap:
                plt_map[stub_start] = gotmap[got]
            cur_adrp = None
        elif insn.mnemonic in ("br", "ret"):
            cur_adrp = None

def read_str(va, maxlen=100):
    off = vaddr2off(va)
    if off is None:
        return None
    f.seek(off)
    return f.read(maxlen).split(b"\x00")[0]

def find_func(addr):
    """返回 (start, size, name): addr 所在的已知函数"""
    best = None
    for va, sz, nm in funcsyms:
        if va <= addr:
            if sz and va <= addr < va + sz:
                return (va, sz, nm)
            best = (va, sz, nm)
        else:
            break
    return best

def disasm(va, size, label):
    off = vaddr2off(va)
    if off is None:
        print(f"({label}: bad addr)")
        return
    f.seek(off)
    code = f.read(size)
    print(f"\n{'='*72}\n=== {label} @ 0x{va:x} (size 0x{size:x}) ===\n{'='*72}")
    regs = {}
    for insn in md.disasm(code, va):
        line = f"  0x{insn.address:x}: {insn.mnemonic} {insn.op_str}"
        op = insn.op_str
        if insn.mnemonic == "adrp":
            parts = op.split(", ")
            regs[parts[0]] = int(parts[1].lstrip("#"), 0)
        elif insn.mnemonic == "add" and ", :" not in op:
            parts = [p.strip() for p in op.split(",")]
            if len(parts) == 3 and parts[2].startswith("#") and parts[0] == parts[1] and parts[0] in regs:
                try:
                    full = regs[parts[0]] + int(parts[2].lstrip("#"), 0)
                    if full in symnames:
                        line += f"   ; &{symnames[full][:60]}"
                    else:
                        s = read_str(full)
                        if s and len(s) > 3 and all(32 <= c < 127 for c in s):
                            line += f'   ; "{s[:60].decode()}"'
                        elif full in relptr:
                            t = relptr[full]
                            line += f"   ; ptr-> {symnames.get(t, hex(t))}"
                except Exception:
                    pass
        elif insn.mnemonic == "bl":
            try:
                dst = int(op.lstrip("#"), 0)
            except ValueError:
                dst = None
            if dst is not None:
                if dst in symnames:
                    line += f"   ; {symnames[dst][:70]}"
                elif dst in plt_map:
                    line += f"   ; {plt_map[dst][:70]}@plt"
        elif insn.mnemonic == "ldr" and "[" in op and "#" not in op.split("[")[1].split("]")[0]:
            pass
        print(line)

# --- xxtea_decrypt 调用点所在函数 ---
for site in (0x7f6f48, 0x7f7568):
    st, sz, nm = find_func(site)
    print(f"\n>>> 调用点 0x{site:x} 所在函数: 0x{st:x} size={sz} {nm[:100]}")
    disasm(st, min(sz or 0x400, 0x600), f"caller({nm[:50]})")

# --- Unzipper key 体系 ---
disasm(0x869b5c, 744, "js_universe_Unzipper_setKeyRegistry")
disasm(0x90a0ec, 56, "universe::Unzipper::setKey")
