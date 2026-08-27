#!/usr/bin/env python3
"""完整反汇编 xxtea_decrypt wrapper(0x811318) + 内部实现(0x8113e4), 还原魔改算法。"""
import re
from elftools.elf.elffile import ELFFile
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
for secname in (".dynsym", ".symtab"):
    sec = elf.get_section_by_name(secname)
    if sec is None:
        continue
    for sym in sec.iter_symbols():
        if sym["st_value"] and sym.name:
            symnames.setdefault(sym["st_value"], sym.name)

md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)

def disasm(va, size, label):
    off = vaddr2off(va)
    f.seek(off)
    code = f.read(size)
    print(f"\n{'='*76}\n=== {label} @ 0x{va:x} (0x{size:x} bytes) ===\n{'='*76}")
    for insn in md.disasm(code, va):
        line = f"  0x{insn.address:x} (+0x{insn.address-va:03x}): {insn.mnemonic} {insn.op_str}"
        if insn.mnemonic == "bl" and insn.op_str.lstrip("#"):
            try:
                dst = int(insn.op_str.lstrip("#"), 0)
                if dst in symnames:
                    line += f"   ; {symnames[dst][:70]}"
            except ValueError:
                pass
        print(line)

disasm(0x811318, 0xcc, "xxtea_decrypt wrapper")
disasm(0x8113e4, 0x2e0, "xxtea_decrypt INTERNAL (std)")
