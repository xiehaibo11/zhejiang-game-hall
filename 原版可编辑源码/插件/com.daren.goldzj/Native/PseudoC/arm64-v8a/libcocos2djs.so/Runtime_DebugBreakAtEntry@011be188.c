
/* v8::internal::Runtime_DebugBreakAtEntry(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_DebugBreakAtEntry(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  StackFrameIterator aSStack_5f8 [1416];
  long local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (TracingFlags::runtime_stats == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x95a0);
    lVar2 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar4 = *param_2;
    if (((uVar4 & 1) == 0) ||
       (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
    }
    StackFrameIterator::StackFrameIterator(aSStack_5f8,param_3);
    if (local_70 != 0) {
      JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_5f8);
    }
    JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_5f8);
    if ((local_70 != 0) && (*(ulong *)(local_70 + 0x20) < *(ulong *)(param_3 + 0x2c08))) {
      Debug::Break(*(Debug **)(param_3 + 0xb6c8),local_70,param_2);
    }
    uVar5 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    if (*(long *)(lVar3 + 0x28) != local_58) {
LAB_011be2c0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    uVar5 = FUN_011be2d8(param_1,param_2,param_3);
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_011be2c0;
  }
  return uVar5;
}

