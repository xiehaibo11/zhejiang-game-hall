
/* v8::internal::wasm::WasmCodeAllocator::OptionalLock::Lock(v8::internal::wasm::WasmCodeAllocator*)
    */

void __thiscall
v8::internal::wasm::WasmCodeAllocator::OptionalLock::Lock
          (OptionalLock *this,WasmCodeAllocator *param_1)

{
  *(WasmCodeAllocator **)this = param_1;
  base::Mutex::Lock((Mutex *)(param_1 + 8));
  return;
}

