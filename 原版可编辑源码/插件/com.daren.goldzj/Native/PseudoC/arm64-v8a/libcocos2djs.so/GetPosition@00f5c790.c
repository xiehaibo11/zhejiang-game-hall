
/* v8::internal::WasmStackFrame::GetPosition() const */

ulong __thiscall v8::internal::WasmStackFrame::GetPosition(WasmStackFrame *this)

{
  ulong uVar1;
  
  if (*(WasmCode **)(this + 0x20) != (WasmCode *)0x0) {
    uVar1 = FrameSummary::WasmCompiledFrameSummary::GetWasmSourcePosition
                      (*(WasmCode **)(this + 0x20),*(uint *)(this + 0x28));
    return uVar1;
  }
  return (ulong)*(uint *)(this + 0x28);
}

