# Phase 1 脚本执行说明（step1）

执行时间：2026-08-20；执行方式：`local_source`，target_dir=`decompiled/`（apktool 全量解包 + jadx 源码，合计约 460MB）。

| 脚本 | 结果 | 说明 |
|---|---|---|
| `endpoint_extractor.py` | 成功 | 一次通过。产出 `raw_endpoints.json`（15998 条命中、1681 个 base URL 候选、4070 个文件）。 |
| `secret_scanner.py` | 首次失败，重跑成功 | 首次失败原因：后台命令里 `cd scripts && python3 A & python3 B &` 的 shell 优先级导致 B/C/D 在原工作目录启动，报 `can't open file secret_scanner.py`。用绝对路径重跑后成功，产出 `raw_secrets.json`（3477 条 real、13 条 critical）。 |
| `native_bridge_indexer.py` | 首次失败（同上），重跑成功 | 产出 `raw_native_bridges.json`（10 个 loadLibrary、7 个 JSBridge 接口、native 方法清单）。 |
| `env_guard_indexer.py` | 首次失败（同上），重跑成功 | 产出 `raw_env_guards.json`（48572 条命中，8 类），并自动生成初版 `env_guard_report.json`、`frida_bypass_plan.json`、`frida/android_phase1_bypass.js`。初版 env_guard_report 已被人工逐项裁决版覆盖（raw 数据仍在 raw_env_guards.json）。 |
| `ai_summarizer.py` | 成功 | 4 个 raw 齐备后运行，产出 `ai_summary.json`（top-N 摘要 + 4 条跨源关联信号）。 |

注意：

- 4 个脚本均未分子目录运行——整树扫描在可接受时间内完成（并行后台执行）。
- 脚本只扫 `decompiled/`，未覆盖 `lua-src-apk/`（Lua 明文源码）；Lua 侧入口与域名证据由人工补充进 `entrypoints.json`。
- `lua-src-apk` 实测为 UTF-8（部分 CRLF），并非任务描述所说的 GBK；直接读取即可，`iconv -f GBK` 反而会产生乱码。
- 脚本初判 "7 项 blocking Phase 2" 经复核为三方 SDK 库代码噪音（okhttp CertificatePinner 类存在≠配置 pinning；快手 weapon 的 root 检测≠业务主链检测），裁决结果见 `env_guard_report.json` 逐项 `status`/`adjudication` 字段。
