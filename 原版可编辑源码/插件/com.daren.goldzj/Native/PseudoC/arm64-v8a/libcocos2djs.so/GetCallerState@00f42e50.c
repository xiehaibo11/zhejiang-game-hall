
/* v8::internal::StackFrame::GetCallerState(v8::internal::StackFrame::State*) const */

void __thiscall v8::internal::StackFrame::GetCallerState(StackFrame *this,State *param_1)

{
  (**(code **)(*(long *)this + 0x40))();
  ComputeType(*(StackFrameIteratorBase **)(this + 8),param_1);
  return;
}

