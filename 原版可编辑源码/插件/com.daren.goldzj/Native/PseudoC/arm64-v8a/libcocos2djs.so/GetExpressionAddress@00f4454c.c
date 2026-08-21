
/* v8::internal::InterpretedFrame::GetExpressionAddress(int) const */

long __thiscall
v8::internal::InterpretedFrame::GetExpressionAddress(InterpretedFrame *this,int param_1)

{
  return (*(long *)(this + 0x20) - (long)(param_1 << 3)) + -0x28;
}

