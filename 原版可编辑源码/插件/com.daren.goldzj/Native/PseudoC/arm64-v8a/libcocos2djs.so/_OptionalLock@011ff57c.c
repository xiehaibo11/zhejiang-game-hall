
/* v8::internal::wasm::WasmCodeAllocator::OptionalLock::~OptionalLock() */

void __thiscall
v8::internal::wasm::WasmCodeAllocator::OptionalLock::~OptionalLock(OptionalLock *this)

{
  if (*(long *)this != 0) {
    base::Mutex::Unlock((Mutex *)(*(long *)this + 8));
    return;
  }
  return;
}

