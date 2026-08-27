#!/usr/bin/env python3
"""反汇编 AppDelegate::applicationDidFinishLaunching 提取 xxtea key。"""
import re
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

SO = "/Users/mosc/Downloads/逆向/浙江游戏大厅/plugin-extracted/old-apk/lib/arm64-v8a/libcocos2djs.so"

f = open(SO, "rb")
elf = ELFFile(f)
loads = [(s["p_offset"], s["p_vaddr"], s["p_filesz"]) for s in elf.iter_segments() if s["p_type"] == "PT_LOAD"]

def vaddr2off(va):
    for o, v, sz in loads:
        if v <= va < v + sz:
            return o + (va - v)
    return None

symnames = {}
funcsyms = {}
for secname in (".dynsym", ".symtab"):
    sec = elf.get_section_by_name(secname)
    if sec is None:
        continue
    for sym in sec.iter_symbols():
        if sym["st_value"] and sym.name:
            symnames.setdefault(sym["st_value"], sym.name)
            funcsyms[sym.name] = (sym["st_value"], sym["st_size"])

name = "_ZN11AppDelegate29applicationDidFinishLaunchingEv"
va, sz = funcsyms[name]
print(f"=== {name} @ 0x{va:x} size={sz} ===")

md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
off = vaddr2off(va)
f.seek(off)
code = f.read(sz)

# GOT/PLT 解析(标注 bl)
gotmap = {}
for sec in elf.iter_sections():
    if isinstance(sec, RelocationSection):
        for rel in sec.iter_relocations():
            if rel["r_info_type"] in (1025, 1026) and rel["r_info_sym"]:
                nm = elf.get_section_by_name(".dynsym").get_symbol(rel["r_info_sym"]).name
                if nm:
                    gotmap[rel["r_offset"]] = nm

def read_str(a, maxlen=120):
    o = vaddr2off(a)
    if o is None:
        return None
    f.seek(o)
    return f.read(maxlen).split(b"\x00")[0]

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
                    if s:
                        line += f'   ; "{s[:80].decode("utf-8", "replace")}"'
            except Exception:
                pass
    elif insn.mnemonic == "bl":
        try:
            dst = int(op.lstrip("#"), 0)
        except ValueError:
            dst = None
        if dst is not None and dst in symnames:
            line += f"   ; {symnames[dst][:75]}"
    print(line)
