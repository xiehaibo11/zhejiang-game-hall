# VULN-016 RePlugin HostService AIDL 默认导出 —— 最小验证 PoC（manual_only）

## 漏洞概述
RePlugin 宿主 `HostService` 的 AIDL 接口默认导出，暴露 `postToSepperllita(String)` 等方法，
任意本地应用可 bind 并调用，向宿主内部组件传递任意字符串。
证据：`traffic-analysis/step4/vuln_analysis.json`（VULN-016）。

## 前提条件
- **manual_only**：本目录不提供可执行脚本；需要自建一个最小调用方 App 完成验证。
- 授权的本地测试设备，已安装 com.xm.zjgamecenter v1.5.4。

## 所需材料
- 自建调用方 App（最小 Android 工程）：
  - 从 jadx 产物拷贝 HostService 对应的 `.aidl` 接口定义（包名需与宿主一致）。
  - AIDL 接口名/方法：`postToSepperllita(String)`（精确接口全限定名见 TODO）。
- adb 与一台授权测试设备。

## 验证步骤
1. 从 `decompiled/jadx/` 找到 HostService 及 AIDL 接口定义，确认接口全限定名与 TRANSACTION 码。
2. 新建最小 Android 工程，声明同名 AIDL，`bindService` 显式 intent 指向宿主 HostService。
3. 调用 `postToSepperllita("POC-MARKER")`，观察 logcat 中宿主侧是否收到/处理。
4. 全程仅在授权测试设备上进行，不联网。

## 预期证据
- bindService 成功且远程调用无权限拒绝的 logcat/录屏。
- 宿主侧对 POC-MARKER 的处理日志（证明字符串进入宿主内部链路）。

## 影响边界（最小影响说明）
- 仅本地 IPC，字符串为无害标记，不触发资金/账号操作。
- 自建调用方 App 只安装到授权测试设备，验证后即卸载。

## 中止条件
- 设备不在授权清单内即中止。
- 若 `postToSepperllita` 下游消费涉及插件加载/代码执行，停止深入并回归书面报告。

## 脚本补齐 TODO
- HostService AIDL 接口的全限定名与 `postToSepperllita` 精确签名需人工从 jadx 产物抄录。
- **待验证点：postToSepperllita 下游消费**——字符串进入宿主后的处理链未审计（人工跟进 RePlugin 内部转发逻辑）。
- 是否需要构造最小调用方工程模板（Android Studio 工程骨架）由后续阶段决定。
