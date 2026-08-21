
/* v8::internal::Runtime_GetGeneratorScopeCount(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_GetGeneratorScopeCount(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ScopeIterator aSStack_a8 [40];
  long local_80;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar6 = FUN_011bfc68(param_1,param_2,param_3);
    if (*(long *)(lVar5 + 0x28) == local_48) {
      return uVar6;
    }
    goto LAB_011bfc50;
  }
  pIVar1 = param_3 + 0x95a0;
  iVar4 = *(int *)(param_3 + 0x95b0);
  uVar2 = *(undefined8 *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = iVar4 + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) == 0) ||
     (uVar7 = uVar6 & 0xffffffff00000000 | 7, 2 < *(ushort *)(uVar7 + *(uint *)(uVar6 - 1)) - 0x417)
     ) {
LAB_011bfbc0:
    uVar6 = 0;
    *(undefined8 *)pIVar1 = uVar2;
    *(int *)(param_3 + 0x95b0) = iVar4;
  }
  else {
    if (2 < *(ushort *)(uVar7 + *(uint *)(uVar6 - 1)) - 0x417) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsJSGeneratorObject()");
    }
    if (*(int *)(uVar6 + 0x1f) < 0) goto LAB_011bfbc0;
    ScopeIterator::ScopeIterator(aSStack_a8,param_3);
    if (local_80 == 0) {
      uVar6 = 0;
    }
    else {
      uVar8 = 0;
      do {
        ScopeIterator::Next(aSStack_a8);
        uVar8 = uVar8 + 2;
      } while (local_80 != 0);
      uVar6 = (ulong)uVar8;
    }
    ScopeIterator::~ScopeIterator(aSStack_a8);
    if (param_3 != (Isolate *)0x0) {
      *(undefined8 *)pIVar1 = uVar2;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar3) {
        *(long *)(param_3 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(param_3);
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return uVar6;
  }
LAB_011bfc50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

