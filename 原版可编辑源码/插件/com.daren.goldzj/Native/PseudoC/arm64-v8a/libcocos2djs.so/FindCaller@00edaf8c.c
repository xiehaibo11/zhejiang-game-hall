
/* v8::internal::FindCaller(v8::internal::Isolate*, v8::internal::Handle<v8::internal::JSFunction>)
    */

ulong * v8::internal::FindCaller(Isolate *param_1,ulong *param_2)

{
  long lVar1;
  FrameSummary *pFVar2;
  FrameSummary *pFVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  Isolate *local_618;
  ulong *local_610;
  StackFrameIterator aSStack_608 [1416];
  long *local_80;
  FrameSummary *local_68;
  FrameSummary *pFStack_60;
  undefined8 local_58;
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_610 = (ulong *)0x0;
  local_618 = param_1;
  StackFrameIterator::StackFrameIterator(aSStack_608,param_1);
  if (local_80 == (long *)0x0) {
    local_58 = 0;
    pFStack_60 = (FrameSummary *)0x0;
    local_68 = (FrameSummary *)0x0;
    local_50 = -1;
  }
  else {
    JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_608);
    local_68 = (FrameSummary *)0x0;
    local_58 = 0;
    pFStack_60 = (FrameSummary *)0x0;
    local_50 = -1;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x88))(local_80,&local_68);
      local_50 = (int)((ulong)((long)pFStack_60 - (long)local_68) >> 3) * -0x49249249;
    }
  }
  if ((*(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 0x1b) >> 5 & 1
      ) == 0) {
    do {
      local_610 = (ulong *)FrameFunctionIterator::next((FrameFunctionIterator *)&local_618);
      if (local_610 == (ulong *)0x0) goto LAB_00edb0b8;
    } while ((local_610 != param_2) && ((param_2 == (ulong *)0x0 || (*local_610 != *param_2))));
    do {
      local_610 = (ulong *)FrameFunctionIterator::next((FrameFunctionIterator *)&local_618);
      if (local_610 == (ulong *)0x0) goto LAB_00edb0b8;
    } while ((*(uint *)((*local_610 & 0xffffffff00000000 | (ulong)*(uint *)(*local_610 + 0xb)) +
                       0x1b) >> 0x1c & 1) != 0);
    uVar4 = FrameFunctionIterator::FindFirstNativeOrUserJavaScript
                      ((FrameFunctionIterator *)&local_618);
    if ((uVar4 & 1) != 0) {
      puVar7 = (ulong *)FrameFunctionIterator::MaterializeFunction
                                  ((FrameFunctionIterator *)&local_618);
      uVar5 = *puVar7;
      uVar4 = uVar5 & 0xffffffff00000000;
      if ((*(uint *)((uVar4 | *(uint *)(uVar5 + 0xb)) + 0x1b) >> 6 & 1) == 0) {
        uVar6 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        pFVar2 = local_68;
        if (*(int *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13
                                       )) + 0x27b) !=
            *(int *)((uVar4 | *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(uVar5 + 0xf)) - 1)) +
                                       0x13)) + 0x27b)) {
          puVar7 = (ulong *)0x0;
        }
        goto joined_r0x00edb0c4;
      }
    }
  }
  puVar7 = (ulong *)0x0;
  pFVar2 = local_68;
joined_r0x00edb0c4:
  local_68 = pFVar2;
  pFVar3 = pFStack_60;
  if (pFVar2 != (FrameSummary *)0x0) {
    while (pFVar3 != pFVar2) {
      FrameSummary::~FrameSummary(pFVar3 + -0x38);
      pFVar3 = pFVar3 + -0x38;
    }
    pFStack_60 = pFVar2;
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00edb0b8:
  puVar7 = (ulong *)0x0;
  local_610 = (ulong *)0x0;
  pFVar2 = local_68;
  goto joined_r0x00edb0c4;
}

