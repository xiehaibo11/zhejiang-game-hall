// 授权环境专用最小验证模板（Phase 5）。需授权环境执行（root 测试设备 + frida-server）。
// VULN-005 辅助采集：hook libcocos2dlua.so 的 Encryption::Md5@0x8f6040，
// .dump 每次 MD5 的输入串与输出，用于采集验证码请求的真实 (signatureStr, signature)
// 样本对，回填 validate_request.py --expect-signature 做离线比对闭环。
//
// 运行（授权测试设备）：
//   frida -U -f com.xm.zjgamecenter -l runtime_observe.js --no-pause
// 然后在设备上触发一次"发送手机验证码"。
//
// 注意：本脚本只读观察，不修改任何返回值、不发任何网络请求。

var BASE = null;
function md5Addr() {
  if (!BASE) BASE = Module.findBaseAddress('libcocos2dlua.so');
  if (!BASE) throw new Error('libcocos2dlua.so 尚未加载');
  return BASE.add(0x8f6040); // Encryption::Md5（Phase 3 signature_findings）
}

function tryReadCString(p) {
  if (p.isNull()) return null;
  try { return p.readCString(); } catch (e) { return null; }
}

Interceptor.attach(md5Addr(), {
  onEnter: function (args) {
    // TODO: 参数布局按调用约定确认（arm64：x0=this/静态则 x0=输入串）。
    // 先用 x0/x1 双猜，打印非空者，人工甄别 signatureStr。
    this.candidates = [];
    for (var i = 0; i < 3; i++) {
      var s = tryReadCString(args[i]);
      if (s && s.length > 0 && s.length < 1024) this.candidates.push({ reg: 'x' + i, value: s });
    }
    for (var j = 0; j < this.candidates.length; j++) {
      var c = this.candidates[j];
      console.log('[Md5] input(' + c.reg + ') len=' + c.value.length + ' : ' + c.value);
    }
  },
  onLeave: function (retval) {
    var s = tryReadCString(retval);
    if (s) console.log('[Md5] output = ' + s);
  }
});

console.log('[VULN-005] Md5 hook 已挂载，等待触发验证码请求...');
