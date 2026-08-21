
/* v8::internal::wasm::WasmFunctionBuilder::DeleteCodeAfter(unsigned long) */

void __thiscall
v8::internal::wasm::WasmFunctionBuilder::DeleteCodeAfter(WasmFunctionBuilder *this,ulong param_1)

{
  *(ulong *)(this + 0x50) = *(long *)(this + 0x48) + param_1;
  return;
}

