
/* v8::internal::wasm::NativeModule::SetWasmSourceMap(std::__ndk1::unique_ptr<v8::internal::wasm::WasmModuleSourceMap,
   std::__ndk1::default_delete<v8::internal::wasm::WasmModuleSourceMap> >) */

void __thiscall
v8::internal::wasm::NativeModule::SetWasmSourceMap(NativeModule *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  lVar1 = *(long *)(this + 0xd8);
  *(undefined8 *)(this + 0xd8) = uVar2;
  if (lVar1 != 0) {
    FUN_01203e64();
    return;
  }
  return;
}

