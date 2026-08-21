
/* v8::internal::BuiltinExitFrame::ComputeParametersCount() const */

int __thiscall v8::internal::BuiltinExitFrame::ComputeParametersCount(BuiltinExitFrame *this)

{
  return (*(int *)(*(long *)(this + 0x20) + 0x20) >> 1) + -4;
}

