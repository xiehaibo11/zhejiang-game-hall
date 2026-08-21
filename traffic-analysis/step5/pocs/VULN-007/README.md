# VULN-007 最小验证 PoC：资源三层加密密钥全部硬编码 → 解密/篡改/重加密闭环

## 漏洞概述
luac 资源 XXTEA 密钥（`03f1fdcbf5215b45fc790aaf3b965837` 前 16 字节）、签名头
`devaguopeifei`、res.rpk 密钥源 XXTEA key（hex `f84c7b745c8c00ede9d6add6a605cf63`）
全部硬编码于 libcocos2dlua.so（Phase 3 CRYPTO-001/003/004），攻击者可解密、篡改、
重加密出与原版格式完全一致的资源包。

## 前提条件
- 本机 Python3（标准库）
- 仓库证据只读：`浙江游戏大厅/assets-apk/assets/src/**.luac`、`浙江游戏大厅/tools/decrypt_luac.py`

## 所需材料
- 真实加密资产（默认 `assets-apk/assets/src/app/GtInit.luac`）
- 解密参考实现 `tools/decrypt_luac.py`（Phase 2/3 已验证）

## 验证步骤
```bash
cd traffic-analysis/step5/pocs/VULN-007
python3 validate_request.py --out-dir /tmp/v007_out
```
流程：参考实现解密真实资产（自动适配 有/无长度前缀 两种变体）→ 明文注入一行
`POC-TAMPER-MARKER` → 用互逆 XXTEA 重加密（同签名头同密钥同变体）→ 再用参考实现
解密篡改版，断言还原出篡改后明文。

## 预期证据
- 原资产解密出 Lua 明文（实测 `GtInit.luac` → `local GT = {}...`，无长度前缀变体）
- 篡改+重加密+再解密闭环 OK：伪造包格式与原版自洽
- 附带实测修正：本 APK assets/src 的 luac 为**无长度前缀**变体（Phase 3 CRYPTO-001
  备注的 4 字节长度前缀对该文件不成立，脚本已自动适配并输出 `variant` 字段）

## 影响边界（最小影响说明）
纯离线本地文件演算，产物只写入 `--out-dir` 指定目录。**不投递、不替换客户端任何
文件、不联网**。伪造包的真实投递依赖热更/插件通道控制（VULN-008/009），
在线部分 `blocked_on = no_authorization_online`。

## 中止条件
- 资产或工具缺失即非零退出；无其他风险。

## 脚本补齐 TODO
- 无，可直接执行。hdq 容器层（Blowfish-ECB）的解密已由 `tools/decrypt_hotfix.py`
  在 Phase 2/3 实证（hotfix-decrypted/ 即其产物），本 PoC 聚焦可投递格式的闭环。
