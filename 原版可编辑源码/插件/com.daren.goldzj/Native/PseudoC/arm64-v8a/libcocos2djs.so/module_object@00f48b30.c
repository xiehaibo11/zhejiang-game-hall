
/* v8::internal::WasmInterpreterEntryFrame::module_object() const */

ulong __thiscall
v8::internal::WasmInterpreterEntryFrame::module_object(WasmInterpreterEntryFrame *this)

{
  return *(ulong *)(*(long *)(this + 0x20) + -0x10) & 0xffffffff00000000 |
         (ulong)*(uint *)(*(ulong *)(*(long *)(this + 0x20) + -0x10) + 0x6f);
}

