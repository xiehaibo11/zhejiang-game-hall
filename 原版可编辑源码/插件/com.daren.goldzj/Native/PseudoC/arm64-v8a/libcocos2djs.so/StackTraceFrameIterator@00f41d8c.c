
/* v8::internal::StackTraceFrameIterator::StackTraceFrameIterator(v8::internal::Isolate*,
   v8::internal::StackFrameId) */

void __thiscall
v8::internal::StackTraceFrameIterator::StackTraceFrameIterator
          (StackTraceFrameIterator *this,Isolate *param_1,int param_3)

{
  int iVar1;
  StackTraceFrameIterator *pSVar2;
  ulong uVar3;
  StackFrame *pSVar4;
  
  StackFrameIteratorBase::StackFrameIteratorBase((StackFrameIteratorBase *)this,param_1,true);
  pSVar2 = (StackTraceFrameIterator *)
           StackFrameIterator::Reset
                     ((StackFrameIterator *)this,(ThreadLocalTop *)(param_1 + 0x2bb8));
  pSVar4 = *(StackFrame **)(this + 0x588);
  while( true ) {
    if (pSVar4 == (StackFrame *)0x0) {
      return;
    }
    uVar3 = IsValidFrame(pSVar2,pSVar4);
    if ((uVar3 & 1) != 0) break;
    pSVar2 = (StackTraceFrameIterator *)StackFrameIterator::Advance((StackFrameIterator *)this);
    pSVar4 = *(StackFrame **)(this + 0x588);
  }
  while( true ) {
    if (*(long **)(this + 0x588) == (long *)0x0) {
      return;
    }
    iVar1 = (**(code **)(**(long **)(this + 0x588) + 0x38))();
    if (iVar1 == param_3) break;
    do {
      pSVar2 = (StackTraceFrameIterator *)StackFrameIterator::Advance((StackFrameIterator *)this);
      if (*(StackFrame **)(this + 0x588) == (StackFrame *)0x0) {
        return;
      }
      uVar3 = IsValidFrame(pSVar2,*(StackFrame **)(this + 0x588));
    } while ((uVar3 & 1) == 0);
  }
  return;
}

