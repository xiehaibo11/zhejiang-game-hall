
/* v8::internal::Runtime_DeoptimizeNow(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_DeoptimizeNow(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  StackFrameIterator aSStack_5f8 [1416];
  long *local_70;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (TracingFlags::runtime_stats == 0) {
    pIVar1 = param_3 + 0x95a0;
    lVar3 = *(long *)pIVar1;
    lVar4 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    StackFrameIterator::StackFrameIterator(aSStack_5f8,param_3);
    if ((local_70 != (long *)0x0) &&
       (JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_5f8),
       local_70 != (long *)0x0)) {
      uVar6 = (**(code **)(*local_70 + 0x98))();
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar1;
        if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar7 + 1;
        *puVar7 = uVar6;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
      }
      if (puVar7 != (ulong *)0x0) {
        uVar8 = *puVar7;
        uVar6 = uVar8 & 0xffffffff00000000;
        if (*(int *)((uVar6 | *(uint *)(uVar8 + 0x17)) + 0x27) != 0x42) {
          uVar2 = *(uint *)((uVar6 | *(uint *)(uVar8 + 0xb)) + 3);
          if (((uVar2 != 0x84) &&
              ((((uVar2 & 1) == 0 ||
                (1 < *(ushort *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | uVar2) - 1)) - 0x95)) &&
               ((*(byte *)((uVar6 | *(uint *)(uVar8 + 0x17)) + 0x17) & 0x3e) == 0)))) &&
             ((*(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(uVar8 + 0x17)) + 0xf)) + 7) & 1) == 0
             )) {
            Deoptimizer::DeoptimizeFunction(*puVar7,0);
          }
        }
      }
    }
    uVar9 = *(undefined8 *)(param_3 + 0xa0);
    *(long *)pIVar1 = lVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar4) {
      *(long *)(param_3 + 0x95a8) = lVar4;
      HandleScope::DeleteExtensions(param_3);
    }
    if (*(long *)(lVar5 + 0x28) != local_58) {
LAB_0159bd90:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    uVar9 = FUN_0159bd94(param_1,param_2,param_3);
    if (*(long *)(lVar5 + 0x28) != local_58) goto LAB_0159bd90;
  }
  return uVar9;
}

