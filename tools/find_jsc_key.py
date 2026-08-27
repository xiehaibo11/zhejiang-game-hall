#!/usr/bin/env python3
"""在插件 libcocos2djs.so 中定位 jsc 的 XXTEA 密钥。
Creator 2.x: setXXTEAKeyAndSign(key, sign) 在 native main 模板中调用, sign 为空。
策略: .dynsym 找 xxtea/XXTEA 符号 -> 找 setXXTEAKeyAndSign 调用者 -> 回溯 key 字符串。
"""
import struct
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

def off2vaddr(off):
    for o, v, sz in loads:
        if o <= off < o + sz:
            return v + (off - o)
    return None

def read_str(va, maxlen=200):
    off = vaddr2off(va)
    if off is None:
        return None
    f.seek(off)
    return f.read(maxlen).split(b"\x00")[0]

secs = {s.name: (s["sh_addr"], s["sh_offset"], s["sh_size"]) for s in elf.iter_sections()}

# 1. 符号搜索
targets = {}
for secname in (".dynsym", ".symtab"):
    sec = elf.get_section_by_name(secname)
    if sec is None:
        continue
    for sym in sec.iter_symbols():
        n = sym.name
        if any(k in n for k in ("xxtea", "XXTEA", "Xxtea")):
            targets[n] = (sym["st_value"], sym["st_size"])
print("=== xxtea 相关符号 ===")
for n, (v, sz) in sorted(targets.items(), key=lambda x: x[1][0]):
    print(f"  0x{v:x} size={sz} {n}")

setfn = None
for n, (v, sz) in targets.items():
    if "setXXTEAKeyAndSign" in n or "set_xxtea" in n.lower():
        setfn = (n, v, sz)
print("setXXTEAKeyAndSign:", setfn)

# 2. R_AARCH64_RELATIVE 收集(data 指针 -> 字符串)
relmap = {}
from elftools.elf.relocation import RelocationSection
for sec in elf.iter_sections():
    if isinstance(sec, RelocationSection):
        for rel in sec.iter_relocations():
            if rel["r_info_type"] == 1027:  # R_AARCH64_RELATIVE
                relmap[rel["r_offset"]] = rel["r_addend"] if "r_addend" in rel.entry else 0

md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
md.detail = True

def disasm(va, size, label):
    off = vaddr2off(va)
    f.seek(off)
    code = f.read(size)
    print(f"\n=== {label} @ 0x{va:x} ===")
    regs = {}
    for insn in md.disasm(code, va):
        line = f"0x{insn.address:x}: {insn.mnemonic} {insn.op_str}"
        if insn.mnemonic == "adrp":
            parts = insn.op_str.split(", ")
            regs[parts[0]] = int(parts[1].lstrip("#"), 0)
        elif insn.mnemonic == "add" and ", :" not in insn.op_str:
            parts = [p.strip() for p in insn.op_str.split(",")]
            if len(parts) == 3 and parts[2].startswith("#") and parts[0] in regs and parts[1] == regs.get(parts[0]) and parts[1] in regs:
                try:
                    full = regs[parts[0]] + int(parts[2].lstrip("#"), 0)
                    s = read_str(full)
                    if s and len(s) > 3:
                        line += f"   ; \"{s[:80].decode('utf-8', 'replace')}\""
                except Exception:
                    pass
        elif insn.mnemonic == "ldr" and "[" in insn.op_str:
            # ldr x0, [x8] - 若 x8 是 relmap 中的地址, 打印指向的字符串
            import re
            m = re.match(r"(\w+), \[(\w+)\]", insn.op_str.replace(" :", ""))
            if m and m.group(2) in regs:
                ptr_addr = regs[m.group(2)]
                if ptr_addr in relmap:
                    s = read_str(relmap[ptr_addr])
                    if s:
                        line += f'   ; -> "{s[:80].decode("utf-8", "replace")}"'
        print(line)
        if insn.mnemonic in ("ret", "b") and insn.address > va + size - 8:
            break

# 4. 额外: 反汇编 un_xxtea_decrypt 和 jsb_set_xxtea_key 找全局 key 引用
for label, va, sz in [
    ("un_xxtea_decrypt", 0x90ccec, 204),
    ("xxtea_decrypt", 0x811318, 204),
    ("jsb_set_xxtea_key", 0x7eb234, 68),
]:
    disasm(va, sz, label)

# 5. 扫 .text 中 adrp+ldr 引用 xxtea_decrypt/un_xxtea_decrypt 的调用方(GOT/直接)
if setfn:
    name, fva, fsz = setfn
    taddr, toff, tsize = secs[".text"]
    f.seek(toff)
    text = f.read(tsize)
    md2 = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
    callers = []
    for insn in md2.disasm(text, taddr):
        if insn.mnemonic == "bl":
            try:
                dst = int(insn.op_str.lstrip("#"), 0)
            except ValueError:
                continue
            if dst in (fva, 0x90ccec, 0x811318):
                callers.append((insn.address, dst))
    print(f"\n=== 调用 setXXTEAKeyAndSign/un_xxtea_decrypt/xxtea_decrypt 的位置: {len(callers)} 处 ===")
    for c, dst in callers[:8]:
        tag = {fva: "set_key", 0x90ccec: "un_decrypt", 0x811318: "std_decrypt"}[dst]
        disasm(c - 0x90, 0xb0, f"{tag} 调用者上下文 @ 0x{c:x}")
