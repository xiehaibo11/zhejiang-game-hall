
/* v8::internal::WasmCompiledFrame::unchecked_code() const */

void __thiscall v8::internal::WasmCompiledFrame::unchecked_code(WasmCompiledFrame *this)

{
  Isolate::FindCodeObject(*(Isolate **)(this + 0x10),**(ulong **)(this + 0x28));
  return;
}

