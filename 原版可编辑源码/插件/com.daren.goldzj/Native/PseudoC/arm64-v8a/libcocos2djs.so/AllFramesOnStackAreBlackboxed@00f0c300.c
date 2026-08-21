
/* v8::internal::Debug::AllFramesOnStackAreBlackboxed() */

undefined4 __thiscall v8::internal::Debug::AllFramesOnStackAreBlackboxed(Debug *this)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  Isolate *pIVar6;
  undefined4 uVar7;
  StackTraceFrameIterator aSStack_608 [1416];
  JavaScriptFrame *local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pIVar6 = *(Isolate **)(this + 0x88);
  uVar1 = *(undefined8 *)(pIVar6 + 0x95a0);
  lVar2 = *(long *)(pIVar6 + 0x95a8);
  *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + 1;
  StackTraceFrameIterator::StackTraceFrameIterator(aSStack_608,*(Isolate **)(this + 0x88));
  do {
    if (local_80 == (JavaScriptFrame *)0x0) {
      uVar7 = 1;
joined_r0x00f0c3b4:
      if (pIVar6 != (Isolate *)0x0) {
        *(undefined8 *)(pIVar6 + 0x95a0) = uVar1;
        *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + -1;
        if (*(long *)(pIVar6 + 0x95a8) != lVar2) {
          *(long *)(pIVar6 + 0x95a8) = lVar2;
          HandleScope::DeleteExtensions(pIVar6);
        }
      }
      if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar7;
    }
    uVar4 = (**(code **)(*(long *)local_80 + 8))();
    if (((uVar4 < 0x15) && ((1 << (ulong)(uVar4 & 0x1f) & 0x119010U) != 0)) &&
       (uVar5 = IsFrameBlackboxed(this,local_80), (uVar5 & 1) == 0)) {
      uVar7 = 0;
      goto joined_r0x00f0c3b4;
    }
    StackTraceFrameIterator::Advance(aSStack_608);
  } while( true );
}

