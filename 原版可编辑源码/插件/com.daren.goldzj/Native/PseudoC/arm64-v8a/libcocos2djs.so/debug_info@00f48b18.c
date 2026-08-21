
/* v8::internal::WasmInterpreterEntryFrame::debug_info() const */

ulong __thiscall
v8::internal::WasmInterpreterEntryFrame::debug_info(WasmInterpreterEntryFrame *this)

{
  return *(ulong *)(*(long *)(this + 0x20) + -0x10) & 0xffffffff00000000 |
         (ulong)*(uint *)(*(ulong *)(*(long *)(this + 0x20) + -0x10) + 0x8b);
}

