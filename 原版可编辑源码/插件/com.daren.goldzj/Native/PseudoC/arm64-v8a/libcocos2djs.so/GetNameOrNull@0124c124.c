
/* v8::internal::wasm::ModuleWireBytes::GetNameOrNull(v8::internal::wasm::WasmFunction const*,
   v8::internal::wasm::WasmModule const*) const */

undefined1  [16] __thiscall
v8::internal::wasm::ModuleWireBytes::GetNameOrNull
          (ModuleWireBytes *this,WasmFunction *param_1,WasmModule *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  uVar2 = WasmModule::LookupFunctionName(param_2,this,*(uint *)(param_1 + 8));
  uVar1 = (uint)uVar2;
  if (uVar1 == 0) {
    lVar4 = 0;
    lVar3 = 0;
  }
  else {
    if ((*(uint *)(this + 8) < uVar1) || (*(uint *)(this + 8) - uVar1 < (uint)(uVar2 >> 0x20))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","BoundsCheck(ref.offset(), ref.length())");
    }
    lVar3 = (long)uVar2 >> 0x20;
    lVar4 = *(long *)this + (uVar2 & 0xffffffff);
  }
  auVar5._8_8_ = lVar3;
  auVar5._0_8_ = lVar4;
  return auVar5;
}

