
/* v8::internal::Runtime_DebugBreakOnBytecode(int, unsigned long*, v8::internal::Isolate*) */

undefined1  [16]
v8::internal::Runtime_DebugBreakOnBytecode(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  undefined1 auVar6 [16];
  InterpretedFrame *pIVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  Debug *pDVar16;
  long lVar17;
  undefined1 auVar18 [16];
  ReturnValueScope aRStack_618 [16];
  StackFrameIterator aSStack_608 [1416];
  InterpretedFrame *local_80;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    auVar18 = FUN_011bdd88(param_1,param_2,param_3);
    goto LAB_011bdd34;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  ReturnValueScope::ReturnValueScope(aRStack_618,*(Debug **)(param_3 + 0xb6c8));
  *(ulong *)(*(long *)(param_3 + 0xb6c8) + 0x68) = *param_2;
  StackFrameIterator::StackFrameIterator(aSStack_608,param_3);
  if (local_80 != (InterpretedFrame *)0x0) {
    JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_608);
  }
  pIVar7 = local_80;
  if (*(int *)(param_3 + 0xb80c) == 0) {
    pDVar16 = *(Debug **)(param_3 + 0xb6c8);
    uVar10 = (**(code **)(*(long *)local_80 + 0x98))(local_80);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)pIVar1;
      if (puVar11 == *(ulong **)(param_3 + 0x95a8)) {
        puVar11 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar11 + 1;
      *puVar11 = uVar10;
    }
    else {
      puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    }
    Debug::Break(pDVar16,pIVar7,puVar11);
  }
  if (*(long *)(*(long *)(param_3 + 0xb6c8) + 0x78) == 0) {
    uVar10 = (**(code **)(*(long *)local_80 + 0x98))(local_80);
    uVar12 = uVar10 & 0xffffffff00000000;
    uVar10 = uVar12 | *(uint *)(uVar10 + 0xb);
    uVar15 = uVar12 | *(uint *)(uVar10 + 0xf);
    uVar14 = uVar12 | 7;
    if ((*(short *)(uVar14 + *(uint *)(uVar15 - 1)) == 0x5b) &&
       (*(short *)(uVar14 + *(uint *)((uVar12 | *(uint *)(uVar15 + 0x13)) - 1)) == 0x86)) {
      uVar13 = *(uint *)(uVar15 + 0xf);
    }
    else {
      uVar13 = *(uint *)(uVar10 + 3);
      if (((uVar13 & 1) == 0) || (*(short *)(uVar14 + *(uint *)((uVar12 | uVar13) - 1)) != 0x86)) {
        uVar13 = *(uint *)((uVar12 | *(uint *)(uVar10 + 3)) + 3);
      }
      else {
        uVar13 = *(uint *)(uVar10 + 3);
      }
    }
    iVar8 = InterpretedFrame::GetBytecodeOffset(local_80);
    bVar4 = *(byte *)((uVar12 | uVar13) + (long)iVar8 + 0x21);
    if (*(int *)(param_3 + 0xb80c) == 0x20) {
      uVar9 = Debug::PerformSideEffectCheckAtBytecode(*(Debug **)(param_3 + 0xb6c8),local_80);
      uVar9 = uVar9 ^ 1;
      if (bVar4 == 0xb0) goto LAB_011bdcb4;
LAB_011bdc9c:
      if (bVar4 == 0xab) goto LAB_011bdcb4;
    }
    else {
      uVar9 = 0;
      if (bVar4 != 0xb0) goto LAB_011bdc9c;
LAB_011bdcb4:
      InterpretedFrame::PatchBytecodeArray(local_80,uVar12 | uVar13);
    }
    interpreter::Interpreter::GetBytecodeHandler(*(Interpreter **)(param_3 + 0xb6e8),(ulong)bVar4,1)
    ;
    if ((uVar9 & 1) == 0) {
      uVar10 = StackGuard::HandleInterrupts((StackGuard *)(param_3 + 0x48));
      if (((uVar10 & 1) == 0) || ((int)uVar10 != *(int *)(param_3 + 0x180))) {
        uVar10 = *(ulong *)(*(long *)(param_3 + 0xb6c8) + 0x68);
      }
    }
    else {
      uVar10 = *(ulong *)(param_3 + 0x180);
    }
    lVar17 = (ulong)bVar4 << 1;
  }
  else {
    uVar10 = *(ulong *)(param_3 + 0xa0);
    lVar17 = 0x16c;
  }
  auVar6._8_8_ = lVar17;
  auVar6._0_8_ = uVar10;
  auVar18._8_8_ = lVar17;
  auVar18._0_8_ = uVar10;
  ReturnValueScope::~ReturnValueScope(aRStack_618);
  *(long *)pIVar1 = lVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    HandleScope::DeleteExtensions(param_3);
    auVar18 = auVar6;
  }
LAB_011bdd34:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return auVar18;
}

