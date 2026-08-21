# VULN-008 热更仅 MD5 校验 —— 最小验证 PoC

## 漏洞概述
热更新 manifest 与文件仅携带 MD5（无签名/无证书钉扎的带外校验）：
`lua-src-apk/app/hotupdate/universe/hotfix/Manifest.lua:125`（getProjectMd5/diffList）、
`HotFixProcessor.lua:339-372`（manifest md5）、`:432-501`（文件 zipMd5）。
热更目录优先加载（`main.lua:1-8` addSearchPath），因此被篡改的热更 Lua 会优先于包内代码执行。
证据：`traffic-analysis/step4/vuln_analysis.json`（VULN-008）。

## 前提条件
- 仅本地 Python3 标准库环境。
- 不投递：真实利用需控制热更下发通道，blocked_on=no_authorization_online。

## 所需材料
- `validate_request.py`（本目录）。
- 一个基底 Lua 文件（建议从 `hotfix-decrypted/` 下任选）。

## 验证步骤
1. `python3 validate_request.py --help` 查看参数。
2. `python3 validate_request.py --src ../../../../hotfix-decrypted/src/app/<某文件>.lua --out ./poc_pkg`
3. 观察 `poc_pkg/` 下生成的篡改文件与 `project.manifest`，以及模拟 md5 比对的 PASS 输出。

## 预期证据
- 篡改文件 md5 ≠ 原始 md5，但与自建 manifest 自洽，模拟客户端比对逻辑输出 PASS。
- 证明「md5 与文件同通道下发即自洽」，md5-only 不构成完整性保护。

## 影响边界（最小影响说明）
- 只在 `--out` 本地目录写文件，不联网、不触碰设备。
- 生成物仅为演示样本，不进入任何真实热更通道。

## 中止条件
- 任何将样本投递到真实下发通道/设备的动议，立即中止。
- 若需验证客户端真实加载行为，须另行申请授权窗口，在授权测试设备上进行。

## 脚本补齐 TODO
- 本演示未模拟 zip 打包与 zipMd5（HotFixProcessor.lua:432-501）：如需完整 manifest 语义，人工补充打包步骤。
- 未验证 `un.Unzipper` 解压落地路径（与 VULN-021 联动，见该目录 BLOCKED 说明）。
