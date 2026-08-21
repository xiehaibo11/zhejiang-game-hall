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
| `device-files/plugins_v3_data/` | Cocos Creator 插件游戏 com.daren.goldzj（311MB：astc 纹理、atlas、json 均为明文；18 个 .jsc 仍为加密 JS 字节码，未破解） |
| `tools/` | 解密脚本（见下） |
| `docs/hotfix-container-format.md` | hotfix 容器格式与密钥派生链完整文档 |

## 加密体系（已全部破解，除插件 jsc）

1. **APK 内置 luac**：13 字节签名 `devaguopeifei` + XXTEA（无长度前缀），密钥 `03f1fdcbf5215b45fc790aaf3b965837`（取前 16 字节），出自 `libcocos2dlua.so` 0x11754c4/0x11754e5。
   - 解密：`tools/decrypt_luac.py <in> <out>`
2. **hotfix 容器（hdq，magic `89 77 88 89`）**：10 字节头（magic + 0x82 + keyIndex + 明文大小 LE u32）+ Blowfish-ECB。5 个 24 字节 Blowfish 密钥存于 `assets-apk/assets/local/res.rpk`（本身用 XXTEA 加密，密钥 `f84c7b745c8c00ede9d6add6a605cf63`）。.luac 解容器后还有一层 APK 同款 XXTEA 内层；png/csb/plist 等解容器即明文；mp3 为明文透传。
   - 解密：`tools/decrypt_hotfix.py <in> <out>`；批量：`tools/batch_decrypt_hotfix.py`
3. **插件 jsc**（plugins_v3_data 内 Cocos Creator）：仍加密，未处理（属第三方插件游戏，非大厅主链路）。

## 完整性校验

- APK luac：897/897 解密成功（UTF-8/GBK Lua 源码）
- hotfix：10950 个文件全部处理，8854 个加密容器 100% 解密成功；lua 源码抽查、png/jpg/mp3/plist/csb 魔数校验全部通过（部分 lua 为 GBK 编码、部分 plist 无 `<?xml` 头，均为原版如此）

## 备注

- 两个模拟器实例（127.0.0.1:5555 与 emulator-5554）内容一致，取自前者。
- 设备 `/sdcard/Android/data/com.xm.zjgamecenter/` 仅为广告 SDK 缓存（快手/穿山甲/个推），无游戏资源，未收录。
- 设备上另一应用 `com.wm.gamehall.vivo`（411MB）是 vivo 渠道的同名大厅，非本仓库证据目标（CLAUDE.md 指定 com.xm.zjgamecenter 1.5.4），未提取；如需可再拉。
