
/* v8::internal::wasm::WasmCode::~WasmCode() */

void __thiscall v8::internal::wasm::WasmCode::~WasmCode(WasmCode *this)

{
  void *pvVar1;
  
  if (-1 < *(int *)(this + 0x70)) {
    trap_handler::ReleaseHandlerData(*(int *)(this + 0x70));
  }
  pvVar1 = *(void **)(this + 0x78);
  *(undefined8 *)(this + 0x78) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x20);
  *(undefined8 *)(this + 0x20) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}

