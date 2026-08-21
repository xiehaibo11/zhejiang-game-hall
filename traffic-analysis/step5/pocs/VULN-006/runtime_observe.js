// -- 需授权环境执行（root 测试设备 + frida-server）
// 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
//
// VULN-006 un.sign 通用 HTTP 签名 —— 签名算法还原观察器
// 目的: hook libcocos2dlua.so 的 Md5@base+0x8f6040 与 Hmac@base+0x8f5fe4，
//       dump 输入字符串与输出，还原 un.sign 的盐/拼接顺序/算法，再谈离线重签。
// 证据: traffic-analysis/step4/vuln_analysis.json (VULN-006)、traffic-analysis/step3/crypto_native_analysis.json
//
// 用法: frida -U -f com.xm.zjgamecenter -l runtime_observe.js --no-pause
//
// TODO: Md5/Hmac 的 C++ 符号签名未静态确认（参数可能是 const std::string& / const char*+len）。
//       首跑先全量 dump x0-x2 指向的内存，人工判断是 C 字符串还是 std::string（含 SSO 布局），
//       再固定 readSign() 的读取方式。

'use strict';

const SO_NAME = 'libcocos2dlua.so';
const OFF_MD5 = 0x8f6040;  // Encryption::Md5
const OFF_HMAC = 0x8f5fe4; // Encryption::Hmac

function tryCString(p) {
  try {
    const s = p.readCString();
    return (s !== null && s.length > 0) ? JSON.stringify(s) : null;
  } catch (e) { return null; }
}

function dumpArg(tag, p) {
  if (p.isNull()) { console.log('    ' + tag + ' = NULL'); return; }
  const cs = tryCString(p);
  if (cs) {
    console.log('    ' + tag + ' = ' + p + ' cstring=' + cs);
  } else {
    console.log('    ' + tag + ' = ' + p);
    try { console.log(hexdump(p, { length: 64, header: false, ansi: false })); } catch (e) { }
  }
}

function hookOne(name, off) {
  const base = Module.findBaseAddress(SO_NAME);
  if (base === null) return false;
  Interceptor.attach(base.add(off), {
    onEnter(args) {
      console.log('\n[=] ' + new Date().toISOString() + ' ' + name + ' onEnter');
      // TODO: 确认输入字符串实际所在参数；先全量观察 x0-x2。
      dumpArg('x0', this.context.x0);
      dumpArg('x1', this.context.x1);
      dumpArg('x2', this.context.x2);
    },
    onLeave(retval) {
      console.log('[=] ' + name + ' onLeave retval=' + retval);
      // TODO: 返回值可能是 std::string（x0 指向返回对象）。尝试按 C 字符串读，失败则 hexdump。
      if (!retval.isNull()) dumpArg('retval', retval);
    }
  });
  console.log('[+] hooked ' + name + ' @ ' + SO_NAME + '+0x' + off.toString(16));
  return true;
}

function attachAll() {
  if (Module.findBaseAddress(SO_NAME) === null) return false;
  hookOne('Md5', OFF_MD5);
  hookOne('Hmac', OFF_HMAC);
  return true;
}

if (!attachAll()) {
  console.log('[*] ' + SO_NAME + ' 尚未加载，轮询等待...');
  const timer = setInterval(function () {
    if (attachAll()) clearInterval(timer);
  }, 500);
}
