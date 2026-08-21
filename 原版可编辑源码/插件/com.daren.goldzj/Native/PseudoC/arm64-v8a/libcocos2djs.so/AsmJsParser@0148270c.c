
/* v8::internal::wasm::AsmJsParser::AsmJsParser(v8::internal::Zone*, unsigned long,
   v8::internal::Utf16CharacterStream*) */

void __thiscall
v8::internal::wasm::AsmJsParser::AsmJsParser
          (AsmJsParser *this,Zone *param_1,ulong param_2,Utf16CharacterStream *param_3)

{
  WasmModuleBuilder *this_00;
  undefined8 uVar1;
  
  *(Zone **)this = param_1;
  AsmJsScanner::AsmJsScanner((AsmJsScanner *)(this + 8),param_3);
  this_00 = *(WasmModuleBuilder **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)this_00) < 0x178) {
    this_00 = (WasmModuleBuilder *)Zone::NewExpand(param_1,0x178);
  }
  else {
    *(WasmModuleBuilder **)(param_1 + 0x10) = this_00 + 0x178;
  }
  WasmModuleBuilder::WasmModuleBuilder(this_00,param_1);
  uVar1 = *(undefined8 *)this;
  *(undefined4 *)(this + 0x1f0) = 0xffffffff;
  *(undefined8 *)(this + 0x170) = uVar1;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 400) = uVar1;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1d0) = uVar1;
  *(undefined8 *)(this + 0x1b0) = uVar1;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(WasmModuleBuilder **)(this + 0xf0) = this_00;
  *(undefined8 *)(this + 0x100) = 0;
  *(ulong *)(this + 0x108) = param_2;
  *(Zone **)(this + 0x130) = param_1;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(Zone **)(this + 0x150) = param_1;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  this[0x1e4] = (AsmJsParser)0x0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 500) = 0;
  *(undefined8 *)(this + 0x1f9) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(Zone **)(this + 0x228) = param_1;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined4 *)(this + 0x29c) = 0;
  *(AsmJsParser **)(this + 0x2a0) = this + 0x2a0;
  *(AsmJsParser **)(this + 0x2a8) = this + 0x2a0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(Zone **)(this + 0x2b8) = param_1;
  WasmModuleBuilder::SetMinMemorySize(this_00,0);
  InitializeStdlibTypes(this);
  return;
}

