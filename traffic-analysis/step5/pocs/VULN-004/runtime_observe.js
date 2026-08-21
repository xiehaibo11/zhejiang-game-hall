// -- 需授权环境执行（root 测试设备 + frida-server）
// 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
//
// VULN-004 SRS 无防重放 —— 重放材料录制器（仅采集，不做任何重放/注入）
// 证据: traffic-analysis/step4/vuln_analysis.json (VULN-004)
//
// 用法: frida -U -f com.xm.zjgamecenter -l runtime_observe.js --no-pause
//
// 输出: 每次 Encryption::encrypt 调用的时间戳 + 寄存器 dump（用于定位帧缓冲）+ 前 32 字节 hex。
//
// TODO: Encryption::encrypt 的参数布局尚未静态确认（libcocos2dlua.so arm64 @ 0x8f5740）。
//       首跑后根据 dump 人工辨认 12 字节帧头 [dir][flag][len][xy][proc][appid] 所在缓冲，
//       再把下方「帧头解析」段启用并固定到正确的寄存器。

'use strict';

const SO_NAME = 'libcocos2dlua.so';
const OFF_ENCRYPT = 0x8f5740; // Encryption::encrypt (arm64)
// const OFF_DECRYPT = 0x8f5914; // Encryption::decrypt（如需观察收包侧可自行启用）

function safeDump(p, len) {
  try {
    return hexdump(p, { length: len, header: false, ansi: false });
  } catch (e) {
    return '<unreadable ' + p + ': ' + e + '>';
  }
}

function attachEncrypt() {
  const base = Module.findBaseAddress(SO_NAME);
  if (base === null) return false;
  const addr = base.add(OFF_ENCRYPT);
  console.log('[+] hook ' + SO_NAME + ' +0x' + OFF_ENCRYPT.toString(16) + ' @ ' + addr);
  Interceptor.attach(addr, {
    onEnter(args) {
      const ts = new Date().toISOString();
      console.log('\n[=] ' + ts + ' Encryption::encrypt onEnter');
      // TODO: 确认帧缓冲指针所在寄存器。先全量 dump x0-x3 各前 32 字节。
      const ctx = this.context;
      ['x0', 'x1', 'x2', 'x3'].forEach(function (reg) {
        const p = ctx[reg];
        console.log('    ' + reg + ' = ' + p);
        if (!p.isNull()) console.log(safeDump(p, 32));
      });
      // ---- 帧头解析（确认缓冲指针后启用，示例假设 buf=x1）----
      // const buf = ptr(ctx.x1);
      // const dir = buf.readU8();
      // const len = buf.add(2).readU16();
      // const xy = buf.add(4).readU16();
      // const proc = buf.add(6).readU16();
      // const appid = buf.add(8).readU32();
      // console.log('    dir=' + dir + ' len=' + len + ' xy=' + xy + ' proc=' + proc + ' appid=' + appid);
      // console.log('    first16=' + buf.readByteArray(16));
    },
    onLeave(retval) {
      // TODO: 如需录制加密后输出缓冲（重放材料的密文形态），在此 dump 出参。
    }
  });
  return true;
}

if (!attachEncrypt()) {
  console.log('[*] ' + SO_NAME + ' 尚未加载，轮询等待...');
  const timer = setInterval(function () {
    if (attachEncrypt()) clearInterval(timer);
  }, 500);
}
