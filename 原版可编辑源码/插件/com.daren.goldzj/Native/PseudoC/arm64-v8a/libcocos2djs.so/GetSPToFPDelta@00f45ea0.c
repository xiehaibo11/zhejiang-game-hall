
/* v8::internal::JavaScriptBuiltinContinuationFrame::GetSPToFPDelta() const */

long __thiscall
v8::internal::JavaScriptBuiltinContinuationFrame::GetSPToFPDelta
          (JavaScriptBuiltinContinuationFrame *this)

{
  return (long)((ulong)*(uint *)(*(long *)(this + 0x20) + -0x18) << 0x20) >> 0x21;
}

