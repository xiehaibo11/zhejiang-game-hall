
/* v8::internal::StackTraceFrameIterator::StackTraceFrameIterator(v8::internal::Isolate*) */

void __thiscall
v8::internal::StackTraceFrameIterator::StackTraceFrameIterator
          (StackTraceFrameIterator *this,Isolate *param_1)

{
  StackTraceFrameIterator *this_00;
  ulong uVar1;
  StackFrame *pSVar2;
  
  StackFrameIteratorBase::StackFrameIteratorBase((StackFrameIteratorBase *)this,param_1,true);
  this_00 = (StackTraceFrameIterator *)
            StackFrameIterator::Reset
                      ((StackFrameIterator *)this,(ThreadLocalTop *)(param_1 + 0x2bb8));
  pSVar2 = *(StackFrame **)(this + 0x588);
  while ((pSVar2 != (StackFrame *)0x0 && (uVar1 = IsValidFrame(this_00,pSVar2), (uVar1 & 1) == 0)))
  {
    this_00 = (StackTraceFrameIterator *)StackFrameIterator::Advance((StackFrameIterator *)this);
    pSVar2 = *(StackFrame **)(this + 0x588);
  }
  return;
}

