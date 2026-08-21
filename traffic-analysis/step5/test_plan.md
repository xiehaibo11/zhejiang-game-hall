# Phase 5 最小验证测试计划 —— 浙江游戏大厅 com.xm.zjgamecenter v1.5.4

授权边界：**authorized_only**。所有验证离线/本地闭环；不向浙江游戏大厅服务器
（palmapi/transit/SRS 各端口）发送任何构造请求；动态 hook 与 adb 操作仅限授权的
root 测试设备（MuMu 127.0.0.1:5555 或等价授权环境）。涉及服务端的条目统一
`blocked_on = no_authorization_online`。

## 1. 测试目标

对 Phase 4 的 26 条漏洞（Critical 5 / High 9 / Medium 9 / Low 3）给出最小验证方案：
- L4 队列 6 条（VULN-001/002/005/007/012/013）可直接执行，验证"漏洞存在性"；
- L3/L2 条目先补可控性证据（frida hook / 调用链审计），再谈 PoC；
- 所有验证以最小影响为原则，不追求攻击效果最大化。

## 2. 前置条件

| 类别 | 要求 |
|---|---|
| 离线演算 | Python3 标准库 + openssl（本机已具备） |
| 离线证据 | `traffic-analysis/step2/`、`step3/`、`step4/` 产物只读可用 |
| 设备类（可选） | 授权 root 测试设备、adb、frida-server；包名 com.xm.zjgamecenter |
| 禁止事项 | 不向线上服务器发包；不使用真实用户数据；不批量构造/重放 |

## 3. 测试环境

- 本机 macOS：离线 PoC（VAL-001/002/003/005/007/008/009/010/011/012/017/020）。
- 授权测试设备：frida 观察（VAL-004/005 样本/006/012 复核/014/021/025）与
  adb 本地验证（VAL-013/015/018/019）。

## 4. 用例总览（正常/边界/异常）

| 用例 | 类型 | 执行域 | 状态 |
|---|---|---|---|
| VAL-001 SRS 被动解密 | 正常 | 离线 | 已实测 PASS（s02/s06） |
| VAL-002 keystream 复用+伪造 | 正常 | 离线 | 已实测 PASS |
| VAL-005 验证码重签 | 正常（selftest）+ 边界（样本比对） | 离线+授权设备 | 脚本就绪，样本待采集 |
| VAL-007 资源加解密闭环 | 正常 | 离线 | 已实测 PASS |
| VAL-012 checkSign 恒真 | 正常（静态）+ 复核（hook） | 离线+授权设备 | 静态已实测 PASS |
| VAL-013 GetuiActivity 跳板 | 正常 | 授权设备 | dry-run 就绪 |
| VAL-003/008/009/010/011 | 边界（离线演示成立，在线部分 blocked） | 离线 | partial |
| VAL-004/006/014/021/025 | 异常/可控性确认先行 | 授权设备 | frida 模板 |
| VAL-015/016/020 | 调用链/对照先行 | 离线+授权设备 | partial |
| VAL-017 | 正常（被动证据闭环） | 离线 | 已实测可跑 |
| VAL-018/019 | 正常 | 授权设备 | dry-run 就绪 |
| VAL-022/023/024/026 | defer | n/a | 不出 PoC（原因见 poc_scripts_index.json） |

## 5. 证据采集点

- 每个 PoC 的 stdout/`--out` JSON（verdict、匹配统计、样本明文前缀）。
- frida 控制台日志（hook 入参/返回值）。
- adb 场景：命令 dry-run 输出 + 执行后 logcat/剪贴板观测。
- 证据文件命名建议 `evidence_<vuln>_<scene>.json`，与报告一并归档。

## 6. 中止条件与风险提示

- 任何脚本出现对外网络行为迹象 → 立即停止并复查参数（设计上不应发生）。
- VAL-013/015/018/019 必须确认 `adb devices` 指向授权测试设备后再加 `POC_CONFIRM=YES`。
- VAL-021 发现路径逃逸即停，不扩大写入；样本 zip 仅含无害标记文件。
- frida 观察类脚本只读，不得修改返回值、不得调用支付/签名类 handler 的真实下游。
- 服务端行为类问题（重放接受度、timestamp 容差、重新计价、容错行为）一律待在线授权。

## 7. 运行前检查项

1. `python3 <script> --help` 正常（全部脚本已自检通过）。
2. 离线脚本确认 cwd 无所谓（脚本内用绝对路径定位证据），证据文件存在。
3. adb 脚本确认 `--serial` 与授权设备匹配。
4. frida 脚本确认 so 已加载（`Module.findBaseAddress` 非空），偏移基于 v1.5.4 arm64。
