# VULN-002 最小验证 PoC：AES-CFB128 固定 IV 逐帧重置 → keystream 复用

## 漏洞概述
SRS 帧体加密每帧将 IV 重置为同一默认常量（Phase 3 CRYPTO-005），导致同连接内
keystream 恒定复用：同明文必然同密文；已知任一帧明文即可恢复对应偏移的
keystream 并伪造同长度任意密文。

## 前提条件
- 本机有 `openssl`
- step2 产物 `traffic-analysis/step2/messages_decrypted_<scene>.json`（只读）

## 所需材料
- step2 帧清单（`enc_body_hex`）
- 已知明文锚点：握手帧 xy=1 明文恒为 `01000000`（VULN-001 PoC 已证实）

## 验证步骤
```bash
cd traffic-analysis/step5/pocs/VULN-002
python3 validate_request.py --scene s06_phone_gold_ingame --out evidence_s06.json
```
- Part A：同连接内按 (proc, xy, len) 分组，统计密文完全一致的帧数（被动观测复核）。
- Part B：取真实握手帧密文，ks = ct XOR `01000000`；对自选明文 `02000000`
  构造 ct2 = pt2 XOR ks，再用默认 key/IV 本地解密 ct2，确认还原出 pt2。

## 预期证据
- s06 实测：`IMProtocol.ReqKeepAlive` 恒定密文 ×286、`ReqJoin` ×38
  （与 step4 VULN-002 证据 `88732abe` 完全一致）
- Part B 输出 `OK`，伪造密文本地解密还原出自选明文

## 影响边界（最小影响说明）
纯离线只读：只读 step2 JSON + 本地 openssl 演算。**不构造任何注入流量、不连接服务器**。
真实链路上的篡改/注入验证需要 on-path 位置，属在线行为：
`blocked_on = no_authorization_online`，本 PoC 不覆盖也不尝试。

## 中止条件
- 证据文件缺失或 openssl 不可用即非零退出；无其他风险。

## 脚本补齐 TODO
- 无，可直接执行。若未来获得在线授权，注入验证需另行审批后单独设计。
