
/* v8::internal::StackTraceFrameIterator::Advance() */

void __thiscall v8::internal::StackTraceFrameIterator::Advance(StackTraceFrameIterator *this)

{
  StackTraceFrameIterator *this_00;
  ulong uVar1;
  
  do {
    this_00 = (StackTraceFrameIterator *)StackFrameIterator::Advance((StackFrameIterator *)this);
    if (*(StackFrame **)(this + 0x588) == (StackFrame *)0x0) {
      return;
    }
    uVar1 = IsValidFrame(this_00,*(StackFrame **)(this + 0x588));
  } while ((uVar1 & 1) == 0);
  return;
}

