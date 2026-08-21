#!/usr/bin/env python3
"""Phase 2 最终产物总装：field_alignments / protocol_map / traffic_alignment / api_endpoints(并HTTP)。
纯读取 step2 已有产物 + 解码结果，不触碰 pcap。"""
import json
import collections

BASE = '/Users/mosc/Downloads/ZJYX/浙江游戏大厅/traffic-analysis/step2'

api = json.load(open(BASE + '/api_endpoints.json'))
http = json.load(open(BASE + '/http_endpoints.json'))
idx = json.load(open(BASE + '/protocol_index_full.json'))
match_sets = json.load(open(BASE + '/match_sets.json'))

ks_all = {}
dec_all = {}
for scene in ('s02_login', 's03_lobby', 's04_createroom', 's06_phone_gold_ingame'):
    try:
        ks_all[scene] = json.load(open(BASE + '/keystreams_%s.json' % scene))
        dec_all[scene] = json.load(open(BASE + '/messages_decrypted_%s.json' % scene))
    except FileNotFoundError:
        pass

# ---------- 1. field_alignments.json ----------
F454 = '10.215.173.1:45430-47.96.0.227:7777'
F792 = '10.215.173.1:44792-47.96.0.227:7777'
F723 = '10.215.173.1:41104-47.97.154.79:5723'

field_alignments = {
    'srs_frame_format': {
        'header': '[dir:1B][flag:1B=0x40|0x80][len:u16le][xy:u16le][proc:u16le][appid:u32le] 12字节',
        'dir': '1=c2s, 0=s2c',
        'flag': '0x40=常规帧; 0x80=protobuf通道帧(proc 1147 roommatch_cli / 116 nyx_client)',
        'len': '帧体长度(不含12字节头)',
        'appid': '服务端模块 appid(如大厅 9427); 上行通常为 0',
        'body_cipher': '帧体 = 明文 XOR keystream; keystream 每连接一份、双向共用、每帧从偏移0重置; s2c proc!=0 不加密',
        'handshake': 'c2s xy=1 len=4 body=fa60a522(固定魔数,服务端xy=1回显) -> c2s xy=3 len=0 -> s2c xy=4 len=17/33(密钥材料,native生成) -> c2s xy=5 PlayerConnect -> s2c xy=6 PlayerData',
        'evidence': [
            's06_phone_gold_ingame.pcap flow %s: 286次 IMProtocol.ReqKeepAlive 密文恒定为 88732abe(同连接同明文同密文->流密钥逐帧重置)' % F723,
            's06 flow %s: c2s msgPlay 与 s2c msgPlay 广播 17/17 对赌一致 -> ks[4]=0x88,ks[5]=0x91' % F454,
            's06 flow %s: RespSRSAddr(proc0,xy15) 用 c2s 同 ks 解出 nAppID=9428+u8len+IP字符串 -> 双向共用同一 keystream' % F723,
            'frame_report.json: 全部 6167 帧仅 s06_srs_7777.c2s.bin@502 一处 resync(PCAPdroid 丢包缺口)',
        ],
        'lua_ref': 'lua-src-apk/app/Net/TcpConnection.lua:9-25 (un.network.TcpConnection native 封装); 加解密在 libcocos2dlua.so 内',
    },
    'confirmed_field_decodes': [
        {
            'message': 'SRSProtocol.PlayerConnect (proc0,xy5,c2s,len80)',
            'fields': {'clienttype_u8': 2, 'usertype_u8': 7, 'areaid_u32le': 7109},
            'field_note': 'usertype=7=SESSION 自动重登; 4 条连接解码一致',
            'traffic_evidence': 's06_phone_gold_ingame.pcap flow %s stream_offset=28, dec_hex=0207c51b0000(前6字节,ks覆盖6)' % F454,
            'code_ref': 'hotfix-decrypted/src/app/Protocols/SRSProtocol.lua:32 (writeUInt8 clienttype/writeUInt8 usertype/writeUInt32 areaid...)',
            'confidence': 'confirmed',
        },
        {
            'message': 'SRSProtocol.PlayerData (proc0,xy6,s2c)',
            'fields': {'flag_u8': 0, 'areaid_i32le': 7109},
            'field_note': 'flag=0 登录成功; areaid 与 PlayerConnect 一致',
            'traffic_evidence': 's06 flow %s xy=6 帧, ks 覆盖前6字节' % F454,
            'code_ref': 'hotfix-decrypted/src/app/Protocols/SRSProtocol.lua:150',
            'confidence': 'partial(仅前6字节,后续 nickname/sessionid 未覆盖)',
        },
        {
            'message': 'SRSProtocol.RespSRSAddr (proc0,xy15,s2c)',
            'fields': {'nAppID_u16le': [9428, 9200, 9254, 9201, 5321, 5319, 5320, 9253, 9427], 'strlen_u8': [12, 14]},
            'field_note': '模块地址簿应答; writeString=u8长度前缀+字节(由本消息与 TaskProtocol.RespTaskProtocol 双重实证)',
            'traffic_evidence': 's06 flow %s 9帧 dec 前3字节' % F723,
            'code_ref': 'hotfix-decrypted/src/app/Protocols/SRSProtocol.lua:516',
            'confidence': 'confirmed(nAppID/strlen); IP 字符段 ks 未扩展, unknown',
        },
        {
            'message': 'GameMProtocol.ClientToServerMessage (proc1,xy11201,c2s) 包头',
            'fields': {'cmdid_u16le': '见 gamem_cmd 分布(22=msgBaseClientForwardEx×374, 521=msgEndWait×197, 539=msgPlay×17, 543=msgAction×4, 1028=msgSpeak×4)', 'msglen_u16le': '= len(body)-4'},
            'traffic_evidence': 's06 flow %s 610帧, msglen 锚点 0 冲突' % F454,
            'code_ref': 'hotfix-decrypted/src/game/Common/Protocols/GameMProtocol.lua:297 (writeUInt16 cmdid/writeUInt16 msglen/write message)',
            'confidence': 'confirmed',
        },
        {
            'message': 'GameProtocol.msgPlay (cmdid=539) 出牌',
            'fields': {'nSeat_u8': '2(第1局)/3(后续局,换桌换座)', 'nMah_u8': [66, 52, 25, 22, 19, 81], 'nActionID_i32': 'ks未覆盖'},
            'traffic_evidence': 's06 flow %s 17帧; 每帧 nSeat/nMah 与紧随的 s2c msgPlay 广播逐字节一致(17/17)' % F454,
            'code_ref': 'hotfix-decrypted/src/game/Mahjong/BasicMahjong/Protocols/GameProtocol.lua:840',
            'confidence': 'confirmed',
        },
        {
            'message': 'GameProtocol.msgAction (cmdid=543) 吃碰杠',
            'fields': {'nSeat_u8': [2, 3], 'tComb.nFlag_u8': [1, 2]},
            'traffic_evidence': 's06 flow %s 4帧 dec 前6字节' % F454,
            'code_ref': 'hotfix-decrypted/src/game/Mahjong/BasicMahjong/Protocols/GameProtocol.lua:941',
            'confidence': 'confirmed(前两字段); nFromSeat/nCount/nMahs 未覆盖',
        },
        {
            'message': 'MatchLinkProtocol.ReqJoin (proc1006,xy25100,c2s,len16) / RespJoin(xy25101)',
            'fields': {'askid_i32le': 0, 'areaid/numid/matchlistappid': 'ks仅覆盖前4字节,unknown'},
            'field_note': '金币场匹配入队/保活, 30秒周期; RespJoin 明文回显 askid=0',
            'traffic_evidence': 's06 flow %s 46帧 c2s 密文恒定 88732abe46a75cc1..., ks=88732abe -> askid=0' % F723,
            'code_ref': 'hotfix-decrypted/src/app/Protocols/MatchLinkProtocol.lua:144(Req)/170(Resp)',
            'confidence': 'confirmed(askid); 其余字段 unknown',
        },
        {
            'message': 'RoomProtocol.ReqGetGoldRoomInfo (proc84,xy24) / RespGetGoldRoomInfo(xy25)',
            'fields': {'askid_i32le': '1..24 递增', 'size_i32le': 0},
            'traffic_evidence': 's06 flow %s 24对; 24/24 对回显一致 -> ks=9deab9f1' % F792,
            'code_ref': 'hotfix-decrypted/src/app/Protocols/RoomProtocol.lua:555(Req)/579(Resp)',
            'confidence': 'confirmed',
        },
        {
            'message': 'IMProtocol.ReqKeepAlive (proc100,xy306) / ReqPlayerConnect(xy304)',
            'fields': {'askid_i32le': 0},
            'traffic_evidence': 's06 flow %s 286帧密文恒定 88732abe; 与 RespKeepAlive/RespPlayerConnect 回显交叉一致' % F723,
            'code_ref': 'hotfix-decrypted/src/app/Protocols/IMProtocol.lua:283/245',
            'confidence': 'confirmed',
        },
        {
            'message': 'TaskProtocol.RespTaskProtocol (proc120,xy12,s2c,明文)',
            'fields': {'nAskId_i32le': 1030, 'nAreaTypeId_i32le': 934, 'nProtoId_i32le': 0, 'acData_string': '[]'},
            'traffic_evidence': 's03_lobby.pcap 明文帧 body=06040000a603000000000000025b5d (u8 strlen 实证)',
            'code_ref': 'hotfix-decrypted/src/app/Protocols/TaskProtocol.lua:228',
            'confidence': 'confirmed',
        },
    ],
    'gold_dispatch_semantics': {
        'conclusion': 's06 实机金币场为 MatchLink 连续调度: MatchLinkProtocol.ReqJoin(30s周期入队/保活,proc1006) -> 撮合后进桌(GameMProtocol proc1 通道, 47.96.0.227:7777) -> 4 完整对局(每局 msgStartGame(513)->...->msgHu(541)->msgEndResult(549)->msgResult(1026)->msgEndGame(514)) -> 局间回到匹配流继续 ReqJoin。 DispatchProtocol(proc147 队列4-8) 全场景 0 帧 = 旧链路 code_only。',
        'evidence': 'timeline_s06_phone_gold_ingame.json: msgStartGame@169.8/531.1/813.0/1142.1(相对首包秒), 每局结束 msgEndResult+msgResult+msgEndGame; 匹配流(5701/5723) ReqJoin/RespJoin 46对, ~30s 周期',
        'note': '与仓库 AGENTS.md 约定一致: 金币场一次性牌桌, 结算后重新匹配; 非房卡 NEXT_ROUND 模型',
    },
}
json.dump(field_alignments, open(BASE + '/field_alignments.json', 'w'), ensure_ascii=False, indent=1)

# ---------- 2. protocol_map.json ----------
protocol_map = {
    'auth_fields': [
        {
            'field': 'PlayerConnect.userid/pwd(session)',
            'field_role': 'token',
            'location': 'body',
            'source_type': 'storage',
            'builder_path': '本地 SESSION 存储 -> SRSProtocol.PlayerConnect.usertype=7 + writeString(userid)/writeString(pwd=session) -> IStream -> native XOR -> TCP',
            'value_shape': 'string(u8len前缀)',
            'source_file': 'hotfix-decrypted/src/app/Protocols/SRSProtocol.lua',
            'source_line': 32,
            'related_endpoint_group': 'SRS-AUTH',
            'replay_relevant': True,
            'related_endpoints': ['SRS(xy=5,proc=0)'],
            'notes': 'usertype=7 已经流量确认; userid/session 字符串段 ks 未覆盖, 值未提取',
        },
        {
            'field': 'PlayerData.sessionid',
            'field_role': 'token',
            'location': 'body',
            'source_type': 'function_return',
            'builder_path': '服务端下发 PlayerData.write(sessionid,16) -> 客户端存储 -> 后续重登使用',
            'value_shape': '16字节原始',
            'source_file': 'hotfix-decrypted/src/app/Protocols/SRSProtocol.lua',
            'source_line': 150,
            'related_endpoint_group': 'SRS-AUTH',
            'replay_relevant': True,
            'related_endpoints': ['SRS(xy=6,proc=0)'],
            'notes': 'ks 覆盖不足未解码; 字段位置由代码确认',
        },
        {
            'field': 'askid',
            'field_role': 'nonce',
            'location': 'body',
            'source_type': 'function_return',
            'builder_path': 'XH.askIDManager:getAskID() (ReqProtocol.lua:7) -> 每个 Req*.writeInt32(askid) 首字段 -> 响应回显匹配',
            'value_shape': 'int32 递增',
            'source_file': 'lua-src-apk/app/Base/Req/ReqProtocol.lua',
            'source_line': 7,
            'related_endpoint_group': 'SRS-ALL',
            'replay_relevant': False,
            'related_endpoints': ['全部 SRS Req/Resp 对'],
            'notes': '流量确认: ReqGetGoldRoomInfo askid 1..24 递增; ReqJoin/KeepAlive askid=0(无回调型)',
        },
    ],
    'signature_fields': [
        {
            'field': 'signature',
            'field_role': 'sign',
            'location': 'body',
            'input_fields': ['app_id', 'areaid', 'auto_reg(仅isNew)', 'lobbyid', 'phone', 'timestamp', 'type', 'wid', 'appKey(盐,拼接末尾)'],
            'input_order_hint': ['app_id', 'areaid', 'auto_reg', 'lobbyid', 'phone', 'timestamp', 'type', 'wid', '+appKey'],
            'source_type': 'function_return',
            'builder_path': 'ReqPhoneVerificationCode:start -> 拼接 signatureStr(无分隔符直拼) -> un.md5Encode(signatureStr) -> tHttpInfo 表单参数 signature -> RequestPost(palmapi)',
            'crypto_entry_candidate': 'un.md5Encode (native, libcocos2dlua.so; 算法为标准MD5,可离线复算)',
            'value_shape': 'hex(32)',
            'source_file': 'lua-src-apk/login/Req/PhoneLogin/ReqPhoneVerificationCode.lua',
            'source_line': 22,
            'related_endpoint_group': 'HTTP-AUTH-PHONE',
            'related_native_candidate': True,
            'replay_relevant': True,
            'related_endpoints': ['HTTP-PHONE-001', 'HTTP-PHONE-002'],
            'notes': 'old路径(UrlConf.lua:121)签名串无 auto_reg; new路径(:122)含 auto_reg=0; appKey=XH.areaData:getPhoneloginAppKey()(区域配置下发)',
        },
        {
            'field': 'signature(手机验证码登录)',
            'field_role': 'sign',
            'location': 'body',
            'input_fields': ['app_id', 'areaid', 'auto_reg', 'code', 'lobbyid', 'phone', 'timestamp', 'wid', 'appKey'],
            'input_order_hint': ['app_id', 'areaid', 'auto_reg', 'code', 'lobbyid', 'phone', 'timestamp', 'wid', '+appKey'],
            'source_type': 'function_return',
            'builder_path': 'ReqPhoneLogin:start -> signatureStr -> un.md5Encode -> signature -> RequestPost(REQ_VERIFICATION_PHONE_PWD_1/2)',
            'crypto_entry_candidate': 'un.md5Encode',
            'value_shape': 'hex(32)',
            'source_file': 'lua-src-apk/login/Req/PhoneLogin/ReqPhoneLogin.lua',
            'source_line': 17,
            'related_endpoint_group': 'HTTP-AUTH-PHONE',
            'related_native_candidate': True,
            'replay_relevant': True,
            'related_endpoints': ['HTTP-PHONE-003', 'HTTP-PHONE-004'],
        },
        {
            'field': 'sign(通用 HTTP 参数签名)',
            'field_role': 'sign',
            'location': 'query',
            'input_fields': ['全部请求参数(键排序,k=v 以 & 连接,空串跳过)'],
            'input_order_hint': ['table.sort(keys) 字典序'],
            'source_type': 'function_return',
            'builder_path': 'url.generate 组装 -> url.sign(params) 键排序拼接 -> un.sign(strParams) -> 注入请求',
            'crypto_entry_candidate': 'un.sign (native, libcocos2dlua.so; 算法未确认, 疑似 HMAC/MD5 变体)',
            'value_shape': 'unknown(HTTPS 密文未见样本)',
            'source_file': 'lua-src-apk/app/hotupdate/universe/Url.lua',
            'source_line': 56,
            'related_endpoint_group': 'HTTP-BUSINESS',
            'related_native_candidate': True,
            'replay_relevant': True,
            'related_endpoints': ['transit.hzxuanming.com 业务接口群'],
            'notes': 'HTTPS 密文, 无流量样本; un.sign 为 Phase 3 native 目标',
        },
    ],
    'endpoint_parameter_map': [
        {'endpoint_id': 'HTTP-PHONE-001/002', 'parameter': p, 'field_role': r, 'location': 'body',
         'source_type': s, 'builder_path': b, 'value_shape': v,
         'source_file': 'lua-src-apk/login/Req/PhoneLogin/ReqPhoneVerificationCode.lua', 'source_line': 5,
         'participates_in_signature': True, 'participates_in_encryption': False,
         'crypto_entry_candidate': 'un.md5Encode', 'related_native_candidate': False}
        for p, r, s, b, v in [
            ('app_id', 'business_parameter', 'constant', 'XH.areaData:getPhoneloginAppID() -> body.app_id', 'int'),
            ('areaid', 'business_parameter', 'constant', 'XH.areaData:getAreaID() -> body.areaid', 'int(台州=7109,SRS 流量证实)'),
            ('lobbyid', 'business_parameter', 'constant', 'XH.areaData:getLobbyID() -> body.lobbyid', 'int'),
            ('phone', 'business_parameter', 'user_input', 'View 输入 -> start(type,phone,...) -> body.phone', '11位手机号'),
            ('type', 'business_parameter', 'constant', '登录=pwd_get/绑定=bind', 'string'),
            ('timestamp', 'timestamp', 'function_return', 'os.time() -> body.timestamp + 参与签名', 'unix秒'),
            ('wid', 'device_binding', 'constant', 'XH.areaData:getAreaWindID() -> body.wid', 'int'),
            ('signature', 'sign', 'function_return', 'md5(直拼+appKey) -> body.signature', 'hex(32)'),
        ]
    ] + [
        {'endpoint_id': 'SRS-GAMEM', 'parameter': 'cmdid/msglen', 'field_role': 'business_parameter',
         'location': 'body', 'source_type': 'function_return',
         'builder_path': '游戏内消息 -> GameMProtocol.ClientToServerMessage.writeUInt16(cmdid)+writeUInt16(msglen)+write(message) -> native XOR',
         'value_shape': 'u16le+u16le', 'source_file': 'hotfix-decrypted/src/game/Common/Protocols/GameMProtocol.lua',
         'source_line': 297, 'participates_in_signature': False, 'participates_in_encryption': True,
         'crypto_entry_candidate': 'un.network.TcpConnection native XOR', 'related_native_candidate': True},
    ],
    'crypto_code_locations': [
        {
            'endpoint_id': 'SRS-ALL',
            'field': 'frame_body',
            'field_role': 'encryptData',
            'function': 'un.network.TcpConnection.sendMessage/_onMsg (native 加解密)',
            'builder_path': 'IStream 序列化 -> native XOR(keystream 每连接/双向共用/逐帧重置) -> TCP; 密钥材料由 s2c xy=4 帧(17/33B)下发, 派生算法在 native',
            'value_shape': 'xor_stream',
            'source_file': 'lua-src-apk/app/Net/TcpConnection.lua',
            'source_line': 12,
            'jni_related': True,
            'related_native_candidate': 'libcocos2dlua.so un.network.TcpConnection',
            'related_endpoint_group': 'SRS-ALL',
            'notes': '本阶段已从流量恢复全部主连接 keystream 前4-6字节并完成字段级解码; 完整密钥派生算法留 Phase 3',
        },
        {
            'endpoint_id': 'HTTP-PHONE-001',
            'field': 'signature',
            'field_role': 'sign',
            'function': 'un.md5Encode',
            'builder_path': 'signatureStr 直拼 -> un.md5Encode -> body.signature',
            'value_shape': 'hex(32)',
            'source_file': 'lua-src-apk/login/Req/PhoneLogin/ReqPhoneVerificationCode.lua',
            'source_line': 22,
            'jni_related': True,
            'related_native_candidate': 'libcocos2dlua.so un.md5Encode(标准MD5)',
            'related_endpoint_group': 'HTTP-AUTH-PHONE',
        },
        {
            'endpoint_id': 'HTTP-BUSINESS',
            'field': 'sign',
            'field_role': 'sign',
            'function': 'un.sign',
            'builder_path': 'table.sort(keys) -> k=v&拼接 -> un.sign(strParams)',
            'value_shape': 'unknown',
            'source_file': 'lua-src-apk/app/hotupdate/universe/Url.lua',
            'source_line': 56,
            'jni_related': True,
            'related_native_candidate': 'libcocos2dlua.so un.sign',
            'related_endpoint_group': 'HTTP-BUSINESS',
        },
    ],
}
json.dump(protocol_map, open(BASE + '/protocol_map.json', 'w'), ensure_ascii=False, indent=1)

# ---------- 3. traffic_alignment.json ----------
srs_matched = api['endpoints']
http_entries = []
for d in http['https_by_sni']:
    http_entries.append({
        'id': 'HTTPS-SNI-%s' % d['domain'], 'channel': 'https_sni', 'domain': d['domain'],
        'scenes': d['scenes'], 'flow_count': d['flow_count'], 'bytes': d['bytes'],
        'category': d.get('category'), 'code_refs': d.get('code_refs'),
        'match_status': 'code_and_traffic_matched' if d.get('code_refs') else 'traffic_only',
        'notes': 'TLS 密文, 仅 SNI/DNS 级对齐',
    })
for r in http['plaintext_http']:
    pass  # 78条全为三方SDK, 聚合而非逐条
alignment = {
    'traffic_source_available': True,
    'matched_endpoints': [e['id'] for e in srs_matched if e['match_status'] == 'code_and_traffic_matched']
                         + [e['id'] for e in http_entries if e['match_status'] == 'code_and_traffic_matched'],
    'unmatched_code_endpoints': {
        'srs_code_only_count': api['scan_summary']['code_only'],
        'note': '协议索引 849 条二进制消息定义中 %d 条未在任何场景流量出现; 含 DispatchProtocol(proc147,调度队列4-8)=旧金币调度链路,已被 MatchLinkProtocol(proc1006) 取代' % api['scan_summary']['code_only'],
        'http_code_only': http['code_only_http'],
    },
    'unmatched_traffic_endpoints': {
        'srs_traffic_only': match_sets['traffic_only'],
        'note': '(proc,xy) 在流量出现但代码无定义; [0,1]/[0,3]/[0,4] 为 native 链路握手(xy=4 为密钥材料下发); (1,11136)/(1,11137) 为游戏房间通道心跳(GameM/LogicBase 未命名); (116,280)/(116,561-563) 为 newgold nyx protobuf 未收录消息',
        'http_third_party': '78条明文HTTP全部第三方SDK(个推/搜狐cityjson/微信mmtls/快手HTTPDNS), 归 third_party 组不逐字段',
    },
    'matched_field_flows': [
        {'endpoint_id': 'SRS(xy5,proc0)', 'field': 'clienttype/usertype/areaid', 'field_role': 'business_parameter',
         'location': 'body', 'traffic_value_shape': 'u8/u8/u32le = 2/7/7109',
         'code_builder_path': 'PlayerConnect.bostream 前三字段', 'crypto_entry_candidate': 'un.network.TcpConnection XOR',
         'related_native_candidate': True, 'match_confidence': 'high'},
        {'endpoint_id': 'SRS-GAMEM(11201)', 'field': 'cmdid/msglen', 'field_role': 'business_parameter',
         'location': 'body', 'traffic_value_shape': 'u16le+u16le, msglen=len-4 恒成立',
         'code_builder_path': 'GameMProtocol.ClientToServerMessage.bostream', 'crypto_entry_candidate': 'native XOR',
         'related_native_candidate': True, 'match_confidence': 'high'},
        {'endpoint_id': 'SRS-GAMEM cmd539', 'field': 'nSeat/nMah', 'field_role': 'business_parameter',
         'location': 'body', 'traffic_value_shape': 'u8/u8, 与 s2c 广播 17/17 一致',
         'code_builder_path': 'GameProtocol.msgPlay.bostream(GameProtocol.lua:840)', 'crypto_entry_candidate': 'native XOR',
         'related_native_candidate': True, 'match_confidence': 'high'},
        {'endpoint_id': 'SRS(1006,25100/25101)', 'field': 'askid', 'field_role': 'nonce',
         'location': 'body', 'traffic_value_shape': 'int32=0, 46帧恒定',
         'code_builder_path': 'MatchLinkProtocol.ReqJoin.writeInt32(askid)', 'crypto_entry_candidate': 'native XOR',
         'related_native_candidate': True, 'match_confidence': 'high'},
        {'endpoint_id': 'SRS(84,24/25)', 'field': 'askid', 'field_role': 'nonce',
         'location': 'body', 'traffic_value_shape': 'int32 1..24 递增, 24对回显一致',
         'code_builder_path': 'RoomProtocol.ReqGetGoldRoomInfo.writeInt32(askid)', 'crypto_entry_candidate': 'native XOR',
         'related_native_candidate': True, 'match_confidence': 'high'},
        {'endpoint_id': 'HTTP-PHONE-001', 'field': 'signature', 'field_role': 'sign',
         'location': 'body', 'traffic_value_shape': 'HTTPS密文(仅SNI palmapi.hzxuanming.com @s02/s06)',
         'code_builder_path': 'signatureStr 直拼 -> un.md5Encode -> body.signature (ReqPhoneVerificationCode.lua:19-27)',
         'crypto_entry_candidate': 'un.md5Encode', 'related_native_candidate': True, 'match_confidence': 'medium(端点SNI级+代码字段级)'},
        {'endpoint_id': 'SRS(proc0,xy15)', 'field': 'nAppID/strlen', 'field_role': 'business_parameter',
         'location': 'body', 'traffic_value_shape': 'u16le 模块appid + u8 字符串长',
         'code_builder_path': 'SRSProtocol.RespSRSAddr.bistream(SRSProtocol.lua:516)', 'crypto_entry_candidate': 'native XOR(与c2s同keystream)',
         'related_native_candidate': True, 'match_confidence': 'high'},
        {'endpoint_id': 'SRS(120,12)', 'field': 'nAskId/nAreaTypeId/nProtoId/acData', 'field_role': 'business_parameter',
         'location': 'body', 'traffic_value_shape': 'i32*3 + u8string, acData="[]"',
         'code_builder_path': 'TaskProtocol.RespTaskProtocol.bistream(TaskProtocol.lua:228)', 'crypto_entry_candidate': None,
         'related_native_candidate': False, 'match_confidence': 'high(s2c proc!=0 明文直接解析)'},
    ],
    'notes': [
        's2c proc!=0 全明文, 任意消息可按 protocol_index_full.json 的 bistream 字段序列直接解析',
        'c2s 及 s2c proc==0 为 XOR 流加密; keystreams_*.json 已给出各连接恢复的前缀(4-6字节), 全量恢复需 Phase 3 逆向 native 密钥派生',
        's05_emulator_gold_attempt.pcap 65GB 仅完成连接清单(inventory, 前2GB), 未做消息级解码; 模拟器金币场未进入对局',
        'protobuf 通道: proc=1147(roommatch_cli, 0x80 flag 帧)与 proc=116(nyx_client) 消息体为 protobuf 明文, 定义在 protocol_index_full.json protobuf_messages(743条)',
    ],
}
json.dump(alignment, open(BASE + '/traffic_alignment.json', 'w'), ensure_ascii=False, indent=1)

# ---------- 4. api_endpoints.json 并入 HTTP ----------
api['endpoints'].extend(http_entries)
api['scan_summary']['https_sni_domains'] = len(http['https_by_sni'])
api['scan_summary']['plaintext_http_third_party'] = len(http['plaintext_http'])
api['scan_summary']['total_endpoints'] = len(api['endpoints'])
api['scan_summary']['total_unique_domains'] = len({e.get('domain') for e in http_entries})
api['scan_summary']['phone_auth_endpoints'] = http['verification_code_endpoint']['urls']
api['scan_summary']['c2s_decryption'] = {
    scene: {fid: {'coverage': v['coverage'], 'methods': v['methods']}
            for fid, v in ks.items() if v['coverage'] >= 4}
    for scene, ks in ks_all.items()
}
json.dump(api, open(BASE + '/api_endpoints.json', 'w'), ensure_ascii=False, indent=1)

print('field_alignments:', len(field_alignments['confirmed_field_decodes']), 'confirmed records')
print('protocol_map: auth=%d sign=%d param=%d crypto=%d' % (
    len(protocol_map['auth_fields']), len(protocol_map['signature_fields']),
    len(protocol_map['endpoint_parameter_map']), len(protocol_map['crypto_code_locations'])))
print('alignment: matched=%d' % len(alignment['matched_endpoints']))
print('api_endpoints total:', len(api['endpoints']))
