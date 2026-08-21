
/* v8::internal::wasm::WasmFunctionBuilder::WasmFunctionBuilder(v8::internal::wasm::WasmModuleBuilder*)
    */

void __thiscall
v8::internal::wasm::WasmFunctionBuilder::WasmFunctionBuilder
          (WasmFunctionBuilder *this,WasmModuleBuilder *param_1)

{
  long lVar1;
  undefined8 uVar2;
  Zone *pZVar3;
  
  *(WasmModuleBuilder **)this = param_1;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined8 *)(this + 0x30) = 0;
  *(int *)(this + 0x3c) = (int)((ulong)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88)) >> 3)
  ;
  pZVar3 = *(Zone **)param_1;
  *(Zone **)(this + 0x40) = pZVar3;
  lVar1 = *(long *)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - lVar1) < 0x100) {
    lVar1 = Zone::NewExpand(pZVar3,0x100);
  }
  else {
    *(long *)(pZVar3 + 0x10) = lVar1 + 0x100;
  }
  *(long *)(this + 0x48) = lVar1;
  *(long *)(this + 0x50) = lVar1;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(long *)(this + 0x58) = lVar1 + 0x100;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = uVar2;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = uVar2;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = uVar2;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = uVar2;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = uVar2;
  pZVar3 = *(Zone **)param_1;
  *(Zone **)(this + 0x110) = pZVar3;
  lVar1 = *(long *)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - lVar1) < 8) {
    lVar1 = Zone::NewExpand(pZVar3,8);
  }
  else {
    *(long *)(pZVar3 + 0x10) = lVar1 + 8;
  }
  *(long *)(this + 0x118) = lVar1;
  *(long *)(this + 0x120) = lVar1;
  *(long *)(this + 0x128) = lVar1 + 8;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  this[0x13c] = (WasmFunctionBuilder)0xff;
  return;
}

