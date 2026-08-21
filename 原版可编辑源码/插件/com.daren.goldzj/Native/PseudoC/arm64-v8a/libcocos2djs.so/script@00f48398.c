
/* v8::internal::WasmCompiledFrame::script() const */

ulong __thiscall v8::internal::WasmCompiledFrame::script(WasmCompiledFrame *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*(long *)(this + 0x20) + -0x10) & 0xffffffff00000000;
  return uVar1 | *(uint *)((uVar1 | *(uint *)(*(ulong *)(*(long *)(this + 0x20) + -0x10) + 0x6f)) +
                          0x13);
}

