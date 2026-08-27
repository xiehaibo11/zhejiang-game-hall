# 浙江游戏大厅（com.xm.zjgamecenter v1.5.4）深度逆向产物

来源：MuMu 模拟器（127.0.0.1:5555，root）实机提取，2026-08-20。

## 目录结构

| 目录 | 内容 |
|---|---|
| `apk/base.apk` | 原始安装包（56MB，arm64） |
| `decompiled/apktool/` | apktool 全量解包：`AndroidManifest.xml`、`res/` 全部布局 XML 与图标图片、`smali*/` 全部 4 个 dex 的 smali 代码、`assets/`、`lib/` |
| `decompiled/jadx/` | jadx 反编译的全部 Java 源码（`--no-res`） |
| `assets-apk/assets/` | APK 内原始 Cocos 资源：大厅 UI 图、CSB、plist、音频、字体（明文） |
| `assets-apk/lib/arm64-v8a/` | 全部 native so（`libcocos2dlua.so` 等 10 个） |
| `lua-src-apk/` | **APK 内置 897 个加密 luac 解密后的 Lua 源码**（大厅框架层：login/lobby/app/cocos） |
| `hotfix-decrypted/src/` | **设备热更层 4318 个 luac 解密后的 Lua 源码**（全部玩法：Mahjong 台州麻将、DoubleKou 双扣、DaTong、HongShi、Landlords、ShutCards、WuLong、LookAnxiously、BaseCardGame、GameCommon、LiangBang 等） |
| `hotfix-decrypted/res/` | 热更层全部游戏资源（1762 png、859 csb、626 plist、1446 mp3、atlas、fnt、c3b 等，已解密为明文） |
| `device-files/hotfix/` | 热更层原始加密文件（含 `harbor/` 热更 manifest） |
| `device-files/plugin/` | 插件目录（一个 Cocos Creator 子游戏 old.apk + 未完成下载的 .cache） |
| `device-files/plugins_v3_data/` | Cocos Creator 插件游戏 com.daren.goldzj（311MB：astc 纹理、atlas、json 均为明文；18 个 .jsc 已破解，见下） |
| `plugin-extracted/old-apk/` | 插件旧包 old.apk（21MB）解包产物（9 个 jsc 已破解） |
| `原版可编辑源码/插件/com.daren.goldzj/JSC解密/` | **全部 27 个 jsc 解密后的明文 JS（15MB）**：`old-apk/`（9）+ `hotfix-creator2/`（18，设备热更版，含联运 SDK、全部玩法逻辑） |
| `tools/` | 解密脚本（见下） |
| `docs/hotfix-container-format.md` | hotfix 容器格式与密钥派生链完整文档 |

## 加密体系（已全部破解）

1. **APK 内置 luac**：13 字节签名 `devaguopeifei` + XXTEA（无长度前缀），密钥 `03f1fdcbf5215b45fc790aaf3b965837`（取前 16 字节），出自 `libcocos2dlua.so` 0x11754c4/0x11754e5。
   - 解密：`tools/decrypt_luac.py <in> <out>`
2. **hotfix 容器（hdq，magic `89 77 88 89`）**：10 字节头（magic + 0x82 + keyIndex + 明文大小 LE u32）+ Blowfish-ECB。5 个 24 字节 Blowfish 密钥存于 `assets-apk/assets/local/res.rpk`（本身用 XXTEA 加密，密钥 `f84c7b745c8c00ede9d6add6a605cf63`）。.luac 解容器后还有一层 APK 同款 XXTEA 内层；png/csb/plist 等解容器即明文；mp3 为明文透传。
   - 解密：`tools/decrypt_hotfix.py <in> <out>`；批量：`tools/batch_decrypt_hotfix.py`
3. **插件 jsc**（Cocos Creator 2.x）：XXTEA + GZIP 双层，密钥 `D76E842930B0B153`。
   - 解密：`tools/decrypt_jsc.py <in.jsc>`；批量+归档：`tools/decrypt_jsc.py --batch <目录> --save <outdir> <前缀>`
   - 密钥定位与算法还原过程见下「插件 jsc 破解」。

## 插件 jsc 破解（2026-08-22，第 4 层加密闭环）

对象：com.daren.goldzj（RePlugin 子应用，Cocos Creator 2.x 联运棋牌，达仁科技）全部 27 个 jsc。

**密钥定位链**（`plugin-extracted/old-apk/lib/arm64-v8a/libcocos2djs.so`，29.5MB，arm64）：

1. jsc 加载函数（0x7f6d7c 起）：`filename+".jsc"` → `FileUtils::isFileExist/getDataFromFile` → key 取自全局 `std::string @0x1c36fd8` → `xxtea_decrypt` → `ZipUtils::isGZipBuffer` → `inflateMemory`。即 **jsc = XXTEA(GZIP(JS 明文))**，无签名头。
2. 全局 key 的写入方：`AppDelegate::applicationDidFinishLaunching` @ 0x756c00 —— SSO 直接构造 `"D76E842930B0B153"` → `jsb_set_xxtea_key`（调用点 0x756cfc）。同函数另有 `"FEDCBA9876543210"` 经混淆函数 0x6f7860 两次变换后 append，属 universe（边锋）SDK zip 热更包密钥线（`un_xxtea_*`、`Unzipper::setKey`），与 jsc 无关。
3. 算法为**标准 xxtea-c BTEA**（非魔改）：内部实现 0x8113e4 中 `sum 初值 = udiv(52,n)*DELTA + 0xb54cda56`、每轮 `+= 0x61c88647`，而 `0xb54cda56 = 6×DELTA (mod 2³²)`、`0x61c88647 = -DELTA (mod 2³²)`，等价于标准 `q=6+52/n; sum=q*DELTA; 每轮 -DELTA`（编译器 madd 优化的假象）；`e = (sum>>2)&3`（ubfx #2,#2 @0x811508）；长度校验 `v[n-1] ∈ [文件字节-7, 文件字节-4]`。

**验证**：27/27 全部成功（old-apk 9 + 设备热更 18），`settings.js` 还原 `window._CCSettings`，其余均为合法压缩 JS。产物已归档 `原版可编辑源码/插件/com.daren.goldzj/JSC解密/`（15MB）。

**明文内容要点**：热更版为完整联运（lianyun）棋牌平台——`lianyun_lobby`（1.8MB 大厅）、`scripts_game`（4.3MB 全部玩法）、`lianyun_common`（联运 SDK）、`BundleUpdatorV3`（对应 plugins_v3_data 的热更器）；WebSocket 网关域名群 `wss://ly-ws7231.{wzchayuan|tt2kj|gameabc2|bianzuihz|hzfengxiang…}.com`，充值 `https://recharge.mengyoutech.com/`，活动接口 `https://{ly-acts|ly-opiface}.bfyx.net` 等；泄露构建路径 `F:/darenneiqian/frameworks/cocos2d-x`。

分析工具链（tools/）：`find_decrypt_pipeline.py`（PLT/GOT 交叉引用，支持 mangled 名）、`disasm_window.py`（开窗反汇编）、`disasm_appdelegate.py`、`disasm_xxtea_full.py`、`decrypt_jsc.py`（解密器）。

## 完整性校验

- APK luac：897/897 解密成功（UTF-8/GBK Lua 源码）
- hotfix：10950 个文件全部处理，8854 个加密容器 100% 解密成功；lua 源码抽查、png/jpg/mp3/plist/csb 魔数校验全部通过（部分 lua 为 GBK 编码、部分 plist 无 `<?xml` 头，均为原版如此）

## 2026-08-22 完整性复核与补齐

1. **APK 内 res 的 44 个 hdq 加密容器**（此前误记为全明文）：43 个由热更同路径解密版覆盖，剩余 5 个（4 CSB + 1 FNT，含 `hall/Font/zhanji_num-export.fnt`）已用 `decrypt_hotfix.py` 补解至 `hotfix-decrypted/apk-res-hdq/` 并并入 `原版可编辑源码/热更新工程/res/`，现 44/44 全解密。
2. **Lua 质量全量验证**：`hotfix-decrypted/src` 4318 + `lua-src-apk` 897 逐文件验证开头，全部为合法 Lua（含 `\r\n`/UTF-8 BOM 前缀、`cc = cc or {}` 等写法），解密率 100%。
3. **回编译闭环验证**：`decompiled/apktool` → `apktool b`（EXIT 0，53MB）→ zipalign → debug 签名 → MuMu 模拟器安装启动成功（进程稳定、热更 Downloader 正常拉取 manifest、无崩溃）。产物：`原版可编辑源码/浙江游戏大厅_rebuilt_v1.5.4_signed.apk`。
4. **设备现场备份**：卸载重装前全量 pull `/data/data/com.xm.zjgamecenter`（652MB，含 shared_prefs/databases）→ `设备完整备份/`。
5. **`device-files/plugin/*.cache`（312MB）**：确认无 EOCD，为未完成下载的损坏 Zip，不可恢复，非缺口。

### 遗留缺口（插件支线）→ 已全部闭环

- ~~`plugins_v3_data/com.daren.goldzj` 18 个 .jsc 加密未破解~~ → 已破解（见「插件 jsc 破解」）
- ~~`plugin/05e83702...old.apk` 含 9 个 jsc，未解包逆向~~ → 已解包（`plugin-extracted/old-apk/`）+ 9 个 jsc 全部破解
- 至此仓库内 4 层加密（APK luac / hdq 容器 / res.rpk / 插件 jsc）100% 破解。

## 备注

- 两个模拟器实例（127.0.0.1:5555 与 emulator-5554）内容一致，取自前者。
- 设备 `/sdcard/Android/data/com.xm.zjgamecenter/` 仅为广告 SDK 缓存（快手/穿山甲/个推），无游戏资源，未收录。
- 设备上另一应用 `com.wm.gamehall.vivo`（411MB）是 vivo 渠道的同名大厅，非本仓库证据目标（CLAUDE.md 指定 com.xm.zjgamecenter 1.5.4），未提取；如需可再拉。
