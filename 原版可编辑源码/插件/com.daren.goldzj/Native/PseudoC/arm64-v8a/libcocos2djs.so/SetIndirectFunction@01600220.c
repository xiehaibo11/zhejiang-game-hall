
/* v8::internal::wasm::WasmModuleBuilder::SetIndirectFunction(unsigned int, unsigned int) */

void __thiscall
v8::internal::wasm::WasmModuleBuilder::SetIndirectFunction
          (WasmModuleBuilder *this,uint param_1,uint param_2)

{
  *(uint *)(*(long *)(this + 0xe8) + (ulong)param_1 * 4) = param_2;
  return;
}

