# VULN-012 AlipayRsa.checkSign 恒真 —— 最小验证 PoC

## 漏洞概述
支付回调验签函数 `com.bianfeng.paylib.alipaysdk.executor.AlipayRsa.checkSign` 方法体恒为
`return 2;`（RESULT_CHECK_SIGN_SUCCEED），任何伪造回调都视为验签通过。
证据：`decompiled/jadx/sources/com/bianfeng/paylib/alipaysdk/executor/AlipayRsa.java`、
`traffic-analysis/step4/vuln_analysis.json`（VULN-012）。

## 前提条件
- 静态断言：本地 Python3 + 仓库内 jadx 反编译产物。
- 运行时旁证（可选）：授权 root 测试设备 + frida-server。

## 所需材料
- `validate_request.py`（静态断言）。
- `runtime_observe.js`（Frida Java 模板，观察 checkSign 入参与返回值）。

## 验证步骤
1. 静态：`python3 validate_request.py --help`，然后直接 `python3 validate_request.py`（默认按脚本位置推导证据根），观察 PASS/FAIL。
2. 运行时（授权设备）：`frida -U -f com.xm.zjgamecenter -l runtime_observe.js --no-pause`，触发支付回调流程，记录 checkSign 入参与恒为 2 的返回值。

## 预期证据
- 静态断言输出 PASS（方法体 `return 2;` 且无验签调用）。
- 运行时日志：伪造/任意回调参数下 checkSign 返回 2。

## 影响边界（最小影响说明）
- 静态断言只读仓库文件；运行时 hook 只观察授权测试设备自身进程，不改返回值、不联网。
- 不构造、不投递任何伪造支付回调到真实服务器。

## 中止条件
- 任何向真实支付/游戏服务器投递伪造回调的动议，立即中止。
- 涉及真实资金通道的验证一律不做。

## 脚本补齐 TODO
- `validate_request.py` 的方法体正则对 jadx 输出格式有假设：若反编译产物换风格导致 FAIL，人工复核后调整正则。
- `runtime_observe.js` 的 checkSign 重载签名需以 jadx 产物为准人工确认。
- checkSign 调用方（支付结果分发链）是否还有其他校验，需人工沿调用链复核。
