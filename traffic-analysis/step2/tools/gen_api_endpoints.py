#!/usr/bin/env python3
"""Generate step2 deliverables: api_endpoints.json, protocol_map.json,
traffic_alignment.json, native_target_candidates.json, selected_native_target.json.
Merges http_endpoints.json if present."""
import glob
import json
import os
from collections import defaultdict

BASE = '/Users/mosc/Downloads/ZJYX/浙江游戏大厅/traffic-analysis'
S2 = BASE + '/step2'

IDX = json.load(open(S2 + '/protocol_index_full.json'))
KNOWN = defaultdict(list)
for e in IDX['binary_protocols']:
    if e.get('xy') is not None:
        KNOWN[(e.get('proc'), e['xy'])].append(e)
PB = defaultdict(list)
for e in IDX['protobuf_messages']:
    if e.get('xy') is not None:
        PB[(e.get('proc'), e['xy'])].append(e)

PROCNAME = {0: 'SRS(大厅核心)', 1: 'Game(游戏通道)', 3: 'Auth', 30: 'Active(活动)',
            62: 'Tool(工具/玩家信息)', 84: 'Room(房卡房间)', 92: 'BagSys(背包)',
            100: 'IM(好友/聊天)', 113: 'BoxData(比赛场/盒子)', 116: 'TeaHouse(亲友圈)',
            120: 'Task(任务)', 141: 'Mail(邮件)', 147: 'Dispatch(二进制调度)',
            1006: 'MatchLink(匹配链接)', 1147: 'Pyrrla(金币场匹配,protobuf)',
            140: 'GameGT', 2022: 'srs_client'}

NATIVE_LINK = {(0, 1), (0, 3), (0, 4)}  # native TcpConnection link handshake

# ---------- collect observed messages ----------
obs = defaultdict(lambda: defaultdict(list))
for f in glob.glob(S2 + '/messages_*.json'):
    scene = os.path.basename(f)[len('messages_'):-5]
    for m in json.load(open(f)):
        if m.get('bad') or m.get('xy') is None:
            continue
        obs[(m['proc'], m['xy'])][m['dir']].append(m | {'scene': scene})

def best_ref(k):
    entries = KNOWN.get(k) or PB.get(k) or []
    hot = [e for e in entries if e.get('file', '').startswith('hotfix') or e.get('proto_file', '').startswith('hotfix')]
    e = (hot or entries or [None])[0]
    if not e:
        return None, None, None
    name = e.get('name') or e.get('message')
    ref = '%s:%s' % (e.get('file') or e.get('proto_file'), e.get('line', '?'))
    return name, ref, e

def evidence_of(m):
    return dict(scene=m['scene'], pcap='traffic/%s.pcap' % {
        's01_coldstart': 's01_coldstart', 's02_login': 's02_login',
        's03_lobby': 's03_lobby', 's04_createroom': 's04_createroom',
        's06_phone_gold_ingame': 's06_phone_gold_ingame'}[m['scene']],
        flow=m['flow'], dir=m['dir'], stream_offset=m['offset'],
        frame_len=m['len'], ts=m.get('ts'))

endpoints = []
n = 0
for k in sorted(obs):
    proc, xy = k
    name, ref, e = best_ref(k)
    dirs = obs[k]
    scenes = sorted({m['scene'] for v in dirs.values() for m in v})
    total = sum(len(v) for v in dirs.values())
    first = dirs[sorted(dirs)[0]][0]
    n += 1
    enc_state = {}
    for d, v in dirs.items():
        encs = {m.get('enc') for m in v if m.get('enc') is not None}
        enc_state[d] = 'encrypted' if encs == {True} else ('plaintext' if encs == {False} else 'mixed_or_short')
    if k in NATIVE_LINK:
        mstat = 'code_and_traffic_matched'
        note = 'native un.network.TcpConnection 链路握手(hello/key交换)，无 Lua 协议体定义'
        name = name or {1: 'LINK_HELLO', 3: 'LINK_REQKEY', 4: 'LINK_RESPKEY'}[xy]
        ref = 'libcocos2dlua.so un.network.TcpConnection (native; Lua 封装 lua-src-apk/app/Net/TcpConnection.lua:9-25)'
    elif name:
        mstat = 'code_and_traffic_matched'
        note = ''
    else:
        mstat = 'traffic_only'
        note = '流量出现但 Lua 协议定义未定位'
    # 人工复核补注（二次核查结论）
    extra = {
        (1, 11009): ('ToolMProtocol.PlayerInfo', 'hotfix-decrypted/src/game/Common/Protocols/ToolMProtocol.lua:1425',
                     'code_and_traffic_matched', '游戏通道复用 ToolM 消息号(processid 按通道=1)'),
        (1, 11015): ('game_cli.kTableStateInfo', 'hotfix-decrypted/src/newgold/GoldCommon/ProtoBuf/game_cli.lua:20',
                     'code_and_traffic_matched', '桌子状态(protobuf 定义,游戏通道 procid=1)'),
        (116, 561): (None, None, 'traffic_only',
                     'TeaHouse 命名空间 s2c 推送,恒随 ReqTeaHouseInfoByPlayerType(300) 之后;同号段在麻将游戏层(msgShuffleFinish 等)是另一命名空间;亲友圈侧 Lua 未找到定义'),
        (116, 562): (None, None, 'traffic_only', '同 (116,561),c2s len=5 请求/s2c len=17 应答对'),
        (116, 563): (None, None, 'traffic_only', '同 (116,561),s2c len=80 推送'),
        (116, 280): (None, None, 'traffic_only', 'TeaHouse 命名空间 s2c len=36 推送,Lua 未定位(XY_ID_PLUS 表达式未覆盖 80 偏移)'),
        (1, 11820): (None, None, 'traffic_only', 's2c len=23,body 含游戏服 IP 字符串(102.204.223.76);疑似游戏服地址通知,Lua 未定位'),
        (1, 50005): (None, None, 'traffic_only', 's2c protobuf 推送(含 base64 载荷),疑似 referee/通知类,Lua 未定位'),
    }
    if k in extra:
        en, er, ms, nt = extra[k]
        name = name or en
        ref = ref or er
        mstat = ms
        note = nt
    endpoints.append(dict(
        id='SRS-%03d' % n,
        channel='srs_tcp',
        processid=proc, xy_id=xy,
        module=PROCNAME.get(proc, 'unknown'),
        name=name, code_ref=ref,
        directions={d: len(v) for d, v in dirs.items()},
        frame_count=total, scenes=scenes,
        body_encryption=enc_state,
        evidence=evidence_of(first),
        field_definition=(e or {}).get('fields', []),
        match_status=mstat, notes=note or None,
    ))

# ---------- code_only ----------
code_only = []
seen_k = set()
for k, entries in sorted(KNOWN.items()):
    if k in obs or k in seen_k:
        continue
    seen_k.add(k)
    hot = [e for e in entries if e.get('file', '').startswith('hotfix')]
    e = (hot or entries)[0]
    code_only.append(dict(processid=k[0], xy_id=k[1], name=e['name'],
                          code_ref='%s:%s' % (e.get('file'), e.get('line')),
                          module=PROCNAME.get(k[0], 'unknown'),
                          reason='代码定义但抓包未触发(覆盖不足或场景未执行)'))

traffic_only = [ep for ep in endpoints if ep['match_status'] == 'traffic_only']

summary = dict(
    traffic_source_available=True,
    scenes=['s01_coldstart', 's02_login', 's03_lobby', 's04_createroom',
            's05_emulator_gold_attempt(仅前2GB)', 's06_phone_gold_ingame'],
    srs_frame_format=dict(
        header='[magic:2B][length:u16le][xyid:u16le|processid:u16le][appid:u32le] 共12字节',
        magic='byte0: 1=客户端发出/握手期双向, 0=服务端下行; byte1: 0x40=常规帧, 0x80=protobuf通道帧(procid 1147)',
        length='帧体长度(不含12字节头)', xyid='XY_ID 消息号', processid='模块/服务id',
        appid='服务端模块appid(上行通常为0)',
        body_encryption='c2s 全方向加密(per-connection XOR 流密钥,逐帧重置); s2c 仅 procid=0(SRS登录/认证)加密,其余明文',
        handshake='c2s xy=1 len=4 body=fa60a522(固定魔数,服务端回显) -> c2s xy=3 len=0 -> s2c xy=4 len=17(密钥材料) -> c2s xy=5 PlayerConnect -> s2c xy=6 PlayerData',
    ),
    total_srs_frames=sum(ep['frame_count'] for ep in endpoints),
    total_srs_message_types=len(endpoints),
    matched=sum(1 for ep in endpoints if ep['match_status'] == 'code_and_traffic_matched'),
    traffic_only=len(traffic_only),
    code_only=len(code_only),
    analysis_method='traffic_first + code_mapping',
)

api = dict(scan_summary=summary, endpoints=endpoints,
           code_only_group=code_only,
           srs_servers=[
               dict(addr='47.97.154.79:5722/5723', role='大厅登录+大厅数据(SRS主连接)', scenes=['s02', 's05', 's06']),
               dict(addr='47.99.73.166:5701', role='大厅/房间数据连接( lobby )', scenes=['s03', 's04', 's05', 's06']),
               dict(addr='47.96.0.227:7777', role='金币场匹配+对局通道(appid=88888888, pyrrla+GameM)', scenes=['s06']),
               dict(addr='198.18.1.112:7777', role='(fake-ip,模拟器侧代理)7777 短连接登录/保活', scenes=['s02', 's03', 's05']),
               dict(addr='游戏服(内网) 10.145.0.49:9000 / 10.145.59.142:9000', role='对局实际服务地址,由 GameNotify 下发(抓包中经 7777 网关中转,未见直连)', scenes=['s06']),
           ])

json.dump(api, open(S2 + '/api_endpoints.json', 'w'), ensure_ascii=False, indent=1)
print('api_endpoints.json: %d srs endpoints, %d code_only, %d traffic_only'
      % (len(endpoints), len(code_only), len(traffic_only)))
