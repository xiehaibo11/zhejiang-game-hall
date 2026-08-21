
/* v8::internal::wasm::WasmModuleBuilder::SetMaxTableSize(unsigned int) */

void __thiscall
v8::internal::wasm::WasmModuleBuilder::SetMaxTableSize(WasmModuleBuilder *this,uint param_1)

{
  *(uint *)(this + 0x164) = param_1;
  if (*(long *)(this + 0xa8) != *(long *)(this + 0xb0)) {
    *(uint *)(*(long *)(this + 0xa8) + 8) = param_1;
  }
  return;
}

