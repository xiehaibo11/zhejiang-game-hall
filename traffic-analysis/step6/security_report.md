# 浙江游戏大厅（com.xm.zjgamecenter v1.5.4）移动安全渗透测试报告

- 报告类型：full（含附录）
- 汇总阶段：Phase 6（Reporter），汇总 Phase 1-5 全部产物
- 生成方式：纯本地离线汇总，无任何网络请求；所有结论均可回溯至 `traffic-analysis/step1`~`step5` 产物
- 项目语境：本报告服务于"照此协议自研服务端与客户端"的目标。因此漏洞"修复建议"一律写成**自研时不应照抄的设计红线**——即自研实现必须规避的原始设计缺陷，而非向浙江游戏大厅厂商提交加固建议
- 授权边界：全部验证离线/本地闭环；未向浙江游戏大厅任何服务器发送构造请求（在线行为统一 `no_authorization_online`）；动态验证仅限授权 root 测试设备

---

## 1. 目标概述

### 1.1 测试范围

| 项 | 值 |
|---|---|
| APP 名称 | 浙江游戏大厅 |
| 包名 | com.xm.zjgamecenter |
| 版本 | versionName 1.5.4 / versionCode 154 |
| minSdk / targetSdk / compileSdk | 21 / 28 / 23 |
| 样本 | `apk/base.apk`；反编译目录 `decompiled/`（apktool 全量解包 + jadx 源码，约 460MB） |
| 引擎 | Cocos2d-x 3.13 Lua（`libcocos2dlua.so` 23.6MB）；游戏逻辑全部在 Lua（897 个加密 .luac） |
| 关键组件 | 358 Activity / 37 Service / 11 Receiver / 37 Provider，17 个导出组件，19 个 BROWSABLE scheme |
| 主要三方 SDK | 微信/支付宝支付、个推+五厂商推送、穿山甲/快手/Sigmob/TopOn/MBridge 广告、TalkingData/热云/数数、高德定位、移动一键登录(cmic)、Bugly、阿里聚安全(sgcore)、360 Zeus 插件、自研 ymnsdk/replugin 插件化+差分 |
| Native 库 | 10 个 so × 双 ABI（arm64-v8a/armeabi-v7a）；核心为 libcocos2dlua.so（引擎+全部自研加密+SRS 网络栈） |
| 环境防护裁决 | 无 DEX 加固壳；无业务侧 SSL pinning/root/Frida/代理检测（命中均为三方 SDK 噪音）；自研模拟器检测存在但未确认阻断（`step1/env_guard_report.json`） |

### 1.2 测试环境

| 项 | 值 |
|---|---|
| 抓包设备 | MuMu 模拟器 127.0.0.1:5555（root，sdk=32，arm64），设备端 `/system/bin/tcpdump` 自采 pcap；另有真机场景 s06 |
| 抓包方式 | 设备端 root tcpdump（无 Burp/Yakit MCP） |
| 逆向工具 | apktool、jadx（既有产物）；llvm-readelf / llvm-objdump / strings（so 静态，无 IDA/Ghidra MCP） |
| 解密/分析工具 | Python3 自研脚本族（`step2/tools/`：srs_split/srs_analyze/srs_decrypt/srs_timeline/http_extract 等；仓库 `tools/decrypt_luac.py`、`tools/decrypt_hotfix.py`）+ openssl |
| 动态工具预案 | frida（`step1/frida/android_phase1_bypass.js`、`step5/pocs/*/runtime_observe.js` 模板，需授权设备） |

### 1.3 测试周期

2026-08-20 单日完成 Phase 1-6（`step1/script_run_notes.md`、`session_blackboard.json` created_at=2026-08-20T13:03:35Z）。

### 1.4 测试目标

- 完整还原后端通信协议：自研 SRS TCP 二进制协议（帧格式/握手/加密）、HTTP 端点组、protobuf 通道，为自研服务端/客户端提供权威依据
- 还原加密体系：资源三层加密与流量加密，提取全部密钥材料
- 按移动安全 TOP10 覆盖面筛查漏洞并做最小验证（离线 PoC），输出"自研不应照抄"的设计红线清单

---

## 2. 渗透流程总结（Phase 1-5 执行情况）

| 阶段 | 输入材料 | 完成度 | 核心发现 | 待验证项 |
|---|---|---|---|---|
| Phase 1 静态侦察 | decompiled/（jadx+apktool） | 完成 | 15998 条端点命中、1681 个 URL 候选；897 个加密 luac（头 `devaguopeifeiK`）；个推/ZEUS/cmic 密钥硬编码；env_guard 8 类逐项裁决（脚本初判 7 项 blocking 经人工复核为 SDK 噪音） | cert.pem 自校验用途（Phase 2 实测未见 pinning 拦截，闭环） |
| Phase 2 流量+代码对齐 | 5 场景 pcap（s01/s02/s03/s04/s06；s05 仅前 2GB 连接清单） | 完成 | 6167 帧 SRS、111 种消息、105 条代码-流量双证端点；SRS 12B 帧头+握手链还原；keystream 前缀恢复；金币场 MatchLink 连续调度语义确认（proc147 旧链 0 帧） | c2s 全量 keystream 恢复需 native 密钥派生（Phase 3 闭环） |
| Phase 3 SO/JNI 深度分析 | libcocos2dlua.so 等 10 so | 完成（纯静态） | 资源三层加密全还原（XXTEA×2+Blowfish-ECB，根密钥 so@0x131d42c xxd 复核）；SRS 帧 AES-256-CFB128 默认 key/IV 提取；帧 magic 0x4001 反汇编证实；无显式反调试字符串 | CRYPTO-005 会话密钥协商行为需流量侧比对（Phase 4 闭环）；libsgcore 风控黑盒运行时复核 |
| Phase 4 弱加密与漏洞筛查 | step1-3 + jadx/Lua 补分析 | 完成 | 26 条漏洞（Critical 5/High 9/Medium 9/Low 3）；7 条加密发现、5 条签名发现、6 条加密还原、7 条报文风险、16 条敏感信息、5 条 JSBridge 风险 | 2 条"需验证"（VULN-004/021）、1 条"仅有线索"（VULN-025） |
| Phase 5 最小验证 PoC | step4 26 条漏洞 | 完成（授权边界内） | 26 用例全设计；VAL-001/002/007/012 离线实测 **PASS**；VAL-003/005/008/009/010/011/017/020 离线演示/被动证据可跑；frida/adb 模板就绪 | 服务端行为类（重放接受度、timestamp 容差、重新计价、容错）一律 `no_authorization_online` |

风险形成路径：静态线索（Phase 1 密钥/入口）→ 协议映射（Phase 2 帧格式+字段级对齐）→ native 证实（Phase 3 符号/反汇编/密钥提取）→ 风险定级（Phase 4 guardian L1-L4 分级）→ 验证闭环（Phase 5 离线 PoC 实测/授权设备模板）。

### 风险统计

- 漏洞总数 **26**：Critical 5 / High 9 / Medium 9 / Low 3 / Info 0
- Phase 6 验证状态：**verified 4**（VULN-001/002/007/012，离线 PoC 实测 PASS）、**static_confirmed 19**、**needs_online_validation 3**（VULN-004/021/025）
- 分类分布：弱加密 8 / 数据安全 7 / 组件安全 5 / 业务逻辑 4 / 注入与 RCE 2 / 认证授权 0
- 弱加密问题：8（VULN）+ 7（CRYPTO）+ 5（SIG）+ 6（RESTORE）
- 敏感信息：16 条（critical 4 / high 4 / medium 5 / low 3）
- 报文级风险：7（PKT-001~007）
- 涉及 native 的高风险点：SRS 帧加密、资源三层加密、identify RC4、un.sign/un.md5Encode、Unzipper Zip Slip（BLOCKED）

---

## 3. 后端 API 全景（重点章节）

数据源：`step2/api_endpoints.json`（159 端点）、`step2/protocol_index_full.json`（849 二进制协议 + 743 protobuf 消息 + 94 游戏 cmdid）、`step2/http_endpoints.json`、`step2/field_alignments.json`。全量明细另见 `step6/api_endpoints_full.md`。

### 3.1 SRS 帧格式（12 字节头，经流量与 so 反汇编双重证实）

```
[dir:1B][flag:1B][len:u16le][xy:u16le][proc:u16le][appid:u32le]   共 12 字节
```

- dir：1=c2s（客户端发出/握手期双向），0=s2c（服务端下行）
- flag：0x40=常规帧；0x80=protobuf 通道帧（proc 1147 roommatch_cli / proc 116 nyx_client）
- len：帧体长度（不含 12B 头）
- xy：XY_ID 消息号；proc：模块/服务 id；appid：服务端模块 appid（上行通常为 0，如大厅 9427）
- 帧头 magic 常量 0x4001（LE 字节 `01 40`）由 `Proxy33::packMessage@0x90d554` 反汇编 `mov w8,#0x4001` 证实；另有 0x8001 标志字；**无 CRC/校验和字段证据**
- 帧体加密：c2s 全方向加密；s2c 仅 proc=0（登录/认证通道）加密，其余 proc≠0 **明文**；逐帧按帧头标志位决定是否过 `Encryption::decrypt`（加密帧与明文帧混跑）
- 帧路由字段为 appid/processid/msgid 三元组（调试串 `GuoPengFei dispatchMessage: appid=%d, processid=%d, msgid=%d`）
- 全部 6167 帧仅 1 处 resync（s06_srs_7777.c2s.bin@502，PCAPdroid 丢包缺口），帧解析器零容错运行（`step2/frame_report.json`）

### 3.2 握手链（每连接固定序列）

```
c2s xy=1 len=4  body=fa60a522（固定魔数，服务端 xy=1 回显）
c2s xy=3 len=0
s2c xy=4 len=17/33   密钥材料下发（native 生成；SRS::RespKey: keyLen@+8(16/24/32) + key@+9）
c2s xy=5  SRSProtocol.PlayerConnect（clienttype/usertype/areaid = 2/7/7109，usertype=7=SESSION 自动重登）
s2c xy=6  SRSProtocol.PlayerData（flag=0 登录成功；sessionid 16B 后续重登使用）
```

密钥协商消息族（符号均在 dynsym）：`SRS::ReqKey/ReqKey32 (c2s) → SRS::RespKey (s2c) → SRS::CheckAct/CheckAct32（密钥校验）→ SRS::EncryptVer（加密版本协商）`。注意：**RespKey 属 s2c proc=0，正是用硬编码默认 key 加密的通道**——被动监听者可用默认 key 解出每连接会话 key（VULN-001，已实测）。

### 3.3 SRS 服务端拓扑（流量实测）

| 地址 | 角色 | 场景 |
|---|---|---|
| 47.97.154.79:5722/5723 | 大厅登录+大厅数据（SRS 主连接） | s02/s05/s06 |
| 47.99.73.166:5701 | 大厅/房间数据连接（lobby） | s03/s04/s05/s06 |
| 47.96.0.227:7777 | 金币场匹配+对局通道（appid=88888888，pyrrla+GameM） | s06 |
| 198.18.1.112:7777 | fake-ip（模拟器侧代理）7777 短连接登录/保活 | s02/s03/s05 |
| 10.145.0.49:9000 / 10.145.59.142:9000 | 对局实际服务地址（内网），由 GameNotify 下发；抓包中经 7777 网关中转，未见直连 | s06 |

### 3.4 协议族分组（111 种流量确认消息）

| 协议族 | proc | 规模 | 说明 |
|---|---|---|---|
| SRS 大厅核心 | 0 | 12 条 | 握手/登录/地址簿/玩家扩展数据，双向加密（proc=0 特例） |
| Game 游戏通道（GameM/GameProtocol） | 1 | 13 条 | 局内消息总线：ClientToServerMessage(xy11201, c2s 672 帧)/ServerToClientMessage(xy11200, s2c 1428 帧)，内层 cmdid+msglen 包头 |
| Tool 工具/玩家信息 | 62 | 13 条 | 道具/玩家资料/绑定 |
| Room 房卡房间 | 84 | 6 条 | ReqCreateTable/ReqPlayerPosition/ReqGetGoldRoomInfo（askid 1..24 递增 24/24 回显一致） |
| BagSys 背包 | 92 | 12 条 | 独立子连接握手+保活+背包数据 |
| IM 好友/聊天 | 100 | 19 条 | ReqKeepAlive 546 帧（密文恒定 88732abe 的关键样本） |
| BoxData 比赛场/盒子 | 113 | 7 条 | TransTo50Data 双向 67+67 |
| TeaHouse 亲友圈（nyx） | 116 | 9 条 | 含 4 条 traffic_only 未收录 protobuf 消息 |
| Task 任务 | 120 | 4 条 | RespTaskProtocol s2c 明文，acData 字段即 VULN-010 dofile 通道 |
| MatchLink 匹配链接 | 1006 | 6 条 | 金币场连续调度现行链路：ReqJoin 30s 周期入队/保活（askid=0 恒定） |
| Pyrrla 金币场匹配（protobuf） | 1147 | 6 条 | flag=0x80 帧；GameNotify 下发对局地址；CostNotify 扣费 |

### 3.5 SRS 完整端点表（111 条，流量确认；code_and_traffic_matched 105 / traffic_only 6）

加密列说明：c2s 全方向 XOR 流（= AES-256-CFB128 固定 IV 逐帧重置的流量表现）；s2c 列 plaintext=明文、encrypted=实测密文、mixed_or_short=短帧/混合未完全判定。

| ID | proc | xy | 消息 | 方向(c2s/s2c 帧数) | s2c | 匹配 |
|---|---|---|---|---|---|---|
| SRS-001 | 0 | 1 | LINK_HELLO | 147/146 | mixed | matched |
| SRS-002 | 0 | 2 | SRSProtocol.CheckAct | 112/112 | mixed | matched |
| SRS-003 | 0 | 3 | LINK_REQKEY | 146/- | - | matched |
| SRS-004 | 0 | 4 | LINK_RESPKEY | -/146 | mixed | matched |
| SRS-005 | 0 | 5 | SRSProtocol.PlayerConnect | 146/- | - | matched |
| SRS-006 | 0 | 6 | SRSProtocol.PlayerData | -/144 | mixed | matched |
| SRS-007 | 0 | 10 | SRSProtocol.ReqSRSLoad | 4/- | - | matched |
| SRS-008 | 0 | 11 | SRSProtocol.RespSRSLoad | -/4 | mixed | matched |
| SRS-009 | 0 | 14 | SRSProtocol.ReqSRSAddr | 36/- | - | matched |
| SRS-010 | 0 | 15 | SRSProtocol.RespSRSAddr | -/36 | mixed | matched |
| SRS-011 | 0 | 23 | SRSProtocol.ReqPlayerPlusData | 144/- | - | matched |
| SRS-012 | 0 | 24 | SRSProtocol.RespPlayerPlusData | -/134 | mixed | matched |
| SRS-013 | 1 | 11009 | ToolMProtocol.PlayerInfo | -/5 | plaintext | matched |
| SRS-014 | 1 | 11014 | GameProtocol.TableInfo | -/1 | plaintext | matched |
| SRS-015 | 1 | 11015 | game_cli.kTableStateInfo | -/2 | mixed | matched |
| SRS-016 | 1 | 11027 | GameMProtocol.PlayerStateInfo | -/4 | plaintext | matched |
| SRS-017 | 1 | 11073 | GameProtocol.ReqLeaveRoom | 1/- | - | matched |
| SRS-018 | 1 | 11200 | GameMProtocol.ServerToClientMessage | -/1428 | plaintext | matched |
| SRS-019 | 1 | 11201 | GameMProtocol.ClientToServerMessage | 672/- | - | matched |
| SRS-020 | 1 | 11310 | GameMProtocol.ReqPlayerConnect2 | 3/- | - | matched |
| SRS-021 | 1 | 11311 | GameMProtocol.RespPlayerConnect2 | -/3 | mixed | matched |
| SRS-022 | 1 | 11321 | GameMProtocol.RespPlayerDismiss | -/1 | plaintext | matched |
| SRS-023 | 1 | 11329 | GameMProtocol.NotifyPromt | -/1 | plaintext | matched |
| SRS-024 | 1 | 11820 | —(未命名) | -/1 | plaintext | traffic_only |
| SRS-025 | 1 | 50005 | —(未命名) | -/4 | encrypted | traffic_only |
| SRS-026 | 30 | 24 | ActiveProtocol.ReqCurTime | 5/- | - | matched |
| SRS-027 | 30 | 25 | ActiveProtocol.RespCurTime | -/5 | plaintext | matched |
| SRS-028 | 30 | 42 | ActiveProtocol.ReqBoxLedger | 10/- | - | matched |
| SRS-029 | 30 | 43 | ActiveProtocol.RespBoxLedger | -/10 | plaintext | matched |
| SRS-030 | 62 | 12009 | ToolProtocol.ReqPlayerPropsData | 12/- | - | matched |
| SRS-031 | 62 | 12010 | ToolProtocol.RespPlayerPropsData | -/12 | plaintext | matched |
| SRS-032 | 62 | 12011 | ToolProtocol.ReqSR | 18/- | - | matched |
| SRS-033 | 62 | 12012 | ToolProtocol.ResSR | -/18 | plaintext | matched |
| SRS-034 | 62 | 12057 | ToolProtocol.ClientInfo | 4/- | - | matched |
| SRS-035 | 62 | 12061 | ToolProtocol.ReqPlayerSimpleInfo | 125/- | - | matched |
| SRS-036 | 62 | 12062 | ToolProtocol.RespPlayerSimpleInfo | -/6 | plaintext | matched |
| SRS-037 | 62 | 12067 | ToolProtocol.ReqCheckBindUser | 9/- | - | matched |
| SRS-038 | 62 | 12068 | ToolProtocol.RespCheckBindUser | -/9 | plaintext | matched |
| SRS-039 | 62 | 12069 | ToolProtocol.ReqBindUser | 4/- | - | matched |
| SRS-040 | 62 | 12070 | ToolProtocol.RespBindUser | -/4 | plaintext | matched |
| SRS-041 | 62 | 12075 | ToolProtocol.ReqPlayerPropsTimeInfo | 4/- | - | matched |
| SRS-042 | 62 | 12076 | ToolProtocol.RespPlayerPropsTimeInfo | -/4 | plaintext | matched |
| SRS-043 | 84 | 11 | RoomProtocol.ReqCreateTable | 1/- | - | matched |
| SRS-044 | 84 | 12 | RoomProtocol.RespCreateTable | -/1 | plaintext | matched |
| SRS-045 | 84 | 15 | RoomProtocol.ReqPlayerPosition | 17/- | - | matched |
| SRS-046 | 84 | 16 | RoomProtocol.RespPlayerPosition | -/17 | plaintext | matched |
| SRS-047 | 84 | 24 | RoomProtocol.ReqGetGoldRoomInfo | 26/- | - | matched |
| SRS-048 | 84 | 25 | RoomProtocol.RespGetGoldRoomInfo | -/26 | plaintext | matched |
| SRS-049 | 92 | 501 | BagSysProtocol.ReqAppidList | 4/- | - | matched |
| SRS-050 | 92 | 502 | BagSysProtocol.RespAppidList | -/4 | plaintext | matched |
| SRS-051 | 92 | 504 | BagSysProtocol.ReqPlayerConnect | 8/- | - | matched |
| SRS-052 | 92 | 505 | BagSysProtocol.RespPlayerConnect | -/8 | plaintext | matched |
| SRS-053 | 92 | 506 | BagSysProtocol.ReqKeepAlive | 42/- | - | matched |
| SRS-054 | 92 | 507 | BagSysProtocol.RespKeepAlive | -/42 | plaintext | matched |
| SRS-055 | 92 | 601 | BagSysProtocol.ReqJoinBoxProp | 4/- | - | matched |
| SRS-056 | 92 | 602 | BagSysProtocol.RespJoinBoxProp | -/4 | plaintext | matched |
| SRS-057 | 92 | 603 | BagSysProtocol.ReqPropsConfig | 12/- | - | matched |
| SRS-058 | 92 | 604 | BagSysProtocol.ResPropsConfig | -/12 | plaintext | matched |
| SRS-059 | 92 | 605 | BagSysProtocol.ReqBackpackData | 28/- | - | matched |
| SRS-060 | 92 | 606 | BagSysProtocol.RespBackpackData | -/28 | plaintext | matched |
| SRS-061 | 100 | 301 | IMProtocol.ReqAppidList | 4/- | - | matched |
| SRS-062 | 100 | 302 | IMProtocol.RespAppidList | -/4 | plaintext | matched |
| SRS-063 | 100 | 304 | IMProtocol.ReqPlayerConnect | 104/- | - | matched |
| SRS-064 | 100 | 305 | IMProtocol.RespPlayerConnect | -/104 | plaintext | matched |
| SRS-065 | 100 | 306 | IMProtocol.ReqKeepAlive | 546/- | - | matched |
| SRS-066 | 100 | 307 | IMProtocol.RespKeepAlive | -/546 | plaintext | matched |
| SRS-067 | 100 | 401 | IMProtocol.ReqJoinIM | 4/- | - | matched |
| SRS-068 | 100 | 402 | IMProtocol.RespJoinIM | -/4 | plaintext | matched |
| SRS-069 | 100 | 408 | IMProtocol.ReqOpenFriendList | 4/- | - | matched |
| SRS-070 | 100 | 413 | IMProtocol.ReqFriendList | 8/- | - | matched |
| SRS-071 | 100 | 414 | IMProtocol.RespFriendList | -/8 | plaintext | matched |
| SRS-072 | 100 | 431 | IMProtocol.ReqFriendTableList | 1/- | - | matched |
| SRS-073 | 100 | 432 | IMProtocol.RespFriendTableList | -/1 | plaintext | matched |
| SRS-074 | 100 | 457 | IMProtocol.ReqAllMessageList | 6/- | - | matched |
| SRS-075 | 100 | 458 | IMProtocol.RespAllMessageList | -/6 | plaintext | matched |
| SRS-076 | 100 | 466 | IMProtocol.ReqFriendInfo | 22/- | - | matched |
| SRS-077 | 100 | 467 | IMProtocol.RespFriendInfo | -/22 | plaintext | matched |
| SRS-078 | 100 | 468 | IMProtocol.ReqGetApplys | 5/- | - | matched |
| SRS-079 | 100 | 469 | IMProtocol.RespGetApplys | -/5 | plaintext | matched |
| SRS-080 | 113 | 5 | BoxDataProtocol.ReqUserTag | 4/- | - | matched |
| SRS-081 | 113 | 6 | BoxDataProtocol.RespUserTag | -/4 | plaintext | matched |
| SRS-082 | 113 | 27 | BoxDataProtocol.ReqGetBanInfo | 4/- | - | matched |
| SRS-083 | 113 | 28 | BoxDataProtocol.RespGetBanInfo | -/4 | plaintext | matched |
| SRS-084 | 113 | 5050 | BoxDataProtocol.TransTo50Data | 67/67 | plaintext | matched |
| SRS-085 | 113 | 10006 | BoxDataProtocol.ReqTeaHouseInfo | 1/- | - | matched |
| SRS-086 | 113 | 10007 | BoxDataProtocol.RespTeaHouseInfo | -/1 | plaintext | matched |
| SRS-087 | 116 | 280 | —(nyx 未收录) | -/13 | plaintext | traffic_only |
| SRS-088 | 116 | 300 | TeaHouseProtocol.ReqTeaHouseInfoByPlayerType | 13/- | - | matched |
| SRS-089 | 116 | 301 | TeaHouseProtocol.RespTeaHouseInfoByPlayerType | -/13 | plaintext | matched |
| SRS-090 | 116 | 306 | TeaHouseProtocol.ReqServerAppid | 13/- | - | matched |
| SRS-091 | 116 | 307 | TeaHouseProtocol.RespServerAppid | -/13 | plaintext | matched |
| SRS-092 | 116 | 561 | —(nyx 未收录) | 2/- | - | traffic_only |
| SRS-093 | 116 | 562 | —(nyx 未收录) | -/2 | plaintext | traffic_only |
| SRS-094 | 116 | 563 | —(nyx 未收录) | -/13 | plaintext | traffic_only |
| SRS-095 | 116 | 1770 | PropsCountNotify | -/4 | encrypted | matched |
| SRS-096 | 120 | 3 | TaskProtocol.ReqTaskPercent | 42/- | - | matched |
| SRS-097 | 120 | 4 | TaskProtocol.RespTaskPercent | -/42 | plaintext | matched |
| SRS-098 | 120 | 11 | TaskProtocol.ReqTaskProtocol | 60/- | - | matched |
| SRS-099 | 120 | 12 | TaskProtocol.RespTaskProtocol | -/60 | plaintext | matched |
| SRS-100 | 1006 | 25100 | MatchLinkProtocol.ReqJoin | 79/- | - | matched |
| SRS-101 | 1006 | 25101 | MatchLinkProtocol.RespJoin | -/79 | mixed | matched |
| SRS-102 | 1006 | 25110 | MatchLinkProtocol.ReqGetOrSetHead | 4/- | - | matched |
| SRS-103 | 1006 | 25111 | MatchLinkProtocol.RespGetOrSetHead | -/4 | mixed | matched |
| SRS-104 | 1006 | 25115 | MatchLinkProtocol.ReqStopSvrMsg | 4/- | - | matched |
| SRS-105 | 1006 | 25116 | MatchLinkProtocol.RespStopSvrMsg | -/4 | mixed | matched |
| SRS-106 | 1147 | 1 | PlayerJoinRequest (pb) | 4/- | - | matched |
| SRS-107 | 1147 | 2 | PlayerJoinReply (pb) | -/4 | encrypted | matched |
| SRS-108 | 1147 | 7 | GameNotify (pb) | -/4 | plaintext | matched |
| SRS-109 | 1147 | 10 | CostNotify (pb) | -/5 | encrypted | matched |
| SRS-110 | 1147 | 22 | GoldPlayerInfoRequest (pb) | 2/- | - | matched |
| SRS-111 | 1147 | 23 | GoldPlayerInfoReply (pb) | -/2 | plaintext | matched |

仅代码存在、抓包未出现的二进制消息 **301 条**（含 DispatchProtocol proc147 调度队列 4-8 = 旧金币调度链路，已被 MatchLink proc1006 取代，全场景 0 帧），按模块分布与完整清单见 `step6/api_endpoints_full.md` 第 10 节。

### 3.6 HTTP 端点组

**手机验证码/登录组（HTTPS 密文，SNI palmapi.hzxuanming.com 命中 s02/s06 共 4 流；参数与签名逻辑已从 Lua 完整恢复）：**

| 端点 | 用途 | 代码位置 |
|---|---|---|
| `https://palmapi.hzxuanming.com/spark/phone/login/send/code/msg` | 发验证码（旧，isNew=false） | UrlConf.lua:114 |
| `https://palmapi.hzxuanming.com/spark/phone/login/send-code` | 发验证码（新） | UrlConf.lua:115 |
| `https://palmapi.hzxuanming.com/spark/phone/login/pwd/get` | 手机登录（旧） | UrlConf.lua:116 |
| `https://palmapi.hzxuanming.com/spark/phone/login/check-code` | 验证码登录（新） | UrlConf.lua:117 |

POST 表单参数：`app_id, areaid, auto_reg(仅isNew), lobbyid, phone, type(pwd_get/bind), timestamp, wid, signature`；签名 `MD5(键按固定序无分隔直拼 + appKey 拼尾)`（详见 4.3 与 VULN-005）。

**Token 组：** 金币场 token `https://hz-hylas.mengyoutech.com/auth/getWebToken`（POST JSON，GoldReqTokenNew50.lua:29）；大厅 token `https://transit.hzxuanming.com/auth/get-token?`（GET，ReqToken.lua:27，需先经 SRS ReqSessionID 取 tempSession；**ssid 出现在 URL query 且被 print 进 logcat**，PKT-005/VULN-018）。

**热更链组：** 版本查询 `GET https://gxb-api[-tx].{hzxuanming|imeete}.com/hotfix_update?env=1&appid=1073&engine_ver=3.13&channel=20001828&version=x.y.z`（imeete 线 appid=1051&channel=7128）；文件下载 `https://gxb-oss.{...}.com/yj/files/` 或 `/other/files/`（腾讯 COS 备用 `gxb-cos`）；监控 `https://gxb-monitor.{...}.com/monitor`。

**业务网关组（transit.hzxuanming.com，First_Url）：** `/auth/palmapi|gopalmapi|act|exchangeshop|apihub|get-token`；配置中心 `confapi.mychuguan.com /config_data/md5_list|file_info`；实名 `fcm.bflyhd.cn /realname/query|check` 与 `shiming.hzxuanming.com`；商城/兑换 `wechat.hzxuanming.com`；活动 `webact.tt2kj.com`；数据抛送 `bfas.bianfeng.com /v2/client`；统计 `te.hzxuanming.com`（数数科技）、`dh-api.imeete.com`（dhsdk）。

**HTTPS SNI 全景 48 域**（first_party 21 / third_party 19 / cdn 5 / capture_artifact 3）：完整表（流数/字节/场景/代码引用）见 `step6/api_endpoints_full.md` 第 6 节。

**明文 HTTP 78 条：全部第三方 SDK**（个推配置、搜狐 cityjson、微信 mmtls、快手 HTTPDNS 群）；目标 App 自身业务接口正式包全部走 HTTPS，抓包中无明文业务请求。但代码层存在灰度/回退明文端点组（112.126.81.124:80、appstore.racyqp.com:8090、47.111.89.252:8088 短信验证码、121.199.42.69:8866、119.97.159.53:8080、47.102.108.186:8087）且 `usesCleartextTraffic=true`（VULN-017）。

**仅代码存在、抓包未出现的 HTTP 端点 14 条**（规则图 CDN、金币场头像 CDN、海外 IP 判断、代理绑定、杭麻圈活动、车载 H5 支付、客服 H5、合规入口、海外配置中心/金币场变体、北京区 sxvip、丽水茶馆红包等），清单见 `step6/api_endpoints_full.md` 第 8 节。

### 3.7 protobuf 通道

- proc=1147（roommatch_cli，帧 flag=0x80）：PlayerJoinRequest/Reply、GameNotify（下发对局实际地址 10.145.x.x:9000）、CostNotify、GoldPlayerInfoRequest/Reply；消息体 protobuf 明文
- proc=116（nyx_client，newgold 亲友圈）：含未收录消息 (116,280)/(116,561)/(116,562)/(116,563)，protobuf 明文，代码侧未检索到命名定义
- 全量 protobuf 定义 743 条见 `step2/protocol_index_full.json protobuf_messages`

### 3.8 金币场连续调度语义（实测结论，自研服务端核心依据）

s06 实机金币场为 **MatchLink 连续调度**：`MatchLinkProtocol.ReqJoin`（proc1006，30s 周期入队/保活）→ 撮合后进桌（GameMProtocol proc1 通道，47.96.0.227:7777）→ 4 完整对局（每局 `msgStartGame(513) → … → msgHu(541) → msgEndResult(549) → msgResult(1026) → msgEndGame(514)`）→ 局间回到匹配流继续 ReqJoin。**DispatchProtocol（proc147 队列 4-8）全场景 0 帧 = 旧链路 code_only**。与仓库 AGENTS.md 约定一致：金币场一次性牌桌，结算后重新匹配，非房卡 NEXT_ROUND 模型。（证据：`step2/timeline_s06_phone_gold_ingame.json`，msgStartGame@169.8/531.1/813.0/1142.1 相对首包秒；匹配流 ReqJoin/RespJoin 46 对 ~30s 周期）

---

## 4. 加密体系

### 4.1 资源三层加密（全部密钥已离线提取，已有可运行解密器实测）

```
assets/local/res.rpk ──XXTEA(根密钥 so@0x131d42c: f84c7b745c8c00ede9d6add6a605cf63)──▶ 5×24B Blowfish 密钥
热更 hdq 容器(magic 89 77 88 89, keyIndex∈0..4) ──Blowfish-ECB(5 选 1)──▶ 明文 png/csb/plist/fnt / 内层 luac
内层 luac 与 APK assets/src/*.luac(897 个) ──XXTEA(key=03f1fdcbf5215b45fc790aaf3b965837 前16B, 签名 devaguopeifei)──▶ Lua 源码
```

- 第一层（CRYPTO-001，High）：APK 内置 luac，XXTEA + 4B 长度前缀 + 13B 签名头；`tools/decrypt_luac.py` 实测
- 第二层（CRYPTO-002，High）：hdq 热更容器 Blowfish-ECB；`tools/decrypt_hotfix.py` 实测 5 样本（4144B Lua / 合法 PNG / FlatBuffers / mp3 明文透传）
- 密钥源（CRYPTO-003，**Critical**）：res.rpk 根密钥硬编码于 so 文件偏移 0x131d42c（xxd 实测复核）；整个资源密钥体系可被完整离线重建
- 第三层（CRYPTO-004，High）：热更 luac 内层 XXTEA 二次包装（无长度前缀变体，同密钥同签名）
- 结论：**加密可逆 = 可重新加密**，攻击者可制作客户端可接受的加密热更内容，与 VULN-008（热更无签名）构成完整伪造链

### 4.2 SRS 流量加密：AES-256-CFB128 + keystream 恢复结论

- 算法：AES-256-CFB128（内嵌 OpenSSL `AES_set_encrypt_key`/`AES_cfb128_encrypt`，反汇编直接确认；加解密方向均用 encrypt key schedule）。native 入口：`Encryption::encrypt@0x8f5740 / decrypt@0x8f5914 / setDefaultAesKey@0x8f5718 / BaseProxy::setAesKey@0x90d54c / GuoPengFei::onRespKey@0x907edc`
- 默认材料（硬编码，xxd 实测）：key@0x11f55ec = `f362120513e389ff2311d7360123100705a210007acc023c3901da2ecb12448b`；IV@0x11f560c = `15ff010034ab4cd355fea122084f1307`
- 会话密钥：连接建立后服务端经 SRS::RespKey 下发覆盖默认（keyLen@+8 允许 16/24/32，key@+9）；**RespKey 帧本身走 proc=0 默认 key 通道**
- keystream 恢复结论（Phase 2 实测 + Phase 4 统一模型）：固定 IV + 每帧重新初始化 CFB ⇒ **keystream 逐帧从偏移 0 重置**，同明文同密文（ReqKeepAlive 286 帧密文恒定 `88732abe`；ReqJoin 46 帧恒定 ⇒ askid=0）；keystream 每连接一份、双向共用（s2c proc0 帧用 c2s 同 ks 解出 RespSRSAddr 实证）；已知明文可恢复任意前缀
- Phase 5 闭环（VAL-001 **PASS**）：s02 实测 30/30 连接握手帧默认 key 可解、122 帧与独立锚点逐字节交叉比对全中；s06 PASS，会话密钥每连接不同且 16B/32B 并存 ⇒ **仅凭被动抓包即可离线还原全连接明文**
- c2s 解密覆盖统计：10 条主连接全部 coverage=4/6，方法含 askid_echo（最高 389 票）/gamem_msglen/msgplay_echo（17 票逐字节一致）（`api_endpoints.json scan_summary.c2s_decryption`）

### 4.3 HTTP 签名体系

| 编号 | 算法 | 位置 | 结论 |
|---|---|---|---|
| SIG-001（RESTORE-001，restored） | 标准 MD5（un.md5Encode，native） | ReqPhoneVerificationCode.lua:19-32 / ReqPhoneLogin.lua:17 | `MD5(app_id+areaid+[auto_reg]+lobbyid+phone+timestamp+type+wid + appKey)`；appKey 明文硬编码 AreaConfig.lua 4 处区域配置 ⇒ 任意人可离线重签（VULN-005，Critical） |
| SIG-002（RESTORE-002，partially_restored） | un.sign（native，算法未确认，候选 Encryption::Md5@0x8f6040 / Hmac@0x8f5fe4） | Url.lua:41-56 | Lua 层字典序 `k=v&` 拼接后调 native；**无论算法如何，重签材料全在客户端，客户端重签必然可行**（VULN-006） |
| SIG-003 / CRYPTO-006（RESTORE-006，restored） | MD5(TreeMap 排序串 + webPayPrivateKey 拼尾) | PaySignUtils.java:13-38 | 支付下单签名；金额 price=product_price*100 等参数客户端可控；私钥经 Manifest meta-data 注入（本包未注入，渠道包注入即泄露）；调试日志输出含私钥待签串（VULN-011） |
| SIG-004 / CRYPTO-007 | MD5(参数 + 硬编码 privateKey) | LoginSignUtils.java:14 | 登录埋点签名私钥硬编码，可伪造数据上报 |
| SIG-005 | MD5(H5 参数 + cp/userid/gcp_id/time + 内部密钥) | RegWebViewMethodMaganer.java:75-95 | **H5 签名预言机**：任意加载进房间 WebView 的 JS 可让客户端用内部密钥为攻击者参数算合法签名（VULN-014 联动） |

### 4.4 identify RC4 线索

PlayerConnect.identify 字段使用 RC4（SRSProtocol.lua:81 注释：老协议用协议 key，其余用默认 key）；key 未提取，实际使用范围不明（VULN-025，仅有线索，需授权设备 hook 提取）。

---

## 5. 漏洞详情（26 条，按严重程度排序）

排序：Critical > High > Medium > Low；同级内 verified 优先于 static_confirmed，needs_online_validation 靠后。
状态口径：**verified** = Phase 5 PoC 离线实测 PASS；**static_confirmed** = 静态证据闭环（含离线演示脚本可跑）；**needs_online_validation** = 需在线授权或 native 审计补验。
"自研红线" = 自研服务端/客户端不应照抄的设计。

### 5.1 Critical（5 条）

#### VULN-001 SRS 流量加密密钥体系可离线重建（默认 AES-256 key/IV 硬编码 + 会话密钥经默认 key 通道下发）— verified

- 分类：弱加密 | OWASP A02 / CWE-321 | 状态：**verified（VAL-001 实测 PASS）** | guardian L4
- 影响范围：全量 SRS 业务流量（登录凭据、聊天、金币场操作、匹配）可被被动解密
- 描述：SRS TCP 流量使用 AES-256-CFB128，默认 32B key 与 16B IV 硬编码于 libcocos2dlua.so（0x11f55ec/0x11f560c，xxd 实测）。会话密钥由服务端 SRS::RespKey 下发，而 RespKey 属于 s2c proc=0 帧——正是用默认 key 加密的通道。被动监听者用公开默认 key 解出会话 key 后可离线解密该连接全部加密帧
- 技术原理：密钥协商的引导信道与被保护信道共用同一硬编码密钥，协商即泄露；CFB 流式无填充可直接对 payload 解密
- 利用条件：无需身份；能被动嗅探目标网络流量（Wi-Fi/运营商路径）即可；不需要 root/Hook
- 攻击路径：pcap 抓包 → 默认 key/IV AES-256-CFB128 解密 proc=0 帧 → 提取 RespKey 会话 key → 解密全连接帧
- 复现步骤：`cd step5/pocs/VULN-001 && python3 validate_request.py --scene s02_login`（另 `--scene s06_phone_gold_ingame`）：默认 key 解 xy=1 握手帧断言明文 `01000000`；解 s2c xy=4 RespKey 按 `[keyLen:u8][key]` 提取会话密钥；会话密钥解后续帧与 step2 独立锚点 `dec_hex` 逐字节交叉比对
- 预期/实测结果：`VERDICT: PASS`（s02 实测 30/30 连接握手可解、122 帧全中零偏差；s06 PASS，会话密钥每连接不同且 16B/32B 并存）
- 代码证据：`step3/crypto_native_analysis.json` CRYPTO-005；`libcocos2dlua.so` default_key@0x11f55ec / default_iv@0x11f560c；`GuoPengFei::onRespKey@0x907edc → BaseProxy::setAesKey@0x90d54c`
- 关联阶段：Phase 2（keystream/pcap）→ Phase 3（反汇编确认算法与材料）→ Phase 4 定级 → Phase 5 实测
- 自研红线：**会话密钥协商绝不允许经"默认硬编码 key 保护的通道"下发**；自研应：密钥协商用 ECDH + 服务端证书校验；删除任何默认 key 兜底；回归点=全场景抓包复核（VAL-001 的方法学可直接复用为自研回归测试）

#### VULN-007 资源三层加密（XXTEA×2+Blowfish-ECB）密钥全部硬编码且已公开破解 — verified

- 分类：弱加密 | OWASP A02 / CWE-321 | 状态：**verified（VAL-007 实测 PASS）** | guardian L4
- 影响范围：全部游戏逻辑源码泄露（已发生）；热更包伪造的加密环节无障碍
- 描述：APK luac、热更 hdq 容器、res.rpk 根密钥三层体系全部密钥可离线提取（so 0x131d42c 根密钥、setXXTEAKeyAndSign 常量、res.rpk 派生 5 个 Blowfish 密钥），本仓库已有可运行解密器实测解出。加密可逆即意味着攻击者可重新加密 → 可制作客户端可接受的加密热更内容
- 技术原理/利用条件/攻击路径：仅需 APK；提取密钥 → 解密/修改 → 按同格式重新加密 → 配合 VULN-008 投递
- 复现步骤：`cd step5/pocs/VULN-007 && python3 validate_request.py --out-dir /tmp/v007_out`：真实资产 `GtInit.luac` 解出 Lua 明文，篡改重加密后被参考实现正确还原（附带修正：该资产为无长度前缀变体）
- 预期/实测结果：`VERDICT: PASS`
- 代码证据：`step3/crypto_native_analysis.json` CRYPTO-001/002/003/004；`tools/decrypt_luac.py`、`tools/decrypt_hotfix.py`；res.rpk key=`f84c7b745c8c00ede9d6add6a605cf63`、luac key=`03f1fdcbf5215b45fc790aaf3b965837`
- 关联阶段：Phase 1（897 个加密 luac 识别）→ Phase 3（密钥提取+解密器）→ Phase 5 闭环
- 自研红线：**资源"加密"只做防抓取定位，不要把密钥硬编码进 so 并复用**；热更内容的安全性必须靠签名（见 VULN-008 红线）而非加密；自研若需资源保护应改按需下发的会话密钥

#### VULN-005 手机验证码/登录 HTTP 签名可离线重签（MD5 直拼 + 硬编码 appKey）— static_confirmed

- 分类：弱加密 | OWASP A02 / CWE-321 | 状态：**static_confirmed（VAL-005 selftest 确定性输出已实测；真实样本比对需授权设备 hook，服务端接受度 blocked）** | guardian L4
- 影响范围：短信通道滥用（资费消耗/轰炸任意手机号）、手机登录接口伪造请求
- 描述：`signature=MD5(app_id+areaid+[auto_reg]+lobbyid+phone+timestamp+type+wid+appKey)`，appKey 明文硬编码于 AreaConfig.lua 4 处区域配置（如 `2685db9c34685c83d16b0101d646989d`）。任何获得 APK 的人均可对任意手机号重签验证码请求；timestamp=os.time() 本地生成、无 nonce，重放窗口未知
- 利用条件：仅需 APK（公开）；无需账号
- 攻击路径：提取 appKey → 本地 MD5 重签 → 直接 POST palmapi 接口
- 复现步骤：`python3 step5/pocs/VULN-005/validate_request.py --selftest`（两分支确定性演算）；可选闭环：授权设备 `frida -U -f com.xm.zjgamecenter -l runtime_observe.js` 触发一次发码采集 (signatureStr, md5)，`--expect-signature` 回填比对 MATCH
- 代码证据：`lua-src-apk/login/Req/PhoneLogin/ReqPhoneVerificationCode.lua:19-32`（signatureStr 直拼 + un.md5Encode）；appKey 源 `lua-src-apk/app/Config/AreaConfig.lua:182-183`（另 :45-46/111-112/247-248）
- 关联阶段：Phase 2（签名字段还原）→ Phase 4（appKey 逐行确认）→ Phase 5 脚本
- 自研红线：**签名盐/密钥不得随客户端分发**；自研应：HMAC + 服务端密钥；加 nonce + 服务端时间窗校验 + 频控；验证码接口加图形验证。自研服务端不得信任任何"客户端算出来的 MD5 签名"作为唯一鉴权

#### VULN-008 Lua 热更链仅 MD5 完整性校验、无数字签名，热更目录优先加载 → 通道控制即任意 Lua 代码执行 — static_confirmed

- 分类：数据安全 | OWASP A08 / CWE-494 | 状态：**static_confirmed（VAL-008 离线 md5 自洽构造演示成立；投递通道 blocked）** | guardian L3
- 影响范围：全客户端任意 Lua 代码执行（等同 RCE）：窃取 session、伪造游戏行为、钓鱼 UI
- 描述：GameHotUpdate3 热更链：版本 manifest → project_10001.manifest(project_md5) → 文件级 md5，**全链仅 MD5 且 MD5 与文件同通道下发**；HotFixManager.lua:417 的 un.url.sign 仅用于错误监控上报而非包校验。main.lua:1-8 使 writablePath/hotfix/src 优先于 APK 内置 src 加载。控制下发通道（HTTPS MITM/CDN 投毒/配置接口伪造）即可投递任意 Lua。热更 unzip 由 native un.Unzipper 完成，Zip Slip 防护未知（VULN-021）
- 利用条件：控制下发通道之一；版本 manifest 经 transit HTTPS 下发，通道强度依赖 un.sign（VULN-006）
- 攻击路径：伪造版本 manifest（指向攻击者 project manifest+md5）→ 客户端下载 md5 自洽的恶意包 → 解压落 hotfix/src → 下次启动优先加载执行
- 复现步骤：`python3 step5/pocs/VULN-008/validate_request.py --src <某.lua> --out <本地目录>`：生成篡改 lua + 自洽 md5 manifest，模拟客户端 md5 比对 PASS
- 缺失的验证条件：版本 manifest 首拉通道是否强制 HTTPS+签名（配置接口报文需在线抓，blocked）；un.Unzipper Zip Slip 防护（见 VULN-021）
- 代码证据：`lua-src-apk/app/hotupdate/universe/hotfix/Manifest.lua:125/219`；`HotFixProcessor.lua:339-372/432-501`；`ResChecker.lua:281`；`LobbyHotUpdateData.lua:14`；`main.lua:1-8`
- 自研红线：**热更/动态加载链必须签名校验**——manifest 与文件加 RSA/Ed25519 签名（公钥随包），MD5 只配做传输纠错；加载前验签；开启证书锁定。自研不得复刻"md5 同通道即完整性"的设计

#### VULN-010 服务端任务配置经明文 SRS 帧下发并 dofile 执行（服务端驱动 Lua 代码执行通道）— static_confirmed

- 分类：注入与RCE | OWASP A03 / CWE-94 | 状态：**static_confirmed（VAL-010 离线帧构造演示成立；on-path 注入 blocked）** | guardian L3
- 影响范围：on-path 任意 Lua 代码执行（客户端 RCE）
- 描述：`TaskProtocol.RespTaskConfig`（proc120，s2c proc≠0 **明文帧**，s03 已实测明文解析）下发的 acData 被拼接缓存为 .lua 文件，落盘 writablePath 后直接 `dofile()` 执行；同函数 `os.execute("mkdir -p "..path..appID)`。SRS 为裸 TCP 无 TLS，on-path 攻击者可注入任意 Lua 代码，无内容签名/校验
- 利用条件：on-path（TCP 中间人：Wi-Fi 热点/运营商路径）；无需破解加密（proc≠0 明文）
- 攻击路径：中间人篡改/伪造 s2c proc120 帧 → acData 注入恶意 Lua → 客户端落盘 dofile
- 复现步骤：`python3 step5/pocs/VULN-010/validate_request.py`：构造含任务配置 Lua 的明文 s2c 帧输出 hex，并演示 key 含 `../` 时 dofile 路径拼接结果
- 缺失的验证条件：dofile 加载路径是否限制在 writablePath 内（key 是否可含 `../`，需授权设备动态确认）
- 代码证据：`lua-src-apk/app/Req/Task/ReqTaskConfig.lua:44-58`（落盘+dofile）；s2c 明文帧实证 `traffic_alignment.json matched_field_flows[8]`（acData="[]"）
- 自研红线：**服务端下发的"配置"绝不允许是可执行代码**——任务配置改 JSON 数据；必须下发脚本则加内容签名且沙箱执行；s2c 全帧加密；自研协议设计应杜绝"数据通道即代码通道"

### 5.2 High（9 条）

#### VULN-002 AES-CFB128 固定 IV 逐帧重置导致 keystream 复用（同明文同密文，已知明文可伪造帧）— verified

- 分类：弱加密 | OWASP A02 / CWE-323 | 状态：**verified（VAL-002 实测 PASS）** | guardian L4
- 影响范围：c2s 帧伪造（游戏操作、匹配请求）；流量指纹分析
- 描述：流量实测同一连接内相同明文产生相同密文（keepalive 286 帧恒定 `88732abe`），与反汇编确认的"IV 固定常量 + 每帧重新初始化 CFB"模型一致。已知明文帧（askid=0 的 ReqJoin/KeepAlive）可恢复 keystream 任意前缀，进而伪造同长度 c2s 帧
- 利用条件：能观测并注入目标 TCP 连接流量；已知若干明文帧（协议公开）
- 攻击路径：观测恒定密文 → 已知明文 XOR 恢复 keystream → 伪造同长度消息密文注入
- 复现步骤：`python3 step5/pocs/VULN-002/validate_request.py --scene s06_phone_gold_ingame`：Part A 恒定密文分组统计（ReqKeepAlive×286 / ReqJoin×38）；Part B ks=ct^01000000 恢复 keystream，伪造 pt2=02000000 密文并本地解密自证
- 预期/实测结果：`VERDICT: PASS`（与 step4 证据 88732abe 一致）
- 代码证据：`step2/field_alignments.json srs_frame_format.evidence`；`step2/keystreams_s06_phone_gold_ingame.json`；`Encryption::encrypt@0x8f5740`（csel x8,x9,x4,eq：IV NULL 时用默认常量）
- 自研红线：**每帧 IV 必须递增（帧序号派生）或直接上 AEAD（AES-GCM/ChaCha20-Poly1305）**；固定 IV 流密钥复用是流密码头号禁忌，自研协议不得照抄

#### VULN-012 支付宝 SDK 结果验签被桩掉（AlipayRsa.checkSign 恒返回成功）— verified

- 分类：业务逻辑 | OWASP A04 / CWE-345 | 状态：**verified（VAL-012 静态断言实测 PASS）** | guardian L4
- 影响范围：伪造支付成功回调欺骗客户端（UI/本地权益）；实际发货安全依赖服务端 notify 确认
- 描述：`AlipayRsa.checkSign(String)` 方法体被改为 `return 2`（RESULT_CHECK_SIGN_SUCCEED），doCheck 的 RSA 验签成为死代码；任何伪造的 resultStatus=9000 结果串都被当作验签通过。实际发货若依赖服务端 notify 则影响限于客户端 UI/本地逻辑欺骗；若有本地发货路径则直接造成损失
- 利用条件：本地构造伪造回调串/Hook；无需网络
- 复现步骤：`python3 step5/pocs/VULN-012/validate_request.py`（静态断言方法体==return 2，已实测 PASS）；可选授权设备 hook 复核返回值恒 2
- 代码证据：`decompiled/jadx/sources/com/bianfeng/paylib/alipaysdk/executor/AlipayRsa.java:19`；调用点 `AliPayHelper.java:93-99`
- 待验证：客户端是否存在依赖本地结果的权益发放路径（需调用链审计）
- 自研红线：**支付结果一律以服务端 notify + 订单回查为准**；客户端验签代码不得删除/桩掉；自研不得保留任何"恒真"验签分支

#### VULN-013 GetuiActivity 导出组件 pkgName trampoline：可启动应用内任意非导出组件并注入 extra — static_confirmed

- 分类：组件安全 | OWASP A01 / CWE-926 | 状态：**static_confirmed（VAL-013 脚本就绪，授权设备 dry-run，POC_CONFIRM=YES 执行）** | guardian L4
- 影响范围：绕过组件导出限制；钓鱼 WebView/支付界面注入
- 描述：`com.bianfeng.privategetui.GetuiActivity` exported=true，onCreate 读取 extra pkgName 直接 `intent2.setClassName(this, pkgName)+startActivity`——任意三方应用可借此拉起应用内非导出 Activity（如 PaymentWebActivity/GameRoomWebActivity）并注入 h5url extra，把攻击者 URL 送入带 JS 桥的 WebView（与 VULN-014 成链）
- 利用条件：同机任意恶意应用；无需权限
- 复现步骤：`python3 step5/pocs/VULN-013/validate_request.py --serial <授权设备> --target-component <内部组件全类名>`（默认 dry-run，POC_CONFIRM=YES 才执行）；观察 logcat `pkgName is ...` 与目标 Activity 前台出现
- 代码证据：`AndroidManifest.xml:572`（exported=true）；`decompiled/jadx/sources/com/bianfeng/privategetui/GetuiActivity.java:17-37`
- 自研红线：**exported 组件不得把外部传入的组件名直接用于 setClassName 跳转**；推送回跳类 Activity 应固定目标或白名单；非必要不 exported

#### VULN-014 lzyzsd BridgeWebView 无 origin 校验 + 高危 JS handler（签名预言机/支付/任意 URL 打开/剪贴板）— static_confirmed

- 分类：组件安全 | OWASP A03 / CWE-749 | 状态：**static_confirmed（VAL-014 frida 观察模板就绪；页面投递链 blocked）** | guardian L3
- 影响范围：H5→Native 穿透：伪造签名请求、诱导支付、任意外部 URL 拉起、剪贴板劫持（配合 AppActivity deeplink 读剪贴板成链）
- 描述：自研 JS 桥全部走 registerHandler（无 addJavascriptInterface 但等价）：`encryptionParameters`（用内部密钥给 H5 参数算 MD5 签名=签名预言机，SIG-005）、`payActionFromWeb/payInH5`（发起支付）、`downLoadApp`（任意 URL Intent 无 scheme 白名单）、`copyPasteboard`（任意字符串写剪贴板）。BridgeWebView 无域名白名单；叠加 usesCleartextTraffic=true + MixedContentMode ALLOW_ALL，on-path/恶意 H5 即可调用全部 handler（12 个自研 handler、9 个 WebView Activity，详见 `step4/jsbridge_analysis.json`）
- 利用条件：让攻击者页面进入任一 BridgeWebView：cleartext MITM / VULN-013 trampoline 注入 h5url / 恶意活动页配置
- 复现步骤：授权设备 `frida -U -f com.xm.zjgamecenter -l step5/pocs/VULN-014/runtime_observe.js` 观察 loadUrl/registerHandler；handler 对任意 origin 可用即成立
- 代码证据：`decompiled/jadx/sources/com/bianfeng/roomlib/ui/RegWebViewMethodMaganer.java:75-95`（encryptionParameters）、`:41`（currencyInterface）、`:133`（copyPasteboard）；`splitscreenwindow/RegWebViewMethodMaganer.java:48/131`；`paylib/ui/PaymentWebActivity.java:83`；`com/github/lzyzsd/jsbridge/BridgeWebViewClient.java:35`（yy:// 拦截无 origin 校验）
- 自研红线：**JS 桥 handler 注册处必须加调用方域名白名单**；签名类接口禁止外部任意指定参数（消灭"签名预言机"）；支付/剪贴板/外部拉起类 handler 最小化；关闭明文与混合内容

#### VULN-017 明文 HTTP 承载敏感接口 + usesCleartextTraffic=true 全局放行 — static_confirmed

- 分类：数据安全 | OWASP A02 / CWE-319 | 状态：**static_confirmed（VAL-017 离线被动证据闭环脚本已实测可跑）** | guardian L2
- 影响范围：手机号/session/token 明文嗅探；配置下发被 MITM 篡改（联动 VULN-008/009）
- 描述：usesCleartextTraffic=true 且无 networkSecurityConfig。硬编码明文敏感端点：短信验证码发送 `http://47.111.89.252:8088/spark/phone/login/send-code`（手机号+签名明文）、话费兑换/注销 `http://appstore.racyqp.com:8090`（IsDebug 切换）、灰度主域 `http://112.126.81.124:80`（含 /auth/get-token）、一键登录插件 `http://121.199.42.69:8866`、ymnsdk 配置回退 `http://119.97.159.53:8080` 与 `47.102.108.186:8087`。IsDebug 默认 false（正式走 HTTPS），但灰度/回退路径一旦生效即明文
- 复现步骤：`python3 step5/pocs/VULN-017/validate_request.py`：筛 query/body 含敏感参数模式的明文条目并汇总（78 条明文记录扫描，被动证据闭环）
- 代码证据：`lua-src-apk/app/Config/UrlConf.lua:6/184-189`；`AndroidManifest.xml:43`
- 缺失的验证条件：灰度/回退路径在正式包的实际触发条件（在线 blocked）
- 自研红线：**usesCleartextTraffic=false + networkSecurityConfig 白名单**；自研服务端只暴露 HTTPS；严禁在客户端保留任何明文回退/灰度地址

#### VULN-009 RePlugin 插件框架关闭签名校验（setVerifySign(false)），插件/差分包仅 MD5 同通道校验，配置回退明文 HTTP — static_confirmed

- 分类：数据安全 | OWASP A08 / CWE-494 | 状态：**static_confirmed（VAL-009 离线篡改自洽演示成立；清单通道确认 blocked）** | guardian L3
- 影响范围：恶意插件 dex 加载 → 应用内任意 Java 代码执行
- 描述：`YmnRepluginApplication.createConfig` 显式 `rePluginConfig.setVerifySign(false)`，360 RePlugin 自带签名校验被绕过；插件 APK 与差分 patch 仅校验服务端同通道下发的 MD5（PluginInfo.file_md5）；插件经 PluginDexClassLoader 加载执行 Java 代码。ymnsdk 配置下发存在明文回退地址 `http://119.97.159.53:8080`
- 复现步骤：`python3 step5/pocs/VULN-009/validate_request.py --file <本地文件>`：改 1 字节重算 md5，演示校验语义自洽
- 代码证据：`decompiled/jadx/sources/com/ymnsdk/replugin/YmnRepluginApplication.java:88`；`DownloadUtils.java:221`；`PluginInstallWapper.java:110-130`；`feature/e.java:142`
- 自研红线：动态 dex/插件加载必须 `setVerifySign(true)` 并锁定签名证书；删除明文回退地址；MD5 改 SHA-256+签名。自研若不上插件化框架则此面整体不存在——**不建议自研引入同类插件框架**

#### VULN-011 支付下单签名弱（MD5+客户端私钥），金额/商品参数客户端可控 — static_confirmed

- 分类：业务逻辑 | OWASP A04 / CWE-345 | 状态：**static_confirmed（VAL-011 离线占位私钥重签演示成立；服务端计价 blocked）** | guardian L3
- 影响范围：订单金额/商品篡改（若服务端信任客户端价格则直接经济损失）
- 描述：`RequestOrderAction.onPrepareData` 的 `price=product_price*100`、商品 ID、数量全部取自客户端传入 map；`PaySignUtils.sign=MD5(TreeMap 排序串+webPayPrivateKey)`，私钥经 Manifest meta-data 注入（随包即可提取）；调试日志输出含私钥的完整待签名串（SD 卡 debug 文件门控）。签名不构成防篡改，最终防线只能是服务端按 product_id 重新计价（需验证）
- 复现步骤：`python3 step5/pocs/VULN-011/validate_request.py --price 0.01 --product-id <id>`：输出篡改前后两组 MD5 签名（占位私钥）
- 代码证据：`decompiled/jadx/sources/com/bianfeng/paylib/action/RequestOrderAction.java:34`；`PaySignUtils.java:13-38`；`AppConfigUtils.java:66`（本 APK Manifest 未见 YMNSDK_WEBPAY_PRIVATE_KEY，渠道包注入待确认）
- 自研红线：**服务端必须按 product_id 重新计价，绝不信任客户端金额**；签名改 HMAC 且密钥仅存服务端；自研下单接口以服务端商品表为唯一价格源

#### VULN-006 通用 HTTP 签名 un.sign 重签材料全在客户端 — static_confirmed

- 分类：弱加密 | OWASP A02 / CWE-798 | 状态：**static_confirmed（拼接层已还原；native 算法还原需授权设备 hook，VAL-006 needs_frida_first）** | guardian L2
- 影响范围：业务 HTTP 接口（活动/商城/兑换/get-token）请求可被重签伪造
- 描述：transit.hzxuanming.com 业务接口群签名 url.sign：Lua 层字典序 `k=v&` 拼接后调 native un.sign。native 算法未还原（Md5/Hmac 候选），但签名入口与全部输入参数均在客户端，客户端重签必然可行；native 仅隐藏摘要细节，安全收益有限
- 攻击路径：Frida hook un.sign（oracle）或还原算法后离线重签
- 缺失的验证条件：un.sign 算法还原（hook 点 Encryption::Md5@0x8f6040 / Hmac@0x8f5fe4；首跑需人工甄别参数类型）
- 代码证据：`lua-src-apk/app/hotupdate/universe/Url.lua:41-56`
- 自研红线：**签名密钥服务端化**；客户端签名只应作为防呆不作为鉴权；关键接口服务端二次鉴权

#### VULN-004 SRS 协议无防重放要素（无 timestamp/nonce，askid 仅为客户端递增匹配器）— needs_online_validation

- 分类：业务逻辑 | OWASP A07 / CWE-294 | 状态：**needs_online_validation（服务端是否拒绝重放未知；VAL-004 仅材料采集模板，重放部分 blocked）** | guardian L3
- 影响范围：登录重放冒名、游戏操作重放（刷出牌/重复动作）
- 描述：全部 SRS 消息无时间戳/随机数/序号单调校验证据；askid 客户端递增仅用于请求匹配（PKT-007）。截获的 c2s 密文帧（PlayerConnect、ReqJoin、msgPlay）可原样重放；同连接重放密文与原文一致（keystream 重置），跨连接重放因 keystream 每连接不同需已知明文重加密——VULN-001/002 已使该前提成立
- 缺失的验证条件与建议动作：服务端对重复 PlayerConnect/msgPlay 的处理——需在线授权后录制 c2s 帧并重放观察（`step5/pocs/VULN-004/runtime_observe.js` 仅做录制）
- 代码证据：`step2/protocol_map.json auth_fields`（replay_relevant=true）；`lua-src-apk/app/Base/Req/ReqProtocol.lua:7`（askIDManager 递增）；ReqJoin 30s 周期密文恒定
- 自研红线：**消息级序号 + 服务端滑动窗口校验；session 一次性化**；自研服务端对每个连接的帧序号做单调校验，操作类消息带服务端可验的回合/序号上下文

### 5.3 Medium（9 条，简表+说明）

| ID | 名称 | 状态 | 证据（文件:行） | 自研红线（不应照抄） |
|---|---|---|---|---|
| VULN-003 | SRS 帧无校验和/MAC，加密帧无完整性保护 | static_confirmed（VAL-003 离线比特翻转演示；在线注入 blocked） | `step3 crypto_native_analysis.json network_frame_hints`：checksum 无证据；`Proxy33::packMessage@0x90d554` 仅写 magic/len/msgid/appid | 帧头加 HMAC 或改 AEAD；CFB 翻转特性使篡改不可被发现 |
| VULN-015 | AppActivity 19 个 scheme BROWSABLE deeplink，query 写剪贴板并透传 Lua/SDK | static_confirmed（Lua 侧消费点需调用链审计） | `AndroidManifest.xml:53`；`AppActivity.java:251-272` checkScheme；`YmnLinkActivity.java` 透传 | scheme 参数白名单校验；autoVerify 域名核验；剪贴板读写解耦 |
| VULN-016 | RePlugin HostService AIDL 默认导出，三方应用可 bind 注入字符串进插件桥 | static_confirmed（下游消费待审计；VAL-016 manual_only） | `AndroidManifest.xml:89` HostService filter 无 exported 属性（targetSdk=28 默认导出） | exported=false 或 signature 权限保护 |
| VULN-018 | logcat 泄露 session/token/验证码响应（20+ 处 print，无开关门控） | static_confirmed（VAL-018 授权设备 dry-run 就绪） | `lua-src-apk/app/Req/ReqToken.lua:26`（print 含 ssid 的完整 URL）；`ReqPhoneVerificationCode.lua:43`/`ReqPhoneLogin.lua:43` print(response) | release 关闭 print 或统一日志开关；敏感字段脱敏；URL 不带凭据 |
| VULN-019 | 登录密码与 token 明文持久化（UserDefault/SharedPreferences） | static_confirmed（VAL-019 授权 root 设备 dry-run 就绪） | `RunLogin.lua:46` KW_DATA_LAST_LOGIN_PASSWORD；`HttpManager.lua:111-112`；`WechatSupportInterface.java:145` 微信 refresh_token 明文 | 密码不落盘（只存 token）；敏感项用 Keystore 加密 |
| VULN-020 | WebView 危险配置组：setAllowFileAccess(true)×7、SafeBrowsing 关闭、release 开启 WebContentsDebugging、Cocos WebView 无域名白名单 | static_confirmed（VAL-020 静态扫描已实测可跑，命中集需人工对照） | `BridgeWebView.java:76-78` setWebContentsDebuggingEnabled(true)；`YmnH5WebviewActivity.java:60/64/81` | 统一 WebView 安全基线；release 关 debugging；URL 白名单下沉 Java |
| VULN-021 | 热更解压 un.Unzipper(native) Zip Slip 防护未知 — BLOCKED | **needs_online_validation**（native 审计或授权环境样本验证；VAL-021 双路线） | `HotFixProcessor.lua:620-645` un.Unzipper 解压 final.zip；Lua/Java 侧无 `../` 检查 | 解压前校验 entry 名；native 侧补路径规范化；自研应使用带 Zip Slip 防护的成熟解压库 |
| VULN-023 | 第三方 SDK 密钥/运营密钥硬编码组（个推/ZEUS/一键登录/TOPON/高德/LoginSign 私钥） | static_confirmed（存在性静态闭环；调第三方接口需单独授权） | `AndroidManifest.xml:371-380/366/413/383`；`LoginSignUtils.java:14` | 可轮换的全部轮换；敏感操作改服务端代理；自研不把任何服务端级密钥放进客户端 |
| VULN-025 | PlayerConnect.identify 使用 RC4 弱算法（协议 key/默认 key） | **needs_online_validation**（仅有线索；RC4 key 未提取，VAL-025 needs_frida_first） | `hotfix-decrypted/src/app/Protocols/SRSProtocol.lua:81` 注释 | 淘汰 RC4；identify 并入 AES 通道；自研不使用任何已破弱算法 |

补充说明：VULN-003 的篡改效果——CFB 模式下翻转位导致对应字节及下一块明文损坏，帧格式无校验字段可拒绝该帧；服务端对畸形帧的容错行为需在线授权后补验。VULN-021 按仓库规范登记 BLOCKED，native Unzipper 无对应源码，不得以近似结论冒充。

### 5.4 Low（3 条，简表）

| ID | 名称 | 状态 | 证据 | 自研红线 |
|---|---|---|---|---|
| VULN-022 | Runtime.exec 拼接：安装前 chmod 777 APK、ping 拼接 URL | static_confirmed（defer：可控性低） | `SysfuncPlus.java:84` `Runtime.exec("chmod 777 "+str)`；`PingAsyncTask.java:22` | 避免 Runtime.exec，用 File.setReadable；参数数组化 |
| VULN-024 | 高危权限残留与活跃采集：READ_LOGS/WRITE_APN_SETTINGS/MOUNT_UNMOUNT 残留；QUERY_ALL_PACKAGES/REQUEST_INSTALL_PACKAGES 活跃 | static_confirmed（defer：Manifest 静态证据已足） | `AndroidManifest.xml` 权限声明；`SysfuncInterface.java:758` getInstalledPackages(0) | 删除残留权限声明；QUERY_ALL_PACKAGES 换包名定向查询；隐私合规最小化 |
| VULN-026 | WXEntryActivity/WXPayEntryActivity exported 无权限保护 | static_confirmed（defer：拉起为空流程、影响低） | `AndroidManifest.xml:407/695` exported=true | exported=false（微信 SDK 要求 exported 则保持，接受低风险） |

---

## 6. 弱加密与风险汇总

### 6.1 弱加密问题（模块 / 位置 / 影响面）

| 编号 | 问题 | 位置 | 影响面 |
|---|---|---|---|
| CRYPTO-001/004 | luac XXTEA 密钥硬编码（含热更内层变体） | libcocos2dlua.so setXXTEAKeyAndSign@0x6d38a4 | 897+热更 luac 全部可解 |
| CRYPTO-002 | hdq 容器 Blowfish-ECB 弱模式 | ResKey::getKey@0xca8f34 / blowfish_decrypt@0xca86ac | 热更资源全量可解可重打包 |
| CRYPTO-003 | res.rpk 根密钥硬编码 | so@0x131d42c | 资源密钥体系可离线重建（Critical） |
| CRYPTO-004(VULN-001) | SRS 流量 AES-256-CFB128 默认 key/IV 硬编码 + 协商信道复用 | so@0x11f55ec/0x11f560c | 全量业务流量被动解密（verified） |
| CRYPTO-005(VULN-025) | identify RC4 | SRSProtocol.lua:81 | 仅有线索 |
| CRYPTO-006(VULN-011) | 支付 MD5(TreeMap+客户端私钥) | PaySignUtils.java:13-38 | 订单参数可重签 |
| CRYPTO-007(VULN-023) | 埋点 MD5 私钥硬编码 | LoginSignUtils.java:14 | 伪造上报 |
| VULN-002 | 固定 IV 逐帧重置 keystream 复用 | Encryption::encrypt@0x8f5740 | 帧伪造（verified） |
| VULN-003 | 帧无 MAC/校验和 | Proxy33::packMessage | 篡改不可检出 |

### 6.2 Key / IV / Salt 风险模式

- 硬编码密钥 6 组（SEC-005~010）：luac XXTEA key、res.rpk 根 key、SRS 默认 AES key/IV、手机登录 appKey×4 组、登录埋点私钥、支付私钥注入槽位
- 固定 IV：SRS AES-CFB128 IV 为 so 常量且逐帧重置（IV 复用）
- 固定盐：MD5 签名盐 appKey 拼尾、随包分发
- 弱随机/nonce 缺失：HTTP 签名无 nonce；SRS 协议无 timestamp/nonce

### 6.3 签名机制问题

- SIG-001 验证码签名可离线重签（Critical）
- SIG-002 un.sign 材料全在客户端（High）
- SIG-003 支付签名不防篡改（High）
- SIG-004 埋点签名可伪造（Medium）
- SIG-005 H5 签名预言机（High）

### 6.4 Token / 会话机制问题

- SRS session 随帧传输，传输层被破后即明文；usertype=7 自动重登 ⇒ 凭据截获即可冒名（RESTORE-005，session 有效期/绑定策略未知）
- ssid 出现在 /auth/get-token URL query 且 print 进 logcat（PKT-005）
- token/密码/微信 refresh_token 明文持久化（VULN-019）
- 金币场 token（getWebToken POST JSON）与大厅 token（get-token GET）双轨，均无时效/绑定证据

### 6.5 WebView / JSBridge 风险

- 12 个自研 registerHandler 全部无 origin 校验（JSBR-001）；高危 handler：encryptionParameters 签名预言机、payActionFromWeb/payInH5 支付、downLoadApp 任意 URL、copyPasteboard 剪贴板
- BridgeWebView release 开启 WebContentsDebugging（JSBR-002）；7 个 H5 Activity 危险配置组（JSBR-003）；GetuiActivity trampoline 可把攻击者页面送入桥（JSBR-004）；yy://return/ 回调 id 可探测（JSBR-005）
- H5→Native 信任边界完全缺失；Cocos WebView URL 由 Lua/服务器配置驱动，Java 侧无域名白名单

### 6.6 需进一步验证的高危点

| 项 | 缺失条件 | 建议动作 |
|---|---|---|
| VULN-004 SRS 重放 | 服务端重放接受度 | 在线授权后录制+重放 |
| VULN-021 Unzipper Zip Slip | native 防护未知（无源码） | so 二进制审计或授权设备构造 `../` 样本 zip + frida 观察落盘 |
| VULN-025 identify RC4 | key 未提取 | 授权设备 hook Encryption 路径提取 |
| VULN-006 un.sign 算法 | native 摘要/盐未知 | 授权设备 hook Md5@0x8f6040/Hmac@0x8f5fe4 |
| VULN-011 服务端重新计价 | 后端行为 | 在线授权后篡改 price 下单观察 |
| VULN-008 manifest 首跳通道 | 配置接口是否强制签名 | 在线抓版本查询报文 |
| libsgcore 风控黑盒 | 运行时行为 | 授权设备运行时复核 |

### 6.7 整体优化建议

原版的安全模型是"客户端保密"——所有信任锚（密钥、盐、签名算法、验签逻辑）都放在客户端，这在逆向面前等于全部公开。自研必须把信任锚整体移到服务端：密钥不出服务端、签名只做防呆、完整性靠签名而非 MD5、传输靠 TLS+AEAD、执行边界上"数据是数据、代码是代码"。

---

## 7. 安全加固总结（自研设计红线清单）

### 7.1 加密 / 签名机制

- 当前主要风险：默认 key/IV 硬编码且协商信道复用（VULN-001）；固定 IV keystream 复用（VULN-002）；帧无 MAC（VULN-003）；MD5+客户端盐签名族（VULN-005/006/011）
- 推荐整改：密钥协商 ECDH+服务端证书校验，无默认 key 兜底；帧加密改 AEAD 或 IV 随帧序号递增；帧头加 HMAC；签名全部 HMAC-SHA256 且密钥服务端化，加 nonce+时间窗
- 优先级：P0 | 落地方式：自研协议层一次设计到位（帧格式预留 seq/iv/mac 字段），用 VAL-001/002 的方法学做回归测试

### 7.2 认证授权机制

- 当前主要风险：session 自动重登凭据随帧明文可得（RESTORE-005）；无防重放要素（VULN-004）；验证码接口可重签滥用（VULN-005）
- 推荐整改：session 一次性化+设备绑定+短时效；消息级序号与服务端滑动窗口；验证码接口频控+图形验证+服务端时间窗
- 优先级：P0 | 落地方式：自研服务端会话管理集中实现，登录/重登/换桌全链路强制

### 7.3 数据存储与传输安全

- 当前主要风险：明文回退端点组+cleartextTraffic（VULN-017）；凭据明文持久化（VULN-019）；logcat 泄露（VULN-018）
- 推荐整改：全链路 HTTPS+cleartextTraffic=false；敏感存储 Keystore 加密、密码不落盘；release 日志开关+脱敏
- 优先级：P1 | 落地方式：自研客户端网络层单入口，配置化禁止明文 scheme

### 7.4 WebView / JSBridge

- 当前主要风险：无 origin 校验+签名预言机+支付 handler（VULN-014）；危险配置组（VULN-020）
- 推荐整改：handler 域名白名单；签名类接口禁外部参数；支付/剪贴板 handler 最小化；关明文/混合内容/debugging；URL 白名单下沉 Java
- 优先级：P0 | 落地方式：自研桥接层统一注册表+默认拒绝

### 7.5 组件暴露与 Deeplink

- 当前主要风险：GetuiActivity trampoline（VULN-013）；19 scheme deeplink 透传（VULN-015）；HostService AIDL 默认导出（VULN-016）
- 推荐整改：exported 最小化+白名单校验；deeplink 参数白名单；AIDL signature 权限
- 优先级：P1 | 落地方式：Manifest 审计进 CI

### 7.6 动态加载与完整性

- 当前主要风险：热更 md5-only 无签名（VULN-008）；插件关验签（VULN-009）；dofile 数据通道（VULN-010）；Unzipper Zip Slip 未知（VULN-021）
- 推荐整改：热更/插件全链 RSA/Ed25519 签名（公钥随包）；不引入插件化 dex 框架；服务端不下发可执行内容；解压库带路径防护
- 优先级：P0 | 落地方式：自研热更协议设计时签名即内置，非后补

### 7.7 开发安全规范

- 密钥/盐/私钥零硬编码（CI 密钥扫描）；日志脱敏规范；权限最小化（删 READ_LOGS 等残留）；debug 开关不得依赖 SD 卡文件；代码评审覆盖"客户端可控参数"清单（金额、价格、签名输入）

---

## 8. 附录

### 8.1 抓包场景清单

| 场景 | 文件 | 内容 | 规模 |
|---|---|---|---|
| s01_coldstart | traffic/s01_coldstart.pcap | 冷启动 | 含 adb 回传噪音（已剔除） |
| s02_login | traffic/s02_login.pcap | 登录 | SRS 7777 短连+5722 主连；palmapi SNI 2 流 |
| s03_lobby | traffic/s03_lobby.pcap | 大厅 | 5701 连接；任务配置明文帧实证 |
| s04_createroom | traffic/s04_createroom.pcap | 创建房间（房卡） | 5701；ReqCreateTable 等 |
| s05_emulator_gold_attempt | （65GB，仅前 2GB 连接清单 inventory） | 模拟器金币场尝试，未进对局 | 仅 inventory_s05，未做消息级解码 |
| s06_phone_gold_ingame | traffic/s06_phone_gold_ingame.pcap | 真机金币场局内 | 4 完整对局；keystream/出牌逐字节实证主场景 |

### 8.2 工具清单

| 工具 | 用途 | 备注 |
|---|---|---|
| apktool / jadx | APK 解包与 Java 反编译 | 既有产物（decompiled/） |
| tcpdump（设备端 root） | pcap 采集 | MuMu /system/bin/tcpdump |
| llvm-readelf / llvm-objdump / strings | so dynsym/反汇编/字符串 | 无 IDA/Ghidra MCP 的替代 |
| openssl | AES-CFB128 离线解密 | VAL-001/002 |
| Python3 自研脚本族 | 帧切分/对齐/解密/时间线/HTTP 提取 | step2/tools/：srs_split.py、srs_analyze.py、srs_decrypt.py、srs_timeline.py、http_extract.py、build_http_endpoints.py、build_protocol_index.py、gen_api_endpoints.py、inventory.py、extract_flow.py 等 |
| tools/decrypt_luac.py / decrypt_hotfix.py | 资源三层解密参考实现 | 仓库既有，多样本实测 |
| frida（模板） | 运行时 hook 观察 | step1/frida/android_phase1_bypass.js；step5/pocs/*/runtime_observe.js；需授权设备 |
| adb | 组件/deeplink/日志/存储验证 | step5 adb_local 类 PoC，默认 dry-run |

### 8.3 复现脚本合集（step5/pocs/，22 个目录）

| 脚本 | 对应漏洞 | 用途 | 状态 |
|---|---|---|---|
| VULN-001/validate_request.py | VULN-001 | 离线被动解密 pcap 全帧交叉比对 | 实测 PASS |
| VULN-002/validate_request.py | VULN-002 | keystream 复用统计+伪造自证 | 实测 PASS |
| VULN-003/validate_request.py | VULN-003 | 离线比特翻转演示 | partial（在线 blocked） |
| VULN-004/runtime_observe.js | VULN-004 | hook 录制 c2s 帧（重放材料） | 模板，授权设备 |
| VULN-005/validate_request.py + runtime_observe.js | VULN-005 | MD5 重签 selftest + 样本采集比对 | selftest 已实测；样本待采 |
| VULN-006/runtime_observe.js | VULN-006 | hook Md5/Hmac 还原 un.sign | 模板（needs_frida_first） |
| VULN-007/validate_request.py | VULN-007 | 资源解密→篡改→重加密闭环 | 实测 PASS |
| VULN-008/009/010/011/validate_request.py | VULN-008/009/010/011 | 热更/插件 md5 自洽、dofile 帧构造、支付重签离线演示 | partial（投递/在线 blocked） |
| VULN-012/validate_request.py + runtime_observe.js | VULN-012 | checkSign 恒真静态断言+hook 复核 | 静态实测 PASS |
| VULN-013/015/018/019/validate_request.py | 同名 | adb 本地验证（跳板/deeplink/logcat/shared_prefs） | dry-run 就绪，授权设备 |
| VULN-014/021/025/runtime_observe.js | 同名 | frida 观察模板 | partial/BLOCKED/needs_frida_first |
| VULN-016/README.md | VULN-016 | AIDL 调用方 App 手工指引 | manual_only |
| VULN-017/020/validate_request.py | 同名 | 明文 HTTP 汇总 / WebView 配置静态扫描 | 已实测可跑 |

不出 PoC（defer）：VULN-022（可控性低）、VULN-023（密钥存在性已静态闭环，调第三方接口需单独授权）、VULN-024（aapt 复核即可）、VULN-026（空流程低影响）。

### 8.4 测试用例清单（26 条，step5/validation_cases.json）

- 正常场景：VAL-001/002/005/007/012/013/017/018/019/020
- 边界场景（离线演示成立、在线部分 blocked）：VAL-003/008/009/010/011
- 异常/可控性确认先行：VAL-004/006/014/015/016/021/025
- defer：VAL-022/023/024/026
- 全部用例授权边界 `authorized_only`：离线/本地闭环；在线行为统一 `blocked_on=no_authorization_online`

### 8.5 中间产物索引

| 阶段 | 关键产物 |
|---|---|
| step1 | file_inventory.json、tech_stack.json、entrypoints.json、env_guard_report.json、ai_summary.json、raw_*.json（endpoints/secrets/native_bridges/env_guards）、frida_bypass_plan.json |
| step2 | api_endpoints.json、protocol_map.json、traffic_alignment.json、field_alignments.json、frame_report.json、http_endpoints.json、protocol_index_full.json、keystreams_*.json、messages_decrypted_*、messages_*、timeline_*、inventory_*、tools/（含 srs_decrypt.py）、flows/ |
| step3 | crypto_native_analysis.json、jni_analysis.json |
| step4 | vuln_analysis.json、risk_matrix.json、secrets_report.json、jsbridge_analysis.json |
| step5 | validation_cases.json、test_plan.md、repro_steps.md、poc_scripts_index.json、pocs/（22 目录） |
| step6（本阶段） | security_report.md、findings.json、api_endpoints_full.md、secrets_full.md、native_findings_full.md、tools/build_step6.py |
| 全局 | session_blackboard.json、analysis_state.json |

### 8.6 限制项与未覆盖区域

- 未做任何在线验证：服务端行为（重放接受度、timestamp 容差、频控、重新计价、畸形帧容错）全部未知，不得当作"已确认无防护"
- s05（模拟器金币场，65GB）仅完成连接清单，未做消息级解码；模拟器金币场未进入对局
- HTTPS 业务流量为密文，仅 SNI/字节量可见；HTTP 端点参数级结论来自代码恢复而非流量实证
- un.sign native 算法、identify RC4 key、Unzipper Zip Slip 防护、libsgcore 运行时行为：未还原/未知，见 6.6
- imeete 发行 SDK 系域名（sluice/plugin-res/sdk-config 等）在 Lua 层无引用，属 native 层黑盒，未展开
- 本报告全部结论面向"自研参照"用途；不构成对浙江游戏大厅线上服务的任何测试结论背书
