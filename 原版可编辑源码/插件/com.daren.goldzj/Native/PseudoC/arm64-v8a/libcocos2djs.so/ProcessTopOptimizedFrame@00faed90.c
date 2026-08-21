
/* v8::internal::MarkCompactCollector::ProcessTopOptimizedFrame(v8::internal::ObjectVisitor*) */

void __thiscall
v8::internal::MarkCompactCollector::ProcessTopOptimizedFrame
          (MarkCompactCollector *this,ObjectVisitor *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long local_620;
  RelocIterator aRStack_618 [64];
  StackFrameIterator aSStack_5d8 [1416];
  StackFrame *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  StackFrameIterator::StackFrameIterator
            (aSStack_5d8,(Isolate *)(*(long *)(this + 8) + -0x8850),
             (ThreadLocalTop *)(*(long *)(this + 8) + -0x5c98));
  if (local_50 != (StackFrame *)0x0) {
    while (iVar3 = (**(code **)(*(long *)local_50 + 8))(), iVar3 != 0xc) {
      iVar3 = (**(code **)(*(long *)local_50 + 8))();
      if (iVar3 == 4) {
        local_620 = StackFrame::LookupCode(local_50);
        uVar4 = Code::CanDeoptAt((Code *)&local_620,**(ulong **)(local_50 + 0x28));
        lVar2 = local_620;
        if ((uVar4 & 1) == 0) {
          (**(code **)(*(long *)param_1 + 0x10))(param_1,local_620,local_620 + 3,local_620 + 0x13);
          RelocIterator::RelocIterator(aRStack_618,lVar2,1999);
          (**(code **)(*(long *)param_1 + 0x80))(param_1,aRStack_618);
        }
        break;
      }
      StackFrameIterator::Advance(aSStack_5d8);
      if (local_50 == (StackFrame *)0x0) break;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

