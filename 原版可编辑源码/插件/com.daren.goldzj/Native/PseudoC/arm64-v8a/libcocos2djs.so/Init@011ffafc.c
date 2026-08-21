
/* v8::internal::wasm::WasmCodeAllocator::Init(v8::internal::wasm::NativeModule*) */

void __thiscall
v8::internal::wasm::WasmCodeAllocator::Init(WasmCodeAllocator *this,NativeModule *param_1)

{
  undefined8 local_18;
  
  local_18 = 0;
  NativeModule::AddCodeSpace
            (param_1,*(undefined8 *)(*(long *)(this + 0x78) + 8),
             *(undefined8 *)(*(long *)(this + 0x78) + 0x10),&local_18);
  return;
}

