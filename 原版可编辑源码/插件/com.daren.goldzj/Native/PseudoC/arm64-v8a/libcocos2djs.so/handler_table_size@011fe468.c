
/* v8::internal::wasm::WasmCode::handler_table_size() const */

int __thiscall v8::internal::wasm::WasmCode::handler_table_size(WasmCode *this)

{
  return *(int *)(this + 0x40) - *(int *)(this + 0x58);
}

