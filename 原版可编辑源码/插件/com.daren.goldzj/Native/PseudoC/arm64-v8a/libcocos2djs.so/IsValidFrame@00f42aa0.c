
/* v8::internal::SafeStackFrameIterator::IsValidFrame(v8::internal::StackFrame*) const */

bool __thiscall
v8::internal::SafeStackFrameIterator::IsValidFrame(SafeStackFrameIterator *this,StackFrame *param_1)

{
  if ((*(ulong *)(this + 0x5a0) <= *(ulong *)(param_1 + 0x18)) &&
     (*(ulong *)(param_1 + 0x18) <= *(ulong *)(this + 0x5a8))) {
    return *(ulong *)(param_1 + 0x20) <= *(ulong *)(this + 0x5a8) &&
           *(ulong *)(this + 0x5a0) <= *(ulong *)(param_1 + 0x20);
  }
  return false;
}

