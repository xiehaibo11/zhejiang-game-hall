# 后端 API 全景明细（全量）—— 浙江游戏大厅 com.xm.zjgamecenter v1.5.4

数据源：`step2/api_endpoints.json`（159 端点：111 SRS TCP 消息 + 48 HTTPS SNI 域）、`step2/http_endpoints.json`（78 条明文 HTTP / 14 条 code_only HTTP）、`step2/protocol_index_full.json`（849 二进制协议 + 743 protobuf 消息 + 94 游戏 cmdid）。

## 1. SRS TCP 帧格式

- **header**：[magic:2B][length:u16le][xyid:u16le|processid:u16le][appid:u32le] 共12字节
- **magic**：byte0: 1=客户端发出/握手期双向, 0=服务端下行; byte1: 0x40=常规帧, 0x80=protobuf通道帧(procid 1147)
- **length**：帧体长度(不含12字节头)
- **xyid**：XY_ID 消息号
- **processid**：模块/服务id
- **appid**：服务端模块appid(上行通常为0)
- **body_encryption**：c2s 全方向加密(per-connection XOR 流密钥,逐帧重置); s2c 仅 procid=0(SRS登录/认证)加密,其余明文
- **handshake**：c2s xy=1 len=4 body=fa60a522(固定魔数,服务端回显) -> c2s xy=3 len=0 -> s2c xy=4 len=17(密钥材料) -> c2s xy=5 PlayerConnect -> s2c xy=6 PlayerData

握手链：c2s xy=1(len=4, 魔数 fa60a522，服务端回显) → c2s xy=3(len=0) → s2c xy=4(len=17/33，密钥材料下发) → c2s xy=5 PlayerConnect → s2c xy=6 PlayerData。

## 2. SRS 服务端拓扑

| 地址 | 角色 | 出现场景 |
|---|---|---|
| `47.97.154.79:5722/5723` | 大厅登录+大厅数据(SRS主连接) | s02,s05,s06 |
| `47.99.73.166:5701` | 大厅/房间数据连接( lobby ) | s03,s04,s05,s06 |
| `47.96.0.227:7777` | 金币场匹配+对局通道(appid=88888888, pyrrla+GameM) | s06 |
| `198.18.1.112:7777` | (fake-ip,模拟器侧代理)7777 短连接登录/保活 | s02,s03,s05 |
| `游戏服(内网) 10.145.0.49:9000 / 10.145.59.142:9000` | 对局实际服务地址,由 GameNotify 下发(抓包中经 7777 网关中转,未见直连) | s06 |

## 3. SRS 消息端点全量表（111 条，流量确认）

图例：dir 为 c2s/s2c 帧数；加密列 c2s 全方向 XOR 流（AES-256-CFB128 固定 IV 逐帧重置），s2c 仅 proc=0 加密、proc≠0 明文；encrypted 表示该方向实测为密文。

| ID | proc | xy | 模块 | 消息 | 方向(c2s/s2c) | 帧数 | s2c 加密 | 匹配 |
|---|---|---|---|---|---|---|---|---|
| SRS-001 | 0 | 1 | SRS(大厅核心) | LINK_HELLO | c2s=147/s2c=146 | 293 | mixed_or_short | code_and_traffic_matched |
| SRS-002 | 0 | 2 | SRS(大厅核心) | SRSProtocol.CheckAct | c2s=112/s2c=112 | 224 | mixed_or_short | code_and_traffic_matched |
| SRS-003 | 0 | 3 | SRS(大厅核心) | LINK_REQKEY | c2s=146 | 146 | - | code_and_traffic_matched |
| SRS-004 | 0 | 4 | SRS(大厅核心) | LINK_RESPKEY | s2c=146 | 146 | mixed_or_short | code_and_traffic_matched |
| SRS-005 | 0 | 5 | SRS(大厅核心) | SRSProtocol.PlayerConnect | c2s=146 | 146 | - | code_and_traffic_matched |
| SRS-006 | 0 | 6 | SRS(大厅核心) | SRSProtocol.PlayerData | s2c=144 | 144 | mixed_or_short | code_and_traffic_matched |
| SRS-007 | 0 | 10 | SRS(大厅核心) | SRSProtocol.ReqSRSLoad | c2s=4 | 4 | - | code_and_traffic_matched |
| SRS-008 | 0 | 11 | SRS(大厅核心) | SRSProtocol.RespSRSLoad | s2c=4 | 4 | mixed_or_short | code_and_traffic_matched |
| SRS-009 | 0 | 14 | SRS(大厅核心) | SRSProtocol.ReqSRSAddr | c2s=36 | 36 | - | code_and_traffic_matched |
| SRS-010 | 0 | 15 | SRS(大厅核心) | SRSProtocol.RespSRSAddr | s2c=36 | 36 | mixed_or_short | code_and_traffic_matched |
| SRS-011 | 0 | 23 | SRS(大厅核心) | SRSProtocol.ReqPlayerPlusData | c2s=144 | 144 | - | code_and_traffic_matched |
| SRS-012 | 0 | 24 | SRS(大厅核心) | SRSProtocol.RespPlayerPlusData | s2c=134 | 134 | mixed_or_short | code_and_traffic_matched |
| SRS-013 | 1 | 11009 | Game(游戏通道) | ToolMProtocol.PlayerInfo | s2c=5 | 5 | plaintext | code_and_traffic_matched |
| SRS-014 | 1 | 11014 | Game(游戏通道) | GameProtocol.TableInfo | s2c=1 | 1 | plaintext | code_and_traffic_matched |
| SRS-015 | 1 | 11015 | Game(游戏通道) | game_cli.kTableStateInfo | s2c=2 | 2 | mixed_or_short | code_and_traffic_matched |
| SRS-016 | 1 | 11027 | Game(游戏通道) | GameMProtocol.PlayerStateInfo | s2c=4 | 4 | plaintext | code_and_traffic_matched |
| SRS-017 | 1 | 11073 | Game(游戏通道) | GameProtocol.ReqLeaveRoom | c2s=1 | 1 | - | code_and_traffic_matched |
| SRS-018 | 1 | 11200 | Game(游戏通道) | GameMProtocol.ServerToClientMessage | s2c=1428 | 1428 | plaintext | code_and_traffic_matched |
| SRS-019 | 1 | 11201 | Game(游戏通道) | GameMProtocol.ClientToServerMessage | c2s=672 | 672 | - | code_and_traffic_matched |
| SRS-020 | 1 | 11310 | Game(游戏通道) | GameMProtocol.ReqPlayerConnect2 | c2s=3 | 3 | - | code_and_traffic_matched |
| SRS-021 | 1 | 11311 | Game(游戏通道) | GameMProtocol.RespPlayerConnect2 | s2c=3 | 3 | mixed_or_short | code_and_traffic_matched |
| SRS-022 | 1 | 11321 | Game(游戏通道) | GameMProtocol.RespPlayerDismiss | s2c=1 | 1 | plaintext | code_and_traffic_matched |
| SRS-023 | 1 | 11329 | Game(游戏通道) | GameMProtocol.NotifyPromt | s2c=1 | 1 | plaintext | code_and_traffic_matched |
| SRS-024 | 1 | 11820 | Game(游戏通道) | —(未命名, traffic_only) | s2c=1 | 1 | plaintext | traffic_only |
| SRS-025 | 1 | 50005 | Game(游戏通道) | —(未命名, traffic_only) | s2c=4 | 4 | encrypted | traffic_only |
| SRS-026 | 30 | 24 | Active(活动) | ActiveProtocol.ReqCurTime | c2s=5 | 5 | - | code_and_traffic_matched |
| SRS-027 | 30 | 25 | Active(活动) | ActiveProtocol.RespCurTime | s2c=5 | 5 | plaintext | code_and_traffic_matched |
| SRS-028 | 30 | 42 | Active(活动) | ActiveProtocol.ReqBoxLedger | c2s=10 | 10 | - | code_and_traffic_matched |
| SRS-029 | 30 | 43 | Active(活动) | ActiveProtocol.RespBoxLedger | s2c=10 | 10 | plaintext | code_and_traffic_matched |
| SRS-030 | 62 | 12009 | Tool(工具/玩家信息) | ToolProtocol.ReqPlayerPropsData | c2s=12 | 12 | - | code_and_traffic_matched |
| SRS-031 | 62 | 12010 | Tool(工具/玩家信息) | ToolProtocol.RespPlayerPropsData | s2c=12 | 12 | plaintext | code_and_traffic_matched |
| SRS-032 | 62 | 12011 | Tool(工具/玩家信息) | ToolProtocol.ReqSR | c2s=18 | 18 | - | code_and_traffic_matched |
| SRS-033 | 62 | 12012 | Tool(工具/玩家信息) | ToolProtocol.ResSR | s2c=18 | 18 | plaintext | code_and_traffic_matched |
| SRS-034 | 62 | 12057 | Tool(工具/玩家信息) | ToolProtocol.ClientInfo | c2s=4 | 4 | - | code_and_traffic_matched |
| SRS-035 | 62 | 12061 | Tool(工具/玩家信息) | ToolProtocol.ReqPlayerSimpleInfo | c2s=125 | 125 | - | code_and_traffic_matched |
| SRS-036 | 62 | 12062 | Tool(工具/玩家信息) | ToolProtocol.RespPlayerSimpleInfo | s2c=6 | 6 | plaintext | code_and_traffic_matched |
| SRS-037 | 62 | 12067 | Tool(工具/玩家信息) | ToolProtocol.ReqCheckBindUser | c2s=9 | 9 | - | code_and_traffic_matched |
| SRS-038 | 62 | 12068 | Tool(工具/玩家信息) | ToolProtocol.RespCheckBindUser | s2c=9 | 9 | plaintext | code_and_traffic_matched |
| SRS-039 | 62 | 12069 | Tool(工具/玩家信息) | ToolProtocol.ReqBindUser | c2s=4 | 4 | - | code_and_traffic_matched |
| SRS-040 | 62 | 12070 | Tool(工具/玩家信息) | ToolProtocol.RespBindUser | s2c=4 | 4 | plaintext | code_and_traffic_matched |
| SRS-041 | 62 | 12075 | Tool(工具/玩家信息) | ToolProtocol.ReqPlayerPropsTimeInfo | c2s=4 | 4 | - | code_and_traffic_matched |
| SRS-042 | 62 | 12076 | Tool(工具/玩家信息) | ToolProtocol.RespPlayerPropsTimeInfo | s2c=4 | 4 | plaintext | code_and_traffic_matched |
| SRS-043 | 84 | 11 | Room(房卡房间) | RoomProtocol.ReqCreateTable | c2s=1 | 1 | - | code_and_traffic_matched |
| SRS-044 | 84 | 12 | Room(房卡房间) | RoomProtocol.RespCreateTable | s2c=1 | 1 | plaintext | code_and_traffic_matched |
| SRS-045 | 84 | 15 | Room(房卡房间) | RoomProtocol.ReqPlayerPosition | c2s=17 | 17 | - | code_and_traffic_matched |
| SRS-046 | 84 | 16 | Room(房卡房间) | RoomProtocol.RespPlayerPosition | s2c=17 | 17 | plaintext | code_and_traffic_matched |
| SRS-047 | 84 | 24 | Room(房卡房间) | RoomProtocol.ReqGetGoldRoomInfo | c2s=26 | 26 | - | code_and_traffic_matched |
| SRS-048 | 84 | 25 | Room(房卡房间) | RoomProtocol.RespGetGoldRoomInfo | s2c=26 | 26 | plaintext | code_and_traffic_matched |
| SRS-049 | 92 | 501 | BagSys(背包) | BagSysProtocol.ReqAppidList | c2s=4 | 4 | - | code_and_traffic_matched |
| SRS-050 | 92 | 502 | BagSys(背包) | BagSysProtocol.RespAppidList | s2c=4 | 4 | plaintext | code_and_traffic_matched |
| SRS-051 | 92 | 504 | BagSys(背包) | BagSysProtocol.ReqPlayerConnect | c2s=8 | 8 | - | code_and_traffic_matched |
| SRS-052 | 92 | 505 | BagSys(背包) | BagSysProtocol.RespPlayerConnect | s2c=8 | 8 | plaintext | code_and_traffic_matched |
| SRS-053 | 92 | 506 | BagSys(背包) | BagSysProtocol.ReqKeepAlive | c2s=42 | 42 | - | code_and_traffic_matched |
| SRS-054 | 92 | 507 | BagSys(背包) | BagSysProtocol.RespKeepAlive | s2c=42 | 42 | plaintext | code_and_traffic_matched |
| SRS-055 | 92 | 601 | BagSys(背包) | BagSysProtocol.ReqJoinBoxProp | c2s=4 | 4 | - | code_and_traffic_matched |
| SRS-056 | 92 | 602 | BagSys(背包) | BagSysProtocol.RespJoinBoxProp | s2c=4 | 4 | plaintext | code_and_traffic_matched |
| SRS-057 | 92 | 603 | BagSys(背包) | BagSysProtocol.ReqPropsConfig | c2s=12 | 12 | - | code_and_traffic_matched |
| SRS-058 | 92 | 604 | BagSys(背包) | BagSysProtocol.ResPropsConfig | s2c=12 | 12 | plaintext | code_and_traffic_matched |
| SRS-059 | 92 | 605 | BagSys(背包) | BagSysProtocol.ReqBackpackData | c2s=28 | 28 | - | code_and_traffic_matched |
| SRS-060 | 92 | 606 | BagSys(背包) | BagSysProtocol.RespBackpackData | s2c=28 | 28 | plaintext | code_and_traffic_matched |
| SRS-061 | 100 | 301 | IM(好友/聊天) | IMProtocol.ReqAppidList | c2s=4 | 4 | - | code_and_traffic_matched |
| SRS-062 | 100 | 302 | IM(好友/聊天) | IMProtocol.RespAppidList | s2c=4 | 4 | plaintext | code_and_traffic_matched |
| SRS-063 | 100 | 304 | IM(好友/聊天) | IMProtocol.ReqPlayerConnect | c2s=104 | 104 | - | code_and_traffic_matched |
| SRS-064 | 100 | 305 | IM(好友/聊天) | IMProtocol.RespPlayerConnect | s2c=104 | 104 | plaintext | code_and_traffic_matched |
| SRS-065 | 100 | 306 | IM(好友/聊天) | IMProtocol.ReqKeepAlive | c2s=546 | 546 | - | code_and_traffic_matched |
| SRS-066 | 100 | 307 | IM(好友/聊天) | IMProtocol.RespKeepAlive | s2c=546 | 546 | plaintext | code_and_traffic_matched |
| SRS-067 | 100 | 401 | IM(好友/聊天) | IMProtocol.ReqJoinIM | c2s=4 | 4 | - | code_and_traffic_matched |
| SRS-068 | 100 | 402 | IM(好友/聊天) | IMProtocol.RespJoinIM | s2c=4 | 4 | plaintext | code_and_traffic_matched |
| SRS-069 | 100 | 408 | IM(好友/聊天) | IMProtocol.ReqOpenFriendList | c2s=4 | 4 | - | code_and_traffic_matched |
| SRS-070 | 100 | 413 | IM(好友/聊天) | IMProtocol.ReqFriendList | c2s=8 | 8 | - | code_and_traffic_matched |
| SRS-071 | 100 | 414 | IM(好友/聊天) | IMProtocol.RespFriendList | s2c=8 | 8 | plaintext | code_and_traffic_matched |
| SRS-072 | 100 | 431 | IM(好友/聊天) | IMProtocol.ReqFriendTableList | c2s=1 | 1 | - | code_and_traffic_matched |
| SRS-073 | 100 | 432 | IM(好友/聊天) | IMProtocol.RespFriendTableList | s2c=1 | 1 | plaintext | code_and_traffic_matched |
| SRS-074 | 100 | 457 | IM(好友/聊天) | IMProtocol.ReqAllMessageList | c2s=6 | 6 | - | code_and_traffic_matched |
| SRS-075 | 100 | 458 | IM(好友/聊天) | IMProtocol.RespAllMessageList | s2c=6 | 6 | plaintext | code_and_traffic_matched |
| SRS-076 | 100 | 466 | IM(好友/聊天) | IMProtocol.ReqFriendInfo | c2s=22 | 22 | - | code_and_traffic_matched |
| SRS-077 | 100 | 467 | IM(好友/聊天) | IMProtocol.RespFriendInfo | s2c=22 | 22 | plaintext | code_and_traffic_matched |
| SRS-078 | 100 | 468 | IM(好友/聊天) | IMProtocol.ReqGetApplys | c2s=5 | 5 | - | code_and_traffic_matched |
| SRS-079 | 100 | 469 | IM(好友/聊天) | IMProtocol.RespGetApplys | s2c=5 | 5 | plaintext | code_and_traffic_matched |
| SRS-080 | 113 | 5 | BoxData(比赛场/盒子) | BoxDataProtocol.ReqUserTag | c2s=4 | 4 | - | code_and_traffic_matched |
| SRS-081 | 113 | 6 | BoxData(比赛场/盒子) | BoxDataProtocol.RespUserTag | s2c=4 | 4 | plaintext | code_and_traffic_matched |
| SRS-082 | 113 | 27 | BoxData(比赛场/盒子) | BoxDataProtocol.ReqGetBanInfo | c2s=4 | 4 | - | code_and_traffic_matched |
| SRS-083 | 113 | 28 | BoxData(比赛场/盒子) | BoxDataProtocol.RespGetBanInfo | s2c=4 | 4 | plaintext | code_and_traffic_matched |
| SRS-084 | 113 | 5050 | BoxData(比赛场/盒子) | BoxDataProtocol.TransTo50Data | c2s=67/s2c=67 | 134 | plaintext | code_and_traffic_matched |
| SRS-085 | 113 | 10006 | BoxData(比赛场/盒子) | BoxDataProtocol.ReqTeaHouseInfo | c2s=1 | 1 | - | code_and_traffic_matched |
| SRS-086 | 113 | 10007 | BoxData(比赛场/盒子) | BoxDataProtocol.RespTeaHouseInfo | s2c=1 | 1 | plaintext | code_and_traffic_matched |
| SRS-087 | 116 | 280 | TeaHouse(亲友圈) | —(未命名, traffic_only) | s2c=13 | 13 | plaintext | traffic_only |
| SRS-088 | 116 | 300 | TeaHouse(亲友圈) | TeaHouseProtocol.ReqTeaHouseInfoByPlayerType | c2s=13 | 13 | - | code_and_traffic_matched |
| SRS-089 | 116 | 301 | TeaHouse(亲友圈) | TeaHouseProtocol.RespTeaHouseInfoByPlayerType | s2c=13 | 13 | plaintext | code_and_traffic_matched |
| SRS-090 | 116 | 306 | TeaHouse(亲友圈) | TeaHouseProtocol.ReqServerAppid | c2s=13 | 13 | - | code_and_traffic_matched |
| SRS-091 | 116 | 307 | TeaHouse(亲友圈) | TeaHouseProtocol.RespServerAppid | s2c=13 | 13 | plaintext | code_and_traffic_matched |
| SRS-092 | 116 | 561 | TeaHouse(亲友圈) | —(未命名, traffic_only) | c2s=2 | 2 | - | traffic_only |
| SRS-093 | 116 | 562 | TeaHouse(亲友圈) | —(未命名, traffic_only) | s2c=2 | 2 | plaintext | traffic_only |
| SRS-094 | 116 | 563 | TeaHouse(亲友圈) | —(未命名, traffic_only) | s2c=13 | 13 | plaintext | traffic_only |
| SRS-095 | 116 | 1770 | TeaHouse(亲友圈) | PropsCountNotify | s2c=4 | 4 | encrypted | code_and_traffic_matched |
| SRS-096 | 120 | 3 | Task(任务) | TaskProtocol.ReqTaskPercent | c2s=42 | 42 | - | code_and_traffic_matched |
| SRS-097 | 120 | 4 | Task(任务) | TaskProtocol.RespTaskPercent | s2c=42 | 42 | plaintext | code_and_traffic_matched |
| SRS-098 | 120 | 11 | Task(任务) | TaskProtocol.ReqTaskProtocol | c2s=60 | 60 | - | code_and_traffic_matched |
| SRS-099 | 120 | 12 | Task(任务) | TaskProtocol.RespTaskProtocol | s2c=60 | 60 | plaintext | code_and_traffic_matched |
| SRS-100 | 1006 | 25100 | MatchLink(匹配链接) | MatchLinkProtocol.ReqJoin | c2s=79 | 79 | - | code_and_traffic_matched |
| SRS-101 | 1006 | 25101 | MatchLink(匹配链接) | MatchLinkProtocol.RespJoin | s2c=79 | 79 | mixed_or_short | code_and_traffic_matched |
| SRS-102 | 1006 | 25110 | MatchLink(匹配链接) | MatchLinkProtocol.ReqGetOrSetHead | c2s=4 | 4 | - | code_and_traffic_matched |
| SRS-103 | 1006 | 25111 | MatchLink(匹配链接) | MatchLinkProtocol.RespGetOrSetHead | s2c=4 | 4 | mixed_or_short | code_and_traffic_matched |
| SRS-104 | 1006 | 25115 | MatchLink(匹配链接) | MatchLinkProtocol.ReqStopSvrMsg | c2s=4 | 4 | - | code_and_traffic_matched |
| SRS-105 | 1006 | 25116 | MatchLink(匹配链接) | MatchLinkProtocol.RespStopSvrMsg | s2c=4 | 4 | mixed_or_short | code_and_traffic_matched |
| SRS-106 | 1147 | 1 | Pyrrla(金币场匹配,protobuf) | PlayerJoinRequest | c2s=4 | 4 | - | code_and_traffic_matched |
| SRS-107 | 1147 | 2 | Pyrrla(金币场匹配,protobuf) | PlayerJoinReply | s2c=4 | 4 | encrypted | code_and_traffic_matched |
| SRS-108 | 1147 | 7 | Pyrrla(金币场匹配,protobuf) | GameNotify | s2c=4 | 4 | plaintext | code_and_traffic_matched |
| SRS-109 | 1147 | 10 | Pyrrla(金币场匹配,protobuf) | CostNotify | s2c=5 | 5 | encrypted | code_and_traffic_matched |
| SRS-110 | 1147 | 22 | Pyrrla(金币场匹配,protobuf) | GoldPlayerInfoRequest | c2s=2 | 2 | - | code_and_traffic_matched |
| SRS-111 | 1147 | 23 | Pyrrla(金币场匹配,protobuf) | GoldPlayerInfoReply | s2c=2 | 2 | plaintext | code_and_traffic_matched |

## 4. 金币场连续调度语义（实测结论）

s06 实机金币场为 MatchLink 连续调度: MatchLinkProtocol.ReqJoin(30s周期入队/保活,proc1006) -> 撮合后进桌(GameMProtocol proc1 通道, 47.96.0.227:7777) -> 4 完整对局(每局 msgStartGame(513)->...->msgHu(541)->msgEndResult(549)->msgResult(1026)->msgEndGame(514)) -> 局间回到匹配流继续 ReqJoin。 DispatchProtocol(proc147 队列4-8) 全场景 0 帧 = 旧链路 code_only。

证据：timeline_s06_phone_gold_ingame.json: msgStartGame@169.8/531.1/813.0/1142.1(相对首包秒), 每局结束 msgEndResult+msgResult+msgEndGame; 匹配流(5701/5723) ReqJoin/RespJoin 46对, ~30s 周期

## 5. protobuf 通道

- proc=1147（roommatch_cli，帧 flag=0x80）：PlayerJoinRequest/Reply、GameNotify、CostNotify、GoldPlayerInfoRequest/Reply 等；消息体 protobuf 明文，定义见 `protocol_index_full.json protobuf_messages`（743 条）。
- proc=116（nyx_client，newgold 亲友圈）：含未收录消息 (116,280)/(116,561)/(116,562)/(116,563)，同样为 protobuf 明文，代码侧未检索到命名定义。

## 6. HTTPS 域名全景（48 个 SNI）

| 域名 | 分类 | 场景 | 流数 | 字节 | 说明 |
|---|---|---|---|---|---|
| gxb-oss.imeete.com | cdn | s06 | 65 | 20925072 | 热更文件 CDN（imeete 线）：/other/files/；s06 最大流量源（65 流 20.9MB） |
| gxb-oss.hzxuanming.com | cdn | s06 | 65 | 5602651 | 热更文件 CDN（阿里 OSS 线）：/yj/files/ 下按 manifest 拉 zip/资源 |
| v4-lm.adukwai.com | third_party | s06 | 1 | 3005906 | 快手广告监测 |
| hz-hylas.mengyoutech.com | first_party | s02,s03,s04,s06 | 179 | 1428578 | 金币场（5.0）业务后台 First_Url_50：nyx/* 活动、rhea 道具、hermes 邮件、auth/getWebToken 金币场 token |
| shiming.hzxuanming.com | first_party | s02,s03,s06 | 5 | 1161731 | 商城钻石列表 + 旧实名认证 |
| wechat.hzxuanming.com | first_party | s02,s03,s04,s06 | 19 | 478606 | 商城/兑换/奖励中心/规则文档/注销，JWT 直连域（GoldUrlConf.JwtToken_Url） |
| te.hzxuanming.com | first_party | s01,s02,s03,s04,s06 | 37 | 375973 | 数数科技 ThinkingData 私有化统计上抛 |
| sluice.imeete.com | first_party | s02,s03,s06 | 40 | 248604 | imeete 发行 SDK 基础设施（未见于 Lua，疑限流/调度网关），native 层 |
| transit.hzxuanming.com | first_party | s02,s03,s04,s06 | 35 | 227214 | First_Url 主入口：token 签发 /auth/get-token 与 palmapi/gopalmapi/apihub/act/exchangeshop 业务代理 |
| thirdwx.qlogo.cn | third_party | s02,s03,s06 | 24 | 214230 | 微信头像 CDN（登录后拉微信头像） |
| api-access.pangolin-sdk-toutiao-b.com | third_party | s02 | 1 | 184896 | 穿山甲广告 SDK API（b 域） |
| open.e.kuaishou.com | third_party | s02,s03 | 7 | 131665 | 快手广告 SDK |
| gxb-cos.hzxuanming.com | cdn | s06 | 2 | 111570 | 热更文件 CDN（腾讯 COS 备用）：/yj/files/ |
| gxb-api.imeete.com | first_party | s01,s03,s04,s06 | 17 | 109334 | 热更版本查询 API（imeete 发行线，appid=1051&channel=7128） |
| gxb-api-tx.imeete.com | first_party | s01,s02,s03,s06 | 15 | 88699 | 热更版本查询 API 腾讯备用（imeete 线） |
| gxb-monitor.hzxuanming.com | first_party | s01,s02,s03,s04,s06 | 12 | 73519 | 热更成功率监控上报 /monitor |
| plugin-res.imeete.com | cdn | s02,s03,s06 | 12 | 71729 | imeete 发行 SDK 插件资源下载（未见于 Lua），native 层 |
| gxb-api-tx.hzxuanming.com | first_party | s01,s02,s03,s04,s06 | 12 | 68391 | 热更版本查询 API 的腾讯线路备用域（同上 manifest 内嵌） |
| gxb-monitor.imeete.com | first_party | s02,s03,s04,s06 | 10 | 60966 | 热更监控（imeete 线）/monitor |
| webact.tt2kj.com | first_party | s02,s03,s04,s06 | 5 | 57684 | 邀请/裂变等活动后台（UrlConf.URL_GET_ACT；TopOn 体系合作域名） |
| p66-ad.adkwai.com | third_party | s06 | 1 | 48535 | 快手广告 |
| dh-api.imeete.com | first_party | s01,s02,s03,s04 | 10 | 46683 | dhsdk（设备/数据统计 SDK）上报；Lua 中 host 定义为 dh-api.hzxuanming.com，imeete 为发行变体 |
| gxb-api.hzxuanming.com | first_party | s01,s02,s03,s04,s06 | 9 | 46677 | 热更版本查询 API（/hotfix_update?env=1&appid=1073&engine_ver=3.13&channel=20001828&version=...） |
| confapi.mychuguan.com | first_party | s06 | 11 | 44685 | 配置中心：md5_list 比对 + file_info 拉取配置（大厅/玩法配置下发） |
| fcm.bflyhd.cn | first_party | s02,s03,s04,s06 | 7 | 39698 | 新实名认证（防沉迷 fcm） |
| img1-cdn.bianfeng.com | cdn | s06 | 1 | 37424 | 边锋图片 CDN（s06 单流，头像/素材图），发行方资源域 |
| lua1.xqddz.cn | third_party | s06 | 3 | 36259 | 未知第三方域（s06 真机，疑似设备上其他应用，目标 App 代码无引用） |
| adx.anythinktech.com | third_party | s02,s03 | 2 | 31454 | TopOn 聚合广告 ADX |
| gopalmapi.hzxuanming.com | first_party | s02,s03,s06 | 4 | 28071 | 联运游戏中心配置 / 防沉迷游玩管理 |
| sdk-config.imeete.net | first_party | s01,s02,s03,s06 | 6 | 27185 | imeete 发行 SDK 配置下发（未见于 Lua），native 层 |
| mumu.nie.netease.com | capture_artifact | s01,s03,s04 | 4 | 25173 | MuMu 模拟器自身流量（非目标 App） |
| bfas.bianfeng.com | first_party | s01,s03,s06 | 4 | 24873 | 边锋数据抛送（UrlConf 中定义为 bfas.hzxuanming.com/v2/client，抓包为 bianfeng.com 变体） |
| api-pro.mumu.163.com | capture_artifact | s03,s04 | 4 | 23101 | MuMu 模拟器自身 API（非目标 App） |
| adx-bj.anythinktech.com | third_party | s06 | 1 | 22395 | TopOn ADX 北京 |
| palmapi.hzxuanming.com | first_party | s02,s06 | 4 | 22199 | 手机验证码登录/绑定（spark/phone/login/*）+ H5 联运入口 |
| android.bugly.qq.com | third_party | s02,s03 | 2 | 14996 | 腾讯 Bugly 崩溃上报（app/Third/Bugly） |
| adx-bj-req.anythinktech.com | third_party | s06 | 1 | 14424 | TopOn ADX 请求 |
| adservice.sigmob.cn | third_party | s02 | 1 | 11386 | Sigmob 广告服务 |
| api-access.pangolin-sdk-toutiao.com | third_party | s02 | 22 | 11374 | 穿山甲广告 SDK API |
| api.anythinktech.com | third_party | s02 | 1 | 11154 | TopOn SDK API |
| toblog.ctobsnssdk.com | third_party | s02 | 2 | 10391 | 火山引擎应用日志（穿山甲依赖） |
| dc.sigmob.cn | third_party | s02 | 1 | 10343 | Sigmob 数据中心 |
| sf6-fe-tos.pglstatp-toutiao.com | third_party | s02 | 1 | 8877 | 穿山甲素材 TOS |
| shence.netease.com | third_party | s01 | 1 | 8383 | 网易域统计端点（s01 单流） |
| sdk-config.imeete.com | first_party | s06 | 1 | 7045 | 同上（.com 变体，仅 s06 真机出现 1 流） |
| tnc3-bjlgy.zijieapi.com | third_party | s02 | 1 | 6752 | 字节 TNC 配置 |
| open.kuaishouzt.com | third_party | s02 | 1 | 5835 | 快手广告（中天） |
| api.nanbeiyule.com | capture_artifact | s01 | 1 | 5775 | 抓包环境内其他应用流量（目标 App 全部 Lua/配置无 nanbeiyule 引用） |

## 7. 手机验证码/登录 HTTP 端点组（HTTPS 密文，参数与签名已从 Lua 完整恢复）

- 结论：HTTPS 密文，仅 SNI 可见（palmapi.hzxuanming.com）；完整参数与签名逻辑已从 Lua 恢复
- send_code_old：`https://palmapi.hzxuanming.com/spark/phone/login/send/code/msg (UrlConf.lua:114, isNew=false)`
- send_code_new：`https://palmapi.hzxuanming.com/spark/phone/login/send-code (UrlConf.lua:115, isNew=true)`
- login_old：`https://palmapi.hzxuanming.com/spark/phone/login/pwd/get (UrlConf.lua:116)`
- login_new：`https://palmapi.hzxuanming.com/spark/phone/login/check-code (UrlConf.lua:117)`
- 方法/body：POST, application/x-www-form-urlencoded body
- 参数：app_id, areaid, auto_reg(仅 isNew), lobbyid, phone, type(登录=pwd_get / 绑定=bind), timestamp, wid, signature
- 签名逻辑：`signature = md5("app_id="+appId+"areaid="+areaID+[+"auto_reg=0"]+"lobbyid="+lobbyID+"phone="+phone+"timestamp="+ts+"type="+type+"wid="+windID+appKey)；key 按字典序无分隔符拼接，末尾直接追加 appKey`

## 8. 仅代码存在、抓包未出现的 HTTP 端点（14 条）

- `https://palmstatic.hzxuanming.com/Download/Rule` — tools/luau8/lua-src-apk/app/Config/UrlConf.lua:55 — REQ_GAME_RULE_IMAGE 规则图（抓包未出现）
- `https://palmstatic.imeete.com/Download/avatar/newgold/%d.png` — tools/luau8/hotfix-decrypted/src/lobby/Modules/GoldNew/SubModules/PersonalCenter/Config.lua:9 — 金币场头像 CDN
- `https://api.hzxuanming.com/iplooker/dat/find?` — tools/luau8/lua-src-apk/app/Config/UrlConf.lua:59 — REQ_IS_FOREIGN_IP 海外网络判断
- `https://wechatapi.hzxuanming.com/api/agent/bind_from_aid? 等 4 条` — tools/luau8/hotfix-decrypted/src/app/Config/UrlConf.lua:86 — 代理绑定/解绑/查询
- `https://act.hzxuanming.com/hmq_share_send/getAward? 等` — tools/luau8/hotfix-decrypted/src/app/Config/UrlConf.lua:99 — 杭麻圈分享/砍价/迁移活动
- `https://bfas.hzxuanming.com/v2/client` — tools/luau8/hotfix-decrypted/src/app/Config/UrlConf.lua:102 — 数据抛送（抓包中为 bfas.bianfeng.com 变体）
- `https://trade.hzxuanming.com/v2/trade/order` — tools/luau8/hotfix-decrypted/src/app/Config/UrlConf.lua:112 — 车载 H5 支付
- `https://kf.kkwan.cc/?` — tools/luau8/hotfix-decrypted/src/app/Config/UrlConf.lua:83 — 客服 H5
- `https://hegui.bflyhd.cn/` — tools/luau8/hotfix-decrypted/src/app/Config/UrlConf.lua:107 — 合规入口
- `https://downloadpage.bfnbgame.com/zhanlong/crm/clientConfig.json?` — tools/luau8/hotfix-decrypted/src/app/Config/UrlConf.lua:109 — 客服配置下载
- `https://hw-confapi.mychuguan.com:4445/config_data/md5_list 等` — tools/luau8/hotfix-decrypted/src/app/Config/UrlConf.lua:12 — 海外（KW_DATA_IS_ABROAD_SRS）配置中心变体
- `https://hw-sibyl.mengyoutech.com:4446/` — tools/luau8/hotfix-decrypted/src/app/Config/UrlConf.lua:125 — 海外金币场变体
- `https://bj-sibyl.mengyoutech.com/hacaba/VIPConfig 等` — tools/luau8/hotfix-decrypted/src/lobby/Req/Sxvip/ReqSxvipConfig.lua:26 — 北京区 sxvip 直连
- `https://webactivity.imeete.com/lswelfareredpacket/* 等` — tools/luau8/hotfix-decrypted/src/GameCommon/Code/GameTeaBusiness/CellReqRedbox.lua:5 — 丽水茶馆红包活动

## 9. 明文 HTTP（78 条，全部第三方 SDK）

明细见 `step2/http_endpoints.json plaintext_http`。构成：个推配置、搜狐 cityjson、微信 mmtls、快手直播 SDK HTTPDNS 群；目标 App 自身业务接口正式包全部走 HTTPS，抓包中无明文业务请求。

## 10. 仅代码存在的 SRS 二进制消息（301 条，按模块汇总）

| 模块 | 条数 |
|---|---|
| Game(游戏通道) | 56 |
| IM(好友/聊天) | 48 |
| Tool(工具/玩家信息) | 35 |
| TeaHouse(亲友圈) | 34 |
| Active(活动) | 26 |
| GameGT | 23 |
| BoxData(比赛场/盒子) | 22 |
| Mail(邮件) | 12 |
| MatchLink(匹配链接) | 12 |
| Dispatch(二进制调度) | 9 |
| BagSys(背包) | 8 |
| Task(任务) | 8 |
| Room(房卡房间) | 5 |
| unknown | 2 |
| Auth | 1 |

要点：DispatchProtocol（proc147，调度队列 4-8）为旧金币调度链路，已被 MatchLinkProtocol（proc1006）取代，全场景 0 帧；完整清单见 `step2/api_endpoints.json code_only_group`。
