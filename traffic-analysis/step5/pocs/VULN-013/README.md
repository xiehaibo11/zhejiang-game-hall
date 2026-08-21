# VULN-013 GetuiActivity 跳板（trampoline）—— 最小验证 PoC

## 漏洞概述
`com.bianfeng.privategetui.GetuiActivity` exported=true（`AndroidManifest.xml:572`），
读取 extra `pkgName`（PushClientConstants.TAG_PKG_NAME）后直接 setClassName + startActivity
（`decompiled/jadx/sources/com/bianfeng/privategetui/GetuiActivity.java:17-37`），
任意第三方应用/adb 可借此以应用自身身份启动任意内部（含非导出）组件；
另有 key/params extra 写入 SharedPreferences。
证据：`traffic-analysis/step4/vuln_analysis.json`（VULN-013）。

## 前提条件
- 授权的本地测试设备，已安装 com.xm.zjgamecenter v1.5.4，USB 调试开启。
- 本机安装 adb（platform-tools）。
- 默认 dry-run；设置环境变量 `POC_CONFIRM=YES` 才真正执行。

## 所需材料
- `validate_request.py`（本目录）。
- 目标组件全类名（从 jadx 产物任选一个非导出 Activity 作为验证目标）。

## 验证步骤
1. `python3 validate_request.py --help` 查看参数。
2. dry-run：`python3 validate_request.py --serial <设备序列号> --target-component <全类名>`
3. 执行：`POC_CONFIRM=YES python3 validate_request.py --serial <设备序列号> --target-component <全类名> [--h5url https://example.invalid/]`
4. 观察设备是否弹出目标组件、`adb logcat` 中 GetuiActivity 的转发日志。

## 预期证据
- 非导出内部组件被成功启动的屏幕录像/截图 + logcat 记录。
- 若携带 h5url：目标组件是否直接加载该 URL（二次校验缺失的佐证）。

## 影响边界（最小影响说明）
- 仅向授权测试设备上的目标 App 发送本地 intent，不联网、不影响其他应用与用户。
- 目标组件选择以「可观察启动事实」为限，不触发任何资金/账号操作。

## 中止条件
- 设备不在授权清单内，或需跳转到涉及支付/账号敏感操作的组件时，立即中止。
- 目标组件行为超出观察范围（如自动发起网络交易）时中止。

## 脚本补齐 TODO
- 目标组件对 `h5url` 是否二次校验 **未见 = 待验证点**：需人工在 jadx 中确认候选目标组件的 onCreate 处理逻辑。
- key/params extra 写 SharedPreferences 的下游消费点未审计（人工跟进）。
- 适合作为演示目标的非导出组件清单需人工从 jadx 产物筛选登记。
