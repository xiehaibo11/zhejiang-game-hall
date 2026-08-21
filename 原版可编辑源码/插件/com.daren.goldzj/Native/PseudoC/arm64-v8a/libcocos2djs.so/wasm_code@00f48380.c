
/* v8::internal::WasmCompiledFrame::wasm_code() const */

void __thiscall v8::internal::WasmCompiledFrame::wasm_code(WasmCompiledFrame *this)

{
  wasm::WasmCodeManager::LookupCode
            (*(WasmCodeManager **)(*(long *)(this + 0x10) + 0xc770),**(ulong **)(this + 0x28));
  return;
}

