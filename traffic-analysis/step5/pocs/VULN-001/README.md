# VULN-001 最小验证 PoC：SRS 流量加密密钥体系可离线重建（被动解密）

## 漏洞概述
SRS TCP 流量加密（AES-CFB128）的默认 key/IV 硬编码于 `libcocos2dlua.so`
（Phase 3 CRYPTO-005：key @0x11f55ec，IV @0x11f560c），会话密钥经默认 key 通道
由服务端 `SRS::RespKey` 明文结构下发。被动嗅探者无需任何交互即可离线还原全连接明文。

## 前提条件
- 本机有 `openssl`（AES-CFB 解密）
- step2 产物存在：`traffic-analysis/step2/messages_decrypted_<scene>.json`（pcap 派生，只读）

## 所需材料
- 默认 AES-256 key：`f362120513e389ff2311d7360123100705a210007acc023c3901da2ecb12448b`
- 默认 IV：`15ff010034ab4cd355fea122084f1307`
- step2 帧清单（含 `enc_body_hex` 密文与独立锚点明文 `dec_hex`）

## 验证步骤
```bash
cd traffic-analysis/step5/pocs/VULN-001
python3 validate_request.py --scene s02_login --out evidence_s02.json
python3 validate_request.py --scene s06_phone_gold_ingame   # 真机金币场场景
```
脚本流程：默认 key 解各连接握手帧（xy=1 → 常量明文 `01000000`）→ 解 s2c xy=4
RespKey 提取会话密钥（线上格式 `[keyLen:u8][key]`）→ 会话密钥解其余帧，与 step2
经 keystream 锚点独立恢复的明文逐字节交叉比对。

## 预期证据
- 全部连接握手帧默认 key 可解（`flows_handshake_decrypted_with_default_key == flows_total`）
- 至少 1 条连接离线恢复会话密钥（s02/s06 实测 2~3 条）
- 交叉比对 `frames_cross_validated_match > 0` 且 `diff == 0`（s02 实测 122/0，s06 全中）
- 样本明文可见 PlayerConnect 里的 `userid`（`newpt1084...`）等敏感字段
- 附带结论：不同连接会话密钥互不相同（s06 实测 16B/32B 各异）→ 回答了 Phase 4
  `validation_needed`：会话密钥确为每连接随机，但不影响被动解密成立

## 影响边界（最小影响说明）
纯离线只读验证：仅读取 step2 已抓取的 pcap 派生 JSON，不发送任何网络请求、
不连接任何服务器、不修改任何证据文件。所有解密在本机内存中完成。

## 中止条件
- 若证据文件缺失或 openssl 不可用，脚本以非零退出并提示，无其他中止风险。

## 脚本补齐 TODO
- 无。本 PoC 可直接执行。如需在新抓包上复验，先运行 step2 管线生成对应
  `messages_decrypted_<scene>.json` 后传 `--scene` 即可。
