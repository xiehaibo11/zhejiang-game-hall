
/* v8::internal::wasm::ModuleDecoder::ModuleDecoder(v8::internal::wasm::WasmFeatures const&) */

void __thiscall
v8::internal::wasm::ModuleDecoder::ModuleDecoder(ModuleDecoder *this,WasmFeatures *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)this = uVar1;
  return;
}

