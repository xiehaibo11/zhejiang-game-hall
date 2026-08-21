#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
build_protocol_index.py — Phase 2 协议索引构建器

解析 luau8 镜像中的 Cocos2d-x Lua 协议定义，产出 protocol_index_full.json：
  - binary_protocols : XY 二进制协议结构体（bostream/bistream 字段序列）
  - protobuf_messages: return [[ ... ]] 内嵌 proto 文本的 message 定义
  - game_cmdids      : 游戏内层 cmdid（BasicMahjong/TaiZhou 等 GameProtocol，
                       以及 11200/11201 包装内的内层 cmd 枚举）
  - file_processid   : 每个协议文件的 processid
  - unresolved       : 求值失败的 XY_ID 表达式

只读取 luau8 镜像，不修改任何文件。可重复运行。
"""

import json
import os
import re
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
STEP2_DIR = os.path.dirname(SCRIPT_DIR)
LUAU8 = os.path.join(STEP2_DIR, "tools", "luau8")
OUT_PATH = os.path.join(STEP2_DIR, "protocol_index_full.json")

# ---------------------------------------------------------------------------
# 文件清单（相对 luau8 根）
# ---------------------------------------------------------------------------

def _list(rel_dir, names=None):
    d = os.path.join(LUAU8, rel_dir)
    out = []
    for fn in sorted(os.listdir(d)):
        if fn.endswith(".lua") and (names is None or fn in names):
            out.append(os.path.join(rel_dir, fn))
    return out

APK_PROTOCOLS = _list("lua-src-apk/app/Protocols")
HOTFIX_PROTOCOLS = _list("hotfix-decrypted/src/app/Protocols")
GOLD_PROTOCOLS = _list("hotfix-decrypted/src/newgold/GoldCommon/Protocols")
GAME_COMMON_PROTOCOLS = _list("hotfix-decrypted/src/game/Common/Protocols")

BINARY_FILES = APK_PROTOCOLS + HOTFIX_PROTOCOLS + GOLD_PROTOCOLS + GAME_COMMON_PROTOCOLS

# 游戏内层 cmdid：通用麻将基类 + 台州（Basic/TaiZhouMahjong）
GAME_CMDID_FILES = [
    "hotfix-decrypted/src/game/Mahjong/BasicMahjong/Protocols/GameProtocol.lua",
    "hotfix-decrypted/src/game/Mahjong/TaiZhou/BasicTaiZhouMahjong/Protocols/GameProtocol.lua",
    "hotfix-decrypted/src/game/Mahjong/TaiZhou/TaiZhouMahjong/Protocols/GameProtocol.lua",
]

# proto 文本文件（return [[ ... ]]）与注册表文件
PROTO_FILES = [
    "hotfix-decrypted/src/app/Protobuf/ProtoFile/hecaba_client.lua",
    "hotfix-decrypted/src/app/Protobuf/ProtoFile/lachesis_client.lua",
    "hotfix-decrypted/src/app/Protobuf/ProtoFile/nyx_client.lua",
    "hotfix-decrypted/src/app/Protobuf/ProtoFile/pyrrla.lua",
    "hotfix-decrypted/src/app/Protobuf/ProtoFile/rhea_client.lua",
    "hotfix-decrypted/src/newgold/GoldCommon/ProtoBuf/game_cli.lua",
    "hotfix-decrypted/src/newgold/GoldCommon/ProtoBuf/nyx_client.lua",
    "hotfix-decrypted/src/newgold/GoldCommon/ProtoBuf/ocean.lua",
    "hotfix-decrypted/src/newgold/GoldCommon/ProtoBuf/playerplace_cli.lua",
    "hotfix-decrypted/src/newgold/GoldCommon/ProtoBuf/pyrrla.lua",
    "hotfix-decrypted/src/newgold/GoldCommon/ProtoBuf/roommatch_cli.lua",
    "hotfix-decrypted/src/newgold/GoldCommon/ProtoBuf/srs_client.lua",
    "hotfix-decrypted/src/newgold/GoldCommon/ProtoBuf/TTIAHProtols.lua",
    "hotfix-decrypted/src/newgold/GoldCommon/ProtoBuf/TTISCProtols.lua",
]

PROTO_REGISTRY_FILES = [
    "hotfix-decrypted/src/app/Protobuf/ProtoFile/PyrrlaProtobuf.lua",
    "hotfix-decrypted/src/app/Protobuf/ProtoFile/NyxProtobuf.lua",
    "hotfix-decrypted/src/app/Protobuf/ProtoFile/RheaProtobuf.lua",
    "hotfix-decrypted/src/app/Protobuf/TeaHouseProtobuf.lua",
    "hotfix-decrypted/src/app/Protobuf/CrmNoticeProtobuf.lua",
    "hotfix-decrypted/src/newgold/GoldCommon/ProtoBuf/game_cli_define.lua",
    "hotfix-decrypted/src/newgold/GoldCommon/ProtoBuf/roommatch_define.lua",
]

# ---------------------------------------------------------------------------
# 工具
# ---------------------------------------------------------------------------

def read_lines(rel):
    path = os.path.join(LUAU8, rel)
    with open(path, "r", encoding="utf-8", errors="replace") as f:
        return f.read().splitlines()


def strip_line_comment(line):
    """去掉行尾 -- 注释（不处理字符串内含 -- 的罕见情形）。"""
    idx = line.find("--")
    if idx >= 0:
        return line[:idx]
    return line


def trailing_comment(line):
    idx = line.find("--")
    if idx >= 0:
        return line[idx + 2:].strip()
    return ""


# ---------------------------------------------------------------------------
# Lua 常量表达式求值（数字、0x 十六进制、已知名常量、+ - * 运算）
# ---------------------------------------------------------------------------

TOKEN_RE = re.compile(r"0[xX][0-9a-fA-F]+|\d+|[A-Za-z_][\w]*|[+\-*()]")

def eval_lua_expr(expr, consts, unresolved, where, depth=0):
    expr = strip_line_comment(expr).strip().rstrip(",;").strip()
    if depth > 10:
        unresolved.append({"where": where, "expression": expr, "reason": "recursion limit"})
        return None
    tokens = TOKEN_RE.findall(expr)
    if not tokens or "".join(tokens).replace(" ", "") != expr.replace(" ", ""):
        unresolved.append({"where": where, "expression": expr,
                           "reason": "unsupported tokens"})
        return None
    py_parts = []
    for t in tokens:
        if re.fullmatch(r"0[xX][0-9a-fA-F]+", t):
            py_parts.append(str(int(t, 16)))
        elif t.isdigit():
            py_parts.append(t)
        elif re.fullmatch(r"[A-Za-z_][\w]*", t):
            if t in consts:
                py_parts.append(str(consts[t]))
            else:
                unresolved.append({"where": where, "expression": expr,
                                   "reason": "unknown constant: %s" % t})
                return None
        else:
            py_parts.append(t)
    try:
        return int(eval(" ".join(py_parts), {"__builtins__": {}}, {}))
    except Exception as e:  # noqa: BLE001
        unresolved.append({"where": where, "expression": expr, "reason": str(e)})
        return None


def collect_lua_consts(lines):
    """收集文件顶部 local NAME = <expr> 常量（按出现顺序，允许引用先定义者）。"""
    consts = {}
    dummy = []
    local_re = re.compile(r"^\s*local\s+([A-Za-z_][\w]*)\s*=\s*(.+?)\s*$")
    for ln, line in enumerate(lines, 1):
        if line.lstrip().startswith("--"):
            continue
        m = local_re.match(line)
        if not m:
            continue
        name, expr = m.group(1), m.group(2)
        val = eval_lua_expr(expr, consts, dummy, "const %s line %d" % (name, ln))
        if val is not None:
            consts[name] = val
    return consts


# ---------------------------------------------------------------------------
# Lua 二进制协议结构体解析
# ---------------------------------------------------------------------------

STRUCT_RE = re.compile(r"^([A-Za-z_][\w]*)\.([A-Za-z_][\w]*)\s*=\s*(\{?)\s*(?:--.*)?$")
XY_RE = re.compile(r"^\s*XY_ID\s*=\s*(.+?)\s*,?\s*(?:--.*)?$")
WRITE_RE = re.compile(r"(\w+)\s*:\s*(write\w*)\s*\((.*?)\)")
READ_RE = re.compile(r"(?:self\.(\w+)\s*=\s*)?(?:local\s+(\w+)\s*=\s*)?(\w+)\s*:\s*(read\w*)\s*\((.*?)\)")


def find_structs(lines):
    """返回 [(table, name, start_ln, end_ln)]，end 为匹配大括号所在行。"""
    structs = []
    n = len(lines)
    i = 0
    while i < n:
        raw = lines[i]
        code = strip_line_comment(raw)
        m = STRUCT_RE.match(code)
        if m:
            table, name, brace = m.group(1), m.group(2), m.group(3)
            start = i
            if brace != "{":
                # 允许 `X.y =` 后下一行才是 `{`
                j = i + 1
                while j < n and not lines[j].strip():
                    j += 1
                if j < n and strip_line_comment(lines[j]).strip().startswith("{"):
                    i = j
                else:
                    i += 1
                    continue
            depth = 0
            end = i
            for k in range(i, n):
                c = strip_line_comment(lines[k])
                depth += c.count("{") - c.count("}")
                if depth <= 0 and k > i or (depth == 0 and c.count("{") and k == i and "}" in c):
                    end = k
                    break
                if depth <= 0:
                    end = k
                    break
            structs.append((table, name, start + 1, end + 1))
            i = end + 1
        else:
            i += 1
    return structs


def extract_ops(block_lines):
    """从结构体块提取 write/read 调用序列。"""
    writes, reads = [], []
    for line in block_lines:
        code = strip_line_comment(line)
        for m in WRITE_RE.finditer(code):
            writes.append({"op": m.group(2), "arg": m.group(3).strip()})
        for m in READ_RE.finditer(code):
            arg = m.group(1) or m.group(2) or m.group(5).strip()
            reads.append({"op": m.group(4), "arg": arg})
    return writes, reads


def struct_comment(lines, start_ln, xy_line_ln):
    """结构体上方连续注释 + XY_ID 行尾注释。"""
    parts = []
    i = start_ln - 2  # 0-based: struct 上一行
    above = []
    while i >= 0:
        s = lines[i].strip()
        if s.startswith("--"):
            above.append(s.lstrip("- ").strip())
            i -= 1
        elif s == "":
            break
        else:
            break
    if above:
        parts.append(" ".join(reversed(above)))
    if xy_line_ln is not None:
        c = trailing_comment(lines[xy_line_ln - 1])
        if c:
            parts.append(c)
    return " ; ".join(p for p in parts if p)


def infer_direction(name, comment):
    text = (comment or "")
    has_c2s = re.search(r"c\s*->\s*s|client\s*->\s*s|c2s", text, re.I)
    has_s2c = re.search(r"s\s*->\s*c|gs\s*->\s*c|s2c", text, re.I)
    if has_c2s and has_s2c:
        return "both"
    if has_c2s:
        return "c2s"
    if has_s2c:
        return "s2c"
    base = name.split(".")[-1]
    if re.match(r"^(Req|msgReq|.*Request$)", base):
        return "c2s"
    if re.match(r"^(Resp|msgResp|.*Reply$|.*Notify.*|.*Broadcast.*)", base):
        return "s2c"
    return "unknown"


def parse_binary_file(rel, kind):
    """kind: 'binary' -> xy/proc 字段；'gamecmd' -> cmdid 字段。"""
    lines = read_lines(rel)
    consts = collect_lua_consts(lines)
    unresolved = []

    # 文件级 processid
    proc = None
    for line in lines:
        code = strip_line_comment(line)
        m = re.match(r"^\s*\w+\.processid\s*=\s*(\d+)", code)
        if m:
            proc = int(m.group(1))
        m = re.match(r"^\s*v\.processid\s*=\s*(\d+)", code)
        if m and proc is None:
            proc = int(m.group(1))

    entries = []
    for table, name, start, end in find_structs(lines):
        block = lines[start - 1:end]
        xy_val = None
        xy_line = None
        xy_expr = None
        for k, bl in enumerate(block):
            m = XY_RE.match(bl)
            if m:
                xy_expr = m.group(1).strip()
                xy_line = start + k
                xy_val = eval_lua_expr(
                    xy_expr, consts, unresolved,
                    "%s:%s.%s XY_ID" % (rel, table, name))
                break
        writes, reads = extract_ops(block)
        fields = writes if writes else reads
        comment = struct_comment(lines, start, xy_line)
        full_name = "%s.%s" % (table, name)
        entry = {
            "name": full_name,
            "proc": proc,
            "file": rel,
            "line": start,
            "direction": infer_direction(full_name, comment),
            "fields": fields,
            "comment": comment,
        }
        if kind == "gamecmd":
            entry["cmdid"] = xy_val
            if xy_val is None and xy_expr:
                entry["cmdid_expression"] = xy_expr
        else:
            entry["xy"] = xy_val
            if xy_val is None and xy_expr:
                entry["xy_expression"] = xy_expr
        entries.append(entry)
    return entries, proc, unresolved


# ---------------------------------------------------------------------------
# proto 文本解析
# ---------------------------------------------------------------------------

def extract_proto_text(lines):
    text = "\n".join(lines)
    m = re.search(r"\[\[(.*)\]\]", text, re.S)
    return m.group(1) if m else None


FIELD_RE = re.compile(
    r"^\s*(repeated\s+)?([A-Za-z_][\w.]*)\s+([A-Za-z_][\w]*)\s*=\s*(\d+)\s*;")
ENUM_VAL_RE = re.compile(r"^\s*([A-Za-z_][\w]*)\s*=\s*(-?\d+)\s*;")


def parse_proto(rel):
    """解析 return [[ ... ]] 内的 proto 文本。

    返回 (package, messages, enums, header_proc, msg_xy_comments)
    messages: [{name, fields:[{num,name,type}], line}]
    enums:    [{name, parent, values:{NAME: num}, line}]
    msg_xy_comments: {message_name: xy}  来自 //xyid=N 注释
    """
    lines = read_lines(rel)
    proto = extract_proto_text(lines)
    if proto is None:
        return None, [], [], None, {}
    plines = proto.splitlines()
    # 预处理：把 `message Foo` / `enum Bar` 与下一行单独的 `{` 合并
    merged = []
    i = 0
    while i < len(plines):
        cur = plines[i]
        if re.match(r"^\s*(message|enum)\s+[A-Za-z_][\w]*\s*(//.*)?$", cur):
            j = i + 1
            while j < len(plines) and not plines[j].strip():
                j += 1
            if j < len(plines) and plines[j].strip() == "{":
                merged.append(cur.rstrip() + " {")
                for k in range(i + 1, j + 1):
                    merged.append("")
                i = j + 1
                continue
        merged.append(cur)
        i += 1
    plines = merged

    package = None
    header_proc = None
    for ln, l in enumerate(plines, 1):
        m = re.search(r"package\s+([\w.]+)\s*;", l)
        if m and package is None:
            package = m.group(1)
        m = re.search(r"//\s*processid\s*=\s*(\d+)", l)
        if m and header_proc is None:
            header_proc = int(m.group(1))

    messages = []
    enums = []
    msg_xy = {}
    # 栈元素: (kind, name, body_depth, dict-ref)
    stack = []
    depth = 0
    pending_xy_comment = None  # //xyid=N 作用于下一个 message
    for ln, raw in enumerate(plines, 1):
        line = raw
        m = re.search(r"//\s*xyid\s*=\s*(\d+)", line)
        if m:
            pending_xy_comment = int(m.group(1))
        # 去 // 注释（proto 文本中无字符串字面量含 // 的顾虑）
        code = re.sub(r"//.*", "", line)

        mm = re.match(r"\s*message\s+([A-Za-z_][\w]*)\s*\{?", code)
        em = re.match(r"\s*enum\s+([A-Za-z_][\w]*)\s*\{?", code)
        fm = FIELD_RE.match(code)
        ev = ENUM_VAL_RE.match(code)

        opens = code.count("{")
        closes = code.count("}")

        if mm:
            name = mm.group(1)
            parent = stack[-1][1] if stack and stack[-1][0] == "message" else None
            full = "%s.%s" % (parent, name) if parent else name
            entry = {"name": full, "fields": [], "line": ln}
            messages.append(entry)
            if pending_xy_comment is not None:
                msg_xy[full] = pending_xy_comment
                msg_xy[name] = pending_xy_comment
                pending_xy_comment = None
            if opens:
                stack.append(("message", full, depth + opens, entry))
        elif em:
            name = em.group(1)
            parent = stack[-1][1] if stack else None
            full = "%s.%s" % (parent, name) if parent else name
            entry = {"name": full, "parent": parent, "values": {}, "line": ln}
            enums.append(entry)
            if opens:
                stack.append(("enum", full, depth + opens, entry))
        elif fm and stack and stack[-1][0] == "message" \
                and depth == stack[-1][2]:
            entry = stack[-1][3]
            entry["fields"].append({
                "num": int(fm.group(4)),
                "name": fm.group(3),
                "type": ((fm.group(1) or "") + fm.group(2)).strip(),
            })
        elif ev and stack and stack[-1][0] == "enum" and depth == stack[-1][2]:
            stack[-1][3]["values"][ev.group(1)] = int(ev.group(2))

        depth += opens - closes
        while stack and depth < stack[-1][2]:
            stack.pop()

    return package, messages, enums, header_proc, msg_xy


# ---------------------------------------------------------------------------
# 注册表（*Protobuf.lua / *_define.lua）解析
# ---------------------------------------------------------------------------

def parse_registries():
    """返回 (by_package, loose, by_file)。

    by_package: {package: {"proc", "entries", "registry"}}
    loose:      无 package 的散点注册 [{message, xy, proc, registry}]
    by_file:    所有注册文件的 processid [{registry, proc}]
    """
    by_package = {}
    loose = []  # 无 package 的注册（按名字匹配）
    by_file = []
    for rel in PROTO_REGISTRY_FILES:
        if not os.path.exists(os.path.join(LUAU8, rel)):
            continue
        lines = read_lines(rel)
        proc = None
        package = None
        for line in lines:
            code = strip_line_comment(line)
            m = re.match(r"\s*\w+\.processid\s*=\s*(\d+)", code)
            if m:
                proc = int(m.group(1))
            m = re.match(r"\s*\w+\.(?:protobufPackage|packageName)\s*=\s*\"([\w.]+)\"", code)
            if m:
                package = m.group(1)
        by_file.append({"registry": rel, "proc": proc})
        entries = {}
        for line in lines:
            code = strip_line_comment(line)
            m = re.match(r"\s*\w+\.([A-Za-z_][\w]*)\s*=\s*\{\s*XY_ID\s*=\s*(\d+)\s*\}", code)
            if m:
                entries[m.group(1)] = int(m.group(2))
        # game_cli_define.lua 的 xyid50 表（proc 取 processid50）
        proc50 = None
        for line in lines:
            m = re.search(r"\.processid50\s*=\s*(\d+)", strip_line_comment(line))
            if m:
                proc50 = int(m.group(1))
        if proc50 is not None:
            m = re.search(r"xyid50\s*=\s*\{([^}]*)\}", "\n".join(
                strip_line_comment(l) for l in lines), re.S)
            if m:
                for kv in re.finditer(r"([A-Za-z_][\w]*)\s*=\s*(\d+)", m.group(1)):
                    loose.append({"message": kv.group(1),
                                  "xy": int(kv.group(2)), "proc": proc50,
                                  "registry": rel})
        rec = {"proc": proc, "entries": entries, "registry": rel}
        if package:
            by_package[package] = rec
        elif entries:
            for k, v in entries.items():
                loose.append({"message": k, "xy": v, "proc": proc, "registry": rel})
    return by_package, loose, by_file


def norm_name(s):
    return re.sub(r"[_\s]", "", s).lower()


def enum_message_candidates(enum_name, val_name):
    """由枚举值名推导候选 message 名。"""
    cands = []
    if val_name.startswith("k") and len(val_name) > 1 and val_name[1].isupper():
        cands.append(val_name[1:])
    # 去掉枚举名前缀，如 OCEAN_ID_Start_Game -> Start_Game
    for sep in ("_", ""):
        en = enum_name + sep
        if val_name.startswith(en):
            cands.append(val_name[len(en):])
    cands.append(val_name)
    return cands


# ---------------------------------------------------------------------------
# 主流程
# ---------------------------------------------------------------------------

def main():
    result = {
        "binary_protocols": [],
        "protobuf_messages": [],
        "game_cmdids": [],
        "file_processid": {},
        "unresolved": [],
    }

    # ---- 二进制协议 ----
    for rel in BINARY_FILES:
        entries, proc, unresolved = parse_binary_file(rel, "binary")
        result["binary_protocols"].extend(entries)
        result["file_processid"][rel] = proc
        result["unresolved"].extend(unresolved)

    # ---- 游戏内层 cmdid（Lua 结构体） ----
    for rel in GAME_CMDID_FILES:
        if not os.path.exists(os.path.join(LUAU8, rel)):
            result["unresolved"].append(
                {"where": rel, "expression": "", "reason": "file missing"})
            continue
        entries, proc, unresolved = parse_binary_file(rel, "gamecmd")
        for e in entries:
            if e.get("cmdid") is not None:
                result["game_cmdids"].append(e)
        result["file_processid"][rel] = proc
        result["unresolved"].extend(unresolved)

    # ---- proto 注册表 ----
    reg_by_pkg, reg_loose, reg_files = parse_registries()
    for pkg, rec in reg_by_pkg.items():
        if rec["proc"] is not None:
            result["file_processid"][rec["registry"]] = rec["proc"]

    # ---- proto 文本 ----
    for rel in PROTO_FILES:
        if not os.path.exists(os.path.join(LUAU8, rel)):
            result["unresolved"].append(
                {"where": rel, "expression": "", "reason": "file missing"})
            continue
        package, messages, enums, header_proc, msg_xy = parse_proto(rel)
        proc = header_proc
        reg_entries = {}
        if package and package in reg_by_pkg:
            rec = reg_by_pkg[package]
            reg_entries = rec["entries"]
            if proc is None:
                proc = rec["proc"]
        if proc is None:
            # 同目录下 <proto_stem>_define.lua 之类的注册表（如 game_cli_define）
            stem = os.path.splitext(os.path.basename(rel))[0]
            for rf in reg_files:
                if rf["proc"] is None:
                    continue
                rdir = os.path.dirname(rf["registry"])
                rstem = os.path.splitext(os.path.basename(rf["registry"]))[0]
                if rdir == os.path.dirname(rel) and rstem.startswith(stem):
                    proc = rf["proc"]
                    break
        result["file_processid"][rel] = proc

        msg_names = {m["name"]: m for m in messages}
        norm_index = {}
        for m in messages:
            norm_index.setdefault(norm_name(m["name"].split(".")[-1]), m["name"])

        # 枚举值 -> message xy 映射
        enum_xy = {}   # message full name -> xy
        enum_vals_all = []
        for en in enums:
            top_level = "." not in en["name"]
            for vname, vnum in en["values"].items():
                enum_vals_all.append((en, vname, vnum))
                if not top_level:
                    continue
                for cand in enum_message_candidates(en["name"].split(".")[-1], vname):
                    hit = norm_index.get(norm_name(cand))
                    if hit:
                        enum_xy[hit] = vnum
                        break

        for m in messages:
            name = m["name"]
            short = name.split(".")[-1]
            xy = None
            if short in reg_entries:
                xy = reg_entries[short]
            elif name in msg_xy:
                xy = msg_xy[name]
            elif name in enum_xy:
                xy = enum_xy[name]
            else:
                for lo in reg_loose:
                    if lo["message"] == short:
                        xy = lo["xy"]
                        break
            result["protobuf_messages"].append({
                "proto_file": rel,
                "package": package,
                "message": name,
                "xy": xy,
                "proc": proc,
                "fields": m["fields"],
                "line": m["line"],
            })

        # 11200/11201 包装内层 cmd 枚举 -> game_cmdids
        for en, vname, vnum in enum_vals_all:
            parent = en["parent"] or ""
            if parent.endswith("ServerToClientMessage") or \
               parent.endswith("ClientToServerMessage"):
                result["game_cmdids"].append({
                    "name": "%s.%s" % (en["name"], vname),
                    "cmdid": vnum,
                    "file": rel,
                    "line": en["line"],
                    "direction": ("s2c" if "ServerToClient" in parent else "c2s"),
                    "fields": [],
                    "comment": "inner cmd of %s (protobuf enum)" % parent,
                })

    # ---- 汇总 ----
    result["summary"] = {
        "binary_protocols": len(result["binary_protocols"]),
        "protobuf_messages": len(result["protobuf_messages"]),
        "game_cmdids": len(result["game_cmdids"]),
        "files": len(result["file_processid"]),
        "unresolved": len(result["unresolved"]),
    }

    with open(OUT_PATH, "w", encoding="utf-8") as f:
        json.dump(result, f, ensure_ascii=False, indent=1)
    print("written: %s" % OUT_PATH)
    print(json.dumps(result["summary"], ensure_ascii=False))


if __name__ == "__main__":
    main()
