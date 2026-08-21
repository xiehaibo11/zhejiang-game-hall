// -- 需授权环境执行（root 测试设备 + frida-server）
// 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
//
// VULN-012 AlipayRsa.checkSign 恒真 —— 运行时旁证观察器
// 证据: traffic-analysis/step4/vuln_analysis.json (VULN-012)
//       decompiled/jadx/sources/com/bianfeng/paylib/alipaysdk/executor/AlipayRsa.java
//
// 用法: frida -U -f com.xm.zjgamecenter -l runtime_observe.js --no-pause
//       然后在授权测试设备上触发一次支付回调流程，观察 checkSign 入参与返回值。
//
// TODO: checkSign 的精确重载签名（参数个数/类型）需以 jadx 产物为准确认；
//       下方用 overloads 遍历做了通用覆盖，若类名混淆需人工调整。

'use strict';

Java.perform(function () {
  const CLS = 'com.bianfeng.paylib.alipaysdk.executor.AlipayRsa';
  let Cls;
  try {
    Cls = Java.use(CLS);
  } catch (e) {
    console.log('[-] 类不可达（可能需先进入支付流程触发类加载）: ' + e);
    return;
  }

  Cls.checkSign.overloads.forEach(function (ov) {
    ov.implementation = function () {
      console.log('\n[=] ' + new Date().toISOString() +
        ' AlipayRsa.checkSign(' + ov.argumentTypes.map(function (t) { return t.className; }).join(', ') + ')');
      for (let i = 0; i < arguments.length; i++) {
        console.log('    arg[' + i + '] = ' + arguments[i]);
      }
      const ret = ov.apply(this, arguments);
      console.log('    return = ' + ret + '  // 2 = RESULT_CHECK_SIGN_SUCCEED（恒真旁证）');
      return ret;
    };
  });
  console.log('[+] hooked ' + CLS + '.checkSign, overloads=' + Cls.checkSign.overloads.length);
});
