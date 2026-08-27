#!/usr/bin/env python3
"""开窗反汇编 xxtea_decrypt@plt 两个调用点, 找 key 参数来源。"""
import re
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

SO = "/Users/mosc/Downloads/逆向/浙江游戏大厅/plugin-extracted/old-apk/lib/arm64-v8a/libcocos2djs.so"
SITES = [0x7f6f48, 0x7f7568]

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
for secname in (".dynsym", ".symtab"):
    sec = elf.get_section_by_name(secname)
    if sec is None:
        continue
    for sym in sec.iter_symbols():
        if sym["st_value"] and sym.name:
            symnames.setdefault(sym["st_value"], sym.name)

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

def disasm(va, size, label):
    off = vaddr2off(va)
    f.seek(off)
    code = f.read(size)
    print(f"\n{'='*76}\n=== {label} @ 0x{va:x} ===\n{'='*76}")
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
                    line += f"   ; {symnames[dst][:75]}"
                elif dst in plt_map:
                    line += f"   ; {plt_map[dst][:75]}@plt"
        elif insn.mnemonic in ("ldr", "ldrb") and op.startswith("x") or op.startswith("w"):
            # ldr xN, [xM, #imm] - 标注全局
            m = re.match(r"(\w+), \[(\w+)\](?:, #(0x[0-9a-f]+|\d+))?", op)
            if m and m.group(2) in regs:
                try:
                    full = regs[m.group(2)] + (int(m.group(3), 0) if m.group(3) else 0)
                    if full in symnames:
                        line += f"   ; {symnames[full][:60]}"
                except Exception:
                    pass
        print(line)

for site in SITES:
    disasm(site - 0x2a0, 0x380, f"调用点 0x{site:x} 前后窗口")
