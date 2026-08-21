
/* v8::internal::wasm::WasmCode::handler_table() const */

long __thiscall v8::internal::wasm::WasmCode::handler_table(WasmCode *this)

{
  return *(long *)(this + 0x58) + *(long *)this;
}

