# VULN-021 un.Unzipper Zip Slip（BLOCKED）—— 最小验证 PoC

## 漏洞概述
热更解压使用 native 的 `un.Unzipper`（调用点 `lua-src-apk/app/hotupdate/universe/hotfix/HotFixProcessor.lua:620`），
对 zip entry 名中 `../` 的过滤情况未知（native 实现，静态 Lua 层无法确认），存在 Zip Slip 路径穿越嫌疑。
证据：`traffic-analysis/step4/vuln_analysis.json`（VULN-021，标注 BLOCKED）。

## 前提条件
- **BLOCKED**：Zip Slip 防护是否存在于 native 层未知，必须先完成下述两条验证路线之一。
- 路线①：so 二进制审计（离线，无设备要求）。
- 路线②：授权 root 测试设备 + frida-server，构造含 `../` entry 的 zip 样本喂给 Unzipper（本地闭环，不走真实热更通道）。

## 所需材料
- `runtime_observe.js`（Frida native 模板，hook 点待审计补齐）。
- 路线②另需：本地构造的含 `../` entry 的 zip 样本（人工用 `zip`/Python zipfile 生成，仅喂给授权设备上的本地调用）。

## 验证步骤
1. 路线①：反汇编 `libcocos2dlua.so`，从字符串 "Unzipper"/luaL_Reg 注册表定位解压函数，
   审计 entry 名拼接目标路径前是否过滤 `../`（审计结论填入 step5 证据）。
2. 路线②：确认 hook 偏移后填入 `runtime_observe.js` 的 `OFF_UNZIP`，
   `frida -U -f com.xm.zjgamecenter -l runtime_observe.js --no-pause`，
   在授权设备本地触发 Unzipper 解压样本，dump 解压目标路径与 entry 名。
3. `adb shell ls` 人工核对目标目录之外是否出现逃逸文件。

## 预期证据
- 路线①：反汇编截图/伪代码，证明过滤存在与否。
- 路线②：Frida 日志（zip 路径/目标目录/entry 名）+ 文件系统核对结果。

## 影响边界（最小影响说明）
- 路线① 纯离线；路线② 仅授权设备本地喂样本，zip 样本的 `../` 目标指向设备临时目录内无害文件名。
- 不经过真实热更下发通道（该通道投递 blocked_on=no_authorization_online）。

## 中止条件
- 样本 `../` 目标不得指向应用/系统关键目录；任何真实热更通道投递动议立即中止。

## 脚本补齐 TODO
- `runtime_observe.js` 的 `OFF_UNZIP` 待二进制审计补齐（符号/偏移未知）。
- Unzipper 解压函数的参数布局（zip 路径、目标目录所在寄存器）待审计确认。
- 含 `../` entry 的 zip 样本生成脚本未提供（人工用 zipfile 生成，entry 名如 `../../../data/local/tmp/poc_zs`）。
