#!/usr/bin/env python3
"""交叉引用分析: 谁引用全局 key 变量 0x1c36fd8 (jsb_set_xxtea_key 的存储目标)。
同时: 反汇编 .init_array 的静态初始化器 + applicationDidFinishLaunching。
"""
import struct
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

SO = "/Users/mosc/Downloads/逆向/浙江游戏大厅/plugin-extracted/old-apk/lib/arm64-v8a/libcocos2djs.so"
KEYVAR = 0x1c36fd8  # jsb_set_xxtea_key 的全局 std::string

f = open(SO, "rb")
elf = ELFFile(f)
loads = [(s["p_offset"], s["p_vaddr"], s["p_filesz"]) for s in elf.iter_segments() if s["p_type"] == "PT_LOAD"]

def vaddr2off(va):
    for o, v, sz in loads:
        if v <= va < v + sz:
            return o + (va - v)
    return None

def read_str(va, maxlen=120):
    off = vaddr2off(va)
    if off is None:
        return None
    f.seek(off)
    return f.read(maxlen).split(b"\x00")[0]

def read_cstr_at(off, maxlen=120):
    f.seek(off)
    return f.read(maxlen).split(b"\x00")[0]

secs = {s.name: (s["sh_addr"], s["sh_offset"], s["sh_size"]) for s in elf.iter_sections()}

# 符号表: vaddr -> name (用于标注函数边界)
symnames = {}
for secname in (".dynsym", ".symtab"):
    sec = elf.get_section_by_name(secname)
    if sec is None:
        continue
    for sym in sec.iter_symbols():
        if sym["st_value"] and sym.name:
            symnames.setdefault(sym["st_value"], sym.name)

md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)

taddr, toff, tsize = secs[".text"]
f.seek(toff)
text = f.read(tsize)

# 1. 扫 adrp 引用 KEYVAR 所在页 0x1c36000 的指令
PAGE = KEYVAR & ~0xFFF
hits = []
code_start = taddr
prev_adrp = {}  # 简单线性跟踪
for insn in md.disasm(text, taddr):
    if insn.mnemonic == "adrp":
        parts = insn.op_str.split(", ")
        try:
            tgt = int(parts[1].lstrip("#"), 0)
        except ValueError:
            continue
        if tgt == PAGE:
            prev_adrp[parts[0]] = insn.address
    elif insn.mnemonic in ("add", "ldr") and prev_adrp:
        # 检查是否形成对 0xfd8 偏移的引用
        op = insn.op_str
        for reg, adrp_addr in list(prev_adrp.items()):
            if f"{reg}, {reg}, #0xfd8" in op or f"[{reg}, #0xfd8]" in op or f"{reg}, #{KEYVAR & 0xfff}" in op:
                hits.append(adrp_addr)
                del prev_adrp[reg]

print(f"=== 引用 0x{KEYVAR:x} 的位置: {len(hits)} 处 ===")
for h in hits[:20]:
    # 找所在函数名(最近的已知符号)
    fname = "?"
    for va in sorted(symnames):
        if va <= h:
            fname = symnames[va]
        else:
            break
    print(f"  0x{h:x} in {fname}")

# 2. 反汇编每个命中点上下文
def disasm(va, size, label):
    off = vaddr2off(va)
    if off is None:
        print(f"  ({label}: vaddr2off fail)")
        return
    f.seek(off)
    code = f.read(size)
    print(f"\n=== {label} @ 0x{va:x} ===")
    regs = {}
    for insn in md.disasm(code, va):
        line = f"0x{insn.address:x}: {insn.mnemonic} {insn.op_str}"
        if insn.mnemonic == "adrp":
            parts = insn.op_str.split(", ")
            regs[parts[0]] = int(parts[1].lstrip("#"), 0)
        elif insn.mnemonic == "add":
            parts = [p.strip() for p in insn.op_str.split(",")]
            if len(parts) == 3 and parts[2].startswith("#") and parts[0] in regs and parts[1] == parts[0]:
                try:
                    full = regs[parts[0]] + int(parts[2].lstrip("#"), 0)
                    s = read_str(full)
                    if s and len(s) > 3:
                        line += f'   ; "{s[:70].decode("utf-8", "replace")}"'
                except Exception:
                    pass
        print(line)

for h in hits[:6]:
    disasm(h - 0x60, 0xd0, f"上下文 @ 0x{h:x}")

# 3. .init_array 静态初始化器
for iname in (".init_array",):
    if iname in secs:
        ia, io, isz = secs[iname]
        f.seek(io)
        ptrs = struct.unpack("<%dQ" % (isz // 8), f.read(isz))
        print(f"\n=== .init_array: {len(ptrs)} 个初始化器 ===")
        # 检查这些初始化器是否有重定位信息(文件里通常是0, 运行时reloc)
        for p in ptrs[:20]:
            print(f"  0x{p:x} {symnames.get(p, '')}")
