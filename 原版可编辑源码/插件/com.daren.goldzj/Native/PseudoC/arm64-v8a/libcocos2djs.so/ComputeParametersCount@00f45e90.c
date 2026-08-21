
/* v8::internal::JavaScriptBuiltinContinuationFrame::ComputeParametersCount() const */

int __thiscall
v8::internal::JavaScriptBuiltinContinuationFrame::ComputeParametersCount
          (JavaScriptBuiltinContinuationFrame *this)

{
  return *(int *)(*(long *)(this + 0x20) + -0x30) >> 1;
}

