
/* v8::internal::WasmCompiledFrame::GetCallerStackPointer() const */

long __thiscall v8::internal::WasmCompiledFrame::GetCallerStackPointer(WasmCompiledFrame *this)

{
  return *(long *)(this + 0x20) + 0x10;
}

