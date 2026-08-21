// -- 需授权环境执行（root 测试设备 + frida-server）
// 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
//
// VULN-021 un.Unzipper(native) Zip Slip —— 解压路径观察器（BLOCKED，待二进制审计）
// 证据: traffic-analysis/step4/vuln_analysis.json (VULN-021)
//       解压调用点: lua-src-apk/app/hotupdate/universe/hotfix/HotFixProcessor.lua:620（un.Unzipper）
//
// 状态说明:
//   un.Unzipper 为 native 实现，是否过滤 zip entry 中的 "../" 未知（静态无法确认），
//   因此本漏洞 BLOCKED。两条验证路线见 README。
//
// TODO(关键): Unzipper 解压函数的符号/偏移待二进制审计补齐。
//   定位线索（任选其一，人工）:
//     1) 在 libcocos2dlua.so 中检索字符串 "Unzipper" / "unzip" / "decompress" 的 xref；
//     2) 查 luaL_Reg 注册表（un 命名空间的 luaopen_/注册函数）找到 Unzipper 的 lua_CFunction；
//     3) 从 HotFixProcessor.lua:620 的调用约定反推参数（zip 路径、目标目录）。
//   确认后填入下方 OFF_UNZIP 并启用 Interceptor.attach。

'use strict';

const SO_NAME = 'libcocos2dlua.so';
const OFF_UNZIP = null; // TODO: 二进制审计后填入，例如 0x??????

function dumpCStr(tag, p) {
  if (p.isNull()) { console.log('    ' + tag + ' = NULL'); return; }
  try {
    console.log('    ' + tag + ' = ' + JSON.stringify(p.readCString()));
  } catch (e) {
    try { console.log(hexdump(p, { length: 64, header: false, ansi: false })); } catch (e2) { }
  }
}

function attachUnzip() {
  const base = Module.findBaseAddress(SO_NAME);
  if (base === null) return false;

  if (OFF_UNZIP === null) {
    console.log('[-] OFF_UNZIP 未填充：请先完成二进制审计（见文件头 TODO）。');
    console.log('[*] 参考: 已还原符号 hdq::decrypt@0xca81ec / btea@0xca8f44 / xxtea_decrypt@0x7cd980 可作定位锚点。');
    return true; // 不阻断，等人工补偏移后重跑
  }

  Interceptor.attach(base.add(OFF_UNZIP), {
    onEnter(args) {
      console.log('\n[=] ' + new Date().toISOString() + ' Unzipper onEnter');
      // TODO: 参数布局以审计结果为准。假设 x0=zip路径 x1=目标目录（待确认）。
      dumpCStr('x0(zip?)', this.context.x0);
      dumpCStr('x1(dest?)', this.context.x1);
      dumpCStr('x2(?)', this.context.x2);
    },
    onLeave(retval) {
      console.log('[=] Unzipper onLeave retval=' + retval);
      // 观察点: 配合喂入含 "../" entry 的 zip 样本（授权设备本地构造），
      // 检查目标目录外是否出现逃逸文件（adb shell ls 人工核对）。
    }
  });
  console.log('[+] hooked Unzipper @ ' + SO_NAME + '+0x' + OFF_UNZIP.toString(16));
  return true;
}

if (!attachUnzip()) {
  const timer = setInterval(function () {
    if (attachUnzip()) clearInterval(timer);
  }, 500);
}
