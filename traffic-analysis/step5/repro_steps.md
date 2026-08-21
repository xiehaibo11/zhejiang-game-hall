# Phase 5 复现步骤（repro_steps）—— 浙江游戏大厅 v1.5.4

每条含：步骤 / 参数与格式 / 预期结果 / 判定标准 / 止损。脚本均位于
`traffic-analysis/step5/pocs/`。总边界：离线/本地闭环；在线行为一律
`blocked_on=no_authorization_online`。

---

## VAL-001 / VULN-001 —— SRS 被动解密（Critical，可直接执行）

```bash
cd traffic-analysis/step5/pocs/VULN-001
python3 validate_request.py --scene s02_login --out evidence_v001_s02.json
python3 validate_request.py --scene s06_phone_gold_ingame
```
- 参数：`--scene` 对应 step2 场景；无需网络。
- 预期：握手帧 xy=1 默认 key 解出 `01000000`；s2c xy=4 RespKey 提取会话密钥；
  会话密钥解出的明文与 step2 锚点 `dec_hex` 全中零偏差。
- 判定：stdout `VERDICT: PASS`（已实测：s02 30/30 连接、122 帧全中；s06 PASS，
  且各连接会话密钥互不相同——16B/32B 并存）。
- 止损：纯只读；证据缺失即非零退出。

## VAL-002 / VULN-002 —— keystream 复用与伪造（High，可直接执行）

```bash
cd traffic-analysis/step5/pocs/VULN-002
python3 validate_request.py --scene s06_phone_gold_ingame --out evidence_v002_s06.json
```
- 预期：A 部分恒定密文分组（ReqKeepAlive×286、ReqJoin×38，密文前缀 `88732abe`）；
  B 部分伪造密文本地解密还原自选明文。
- 判定：`VERDICT: PASS`（已实测）。
- 止损：不构造/注入任何真实链路流量。

## VAL-005 / VULN-005 —— 验证码签名离线重签（Critical，可直接执行；闭环需授权设备）

```bash
cd traffic-analysis/step5/pocs/VULN-005
python3 validate_request.py --selftest
# 闭环（授权设备）：
frida -U -f com.xm.zjgamecenter -l runtime_observe.js --no-pause   # 触发一次"发送验证码"
python3 validate_request.py --app-id 10003 --areaid 1 --lobbyid 1 \
  --phone 13800000000 --timestamp 1787230125 --type pwd_get --wid 1 \
  --app-key 2685db9c34685c83d16b0101d646989d --expect-signature <hook 采到的 md5>
```
- 格式：`signature = md5(app_id=..areaid=..[auto_reg=0]lobbyid=..phone=..timestamp=..type=..wid=.. + appKey)`，
  键按字典序无分隔，appKey 末尾直拼（AreaConfig.lua 明文多份）。
- 预期：selftest 确定性输出；样本比对 `MATCH`。
- 判定：算法与材料全公开即成立；样本 MATCH 构成闭环。
- 止损：禁止把重签请求发往 palmapi（服务端接受度/timestamp 容差/频控 = 在线，blocked）。
- 备注：step2 抓包中 palmapi 为 TLS，signature 不可经 pcap 取得，只能 hook 采集。

## VAL-007 / VULN-007 —— 资源加解密闭环（Critical，可直接执行）

```bash
cd traffic-analysis/step5/pocs/VULN-007
python3 validate_request.py --out-dir /tmp/v007_out
```
- 预期：真实资产 `GtInit.luac` 解出 Lua 明文；篡改重加密后参考实现可还原。
- 判定：`VERDICT: PASS`（已实测；附带修正：该资产为无长度前缀变体）。
- 止损：产物仅写 `--out-dir`；不投递（投递属 VULN-008 通道，blocked）。

## VAL-012 / VULN-012 —— AlipayRsa.checkSign 恒真（High，可直接执行）

```bash
cd traffic-analysis/step5/pocs/VULN-012
python3 validate_request.py        # 静态断言方法体 == return 2（已实测 PASS）
# 可选复核（授权设备）：frida -U -f com.xm.zjgamecenter -l runtime_observe.js
```
- 判定：静态断言 PASS 即成立；hook 打印恒 2 为运行时复核。
- 止损：不接触真实支付链路。

## VAL-013 / VULN-013 —— GetuiActivity 跳板（High，授权设备可直接执行）

```bash
cd traffic-analysis/step5/pocs/VULN-013
python3 validate_request.py --serial <授权设备序列号> --target-component <内部组件全类名>
# 输出 dry-run 命令；确认设备无误后：
POC_CONFIRM=YES python3 validate_request.py --serial <...> --target-component <...>
```
- 预期：目标（非导出）组件被经跳板拉起，logcat 见 `pkgName is ...`。
- 判定：非导出组件被外部 intent 拉起即成立。
- 止损：目标选无状态变更页面；不注入真实 h5url；拉起即停。

## VAL-003 / VULN-003 —— 帧无 MAC（Medium，离线演示）

`python3 pocs/VULN-003/validate_request.py --help`：离线合成帧比特翻转演示 CFB 明文损坏。
判定：演示成立 + 帧格式无校验字段。止损：不得对真实连接注入（在线 blocked）。

## VAL-008 / VULN-008 —— 热更 md5-only（Critical，离线演示）

`python3 pocs/VULN-008/validate_request.py --src <某.lua> --out <本地目录>`：
生成篡改 lua + 自洽 md5 manifest，模拟客户端比对通过。
判定：md5 比对 PASS。止损：不上传不替换设备文件；投递通道 blocked。
待办：manifest 首拉通道是否强制 HTTPS+签名（在线 blocked）；Zip Slip 见 VAL-021。

## VAL-009 / VULN-009 —— RePlugin 关签名校验（High，离线演示）

`python3 pocs/VULN-009/validate_request.py --file <本地文件>`：改 1 字节重算 md5 自洽。
止损：纯本地。待办：正式环境插件清单协议确认（在线 blocked）。

## VAL-010 / VULN-010 —— 任务配置明文帧 dofile（Critical，离线构造）

`python3 pocs/VULN-010/validate_request.py`：输出伪造 proc!=0 s2c 明文帧 hex +
`../` 路径拼接演示。判定：帧格式合法且客户端无内容校验（ReqTaskConfig.lua:44-58）。
止损：禁止注入真实连接（on-path blocked）。待办：dofile 路径限制需授权设备动态确认。

## VAL-011 / VULN-011 —— 支付下单重签（High，离线演示）

`python3 pocs/VULN-011/validate_request.py --price 0.01 --product-id <id>`：
篡改前后两组 MD5 签名（占位私钥）。判定：客户端侧重签成立。
止损：禁止提交订单（服务端重新计价 = 在线 blocked）。
待办：本 APK 未见 YMNSDK_WEBPAY_PRIVATE_KEY，渠道包注入待确认。

## VAL-004 / VULN-004 —— SRS 无防重放（High，仅材料采集）

`frida -U -f com.xm.zjgamecenter -l pocs/VULN-004/runtime_observe.js`（授权设备）：
录制发送帧。判定：材料就绪；重放接受度 = 在线 blocked。止损：采到目标帧即停。

## VAL-006 / VULN-006 —— un.sign 还原（High，needs_frida_first）

`frida -U -f com.xm.zjgamecenter -l pocs/VULN-006/runtime_observe.js`：hook
Md5@0x8f6040/Hmac@0x8f5fe4 dump 输入输出，还原盐与拼接。
判定：3 组样本足以锁定算法。止损：只读观察。TODO：参数类型首跑甄别。

## VAL-014 / VULN-014 —— BridgeWebView 无 origin 校验（High，观察模板）

`pocs/VULN-014/runtime_observe.js`（授权设备）：观察 loadUrl/registerHandler。
判定：handler 对任意 origin 可调用即成立；页面投递链（VULN-013/MITM）在线部分 blocked。
止损：禁止触发支付/签名 handler 真实下游。

## VAL-015 / VULN-015 —— deeplink 写剪贴板（Medium，授权设备）

`pocs/VULN-015/validate_request.py --scheme <19 个 scheme 之一>`（dry-run 默认）。
判定：query 落剪贴板即成立。待办：Lua 侧 1601 消费点调用链审计。

## VAL-016 / VULN-016 —— HostService AIDL（Medium，manual_only）

按 `pocs/VULN-016/README.md` 自建最小调用方 App bind 并调 postToSepperllita。
判定：无权限 bind 成功即成立。待办：下游消费审计。

## VAL-017 / VULN-017 —— 明文 HTTP（High，离线可直接执行）

`python3 pocs/VULN-017/validate_request.py`：离线汇总 step2 明文 HTTP 敏感命中。
判定：被动证据闭环（已实测可跑）。止损：主动篡改 blocked。

## VAL-018 / VULN-018 —— logcat 泄露（Medium，授权设备）

`pocs/VULN-018/validate_request.py --serial <s>`（dry-run 默认；POC_CONFIRM=YES 执行）。
判定：命中 ssid|token 日志行即成立。止损：日志不出本机，采集一轮即停。

## VAL-019 / VULN-019 —— 明文持久化（Medium，授权 root 设备）

`pocs/VULN-019/validate_request.py --serial <s>`（dry-run 默认）。
判定：shared_prefs XML 命中 password|token 即成立。止损：读取一次即停、不留存。

## VAL-020 / VULN-020 —— WebView 危险配置（Medium，离线可直接执行）

`python3 pocs/VULN-020/validate_request.py`：静态扫描命中表。
判定：与 step4 证据族一致（脚本覆盖更广，含第三方 SDK WebView，需人工对照）。

## VAL-021 / VULN-021 —— Unzipper Zip Slip（Medium，BLOCKED）

双路线：① libcocos2dlua.so Unzipper 符号二进制审计；② 授权设备构造含 `../`
entry 的最小 zip + `pocs/VULN-021/runtime_observe.js` 观察落盘路径。
判定：确认是否过滤 `../` 即闭环。止损：发现逃逸即停；样本仅无害标记文件。

## VAL-025 / VULN-025 —— identify RC4（Medium，仅有线索）

`pocs/VULN-025/runtime_observe.js`（授权设备）：先 hook Encryption::encrypt 观察
proc=0 xy=5 帧，再追 native RC4（hook 点 TODO）。判定：拿到 key 材料后评估升级。

## defer（不出 PoC）

- VAL-022 Runtime.exec 拼接：可控性低，静态证据已足。
- VAL-023 第三方密钥组：存在性静态闭环；调第三方接口需单独授权。
- VAL-024 高危权限：Manifest 静态复核（aapt）即可。
- VAL-026 WX 入口 exported：拉起为空流程、影响低，必要时一条 adb 命令手工复核。
