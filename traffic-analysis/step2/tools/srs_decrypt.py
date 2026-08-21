#!/usr/bin/env python3
"""SRS c2s/s2c(proc0) 流加密逆向与解密 v2。

已证实模型：
- 帧头 12B: [dir:1B(1=c2s,0=s2c)][0x40|0x80][len:u16le][xy:u16le][proc:u16le][appid:u32le]
- 帧体 = 明文 XOR keystream；keystream 每连接一份、双向共用、每帧从偏移 0 重置
  证据: ① 同连接 286 次 IMProtocol.ReqKeepAlive 密文恒定 ② 不同连接前缀不同
        ③ s06 5723 流 RespSRSAddr 用 c2s ks 解出 nAppID=9428 + IP 字符串头
- s2c proc!=0 明文（RespJoin body=00000000 等可直接按 bistream 读）

锚点（按优先级）：
A. askid 回显: c2s 请求首字段 writeInt32(askid) ↔ s2c 响应明文首字段 readInt32(askid)
   对自动从 protocol_index 派生（Req*/Resp*|Res* 同名配对），多类型交叉投票 -> ks[0..3]
B. GameMProtocol(proc1,xy11201) 明文头 [cmdid:u16][msglen:u16]，msglen=len-4 -> ks[2],ks[3]；
   无回显时 cmdid 投票（排除 0=kInvalid，要求命中率>=0.8）-> ks[0],ks[1]
C. 扩展1 msgPlay(539) 对赌: c2s msgPlay 后紧接着的 s2c msgPlay 广播为同一张牌
   (nSeat u8 + nMah u8 在明文偏移 4,5) -> ks[4],ks[5]
D. 扩展2 RespSRSAddr(proc0,xy15,s2c): 结构 u16 nAppID + u8 len + IP ASCII + u16 port，
   IP 字符集约束跨 9 帧投票 -> ks[3..2+len+1]
输出: keystreams_<scene>.json + messages_decrypted_<scene>.json
"""
import collections
import glob
import json
import struct
import sys

BASE = '/Users/mosc/Downloads/ZJYX/浙江游戏大厅/traffic-analysis'
sys.path.insert(0, BASE + '/step2/tools')
from pcap_lib import read_pcap

IDX = json.load(open(BASE + '/step2/protocol_index_full.json'))
GAME_CMD = {}
for e in IDX['game_cmdids']:
    if e.get('cmdid') is not None and e['cmdid'] != 0:
        GAME_CMD.setdefault(e['cmdid'], e['name'])
KNOWN_CMDIDS = set(GAME_CMD)

BY_KEY = {}
for e in IDX['binary_protocols']:
    if e.get('xy') is None:
        continue
    k = (e.get('proc'), e['xy'])
    hot = e['file'].startswith('hotfix')
    if k not in BY_KEY or (hot and not BY_KEY[k]['file'].startswith('hotfix')):
        BY_KEY[k] = e


def derive_echo_pairs():
    """从协议索引自动派生 askid 回显对"""
    reqs = {}
    resps = {}
    for e in IDX['binary_protocols']:
        if e.get('xy') is None or not e['fields']:
            continue
        f0 = e['fields'][0]
        name = e['name']
        if e['direction'] == 'c2s' and f0['op'] == 'writeInt32' and 'askid' in f0['arg'].lower():
            reqs[(e['proc'], e['xy'])] = name
        elif e['direction'] == 's2c' and f0['op'] == 'readInt32' and 'ask' in f0['arg'].lower():
            resps[(e['proc'], e['xy'])] = name
    pairs = {}
    for (p, x), n1 in reqs.items():
        if '.Req' not in n1:
            continue
        base = n1.split('.Req', 1)[1]
        for (p2, x2), n2 in resps.items():
            if p2 != p:
                continue
            if n2.endswith('.Resp' + base) or n2.endswith('.Res' + base):
                pairs[(p, x)] = (p2, x2)
                break
    return pairs


ECHO_PAIRS = derive_echo_pairs()


def reassemble(segs):
    if not segs:
        return b'', []
    segs = sorted(segs, key=lambda s: (s[0], s[2]))
    base = segs[0][0]
    buf = bytearray()
    marks = []
    for seq, pl, ts in segs:
        off = seq - base
        if off < 0:
            pl = pl[-off:]
            off = 0
        if not pl:
            continue
        if off > len(buf):
            buf.extend(b'\0' * (off - len(buf)))
        if off + len(pl) > len(buf):
            buf.extend(pl[len(buf) - off:])
        marks.append((off, ts))
    return bytes(buf), marks


def ts_at(marks, off):
    t = None
    for o, ts in marks:
        if o <= off:
            t = ts
        else:
            break
    return t


def split_frames(data):
    off = 0
    n = len(data)
    while off + 12 <= n:
        if data[off + 1] not in (0x40, 0x80) or data[off] not in (0, 1):
            return
        plen = struct.unpack('<H', data[off + 2:off + 4])[0]
        mid = struct.unpack('<I', data[off + 4:off + 8])[0]
        aid = struct.unpack('<I', data[off + 8:off + 12])[0]
        body = data[off + 12:off + 12 + plen]
        if len(body) < plen:
            return
        yield dict(offset=off, len=plen, xy=mid & 0xffff, proc=mid >> 16,
                   appid=aid, body=body)
        off += 12 + plen


def anchor_echo(c2s, s2c):
    votes = collections.Counter()
    pair_hits = {}
    for (rp, rq), (sp, sq) in ECHO_PAIRS.items():
        reqs = [f['body'] for f in c2s if f['proc'] == rp and f['xy'] == rq and len(f['body']) >= 4]
        resp = [f['body'] for f in s2c if f['proc'] == sp and f['xy'] == sq and len(f['body']) >= 4]
        for rb, sb in zip(reqs, resp):
            ask = struct.unpack('<I', sb[:4])[0]
            if ask > 0x00ffffff:
                continue
            k = bytes(rb[i] ^ sb[i] for i in range(4))
            votes[k] += 1
            pair_hits.setdefault((rp, rq), collections.Counter())[k] += 1
    if not votes:
        return {}, 0, 0
    best, cnt = votes.most_common(1)[0]
    # 交叉验证：至少 2 票；若存在第二个 ks 且票数相同则不可信
    if cnt < 2 or (len(votes) > 1 and votes.most_common(2)[1][1] == cnt):
        return {}, 0, len(votes)
    return {i: best[i] for i in range(4)}, cnt, len(votes)


def anchor_gamem(c2s):
    ks = {}
    gm = [f['body'] for f in c2s if f['proc'] == 1 and f['xy'] == 11201 and len(f['body']) >= 4]
    if not gm:
        return ks, 0.0
    for b in gm:
        plen = len(b) - 4
        ks[2] = b[2] ^ (plen & 0xff)
        ks[3] = b[3] ^ ((plen >> 8) & 0xff)
    votes = collections.Counter()
    for b in gm:
        for cmd in KNOWN_CMDIDS:
            votes[(b[0] ^ (cmd & 0xff), b[1] ^ ((cmd >> 8) & 0xff))] += 1
    best, _ = votes.most_common(1)[0]
    hit = sum(1 for b in gm if ((b[0] ^ best[0]) | ((b[1] ^ best[1]) << 8)) in KNOWN_CMDIDS)
    rate = hit / len(gm)
    if rate >= 0.8:
        ks[0], ks[1] = best
    return ks, rate


def extend_msgplay(c2s, s2c, ks):
    """c2s msgPlay 与下一条 s2c msgPlay 广播同牌 -> ks[4],ks[5]"""
    if not all(i in ks for i in (0, 1, 2, 3)):
        return ks, 0
    s2c_plays = []
    for f in s2c:
        if f['proc'] == 1 and f['xy'] == 11200 and len(f['body']) >= 6:
            cmdid, mlen = struct.unpack('<HH', f['body'][:4])
            if cmdid == 539 and len(f['body']) >= 6:
                s2c_plays.append((f.get('ts') or 0, f['body'][4], f['body'][5]))
    if not s2c_plays:
        return ks, 0
    s2c_plays.sort()
    votes = collections.Counter()
    for f in c2s:
        if f['proc'] != 1 or f['xy'] != 11201 or len(f['body']) < 6:
            continue
        b = f['body']
        cmdid = (b[0] ^ ks[0]) | ((b[1] ^ ks[1]) << 8)
        if cmdid != 539:
            continue
        t = f.get('ts') or 0
        nxt = [s for s in s2c_plays if s[0] >= t]
        if not nxt:
            continue
        _, nseat, nmah = nxt[0]
        votes[(b[4] ^ nseat, b[5] ^ nmah)] += 1
    if not votes:
        return ks, 0
    (k4, k5), cnt = votes.most_common(1)[0]
    if cnt >= 2 and (len(votes) == 1 or votes.most_common(2)[1][1] < cnt):
        ks = dict(ks)
        ks[4], ks[5] = k4, k5
        return ks, cnt
    return ks, 0


def extend_srsaddr(s2c, ks):
    """RespSRSAddr IP 字符集投票扩展 ks[3..]"""
    frames = [f['body'] for f in s2c if f['proc'] == 0 and f['xy'] == 15 and len(f['body']) >= 8]
    if len(frames) < 2:
        return ks, 0
    ks = dict(ks)
    ext = 0
    maxlen = max(len(b) for b in frames)
    for j in range(2, maxlen):
        cand = collections.Counter()
        for b in frames:
            if j >= len(b):
                continue
            c = b[j]
            if j == 2:  # u8 string len 3..20
                for p in range(3, 21):
                    cand[c ^ p] += 1
            else:  # IP 字符: 0-9 .
                for p in b'0123456789.':
                    cand[c ^ p] += 1
        if not cand:
            break
        k, n = cand.most_common(1)[0]
        # 要求多数帧一致
        if n >= max(2, len(frames) // 2):
            if j in ks and ks[j] != k:
                break  # 与已有 ks 冲突，停止扩展
            ks[j] = k
            ext += 1
        else:
            break
    return ks, ext


def decrypt(body, ks):
    return bytes(b ^ ks[i] for i, b in enumerate(body) if i in ks)


def process_scene(inv_path):
    inv = json.load(open(inv_path))
    scene = inv['scene']
    if 's05' in scene:
        return None
    eps = set()
    for fl in inv['flows']:
        for ip, port in (tuple(fl['a']), tuple(fl['b'])):
            if ip.startswith('10.'):
                continue
            if fl['sample_ab'].startswith(('0140', '0040')) or fl['sample_ba'].startswith(('0140', '0040')):
                eps.add((ip, port))
    if not eps:
        return None
    flows = collections.defaultdict(lambda: {'c2s': [], 's2c': []})
    for p in read_pcap(BASE + '/traffic/' + inv['pcap']):
        if p['proto'] != 'tcp' or not p['payload']:
            continue
        if (p['dst'], p['dport']) in eps:
            flows[(p['src'], p['sport'], p['dst'], p['dport'])]['c2s'].append((p['seq'], p['payload'], p['ts']))
        elif (p['src'], p['sport']) in eps:
            flows[(p['dst'], p['dport'], p['src'], p['sport'])]['s2c'].append((p['seq'], p['payload'], p['ts']))
    ks_out = {}
    msg_out = []
    for (ci, cp, si, sp), dirs in sorted(flows.items()):
        fid = '%s:%d-%s:%d' % (ci, cp, si, sp)
        c2s_data, c2s_marks = reassemble(dirs['c2s'])
        s2c_data, s2c_marks = reassemble(dirs['s2c'])
        c2s = list(split_frames(c2s_data))
        s2c = list(split_frames(s2c_data))
        for f in c2s:
            f['ts'] = ts_at(c2s_marks, f['offset'])
        for f in s2c:
            f['ts'] = ts_at(s2c_marks, f['offset'])
        ks_e, echo_votes, echo_ksvars = anchor_echo(c2s, s2c)
        ks_g, gm_rate = anchor_gamem(c2s)
        methods = []
        ks = {}
        if ks_e:
            ks.update(ks_e)
            methods.append('askid_echo(%d票)' % echo_votes)
        if 2 in ks_g:
            if 2 in ks and (ks[2] != ks_g[2] or ks[3] != ks_g[3]):
                methods.append('gamem_msglen_CONFLICT')
            ks[2], ks[3] = ks_g[2], ks_g[3]
            methods.append('gamem_msglen')
        if 0 not in ks and 0 in ks_g:
            ks[0], ks[1] = ks_g[0], ks_g[1]
            methods.append('gamem_cmdid_vote(hit=%.2f)' % gm_rate)
        ext_play = 0
        if ks:
            ks, ext_play = extend_msgplay(c2s, s2c, ks)
            if ext_play:
                methods.append('msgplay_echo(%d票)' % ext_play)
            ks, ext_ip = extend_srsaddr(s2c, ks)
            if ext_ip:
                methods.append('srsaddr_ip(+%dB)' % ext_ip)
        cov = (max(ks) + 1) if ks else 0
        ks_out[fid] = dict(keystream={str(k): v for k, v in sorted(ks.items())},
                           coverage=cov, methods=methods,
                           frames_c2s=len(c2s), frames_s2c=len(s2c))
        for fr in c2s:
            e = BY_KEY.get((fr['proc'], fr['xy']))
            rec = dict(flow=fid, dir='c2s', offset=fr['offset'], len=fr['len'],
                       proc=fr['proc'], xy=fr['xy'], ts=fr.get('ts'),
                       name=e['name'] if e else None,
                       code_ref='%s:%d' % (e['file'], e['line']) if e else None,
                       enc_body_hex=fr['body'].hex())
            if ks:
                dec = decrypt(fr['body'], ks)
                rec['dec_hex'] = dec.hex()
                rec['dec_coverage'] = cov
                if fr['proc'] == 1 and fr['xy'] == 11201 and len(dec) >= 4 and 1 in ks:
                    cmdid, mlen = struct.unpack('<HH', dec[:4])
                    rec['gamem_cmd'] = cmdid
                    rec['gamem_name'] = GAME_CMD.get(cmdid)
            msg_out.append(rec)
        # s2c proc0 帧也用同一 ks 解（双向共用已证实）
        for fr in s2c:
            if fr['proc'] != 0 or not ks:
                continue
            e = BY_KEY.get((0, fr['xy']))
            dec = decrypt(fr['body'], ks)
            msg_out.append(dict(flow=fid, dir='s2c', offset=fr['offset'], len=fr['len'],
                                proc=0, xy=fr['xy'], ts=fr.get('ts'),
                                name=e['name'] if e else None,
                                code_ref='%s:%d' % (e['file'], e['line']) if e else None,
                                enc_body_hex=fr['body'].hex(),
                                dec_hex=dec.hex(), dec_coverage=cov))
    return scene, ks_out, msg_out


def main():
    print('echo pairs auto-derived:', len(ECHO_PAIRS))
    for inv_path in sorted(glob.glob(BASE + '/step2/inventory_*.json')):
        r = process_scene(inv_path)
        if not r:
            continue
        scene, ks_out, msg_out = r
        json.dump(ks_out, open(BASE + '/step2/keystreams_%s.json' % scene, 'w'), indent=1)
        json.dump(msg_out, open(BASE + '/step2/messages_decrypted_%s.json' % scene, 'w'),
                  ensure_ascii=False, indent=1)
        n_dec = sum(1 for m in msg_out if m.get('dec_hex'))
        good = sum(1 for k in ks_out.values() if k['coverage'] >= 4)
        print('%s: conns=%d (ks>=4B: %d) frames=%d decrypted=%d' % (
            scene, len(ks_out), good, len(msg_out), n_dec))
        for fid, k in ks_out.items():
            if k['coverage'] >= 4:
                print('   %s cov=%d %s' % (fid, k['coverage'], '+'.join(k['methods'])))


if __name__ == '__main__':
    main()
