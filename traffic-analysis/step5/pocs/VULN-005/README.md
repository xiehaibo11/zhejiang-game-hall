# VULN-005 最小验证 PoC：验证码/登录 HTTP 签名可离线重签

## 漏洞概述
手机验证码/登录接口签名 = `md5(参数按字典序无分隔拼接 + appKey 末尾直拼)`，
appKey 明文硬编码于 `lua-src-apk/app/Config/AreaConfig.lua`（按区多份），
签名材料全部在客户端，任何人都可离线重签任意参数的请求。

## 前提条件
- 本机 Python3（标准库即可）
- （可选闭环）授权 root 测试设备 + frida-server，用于采集真实签名样本

## 所需材料
- 签名公式：`traffic-analysis/step2/http_endpoints.json` → `verification_code_endpoint.signature_logic`
- 代码证据：`lua-src-apk/login/Req/PhoneLogin/ReqPhoneVerificationCode.lua:19/22/30`
- appKey：`lua-src-apk/app/Config/AreaConfig.lua:182`（`phonelogin_app_key=2685db9c34685c83d16b0101d646989d`，其余区同文件多份明文）

## 验证步骤
```bash
cd traffic-analysis/step5/pocs/VULN-005
# 1) 离线确定性演算（两分支）
python3 validate_request.py --selftest
# 2) 真实样本闭环（可选，需授权设备采集）：
#    frida -U -f com.xm.zjgamecenter -l runtime_observe.js --no-pause
#    设备上触发一次"发送验证码"，从日志取 signatureStr 与其 md5，然后：
python3 validate_request.py --app-id 10003 --areaid 1 --lobbyid 1 \
    --phone 13800000000 --timestamp 1787230125 --type pwd_get --wid 1 \
    --app-key 2685db9c34685c83d16b0101d646989d \
    --expect-signature <采集到的 md5>
```

## 预期证据
- selftest 输出确定性的 signatureStr 与 md5（算法完全客户端侧、材料公开即视为成立）
- 样本闭环：本地重算 md5 与客户端真实输出 `MATCH`

## 影响边界（最小影响说明）
纯离线演算与本地 hook 观察；**不向 palmapi 或任何服务器发送重签请求**。
在线验证（重签后请求是否被服务端接受、timestamp 容差与频控）属服务端行为：
`blocked_on = no_authorization_online`。

## 中止条件
- 无需中止条件（无对外行为）。frida 采集仅限授权测试设备，采到 1 组样本即停。

## 脚本补齐 TODO
- `runtime_observe.js` 中 Md5 的参数寄存器（x0/x1）需在首次授权 hook 时人工甄别确认。
- step2 抓包中 palmapi 走 TLS，报文 signature 不可见，故真实样本只能经 hook 采集，
  不能从 pcap 直接取（这是本用例唯一不能纯离线闭环的环节，已用 hook 模板补齐）。
