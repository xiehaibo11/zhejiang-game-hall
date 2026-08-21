
/* v8::internal::WasmCompiledFrame::context() const */

ulong __thiscall v8::internal::WasmCompiledFrame::context(WasmCompiledFrame *this)

{
  return *(ulong *)(*(long *)(this + 0x20) + -0x10) & 0xffffffff00000000 |
         (ulong)*(uint *)(*(ulong *)(*(long *)(this + 0x20) + -0x10) + 0x77);
}

