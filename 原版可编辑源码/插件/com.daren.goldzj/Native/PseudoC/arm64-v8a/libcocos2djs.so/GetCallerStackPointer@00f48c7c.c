
/* v8::internal::WasmCompileLazyFrame::GetCallerStackPointer() const */

long __thiscall
v8::internal::WasmCompileLazyFrame::GetCallerStackPointer(WasmCompileLazyFrame *this)

{
  return *(long *)(this + 0x20) + 0x10;
}

