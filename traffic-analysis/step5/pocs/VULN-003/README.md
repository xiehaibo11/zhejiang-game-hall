# VULN-003 SRS 帧无 MAC —— 最小验证 PoC

## 漏洞概述
SRS 私有协议帧（12 字节帧头 + AES-256-CFB128 加密帧体）没有任何消息认证码（MAC）或签名校验。
CFB 模式下对密文的 bit 翻转会在解密后产生可控位置的明文损坏，协议层无法察觉篡改。
证据：`traffic-analysis/step4/vuln_analysis.json`（VULN-003）、`traffic-analysis/step3/crypto_native_analysis.json`。

## 前提条件
- 本机安装 `openssl`（`shutil.which` 检查）。
- 已从 `traffic-analysis/step2/` 抓包证据中还原出至少一段已知帧（hex）。
- Phase 3 还原的默认 key/iv 已内置于脚本（so vaddr 0x11f55ec/0x11f560c）。

## 所需材料
- `validate_request.py`（本目录）。
- step2 已证实的帧样例 hex（见 `traffic-analysis/step2/frame_report.json`、`traffic-analysis/step2/flows/`）。

## 验证步骤
1. `python3 validate_request.py --help` 查看参数。
2. `python3 validate_request.py --frame-hex <step2帧hex> --flip-offset 0 --flip-mask 0x01`
3. 观察翻转前后明文差异输出。

## 预期证据
- 翻转前后两组明文 hex/可读形式对比，差异字节偏移列表。
- 结论：协议层对 bit 翻转无感知，即无完整性保护。

## 影响边界（最小影响说明）
- 纯离线演示，不发送任何网络请求，不接触任何真实服务器或设备。
- 在线注入/篡改帧验证 blocked_on=no_authorization_online，本阶段不做。

## 中止条件
- 任何需要向真实服务器/中间人通道投递篡改帧的步骤，立即中止并回到书面报告。
- 若帧样例来源无法确认为授权抓包，中止。

## 脚本补齐 TODO
- `validate_request.py` 未内置真实抓包密文：需人工从 step2/frame_report.json 提取一段已证实帧填入 `--frame-hex`。
- 若 step2 样例帧体为明文（proc!=0 的 s2c 帧），需改选 c2s 加密帧或注明该帧不适用本演示。
