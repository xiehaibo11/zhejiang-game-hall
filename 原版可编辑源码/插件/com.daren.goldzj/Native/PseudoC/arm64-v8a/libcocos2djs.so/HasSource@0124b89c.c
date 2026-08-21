
/* v8::internal::wasm::WasmModuleSourceMap::HasSource(unsigned long, unsigned long) const */

bool __thiscall
v8::internal::wasm::WasmModuleSourceMap::HasSource
          (WasmModuleSourceMap *this,ulong param_1,ulong param_2)

{
  if (*(ulong *)(*(long *)(this + 8) + -8) < param_1) {
    return false;
  }
  return **(ulong **)this < param_2;
}

