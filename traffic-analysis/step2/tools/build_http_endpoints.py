#!/usr/bin/env python3
"""Build step2/http_endpoints.json.

- Runs http_extract.py over scene pcaps (plaintext HTTP, evidence included).
- Reads inventory_<scene>.json for TLS SNI grouping.
- Merges hand-maintained category + Lua code alignment tables below
  (all file:line refs verified against tools/luau8 mirrors).

Usage: python3 build_http_endpoints.py   (run from step2/)
"""
import json
import os
import subprocess
import sys
from collections import defaultdict

HERE = os.path.dirname(os.path.abspath(__file__))
STEP2 = os.path.dirname(HERE)
TRAFFIC = os.path.join(STEP2, '..', 'traffic')

SCENES = ['s01_coldstart', 's02_login', 's03_lobby', 's04_createroom',
          's06_phone_gold_ingame']

HF = 'tools/luau8/hotfix-decrypted/src'   # hotfix lua tree (newer)
APK = 'tools/luau8/lua-src-apk'           # apk lua tree (older)
MAN = 'decompiled/apktool/assets/res/GameHotUpdate3'  # under 浙江游戏大厅/

# --- domain classification + code refs (verified by grep in luau8) ----------
FIRST_PARTY = {
    'transit.hzxuanming.com': {
        'note': 'First_Url 主入口：token 签发 /auth/get-token 与 palmapi/gopalmapi/apihub/act/exchangeshop 业务代理',
        'code_refs': [
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 4, 'note': 'UrlConf.First_Url = "https://transit.hzxuanming.com"'},
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 28, 'note': 'REQ_TOKEN = First_Url .. "/auth/get-token?"'},
            {'file': HF + '/app/Req/ReqToken.lua', 'line': 27, 'note': 'GET /auth/get-token?areaid&numid&ssid(tempSession urlencode)&lobbyid'},
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 20, 'note': 'URL_PALMAPI = /auth/palmapi（通用业务代理，配合 URL_SECOND_DOMAIN reqUrl）'},
            {'file': HF + '/app/Req/ReqNotify.lua', 'line': 19, 'note': 'POST URL_PALMAPI 公告'},
            {'file': HF + '/app/Req/ReqWebPopList.lua', 'line': 35, 'note': 'URL_PALMAPI + reqUrl=common/popup_combo/list 弹窗'},
            {'file': HF + '/app/Req/ReqLeisureEntrance.lua', 'line': 21, 'note': 'URL_GOPALMAPI + reqUrl=resource_state/entrance/list 大厅休闲场入口'},
            {'file': HF + '/app/Req/ReqWebIcons.lua', 'line': 16, 'note': 'URL_GOPALMAPI + reqUrl=resource_state/all_list 大厅 Icon'},
            {'file': HF + '/app/Req/ReqApihub.lua', 'line': 7, 'note': 'URL_APIHUB = /auth/apihub'},
        ]},
    'confapi.mychuguan.com': {
        'note': '配置中心：md5_list 比对 + file_info 拉取配置（大厅/玩法配置下发）',
        'code_refs': [
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 10, 'note': 'URL_CONFIG_DATA_MD5 = /config_data/md5_list'},
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 15, 'note': 'URL_CONFIG_DATA_FILE = /config_data/file_info'},
            {'file': HF + '/lobby/Req/Configuration/CellConfigDataMd5.lua', 'line': 17, 'note': 'GET md5_list?config_type=3&data_id&env&time'},
            {'file': HF + '/lobby/Req/Configuration/CellConfigDataFile.lua', 'line': 18, 'note': 'GET file_info?<同上参数>'},
        ]},
    'shiming.hzxuanming.com': {
        'note': '商城钻石列表 + 旧实名认证',
        'code_refs': [
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 56, 'note': 'URL_STORE_PRODUCT_LIST = /v1/shop/products'},
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 64, 'note': 'URL_REAL_NAME_GET_STATUS = /v1/player/getRealName'},
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 65, 'note': 'URL_REAL_NAME_DEFINE = /v1/player/setRealName'},
        ]},
    'wechat.hzxuanming.com': {
        'note': '商城/兑换/奖励中心/规则文档/注销，JWT 直连域（GoldUrlConf.JwtToken_Url）',
        'code_refs': [
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 57, 'note': '/exchange/combine/record/list 兑换记录'},
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 79, 'note': '/award_center/check_phone/send_msg 话费兑换短信'},
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 385, 'note': 'First_Url_EX = https://wechat.hzxuanming.com（JWT 直连）'},
            {'file': HF + '/newgold/GoldCommon/Config/GoldUrlConf.lua', 'line': 17, 'note': '金币场 JwtToken_Url'},
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 70, 'note': 'GAME_RULE_HTML_ADDR = /game_center/game_rule'},
        ]},
    'palmapi.hzxuanming.com': {
        'note': '手机验证码登录/绑定（spark/phone/login/*）+ H5 联运入口',
        'code_refs': [
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 114, 'note': 'URL_VERIFICATION_CODE_URL_1 = /spark/phone/login/send/code/msg'},
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 115, 'note': 'URL_VERIFICATION_CODE_URL_2 = /spark/phone/login/send-code'},
            {'file': HF + '/login/Req/PhoneLogin/ReqPhoneVerificationCode.lua', 'line': 27, 'note': 'POST 发送验证码（见 verification_code_endpoint）'},
            {'file': HF + '/login/Req/PhoneLogin/ReqPhoneLogin.lua', 'line': 27, 'note': 'POST /spark/phone/login/pwd/get 或 check-code 验证码登录'},
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 105, 'note': 'HTTP_ID_H5_GAME_SHOE_LIST = /joint_operation/list'},
        ]},
    'gopalmapi.hzxuanming.com': {
        'note': '联运游戏中心配置 / 防沉迷游玩管理',
        'code_refs': [
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 25, 'note': 'URL_GAMECENTER = /joint_game_center/config'},
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 26, 'note': 'URL_PLAYREACH = /play_management/list'},
        ]},
    'fcm.bflyhd.cn': {
        'note': '新实名认证（防沉迷 fcm）',
        'code_refs': [
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 66, 'note': 'URL_REAL_NAME_GET_STATUS_NEW = /realname/query'},
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 67, 'note': 'URL_REAL_NAME_DEFINE_NEW = /realname/check'},
        ]},
    'hz-hylas.mengyoutech.com': {
        'note': '金币场（5.0）业务后台 First_Url_50：nyx/* 活动、rhea 道具、hermes 邮件、auth/getWebToken 金币场 token',
        'code_refs': [
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 123, 'note': 'First_Url_50 = "https://hz-hylas.mengyoutech.com/"'},
            {'file': HF + '/newgold/GoldCommon/Config/GoldUrlConf.lua', 'line': 23, 'note': '金币场同域 First_Url_50'},
            {'file': HF + '/newgold/GoldCommon/Config/GoldUrlConf.lua', 'line': 38, 'note': 'URL_GET_WEB_TOKEN = First_Url_50 .. "auth/getWebToken"'},
            {'file': HF + '/newgold/GoldCommon/Req/GoldReqTokenNew50.lua', 'line': 29, 'note': 'POST auth/getWebToken，JSON {tenant_id,area_id,user_id,ask_id,session}'},
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 166, 'note': '例：nyx/GoldZhanji 金币战绩；全文件 nyx/rhea/hermes/minos 等约 150 条'},
        ]},
    'te.hzxuanming.com': {
        'note': '数数科技 ThinkingData 私有化统计上抛',
        'code_refs': [
            {'file': HF + '/app/Third/ThinkData/GeneralParam.lua', 'line': 11, 'note': 'getServerUrl() = "https://te.hzxuanming.com"，appid=b93c750f...'},
        ]},
    'bfas.bianfeng.com': {
        'note': '边锋数据抛送（UrlConf 中定义为 bfas.hzxuanming.com/v2/client，抓包为 bianfeng.com 变体）',
        'code_refs': [
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 102, 'note': 'HTTP_ID_THROW_DATA = "https://bfas.hzxuanming.com/v2/client"'},
        ]},
    'webact.tt2kj.com': {
        'note': '邀请/裂变等活动后台（UrlConf.URL_GET_ACT；TopOn 体系合作域名）',
        'code_refs': [
            {'file': HF + '/app/Config/UrlConf.lua', 'line': 121, 'note': "URL_GET_ACT = 'https://webact.tt2kj.com/'"},
            {'file': HF + '/lobby/Req/Act/Invite/ReqInviteLogin.lua', 'line': 43, 'note': 'URL_GET_ACT .. method .. "?" 邀请登录'},
        ]},
    'gxb-api.hzxuanming.com': {
        'note': '热更版本查询 API（/hotfix_update?env=1&appid=1073&engine_ver=3.13&channel=20001828&version=...）',
        'code_refs': [
            {'file': MAN + '/Lobby/project_20001.manifest', 'line': 0, 'note': 'manifest 内嵌 https://gxb-api.hzxuanming.com/hotfix_update?env=1&appid=1073&channel=20001828；URL 由 native HotFixManager 消费（Lua 侧 ResChecker.lua:296 注释）'},
        ]},
    'gxb-api-tx.hzxuanming.com': {
        'note': '热更版本查询 API 的腾讯线路备用域（同上 manifest 内嵌）',
        'code_refs': [
            {'file': MAN + '/Lobby/project_20001.manifest', 'line': 0, 'note': 'gxb-api-tx.hzxuanming.com/hotfix_update 备用'},
        ]},
    'gxb-api.imeete.com': {
        'note': '热更版本查询 API（imeete 发行线，appid=1051&channel=7128）',
        'code_refs': [
            {'file': MAN + '/20096/project_10001.manifest', 'line': 0, 'note': 'https://gxb-api.imeete.com/hotfix_update?env=1&appid=1051&engine_ver=v3.17&channel=7128'},
        ]},
    'gxb-api-tx.imeete.com': {
        'note': '热更版本查询 API 腾讯备用（imeete 线）',
        'code_refs': [
            {'file': MAN + '/20096/project_10001.manifest', 'line': 0, 'note': '备用 hotfix_update 域'},
        ]},
    'gxb-oss.hzxuanming.com': {
        'note': '热更文件 CDN（阿里 OSS 线）：/yj/files/ 下按 manifest 拉 zip/资源',
        'code_refs': [
            {'file': MAN + '/Lobby/project_20001.manifest', 'line': 0, 'note': 'https://gxb-oss.hzxuanming.com/yj/files/；s06 中 65 条流 5.6MB 为开局前资源热更下载'},
        ]},
    'gxb-oss.imeete.com': {
        'note': '热更文件 CDN（imeete 线）：/other/files/；s06 最大流量源（65 流 20.9MB）',
        'code_refs': [
            {'file': MAN + '/20096/project_10001.manifest', 'line': 0, 'note': 'https://gxb-oss.imeete.com/other/files/'},
        ]},
    'gxb-cos.hzxuanming.com': {
        'note': '热更文件 CDN（腾讯 COS 备用）：/yj/files/',
        'code_refs': [
            {'file': MAN + '/Lobby/project_20001.manifest', 'line': 0, 'note': 'https://gxb-cos.hzxuanming.com/yj/files/'},
        ]},
    'gxb-monitor.hzxuanming.com': {
        'note': '热更成功率监控上报 /monitor',
        'code_refs': [
            {'file': MAN + '/Lobby/project_20001.manifest', 'line': 0, 'note': 'monitor_url'},
        ]},
    'gxb-monitor.imeete.com': {
        'note': '热更监控（imeete 线）/monitor',
        'code_refs': [
            {'file': MAN + '/20096/project_10001.manifest', 'line': 0, 'note': 'monitor_url'},
        ]},
    'dh-api.imeete.com': {
        'note': 'dhsdk（设备/数据统计 SDK）上报；Lua 中 host 定义为 dh-api.hzxuanming.com，imeete 为发行变体',
        'code_refs': [
            {'file': HF + '/app/Third/dhsdk/Sdk.lua', 'line': 172, 'note': 'self.host = "https://dh-api.hzxuanming.com"（imeete 变体由 native/配置决定）'},
        ]},
    'sluice.imeete.com': {
        'note': 'imeete 发行 SDK 基础设施（未见于 Lua，疑限流/调度网关），native 层',
        'code_refs': []},
    'plugin-res.imeete.com': {
        'note': 'imeete 发行 SDK 插件资源下载（未见于 Lua），native 层',
        'code_refs': []},
    'sdk-config.imeete.net': {
        'note': 'imeete 发行 SDK 配置下发（未见于 Lua），native 层',
        'code_refs': []},
    'sdk-config.imeete.com': {
        'note': '同上（.com 变体，仅 s06 真机出现 1 流）',
        'code_refs': []},
    'img1-cdn.bianfeng.com': {
        'note': '边锋图片 CDN（s06 单流，头像/素材图），发行方资源域',
        'code_refs': []},
}

THIRD_PARTY = {
    'api-access.pangolin-sdk-toutiao.com': '穿山甲广告 SDK API',
    'api-access.pangolin-sdk-toutiao-b.com': '穿山甲广告 SDK API（b 域）',
    'sf6-fe-tos.pglstatp-toutiao.com': '穿山甲素材 TOS',
    'toblog.ctobsnssdk.com': '火山引擎应用日志（穿山甲依赖）',
    'tnc3-bjlgy.zijieapi.com': '字节 TNC 配置',
    'open.e.kuaishou.com': '快手广告 SDK',
    'open.kuaishouzt.com': '快手广告（中天）',
    'v4-lm.adukwai.com': '快手广告监测',
    'p66-ad.adkwai.com': '快手广告',
    'adx.anythinktech.com': 'TopOn 聚合广告 ADX',
    'adx-bj.anythinktech.com': 'TopOn ADX 北京',
    'adx-bj-req.anythinktech.com': 'TopOn ADX 请求',
    'api.anythinktech.com': 'TopOn SDK API',
    'adservice.sigmob.cn': 'Sigmob 广告服务',
    'dc.sigmob.cn': 'Sigmob 数据中心',
    'sdk.conf.getui.com': '个推 SDK 配置（明文 HTTP /config/hzv9.conf）',
    'android.bugly.qq.com': '腾讯 Bugly 崩溃上报（app/Third/Bugly）',
    'thirdwx.qlogo.cn': '微信头像 CDN（登录后拉微信头像）',
    'shence.netease.com': '网易域统计端点（s01 单流）',
    'pv.sohu.com': '搜狐 cityjson IP 归属查询（第三方 SDK 通用，明文）',
    'lua1.xqddz.cn': '未知第三方域（s06 真机，疑似设备上其他应用，目标 App 代码无引用）',
}

CAPTURE_ARTIFACT = {
    'mumu.nie.netease.com': 'MuMu 模拟器自身流量（非目标 App）',
    'api-pro.mumu.163.com': 'MuMu 模拟器自身 API（非目标 App）',
    'api.nanbeiyule.com': '抓包环境内其他应用流量（目标 App 全部 Lua/配置无 nanbeiyule 引用）',
}

HTTPDNS_NOTE = '快手直播 SDK（yximgs/etoote 拉流域）的 HTTPDNS 解析，明文 HTTP'


def load_sni_stats():
    stats = defaultdict(lambda: {'scenes': set(), 'flow_count': 0, 'bytes': 0})
    for s in SCENES:
        inv = json.load(open(os.path.join(STEP2, f'inventory_{s}.json')))
        for f in inv['flows']:
            sni = f.get('sni')
            if sni:
                st = stats[sni]
                st['scenes'].add(s)
                st['flow_count'] += 1
                st['bytes'] += f['bytes']
    return stats


def main():
    # 1. plaintext HTTP extraction (rerun extractor for self-containment)
    args = [sys.executable, os.path.join(HERE, 'http_extract.py')]
    for s in SCENES:
        args.append(f'{s}={os.path.join(TRAFFIC, s + ".pcap")}')
    out = subprocess.run(args, capture_output=True, text=True, check=True)
    plaintext = json.loads(out.stdout)

    # attach code refs / attribution to plaintext entries
    for r in plaintext:
        r['code_refs'] = []
        h = r['host']
        if h == 'sdk.conf.getui.com':
            r['attribution'] = 'third_party: 个推推送 SDK 配置'
        elif h == 'pv.sohu.com':
            r['attribution'] = 'third_party: IP 归属查询（SDK 通用行为）'
        elif 'weixin' in h:
            r['attribution'] = 'third_party: 微信 SDK mmtls 长连（密文 body，MicroMessenger Client UA）'
        elif h in ('119.29.29.29', '120.92.215.64', 'httpdns.alicdn.com',
                   'httpdns.bcelive.com', 'sdkoptedge.chinanetcenter.com'):
            r['attribution'] = 'third_party: ' + HTTPDNS_NOTE
        else:
            r['attribution'] = 'unclassified'

    # 2. SNI grouping
    sni_stats = load_sni_stats()
    https_by_sni = []
    for dom, st in sorted(sni_stats.items(), key=lambda kv: -kv[1]['bytes']):
        if dom in FIRST_PARTY:
            cat = 'first_party'
            note = FIRST_PARTY[dom]['note']
            refs = FIRST_PARTY[dom]['code_refs']
        elif dom in THIRD_PARTY:
            cat = 'third_party'
            note = THIRD_PARTY[dom]
            refs = []
        elif dom in CAPTURE_ARTIFACT:
            cat = 'capture_artifact'
            note = CAPTURE_ARTIFACT[dom]
            refs = []
        else:
            cat = 'third_party'
            note = '未分类第三方'
            refs = []
        if dom in ('gxb-oss.imeete.com', 'gxb-oss.hzxuanming.com',
                   'gxb-cos.hzxuanming.com', 'plugin-res.imeete.com',
                   'img1-cdn.bianfeng.com'):
            cat = 'cdn' if dom in FIRST_PARTY else cat
        https_by_sni.append({
            'domain': dom,
            'scenes': sorted(st['scenes']),
            'flow_count': st['flow_count'],
            'bytes': st['bytes'],
            'category': cat,
            'code_refs': refs,
            'note': note,
        })

    result = {
        'plaintext_http': plaintext,
        'https_by_sni': https_by_sni,
        'verification_code_endpoint': {
            'conclusion': 'HTTPS 密文，仅 SNI 可见（palmapi.hzxuanming.com）；完整参数与签名逻辑已从 Lua 恢复',
            'urls': {
                'send_code_old': 'https://palmapi.hzxuanming.com/spark/phone/login/send/code/msg (UrlConf.lua:114, isNew=false)',
                'send_code_new': 'https://palmapi.hzxuanming.com/spark/phone/login/send-code (UrlConf.lua:115, isNew=true)',
                'login_old': 'https://palmapi.hzxuanming.com/spark/phone/login/pwd/get (UrlConf.lua:116)',
                'login_new': 'https://palmapi.hzxuanming.com/spark/phone/login/check-code (UrlConf.lua:117)',
            },
            'method': 'POST, application/x-www-form-urlencoded body',
            'params': ['app_id', 'areaid', 'auto_reg(仅 isNew)', 'lobbyid', 'phone',
                       'type(登录=pwd_get / 绑定=bind)', 'timestamp', 'wid', 'signature'],
            'signature_logic': 'signature = md5("app_id="+appId+"areaid="+areaID+[+"auto_reg=0"]+"lobbyid="+lobbyID+"phone="+phone+"timestamp="+ts+"type="+type+"wid="+windID+appKey)；key 按字典序无分隔符拼接，末尾直接追加 appKey',
            'code_refs': [
                {'file': HF + '/login/Req/PhoneLogin/ReqPhoneVerificationCode.lua', 'line': 19, 'note': 'isNew 分支 signatureStr 拼接（含 auto_reg=0）'},
                {'file': HF + '/login/Req/PhoneLogin/ReqPhoneVerificationCode.lua', 'line': 22, 'note': 'un.md5Encode(signatureStr)'},
                {'file': HF + '/login/Req/PhoneLogin/ReqPhoneVerificationCode.lua', 'line': 30, 'note': '旧分支 signatureStr（无 auto_reg）'},
                {'file': HF + '/login/Req/PhoneLogin/ReqPhoneLogin.lua', 'line': 19, 'note': '验证码登录 pwd/get 与 check-code 的同构签名（多 code 参数）'},
                {'file': HF + '/login/Modules/PhoneLogin/Module.lua', 'line': 25, 'note': '登录界面调用 startReq("ReqPhoneVerificationCode","pwd_get",...)'},
                {'file': HF + '/lobby/Modules/PhoneBind/Module.lua', 'line': 27, 'note': '绑定手机调用 type="bind"'},
                {'file': APK + '/app/Config/AreaConfig.lua', 'line': 182, 'note': 'phonelogin_app_id=10003 / phonelogin_app_key=2685db9c34685c83d16b0101d646989d（按区配置）'},
            ],
            'capture_evidence': [
                {'scene': 's02_login', 'sni': 'palmapi.hzxuanming.com',
                 'server': ['198.18.3.93', 443], 'first_ts': 1787230125.1,
                 'bytes': 6363,
                 'note': '08:48:45，登录流程中第一条 palmapi 流，时序与体量符合发送验证码请求；TLS 密文，path 不可见'},
                {'scene': 's02_login', 'sni': 'palmapi.hzxuanming.com',
                 'server': ['198.18.3.93', 443], 'first_ts': 1787230153.6,
                 'bytes': 2090,
                 'note': '08:49:13，第二条 palmapi 流，符合验证码校验登录（pwd/get 或 check-code）'},
            ],
        },
        'code_only_http': [
            {'url': 'https://palmstatic.hzxuanming.com/Download/Rule', 'file': APK + '/app/Config/UrlConf.lua', 'line': 55, 'note': 'REQ_GAME_RULE_IMAGE 规则图（抓包未出现）'},
            {'url': 'https://palmstatic.imeete.com/Download/avatar/newgold/%d.png', 'file': HF + '/lobby/Modules/GoldNew/SubModules/PersonalCenter/Config.lua', 'line': 9, 'note': '金币场头像 CDN'},
            {'url': 'https://api.hzxuanming.com/iplooker/dat/find?', 'file': APK + '/app/Config/UrlConf.lua', 'line': 59, 'note': 'REQ_IS_FOREIGN_IP 海外网络判断'},
            {'url': 'https://wechatapi.hzxuanming.com/api/agent/bind_from_aid? 等 4 条', 'file': HF + '/app/Config/UrlConf.lua', 'line': 86, 'note': '代理绑定/解绑/查询'},
            {'url': 'https://act.hzxuanming.com/hmq_share_send/getAward? 等', 'file': HF + '/app/Config/UrlConf.lua', 'line': 99, 'note': '杭麻圈分享/砍价/迁移活动'},
            {'url': 'https://bfas.hzxuanming.com/v2/client', 'file': HF + '/app/Config/UrlConf.lua', 'line': 102, 'note': '数据抛送（抓包中为 bfas.bianfeng.com 变体）'},
            {'url': 'https://trade.hzxuanming.com/v2/trade/order', 'file': HF + '/app/Config/UrlConf.lua', 'line': 112, 'note': '车载 H5 支付'},
            {'url': 'https://kf.kkwan.cc/?', 'file': HF + '/app/Config/UrlConf.lua', 'line': 83, 'note': '客服 H5'},
            {'url': 'https://hegui.bflyhd.cn/', 'file': HF + '/app/Config/UrlConf.lua', 'line': 107, 'note': '合规入口'},
            {'url': 'https://downloadpage.bfnbgame.com/zhanlong/crm/clientConfig.json?', 'file': HF + '/app/Config/UrlConf.lua', 'line': 109, 'note': '客服配置下载'},
            {'url': 'https://hw-confapi.mychuguan.com:4445/config_data/md5_list 等', 'file': HF + '/app/Config/UrlConf.lua', 'line': 12, 'note': '海外（KW_DATA_IS_ABROAD_SRS）配置中心变体'},
            {'url': 'https://hw-sibyl.mengyoutech.com:4446/', 'file': HF + '/app/Config/UrlConf.lua', 'line': 125, 'note': '海外金币场变体'},
            {'url': 'https://bj-sibyl.mengyoutech.com/hacaba/VIPConfig 等', 'file': HF + '/lobby/Req/Sxvip/ReqSxvipConfig.lua', 'line': 26, 'note': '北京区 sxvip 直连'},
            {'url': 'https://webactivity.imeete.com/lswelfareredpacket/* 等', 'file': HF + '/GameCommon/Code/GameTeaBusiness/CellReqRedbox.lua', 'line': 5, 'note': '丽水茶馆红包活动'},
        ],
        'notes': [
            '明文 HTTP 共 %d 条，全部来自第三方 SDK（个推配置、搜狐 cityjson、微信 mmtls、快手直播 SDK 的 HTTPDNS 群）；目标 App 自身业务接口（UrlConf/Req*）在正式包中全部走 HTTPS，抓包中无明文业务请求。',
            's01 中 10.0.2.15:5555 ↔ 10.0.2.2 的 adb 流（WRTE/OKAY 帧，约 1MB）为 tcpdump 回传通道，非业务流量，不计入端点清单。',
            'mumu.nie.netease.com / api-pro.mumu.163.com 为 MuMu 模拟器自身流量；api.nanbeiyule.com 在目标 App 全部 Lua/配置中无引用，判为环境内其他应用。',
            'IMEI 体系域名（sluice/plugin-res/sdk-config/dh-api 的 imeete 变体）在 Lua 层无引用，属 native 发行 SDK；Lua 里 dhsdk host 为 dh-api.hzxuanming.com（hotfix-decrypted/src/app/Third/dhsdk/Sdk.lua:172）。',
            '热更 URL 完整形态（manifest 内嵌）：版本查询 GET https://gxb-api[-tx].{hzxuanming|imeete}.com/hotfix_update?env=1&appid=1073&engine_ver=3.13&channel=20001828&version=x.y.z（imeete 线 appid=1051&channel=7128）；文件下载 https://gxb-oss.{...}.com/yj/files/ 或 /other/files/；监控 https://gxb-monitor.{...}.com/monitor。Lua 侧入口见 hotfix-decrypted/src/app/hotupdate/lobby/ResChecker.lua:296 注释（HotFixManager 为 native 接口）。',
            's06（真机金币场）中 gxb-oss.imeete.com 65 流/20.9MB 为开局前资源热更下载，是该场景最大 HTTP(S) 流量。',
            '金币场 token 走 https://hz-hylas.mengyoutech.com/auth/getWebToken（POST JSON，GoldReqTokenNew50.lua:29）；大厅 token 走 https://transit.hzxuanming.com/auth/get-token?（GET，ReqToken.lua:27，需先经 SRS ReqSessionID 取 tempSession）。',
        ],
    }
    result['notes'][0] = result['notes'][0] % len(plaintext)

    out_path = os.path.join(STEP2, 'http_endpoints.json')
    with open(out_path, 'w', encoding='utf-8') as f:
        json.dump(result, f, ensure_ascii=False, indent=1)
    print('written', out_path,
          'plaintext=%d sni_domains=%d' % (len(plaintext), len(https_by_sni)))


if __name__ == '__main__':
    main()
