
/* v8::internal::wasm::WasmCodeManager::WasmCodeManager(unsigned long) */

void __thiscall
v8::internal::wasm::WasmCodeManager::WasmCodeManager(WasmCodeManager *this,ulong param_1)

{
  *(ulong *)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(ulong *)(this + 0x10) = param_1 >> 1;
  base::Mutex::Mutex((Mutex *)(this + 0x18));
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(WasmCodeManager **)(this + 0x40) = this + 0x48;
  return;
}

