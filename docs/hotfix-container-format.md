# hotfix 资源容器格式

`device-files/hotfix/` 下（除 mp3 等音频为明文外）的所有文件均为同一自定义容器。
逆向依据：`assets-apk/lib/arm64-v8a/libcocos2dlua.so` 中的
`hdq::decrypt` (0xca81ec)、`hdq::load_key` (0xca81c0)、`ResKey::load` (0xca8df4)、
`ResKey::getKey` (0xca8f34)、`blowfish_decrypt` (0xca86ac)、`blowfish_key_setup` (0xca8a8c)、
`btea` (0xca8f44)、`cocos2d::FileUtils::loadResKey` (0xe69300)。

## 容器结构

| 偏移 | 大小 | 内容 |
|------|------|------|
| 0 | 4 | magic `89 77 88 89` |
| 4 | 1 | 固定 `0x82` |
| 5 | 1 | 密钥索引 keyIndex ∈ {0..4} |
| 6 | 4 | 小端 uint32 明文大小 |
| 10 | n | Blowfish-ECB 密文，8 字节块，块内按大端字处理；末尾零填充到 8 的倍数 |

解密：`ResKey::getKey(keyIndex)` 取预展开的 Blowfish 上下文（每项 0x1048 字节），
对 payload 逐 8 字节块 `blowfish_decrypt`（ECB、无 IV、无链），截取前 `明文大小` 字节。
文件小于 11 字节或前 5 字节不是 magic 时原样返回（mp3 即为此类明文文件）。

## 密钥派生

5 个 24 字节 Blowfish 密钥存放在 `assets-apk/assets/local/res.rpk`（120 = 5×24 字节）。
res.rpk 整体被 btea（即标准 XXTEA，与 APK luac 同款实现）加密，
解密密钥硬编码于 so 的 0x131d42c（16 字节）：

```
f8 4c 7b 74 5c 8c 00 ed e9 d6 ad d6 a6 05 cf 63
```

（作为 4 个小端 u32：0x747b4cf8, 0xed008c5c, 0xd6add6e9, 0x63cf05a6）

解密后的 5 个 24 字节密钥（十六进制）：

```
0: 35cbf221cc86ff52415cf38336bf32cef3a2498fee609077
1: 30d476a9d6e86a22741f6c5cc464c59049a8968c8added31
2: ede9a860a918e31103e4132b5aacc4586a852ec9099beb25
3: dc9a02f08fbfeba3d4caec08179cd8bbb48d63ff5eb3614c
4: 8d6b10cf91055b7b06af7b01b931aee1e8886885f40cb4cd
```

Blowfish 为标准算法：P/S 初始值为 pi 的十六进制小数，key_schedule 中密钥字节按大端打包循环异或 P 数组。

## .luac 的内层加密

`src/` 下的 .luac 解开容器后，内层仍是 APK 内置资源同款格式：
13 字节签名 `devaguopeifei` + 标准 XXTEA（无长度前缀），
密钥 ASCII `03f1fdcbf5215b45fc790aaf3b965837`（取前 16 字节）。
即热更 luac 是"二次包装"：容器(Blowfish) → APK 格式(XXTEA) → Lua 源码（非字节码）。
png/csb/plist/fnt 等资源解出容器即为最终明文，无内层。

## 验证样本（tools/decrypt_hotfix.py 实测）

| 样本 | keyIndex | 解密结果 |
|------|----------|----------|
| src/main.luac | 3 | 4144 字节 Lua 源码（`local writablePath = ...` 开头，xpcall 结尾） |
| src/GameCommon/Code/GameBase/GameBaseProtocol.luac | 4 | 15088 字节 Lua 源码 |
| res/MatchAH/game_result/continue.png | 0 | 合法 PNG 73x39 |
| res/MatchAH/GameChangeIcon.csb | 1 | FlatBuffers CSB 二进制 |
| res/LiangBang/Sound/bomb_6_7.mp3 | — | 明文 ID3，容器原样透传 |
