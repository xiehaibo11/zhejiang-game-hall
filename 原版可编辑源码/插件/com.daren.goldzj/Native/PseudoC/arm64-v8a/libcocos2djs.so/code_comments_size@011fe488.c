
/* v8::internal::wasm::WasmCode::code_comments_size() const */

int __thiscall v8::internal::wasm::WasmCode::code_comments_size(WasmCode *this)

{
  return *(int *)(this + 0x68) - *(int *)(this + 0x60);
}

