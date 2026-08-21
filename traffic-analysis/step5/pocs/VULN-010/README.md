# VULN-010 任务配置明文帧 dofile —— 最小验证 PoC

## 漏洞概述
服务端任务配置通过明文 SRS 帧（proc!=0 的 s2c 帧体为明文）下发，客户端落地后直接 dofile：
`lua-src-apk/app/Req/Task/ReqTaskConfig.lua:44-58`
（`os.execute` mkdir + saveTaskConfigFile + `dofile(writablePath..appID.."/"..key)`）。
帧体即 Lua 代码 => 中间人可注入任意 Lua 执行；key 若未过滤 `../`，dofile 路径可能逃逸 appID 目录。
证据：`traffic-analysis/step4/vuln_analysis.json`（VULN-010）。

## 前提条件
- 仅本地 Python3 标准库环境。
- 注入该帧需 TCP 中间人位置，blocked_on=no_authorization_online，本阶段只构造样本。

## 所需材料
- `validate_request.py`（本目录）。
- step2 抓包中任务配置帧的真实 proc 值（见 TODO）。

## 验证步骤
1. `python3 validate_request.py --help` 查看参数。
2. `python3 validate_request.py --proc <proc值> --key-name poc_task --out frame.hex`
3. `python3 validate_request.py --proc <proc值> --key-name '../poc'` 观察 dofile 路径逃逸拼接演示。

## 预期证据
- 一段结构合法（12 字节帧头 + 明文 Lua 帧体）的伪造 s2c 帧 hex。
- key 含 `../` 时 normpath 后逃出 `writablePath<appID>/` 的字符串演示输出。

## 影响边界（最小影响说明）
- 纯本地构造与字符串演示，不联网、不触碰设备、不落盘到演示目录之外。
- 样本仅用于报告佐证，不投递。

## 中止条件
- 任何需要中间人位置向真实客户端/服务器注入该帧的动议，立即中止。
- 设备端验证（客户端是否真 dofile 伪造帧）须另行申请授权窗口。

## 脚本补齐 TODO
- 任务配置下发的真实 proc/xy/appid 取值需人工从 `traffic-analysis/step2/frame_report.json`（或 flows/）确认后填入 `--proc`。
- 客户端对 key 是否过滤 `../` 未静态确认（ReqTaskConfig.lua:44-58 未见过滤逻辑，需人工复核全文）。
- os.execute mkdir 命令拼接是否同样受 key 污染（命令注入面）需人工复核。
