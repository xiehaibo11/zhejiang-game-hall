
/* v8::internal::Accessors::FunctionArgumentsGetter(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void v8::internal::Accessors::FunctionArgumentsGetter(undefined8 param_1,long *param_2)

{
  FrameSummary *pFVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  FrameSummary *pFVar5;
  Isolate *pIVar6;
  long lVar7;
  undefined8 *puVar8;
  Isolate *pIVar9;
  ulong uVar10;
  long lVar11;
  FrameSummary *local_628;
  FrameSummary *local_620;
  undefined8 uStack_618;
  StackFrameIterator aSStack_610 [1416];
  long *local_88;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pIVar9 = *(Isolate **)(*param_2 + 0x10);
  uVar2 = *(undefined8 *)(pIVar9 + 0x95a0);
  lVar3 = *(long *)(pIVar9 + 0x95a8);
  pIVar6 = pIVar9 + 0xb0;
  *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + 1;
  lVar11 = *param_2;
  if ((*(uint *)((*(ulong *)(lVar11 + 8) & 0xffffffff00000000 |
                 (ulong)*(uint *)(*(ulong *)(lVar11 + 8) + 0xb)) + 0x1b) >> 5 & 1) == 0) {
    StackFrameIterator::StackFrameIterator(aSStack_610,pIVar9);
    if (local_88 != (long *)0x0) {
      JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_610);
      while (local_88 != (long *)0x0) {
        local_620 = (FrameSummary *)0x0;
        uStack_618 = 0;
        local_628 = (FrameSummary *)0x0;
        (**(code **)(*local_88 + 0x88))(local_88,&local_628);
        pFVar5 = local_628;
        uVar10 = ((long)local_620 - (long)local_628 >> 3) * 0x6db6db6db6db6db7;
        lVar7 = ((long)local_620 - (long)local_628) + -0x20;
        do {
          if (uVar10 == 0) {
            uVar10 = 0xffffffff;
            break;
          }
          pFVar1 = local_628 + lVar7;
          uVar10 = uVar10 - 1;
          lVar7 = lVar7 + -0x38;
        } while (**(int **)pFVar1 != *(int *)(lVar11 + 8));
        pFVar1 = local_620;
        if (local_628 != (FrameSummary *)0x0) {
          while (pFVar1 != pFVar5) {
            FrameSummary::~FrameSummary(pFVar1 + -0x38);
            pFVar1 = pFVar1 + -0x38;
          }
          local_620 = pFVar5;
          operator_delete(local_628);
        }
        if (-1 < (int)uVar10) {
          pIVar6 = (Isolate *)FUN_00eda908(pIVar9,aSStack_610,uVar10 & 0xffffffff);
          puVar8 = (undefined8 *)(*param_2 + 0x20);
          if (pIVar6 == (Isolate *)0x0) {
            pIVar6 = (Isolate *)(*param_2 + 0x18);
          }
          goto LAB_00edaee4;
        }
        JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_610);
      }
    }
    puVar8 = (undefined8 *)(*param_2 + 0x20);
  }
  else {
    puVar8 = (undefined8 *)(lVar11 + 0x20);
  }
LAB_00edaee4:
  *puVar8 = *(undefined8 *)pIVar6;
  if (pIVar9 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar9 + 0x95a0) = uVar2;
    *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + -1;
    if (*(long *)(pIVar9 + 0x95a8) != lVar3) {
      *(long *)(pIVar9 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(pIVar9);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

