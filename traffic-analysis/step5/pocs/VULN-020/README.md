# VULN-020 WebView 危险配置组 —— 最小验证 PoC

## 漏洞概述
多个 WebView Activity 存在危险配置组合：
`YmnH5WebviewActivity.java:60` setSafeBrowsingEnabled(false)、`:81` MIXED_CONTENT_ALWAYS_ALLOW、
`:64` setAllowFileAccess(true)，共 7 个 WebView Activity 涉及；
`BridgeWebView.java:76` setWebContentsDebuggingEnabled(true)。
与 VULN-014（无 origin 校验）、VULN-017（明文 HTTP）组合后危害放大。
证据：`traffic-analysis/step4/vuln_analysis.json`（VULN-020）。

## 前提条件
- 仅本地 Python3 标准库环境 + 仓库内 jadx 反编译产物。

## 所需材料
- `validate_request.py`（本目录）。
- `decompiled/jadx/sources/`（脚本默认自动推导路径）。

## 验证步骤
1. `python3 validate_request.py --help` 查看参数。
2. `python3 validate_request.py`（或 `--jadx-root` 显式指定）。
3. 审阅命中表格（文件 × 危险配置 × 行号）。

## 预期证据
- 危险配置命中表格，与 step4 证据中记录的行号一致。
- 7 个 WebView Activity 的完整受影响清单。

## 影响边界（最小影响说明）
- 纯离线静态扫描，只读仓库文件，不联网、不触碰设备。

## 中止条件
- 任何利用该配置组进行在线内容注入（配合明文 HTTP MITM）的动议，立即中止；
  在线部分 blocked_on=no_authorization_online。

## 脚本补齐 TODO
- 7 个 WebView Activity 的完整名单需人工从 step4 证据抄录并与脚本输出对照核对。
- setWebContentsDebuggingEnabled 是否带 BuildConfig.DEBUG 门控需人工复核 BridgeWebView.java:76 上下文。
- file:// 与 setAllowFileAccess 组合下是否可达 setAllowFileAccessFromFileURLs（更深文件窃取面）需人工复核。
