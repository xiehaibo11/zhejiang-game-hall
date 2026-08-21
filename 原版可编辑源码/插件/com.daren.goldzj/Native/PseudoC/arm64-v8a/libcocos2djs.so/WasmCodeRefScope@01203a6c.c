
/* v8::internal::wasm::WasmCodeRefScope::WasmCodeRefScope() */

void __thiscall v8::internal::wasm::WasmCodeRefScope::WasmCodeRefScope(WasmCodeRefScope *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)__emutls_get_address(&DAT_01d35888);
  uVar2 = *puVar1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  *(undefined8 *)this = uVar2;
  *puVar1 = this;
  return;
}

