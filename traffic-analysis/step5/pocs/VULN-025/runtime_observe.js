// -- 需授权环境执行（root 测试设备 + frida-server）
// 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
//
// VULN-025 PlayerConnect.identify RC4 弱算法 —— identify 帧观察器（needs_frida_first）
// 证据: hotfix-decrypted/src/app/Protocols/SRSProtocol.lua:81 注释标注 identify 使用 RC4 弱算法；key 未提取。
//
// 思路（TODO 链）:
//   1) 从 SRSProtocol.lua:81 的 identify 调用追到 native RC4 实现（hook 点待定位）；
//   2) 先 hook Encryption::encrypt @ base+0x8f5740，过滤 proc=0 xy=5 的 PlayerConnect 帧，
//      观察 identify 帧的明文/密文形态与出现时机；
//   3) 在 encrypt 上游定位 RC4 调用（可能在 Lua 层或另一 native 符号），确认 key 来源。
//
// 用法: frida -U -f com.xm.zjgamecenter -l runtime_observe.js --no-pause

'use strict';

const SO_NAME = 'libcocos2dlua.so';
const OFF_ENCRYPT = 0x8f5740; // Encryption::encrypt (arm64)
// TODO: RC4 实现的 native 符号/偏移未定位（也可能在 Lua 层实现）。
//       定位线索: strings libcocos2dlua.so | grep -i rc4；或在 SRSProtocol.lua:81 上下游找 native 绑定名。

function safeDump(p, len) {
  try { return hexdump(p, { length: len, header: false, ansi: false }); }
  catch (e) { return '<unreadable ' + p + ': ' + e + '>'; }
}

function attachEncrypt() {
  const base = Module.findBaseAddress(SO_NAME);
  if (base === null) return false;
  Interceptor.attach(base.add(OFF_ENCRYPT), {
    onEnter(args) {
      // TODO: encrypt 参数布局未静态确认（同 VULN-004）。先 dump x0-x3，
      //       人工辨认帧头后过滤 proc==0 && xy==5（PlayerConnect/identify 方向）。
      console.log('\n[=] ' + new Date().toISOString() + ' Encryption::encrypt onEnter');
      const ctx = this.context;
      ['x0', 'x1', 'x2', 'x3'].forEach(function (reg) {
        const p = ctx[reg];
        console.log('    ' + reg + ' = ' + p);
        if (!p.isNull()) console.log(safeDump(p, 32));
      });
      // ---- 确认帧缓冲后启用过滤（示例假设 buf=x1）----
      // const buf = ptr(ctx.x1);
      // const proc = buf.add(6).readU16(); const xy = buf.add(4).readU16();
      // if (proc === 0 && xy === 5) {
      //   console.log('[identify] len=' + buf.add(2).readU16());
      //   console.log(safeDump(buf, 64));
      // }
    }
  });
  console.log('[+] hooked Encryption::encrypt @ ' + SO_NAME + '+0x' + OFF_ENCRYPT.toString(16));
  return true;
}

if (!attachEncrypt()) {
  const timer = setInterval(function () {
    if (attachEncrypt()) clearInterval(timer);
  }, 500);
}
