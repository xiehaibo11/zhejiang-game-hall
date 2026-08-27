#!/usr/bin/env python3
"""定位 jsc 解密管线调用链。
关键假设: 导出函数在 -fPIC so 内调用走 PLT stub, 之前按函数绝对地址扫 BL 会漏。
1. 解析 .plt/.plt.got stub -> 符号名映射 (GOT 槽反查 JUMP_SLOT/GLOB_DAT reloc)
2. 重扫 .text 全部 BL, 解析直接地址 + PLT 目标
3. R_AARCH64_RELATIVE 中值指向 xxtea 函数的指针存放位置
4. JNI / 可疑导出符号清单
"""
import re
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

SO = "/Users/mosc/Downloads/逆向/浙江游戏大厅/plugin-extracted/old-apk/lib/arm64-v8a/libcocos2djs.so"
TARGETS = {
    0x90c9ec: "un_xxtea_encrypt",
    0x90ccec: "un_xxtea_decrypt",
    0x811018: "xxtea_encrypt",
    0x811318: "xxtea_decrypt",
    0x7eb234: "jsb_set_xxtea_key",
    0x7eb278: "jsb_init_file_operation_delegate",
}
TARGET_NAMES = set(TARGETS.values())

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
dynsyms = {}
for secname in (".dynsym", ".symtab"):
    sec = elf.get_section_by_name(secname)
    if sec is None:
        continue
    for sym in sec.iter_symbols():
        if sym["st_value"] and sym.name:
            symnames.setdefault(sym["st_value"], sym.name)
            if secname == ".dynsym":
                dynsyms[sym.name] = sym["st_value"]

md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
md.detail = False

# ---- GOT 槽 -> 符号名 (JUMP_SLOT=1026 / GLOB_DAT=1025) ----
gotmap = {}
relptr = {}   # RELATIVE: r_offset -> addend
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

# ---- 解析 PLT stub: adrp x16,page ; ldr x17,[x16,#off] ; ... ; br x17 ----
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

# 符号名(含 mangled) -> 函数地址; PLT stub -> 目标函数地址
dyn_addr = {}
sec = elf.get_section_by_name(".dynsym")
for sym in sec.iter_symbols():
    if sym["st_value"] and sym.name:
        dyn_addr.setdefault(sym.name, sym["st_value"])
plt2func = {}
for stub, nm in plt_map.items():
    # mangled 名 _Z17jsb_set_xxtea_keyPKc -> 0x7eb234
    if nm in dyn_addr:
        plt2func[stub] = dyn_addr[nm]

print(f"PLT stubs 解析: {len(plt_map)} 个有符号映射")

# ---- 扫 .text 全部 BL ----
taddr, toff, tsize = secs[".text"]
f.seek(toff)
text = f.read(tsize)
callers = {}   # 目标名 -> [(caller_addr, ...)]
for insn in md.disasm(text, taddr):
    if insn.mnemonic != "bl":
        continue
    try:
        dst = int(insn.op_str.lstrip("#"), 0)
    except ValueError:
        continue
    name = None
    if dst in TARGETS:
        name = TARGETS[dst]
    elif plt2func.get(dst) in TARGETS:
        name = f"{TARGETS[plt2func[dst]]}@plt"
    elif dst in symnames and any(t in symnames[dst] for t in ("xxtea", "XXTEA")):
        name = symnames[dst]
    if name:
        callers.setdefault(name, []).append(insn.address)

print("\n=== xxtea 相关函数的调用点 ===")
for name, addrs in sorted(callers.items()):
    print(f"\n{name}: {len(addrs)} 个调用点")
    for a in addrs:
        # 找调用者所在函数
        fname = "?"
        for va in sorted(symnames):
            if va <= a:
                fname = symnames[va]
            else:
                break
        print(f"  bl @ 0x{a:x}  in {fname[:90]}")
if not callers:
    print("  (无直接 BL 调用)")

# ---- R_AARCH64_RELATIVE 指向 xxtea 函数 ----
print("\n=== 函数指针存放位置 (RELATIVE addend 指向 xxtea) ===")
for off_, add in sorted(relptr.items()):
    if add in TARGETS:
        print(f"  ptr @ 0x{off_:x} -> {TARGETS[add]}")
        # ptr 所在段的符号标注
        for secname, (a, o, sz) in secs.items():
            if a and a <= off_ < a + sz and secname not in (".text",):
                print(f"      (位于 {secname})")

# ---- JNI / 可疑导出 ----
print("\n=== JNI / set-key / init 类导出 ===")
sec = elf.get_section_by_name(".dynsym")
for sym in sec.iter_symbols():
    n = sym.name
    if not sym["st_value"] or not n:
        continue
    if n.startswith("Java_") or re.search(r"(?i)(setkey|xxteakey|gamekey|init_native|native_init)", n):
        print(f"  0x{sym['st_value']:x} size={sym['st_size']} {n[:110]}")
