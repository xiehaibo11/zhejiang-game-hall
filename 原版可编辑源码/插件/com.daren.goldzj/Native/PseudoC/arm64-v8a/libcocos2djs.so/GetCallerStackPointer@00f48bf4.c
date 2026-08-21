
/* v8::internal::WasmInterpreterEntryFrame::GetCallerStackPointer() const */

long __thiscall
v8::internal::WasmInterpreterEntryFrame::GetCallerStackPointer(WasmInterpreterEntryFrame *this)

{
  return *(long *)(this + 0x20) + 0x10;
}

