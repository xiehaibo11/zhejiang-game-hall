# 敏感信息全量明细 —— 浙江游戏大厅 com.xm.zjgamecenter v1.5.4

数据源：`step4/secrets_report.json`（16 条裁决后结论；原始命中 `step1/raw_secrets.json` 3477 real / 13 critical，其中 6+ 条为第三方库常量/公开 CA 误报已剔除）。分析方式：纯静态离线，未做任何密钥有效性验证。

分级统计：critical 4 / high 4 / medium 5 / low 3

| ID | 类别 | 子类型 | 级别 | 值(掩码) | 位置 | 说明 |
|---|---|---|---|---|---|---|
| SEC-001 | sdk_credential | getui_push_appsecret | high | `PUSH_APPSECRET=5EOx...AKW1` | decompiled/apktool/AndroidManifest.xml:371 | 个推 PUSH_APPID/APPKEY/APPSECRET 硬编码 meta-data; 泄露可伪造推送通道调用。blackboard F001 |
| SEC-002 | sdk_credential | zeus_plugin_appsecret | medium | `appSecretKey=eb7f...96a7` | decompiled/apktool/AndroidManifest.xml:413 | ZEUS_PLUGIN_LIVE(抖音直播插件) appKey/appSecretKey 硬编码。blackboard F002 |
| SEC-003 | sdk_credential | cmic_yidonglogin_appkey | medium | `YIDONGLOGIN_APPKEY=307F...ED2D` | decompiled/apktool/AndroidManifest.xml:366 | 移动一键登录 AppKey, 配套 libsig_native.so。blackboard F003 |
| SEC-004 | sdk_credential | topon_amap_ad_keys | low | `TOPON_APP_KEY=9470...1515; com.amap.api.v2.apikey` | decompiled/apktool/AndroidManifest.xml:383 | 广告聚合/定位 SDK key, 泄露后果为配额盗用 |
| SEC-005 | hardcoded_business_key | phonelogin_appkey_x4 | critical | `2685db9c...6989d / c963f320...957ef / d9976245...f6b5 (另一组注释掉)` | lua-src-apk/app/Config/AreaConfig.lua:45 | 手机验证码/登录 MD5 签名盐, 4 组区域配置明文(45-46/111-112/182-183/247-248); 直接支撑 VULN-005 离线重签 |
| SEC-006 | hardcoded_business_key | luac_xxtea_key | critical | `03f1fdcbf5215b45fc790aaf3b965837 (前16字节)` | libcocos2dlua.so LuaStack::setXXTEAKeyAndSign@0x6d38a4 | 897 个 luac 加密密钥+签名 devaguopeifei; 已有解密器, 视同公开。支撑 VULN-007 |
| SEC-007 | hardcoded_business_key | res_rpk_root_key | critical | `f84c7b745c8c00ede9d6add6a605cf63` | assets-apk/lib/arm64-v8a/libcocos2dlua.so 文件偏移 0x131d42c | 资源体系根密钥(xxd 实测复核); 派生 5 个 Blowfish 密钥(见 step3 CRYPTO-002 decrypted_keys_hex) |
| SEC-008 | hardcoded_business_key | srs_default_aes_key_iv | critical | `key=f3621205...12448b; iv=15ff0100...084f1307` | assets-apk/lib/arm64-v8a/libcocos2dlua.so vaddr 0x11f55ec/0x11f560c | SRS 流量默认 AES-256 key/IV; 支撑 VULN-001 被动离线解密 |
| SEC-009 | hardcoded_business_key | loginsign_private_key | high | `privateKey=0a1b...b95c` | decompiled/jadx/sources/com/bianfeng/ymnsdk/ymndatalib/utils/LoginSignUtils.java:14 | 登录埋点 MD5 签名私钥硬编码, 可伪造数据上报 |
| SEC-010 | hardcoded_business_key | webpay_private_key_slot | high | `YMNSDK_WEBPAY_PRIVATE_KEY (本 APK Manifest 未注入, 渠道包注入槽位)` | decompiled/jadx/sources/com/bianfeng/utilslib/AppConfigUtils.java:66 | 支付下单签名私钥读取点; 本包未见该 meta-data, 渠道包一旦注入即随包泄露。支撑 VULN-011 |
| SEC-011 | internal_endpoint | cleartext_test_endpoints | high | `112.126.81.124:80 / appstore.racyqp.com:8090 / 47.111.89.252:8088 / 121.199.42.69:8866 / 119.97.159.53:8080 / 47.102.108.186:8087` | lua-src-apk/app/Config/UrlConf.lua:6 | 灰度/测试/回退明文地址组; 47.111.89.252:8088 为短信验证码发送接口(手机号明文); 详见 VULN-017。另 AlloginInterface.java:39 / feature/e.java:27,142 |
| SEC-012 | debug_switch | sdcard_debug_files | medium | `SD卡 bianfeng/sdk/debug / h5_pay_debug / h5_login_debug / h5_room_debug` | decompiled/jadx/sources/com/bianfeng/paylib/utils/YmnURLManager.java:33 | SD 卡种文件即切换支付/登录/房间到测试域名并开调试日志; 老机型外部存储全局可写。IsDebug 默认 false(GlobalConfig.lua:8) |
| SEC-013 | credential_storage | plaintext_password_token | high | `KW_DATA_LAST_LOGIN_PASSWORD / KW_LOCAL_TOKEN / opensdk_wx_response_refresh_token` | lua-src-apk/login/Req/RunLogin.lua:46 | 密码原文/token/微信 refresh_token 明文持久化; 另 HttpManager.lua:111, WechatSupportInterface.java:145。见 VULN-019 |
| SEC-014 | certificate_material | bks_pem_bundles | low | `grs_sp.bks/hmsincas.bks/hmsrootcas.bks/updatesdkcas.bks/com.xm.zjgamecenter.cert.pem` | decompiled/apktool/assets/ | 华为/推送 SDK 公开 CA 包+自签证书; com.xm.zjgamecenter.cert.pem 提示 transit HTTPS 可能有自校验(Phase 2 实测未见 pinning 拦截), 无私钥泄露 |
| SEC-015 | sdk_credential | sigmob_crypto_material | low | `KGpf...Jyuq` | decompiled/jadx/sources/com/czhj/sdk/common/network/SigmobRequest.java | Sigmob 广告 SDK 内置常量, 第三方噪音级 |
| SEC-016 | noise_filtered | false_positives | low | `bouncycastle PEMReader 常量/华为 bks/个推常量名/heytap AES key`（占位/低置信度） | step1/raw_secrets.json critical 13 条中的第三方条目 | raw_secrets.json 13 条 critical 中 6+ 条为第三方库常量或公开 CA, 不构成泄露; 已甄别剔除 |

说明：`is_placeholder=true` 的条目为疑似占位值/示例值或已甄别的误报聚合，仅低置信度保留。