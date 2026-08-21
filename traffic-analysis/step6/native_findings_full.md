# Native / JNI 全量明细 —— 浙江游戏大厅 com.xm.zjgamecenter v1.5.4

数据源：`step3/jni_analysis.json`、`step3/crypto_native_analysis.json`。分析方式：纯静态离线（llvm-readelf dynsym + llvm-objdump 反汇编 + strings），dynsym 完整未剥离，全部 so 符号偏移已逐符号复核一致（见 crypto_native_analysis.json symbol_offset_reverification）。

## 1. SO 清单（10 个，双 ABI arm64-v8a/armeabi-v7a）

| SO | dynsym FUNC | Java_ 导出 | 角色 |
|---|---|---|---|
| libcocos2dlua.so | 37904 | 34 | Cocos2d-x 3.13 Lua 引擎 + 自研资源加密(hdq/Blowfish/XXTEA) + SRS 网络栈(un.network, libuv) + Lua 绑定 |
| libapkpatch.so | 277 | 2 | sisong ApkPatch 差分补丁(replugin 插件更新) |
| libfastvo.so | 207 | 5 | 边锋 fastvo 语音(Speex 编解码) |
| libgetuiext3.so | 106 | 1 | 个推推送扩展 |
| libpangleflipped.so | 8 | 0 | 穿山甲广告 flipped 组件(RegisterNatives 动态注册,无 Java_ 导出) |
| libsgcore.so | 4 | 2 | 阿里聚安全 SGMain 风控(经快手 SDK com.kwai 引入) |
| libsig_native.so | 141 | 2 | 移动一键登录(cmic)签名 |
| libBugly.so / libBugly_Native.so | 181 / 193 | 0 | 腾讯 Bugly 崩溃上报(Native 崩溃捕获) |
| libzeus_direct_dex.so | 6 | 0 | 抖音直播插件(ZEUS_PLUGIN_LIVE)dex 直载 |

## 2. JNI 绑定（13 组展开 + 引擎标准桥）

### JNI-001 `org.cocos2dx.lib.Cocos2dxLuaJavaBridge.callLuaFunctionWithString(int, String)`
- SO：libcocos2dlua.so；native 符号：Java_org_cocos2dx_lib_Cocos2dxLuaJavaBridge_callLuaFunctionWithString @0x6c7a5c
- Java 入口：jadx/sources/org/cocos2dx/lib/Cocos2dxLuaJavaBridge.java:5
- 用途：Java -> Lua 回调桥(按 Lua 函数引用 id 调用)
- 备注：Lua 侧 luaj.callStaticMethod 反向进入 Java;此桥为 Java 回调 Lua 的正向通道

### JNI-002 `org.cocos2dx.lib.Cocos2dxLuaJavaBridge.callLuaGlobalFunctionWithString(String, String)`
- SO：libcocos2dlua.so；native 符号：Java_org_cocos2dx_lib_Cocos2dxLuaJavaBridge_callLuaGlobalFunctionWithString @0x6c7af0
- Java 入口：jadx/sources/org/cocos2dx/lib/Cocos2dxLuaJavaBridge.java:7
- 用途：Java -> Lua 全局函数回调(replugin 桥实际使用点)
- 备注：AppActivity.onCreate:42-59 注册 RepluginListener,runOnGLThread 后调本方法触发 Lua 全局函数 'RepluginSDKCallBack'(参数 {code,msg} JSON);RepluginSdkJavaBridging 的 13 个静态方法(getPluginsInfo/installPlugin/openPlugin 等)由 Lua 经 luaj.callStaticMethod 反向调用,结果经此桥回 Lua,状态码 51000-59001 系列

### JNI-003 `org.cocos2dx.lib.Cocos2dxLuaJavaBridge.retainLuaFunction / releaseLuaFunction(int)`
- SO：libcocos2dlua.so；native 符号：Java_org_cocos2dx_lib_Cocos2dxLuaJavaBridge_retainLuaFunction / _releaseLuaFunction
- Java 入口：jadx/sources/org/cocos2dx/lib/Cocos2dxLuaJavaBridge.java:9
- 用途：Lua 函数引用计数管理

### JNI-004 `org.cocos2dx.lib.Cocos2dxJavascriptJavaBridge.evalString(String)`
- SO：libcocos2dlua.so；native 符号：Java_org_cocos2dx_lib_Cocos2dxJavascriptJavaBridge_evalString
- Java 入口：jadx/sources/org/cocos2dx/lib/Cocos2dxJavascriptJavaBridge.java:5
- 用途：JS 求值桥(Cocos JS 支持,主链路为 Lua,此为伴随桥)

### JNI-005 `org.cocos2dx.lib.Cocos2dxHelper.nativeSetContext(Context, AssetManager)`
- SO：libcocos2dlua.so；native 符号：Java_org_cocos2dx_lib_Cocos2dxHelper_nativeSetContext
- Java 入口：jadx/sources/org/cocos2dx/lib/Cocos2dxHelper.java:87
- 用途：引擎初始化(传入 AssetManager,native 侧自此接管 assets 读包 -> 进入 hdq/XXTEA 资源解密路径)
- 加密候选：间接口:后续资源读走 hdq::decrypt/xxtea_decrypt(见 crypto_native_analysis.json CRYPTO-001~004)

### JNI-006 `org.cocos2dx.lua.YmnSupport.ymnCallBack(int, String)`
- SO：libcocos2dlua.so；native 符号：Java_org_cocos2dx_lua_YmnSupport_ymnCallBack
- Java 入口：jadx/sources/org/cocos2dx/lua/YmnSupport.java:38
- 用途：YmnSDK(边锋联运 SDK)事件回调进 native/Lua;AppActivity.checkScheme 以 code=1601 回调 scheme 参数

### JNI-007 `com.bianfeng.libuniverse.Helper.nativeSetContext`
- SO：libcocos2dlua.so；native 符号：Java_com_bianfeng_libuniverse_Helper_nativeSetContext
- Java 入口：jadx/sources/com/bianfeng/libuniverse/Helper.java:0
- 用途：universe 框架上下文初始化(un.network/un.Encryption 等 Lua 绑定所在框架)

### JNI-008 `org.cocos2dx.lib.Cocos2dxRenderer.nativeInit/nativeRender/nativeOnPause/nativeOnResume 等 11 个`
- SO：libcocos2dlua.so；native 符号：Java_org_cocos2dx_lib_Cocos2dxRenderer_* (nativeRender@0x6cda48 等)
- Java 入口：jadx/sources/org/cocos2dx/lib/Cocos2dxRenderer.java:17
- 用途：GL 渲染生命周期
- 备注：其余引擎 JNI(Cocos2dxEditBoxHelper/WebViewHelper/VideoHelper/Bitmap/Accelerometer/AudioFocusManager/GameControllerAdapter/Downloader 等)共 34 个 Java_ 导出,均为标准 Cocos2d-x 3.13 引擎桥,无业务加密语义,不逐条展开

### JNI-009 `com.tan.mark.SigNativeId.getBootFromJNI / getUpdateFromJNI`
- SO：libsig_native.so；native 符号：Java_com_tan_mark_SigNativeId_getBootFromJNI @0x10abc / _getUpdateFromJNI @0x10f00
- Java 入口：jadx/sources/com/tan/mark/SigNativeId.java:0
- 用途：移动一键登录(cmic)认证串生成;配套 Manifest YIDONGLOGIN_APPKEY(硬编码,见 step1 raw_secrets)
- 加密候选：SDK 内部(cmic 私有签名,本阶段未展开)
- 备注：第三方运营商 SDK 黑盒,逆向性价比低;若需还原走运行时 hook getBootFromJNI/getUpdateFromJNI 返回值即可

### JNI-010 `com.bianfeng.fastvo.audio.spx.Speex.open/close/encode/decode/getFrameSize`
- SO：libfastvo.so；native 符号：Java_com_bianfeng_fastvo_audio_spx_Speex_* (5 个导出)
- Java 入口：jadx/sources/com/bianfeng/fastvo/audio/spx/Speex.java:29
- 用途：语音消息 Speex 编解码
- 加密候选：none(编解码非加密)

### JNI-011 `com.github.sisong.ApkPatch.initApkDiff / patch`
- SO：libapkpatch.so；native 符号：Java_com_github_sisong_ApkPatch_initApkDiff / _patch
- Java 入口：jadx/sources/com/ymnsdk/replugin/PluginInterface.java:62
- 用途：replugin 插件包差分合并(HDiffPatch 系)

### JNI-012 `com.kwai.sgcore.SGCore.getMagic / getClock`
- SO：libsgcore.so；native 符号：Java_com_kwai_sgcore_SGCore_getMagic / _getClock
- Java 入口：jadx/sources/com/yxcorp/kuaishou/addfp/android/Orange.java:0
- 用途：阿里聚安全设备指纹/风控令牌
- 加密候选：SDK 私有(聚安全 wua 类)

### JNI-013 `com.igexin.dms.core.NativeCaller.doDaemon`
- SO：libgetuiext3.so；native 符号：Java_com_igexin_dms_core_NativeCaller_doDaemon
- Java 入口：jadx/sources/com/igexin/push/extension/mod/SecurityUtils.java:23
- 用途：个推守护进程(保活)

## 3. Lua→native 业务主通道（tolua 绑定，非 JNI）

- **un.network.TcpConnection** → universe::network::GuoPengFei/TcpConnection；方法：setConnectCallback/setMessageCallback/setCloseCallback/setSetupCallback/sendMessage/sendMessageStream/sendMessagePB/sendMessageData；证据：dynsym lua_universe_network_TcpConnection_*;app/Net/TcpConnection.lua
- **un.network.IStream/OStream** → universe::network IStream/OStream；方法：read/writeUInt8/16/32、read/writeString、read/write(raw)；证据：SRSProtocol.lua 等 849 个协议使用(step2 protocol_index_full.json)
- **un.Encryption** → universe::network::Encryption；方法：encryptLua/decryptLua/setAesKeyLua/buglyInitLua；证据：dynsym lua_universe_core_Encryption_* @0x6c5468 等;lua_register_universe_core_Encryption@0x6c5b8c
- **un.Http / un.Downloader / un.Unzipper / un.Decompressor / un.MergeFile / un.Copy / un.Commander** → universe 命名空间对应类；方法：-；证据：strings 类名字符串

## 4. 加密体系 native 发现（CRYPTO-001~005）

### CRYPTO-001 APK 内置 luac 资源加密(第一层)（XXTEA，severity=High，confidence=high）
- native 入口：libcocos2dlua.so: cocos2d::LuaStack::setXXTEAKeyAndSign@0x6d38a4 / cleanupXXTEAKeyAndSign@0x6d3948;xxtea_decrypt(unsigned char*,uint,uchar*,uint*)@0x7cd980 / xxtea_encrypt@0x7cd680;un_xxtea_decrypt@0x8f51a0 / un_xxtea_encrypt@0x8f4ea0
- 密钥来源：hardcoded；派生：ASCII '03f1fdcbf5215b45fc790aaf3b965837' 取前 16 字节(0x30 0x33 0x66 0x31 ... 0x35 0x62),即 4 个 LE-u32;由 setXXTEAKeyAndSign 在引擎初始化时设置
- 数据流：assets/src 加密 luac -> Cocos FileUtils/LuaStack 读包 -> xxtea_decrypt -> Lua 源码
- 验证：tools/decrypt_luac.py 参考实现;docs/hotfix-container-format.md 记录;热更 luac 内层同格式已由 decrypt_hotfix.py 实测(main.luac 解出 4144 字节合法 Lua)
- 修复方向：资源加密密钥硬编码且已可提取,视同公开;如需保护应改用按需下发的会话密钥

### CRYPTO-002 hdq 热更资源容器加密(第二层)（Blowfish，severity=High，confidence=high）
- native 入口：libcocos2dlua.so: hdq::decrypt(char*,ulong,ulong*)@0xca81ec;cocos2d::FileUtils::hdq_decrypt@0xe693ec;blowfish_decrypt@0xca86ac;ResKey::getKey(int)@0xca8f34(按 keyIndex 取预展开 Blowfish 上下文,每项 0x1048 字节)
- 密钥来源：derived_from_asset；派生：5 个 24 字节 Blowfish 密钥存于 assets/local/res.rpk(120=5x24),res.rpk 整体由 XXTEA 解密得到(见 CRYPTO-003);key_schedule 密钥字节大端打包循环异或 P 数组
- 数据流：hotfix 容器 -> hdq::decrypt -> ResKey 5 选 1 -> Blowfish-ECB -> 明文(png/csb 为最终明文;luac 还有 CRYPTO-004 内层)
- 验证：decrypt_hotfix.py 实测 5 样本:src/main.luac(keyIndex=3)->4144B Lua;GameBaseProtocol.luac(4)->15088B;continue.png(0)->合法 PNG 73x39;GameChangeIcon.csb(1)->FlatBuffers;bomb_6_7.mp3 明文透传
- 修复方向：Blowfish-ECB 弱模式+密钥随包分发,保密性视同无;仅起防抓取作用

### CRYPTO-003 res.rpk 密钥派生链(密钥源)（XXTEA，severity=Critical，confidence=high）
- native 入口：libcocos2dlua.so: cocos2d::FileUtils::loadResKey(const char*)@0xe69300 -> ResKey::load(uchar*,ulong)@0xca8df4 -> hdq::load_key@0xca81c0 -> btea@0xca8f44
- 密钥来源：hardcoded_in_so；派生：XXTEA 密钥 16 字节硬编码于 so 文件偏移 0x131d42c: f8 4c 7b 74 5c 8c 00 ed e9 d6 ad d6 a6 05 cf 63(4 个 LE-u32: 0x747b4cf8 0xed008c5c 0xd6add6e9 0x63cf05a6);本阶段 xxd 实测复核一致
- 数据流：res.rpk(密文) -> btea(硬编码密钥) -> 5 个 Blowfish 密钥 -> ResKey 预展开上下文
- 验证：decrypt_hotfix.py load_keys() 实测解出 5 密钥并用于样本解密成功
- 修复方向：根密钥硬编码于 so,整个资源密钥体系可被完整离线重建

### CRYPTO-004 热更 luac 内层二次加密(第三层)（XXTEA，severity=High，confidence=high）
- native 入口：复用 CRYPTO-001 的 xxtea_decrypt/un_xxtea_decrypt 路径(hotfix/src 优先于 assets/src,见 main.lua 搜索路径)
- 密钥来源：hardcoded；派生：同 CRYPTO-001:'03f1fdcbf5215b45fc790aaf3b965837' 前 16 字节;签名 'devaguopeifei' 13 字节;与 CRYPTO-001 唯一差异:解出后无 4 字节长度前缀
- 数据流：热更 luac = 容器(Blowfish) -> APK 格式(XXTEA) -> Lua 源码,二次包装
- 验证：decrypt_hotfix.py 实测 main.luac/GameBaseProtocol.luac 二次解出合法 Lua 源码
- 修复方向：同 CRYPTO-001

### CRYPTO-005 SRS TCP 流量加密(un.network 会话层)（AES，severity=High，confidence=high）
- native 入口：libcocos2dlua.so: universe::network::Encryption::encrypt@0x8f5740 / decrypt@0x8f5914(均 bl AES_set_encrypt_key@plt 与 AES_cfb128_encrypt@plt);setDefaultAesKey@0x8f5718;setAesKey@0x8f5654;BaseProxy::setAesKey@0x90d54c;密钥协商 GuoPengFei::onRespKey@0x907edc(SRS::RespKey 结构体:u8 keyLen@+8,允许 16/24/32;key 字节@+9 -> BaseProxy::setAesKey)
- 密钥来源：hardcoded_default_plus_server_negotiated；派生：默认 AES 密钥 32 字节硬编码于 so vaddr 0x11f55ec(xxd 实测):f362120513e389ff2311d7360123100705a210007acc023c3901da2ecb12448b;setDefaultAesKey 反汇编: ldp q1,q0,[0x11f55ec] + keyLen 字段=0x20(32 => 256 bit);连接建立后服务端经 SRS::RespKey 下发会话密钥(BaseProxy::setAesKey)覆盖默认
- IV：hardcoded_default；默认 IV 16 字节 @0x11f560c(xxd 实测):15ff010034ab4cd355fea122084f1307;encrypt/decrypt 第 4 参可传自定义 IV,传 NULL 用该默认常量(反汇编 csel x8, x9, x4, eq)
- 数据流：Lua sendMessage -> GuoPengFei::sendMessage -> Proxy33::packMessage(写头+Encryption::encrypt)->uv_write;收包 translateMessage->Encryption::decrypt->dispatchMessage(appid/processid/msgid)
- 验证：—
- 待运行时验证：算法/默认材料静态已确认;'会话密钥是否每次协商覆盖默认值、帧标志位语义'需与 Phase 2 实抓帧比对确认(离线约束下本阶段未做动态验证)
- 修复方向：默认密钥+IV 硬编码,协商过程若无可信校验则流量可被离线解密;identify 字段另用 RC4(弱算法)

## 5. SRS 帧格式静态佐证与流量加密结论

- 帧头：12 字节；magic 0x4001 (LE 字节 01 40),另见 0x8001 标志字；校验和：未发现 CRC/校验和字段证据;strings 与反汇编均未见帧级校验逻辑(仅 OpenSSL 库自身噪音)
  - Proxy33::packMessage@0x90d554 反汇编:mov w8,#0x4001; strh w8,[hdr+2] —— 常量 0x4001 即 LE 字节 '01 40',证实 Phase 2 的 magic 常量真实存在于封包代码;同函数另有 mov w9,#-0x7fff(低 16 位 0x8001)strh 到 hdr+0,疑似加密/标志字
  - Proxy33::translateMessage@0x90d6fc 反汇编:头部按 12 字节处理(cmp x8,#0xc;mov w27,#0xc;OStream::fastSet(...,12)),ldrh 取偏移 +2 处 u16 长度,与 Phase 2 布局一致
  - 调试格式串:'GuoPengFei sendMessage: appid=%d, processid=%d, msgid=%d, aa=%d' / 'GuoPengFei dispatchMessage: appid=%d, processid=%d, msgid=%d' —— 帧路由字段为 appid/processid/msgid 三元组
  - 帧结构体 ZhouLuJun(包)与流 AUpdates(写)/OStream(读)在 universe::network 命名空间,Lua 经 un.network.IStream/OStream/TcpConnection tolua 绑定访问
- 帧加密结论：SRS 帧不走 XXTEA;加密路径为 universe::network::Encryption(AES-256-CFB128,见 CRYPTO-005)。network 命名空间内无 xxtea 符号引用,xxtea/un_xxtea/btea 仅在资源/Lua 加载路径
- 逐帧标志：Proxy33::translateMessage 在解析头部后按标志字节(ldrb [hdr+0] 分支)决定是否调用 Encryption::decrypt@0x8f5914 —— 支持加密帧与明文帧混跑(与 Phase 2 实测登录初期帧可明文解析一致)
- 密钥协商消息族：SRS::ReqKey / SRS::ReqKey32 (c2s) / SRS::RespKey (s2c): u8 keyLen@+8 (16/24/32) + key@+9 -> BaseProxy::setAesKey / SRS::CheckAct / CheckAct32 (密钥校验) / SRS::EncryptVer (加密版本协商,GuoPengFei::onEncryptVer@0x907dec)
- 默认 AES key：f362120513e389ff2311d7360123100705a210007acc023c3901da2ecb12448b
- 默认 AES IV：15ff010034ab4cd355fea122084f1307
- 解密配方：对加密帧:AES-256-CFB128,key=默认(未协商时)或 RespKey 会话 key,iv=默认常量;CFB 模式无填充,流式可直接对 payload 解密验证

## 6. native 防护逻辑（反调试/签名校验/风控）

- **anti_fraud_sdk**（libsgcore.so）：第三方风控 SDK,非针对逆向的主动对抗;对抓包无直接影响,可能影响模拟器环境登录(Phase 1 env_guard 已裁决)（证据：dynsym Java_com_kwai_sgcore_SGCore_getMagic/getClock / SGCore）
- **anti_debug_static_scan**（libcocos2dlua.so / libsgcore.so / libsig_native.so / libgetuiext3.so）：未在 4 个关键 so 中发现显式反调试/反 hook 字符串证据;不代表运行时无检测(sgcore 为混淆风控二进制,仅 4 个导出,内部不可见),标记为需运行时复核（证据：strings 扫描结果 / ptrace/TracerPid/frida/xposed 关键词零命中(本阶段静态扫描)）
- **integrity**（libzeus_direct_dex.so / libapkpatch.so）：插件链路存在下载校验机制(DownloadCode 错误族),具体校验算法未展开,与主包流量解密无关（证据：jadx com/ymnsdk/replugin / DownloadCode/patch 流程）

注：libsgcore.so（阿里聚安全，仅 4 导出）为混淆风控黑盒，ptrace/TracerPid/frida/xposed 关键词在 4 个关键 so 静态零命中，不代表运行时无检测，标记需运行时复核。