
undefined1  [16] FUN_011bdd88(undefined8 param_1,undefined8 *param_2,Isolate *param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  InterpretedFrame *pIVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  Debug *pDVar16;
  long lVar17;
  undefined1 auVar18 [16];
  byte **local_660;
  byte *local_658;
  char *local_650;
  undefined8 local_648;
  RuntimeCallStats *local_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 local_620;
  ReturnValueScope aRStack_618 [16];
  long *local_608;
  long *local_600;
  InterpretedFrame *local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_620 = 0;
  uStack_638 = 0;
  local_640 = (RuntimeCallStats *)0x0;
  uStack_628 = 0;
  uStack_630 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_640 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_640,(ulong)&local_640 | 8,0xb9);
  }
  if (DAT_01d3f940 == (byte *)0x0) {
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f940 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d3f940;
  local_660 = (byte **)0x0;
  if ((*DAT_01d3f940 & 5) != 0) {
    local_608 = (long *)0x0;
    local_600 = (long *)0x0;
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))
                      (plVar8,0x58,pbVar4,"V8.Runtime_Runtime_DebugBreakOnBytecode",0,0,0,0,0,0,0,
                       &local_608,0);
    plVar8 = local_600;
    local_600 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plVar8 = local_608;
    local_608 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    local_660 = &local_658;
    local_650 = "V8.Runtime_Runtime_DebugBreakOnBytecode";
    local_658 = pbVar4;
    local_648 = uVar9;
  }
  uVar9 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  v8::internal::ReturnValueScope::ReturnValueScope(aRStack_618,*(Debug **)(param_3 + 0xb6c8));
  *(undefined8 *)(*(long *)(param_3 + 0xb6c8) + 0x68) = *param_2;
  v8::internal::StackFrameIterator::StackFrameIterator((StackFrameIterator *)&local_608,param_3);
  if (local_80 != (InterpretedFrame *)0x0) {
    v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)&local_608);
  }
  pIVar5 = local_80;
  if (*(int *)(param_3 + 0xb80c) == 0) {
    pDVar16 = *(Debug **)(param_3 + 0xb6c8);
    uVar10 = (**(code **)(*(long *)local_80 + 0x98))(local_80);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)(param_3 + 0x95a0);
      if (puVar11 == *(ulong **)(param_3 + 0x95a8)) {
        puVar11 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar11 + 1;
      *puVar11 = uVar10;
    }
    else {
      puVar11 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    }
    v8::internal::Debug::Break(pDVar16,pIVar5,puVar11);
  }
  if (*(long *)(*(long *)(param_3 + 0xb6c8) + 0x78) != 0) {
    uVar10 = *(ulong *)(param_3 + 0xa0);
    lVar17 = 0x16c;
    goto LAB_011be0b0;
  }
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
  iVar6 = v8::internal::InterpretedFrame::GetBytecodeOffset(local_80);
  bVar2 = *(byte *)((uVar12 | uVar13) + (long)iVar6 + 0x21);
  if (*(int *)(param_3 + 0xb80c) == 0x20) {
    uVar7 = v8::internal::Debug::PerformSideEffectCheckAtBytecode
                      (*(Debug **)(param_3 + 0xb6c8),local_80);
    uVar7 = uVar7 ^ 1;
    if (bVar2 == 0xb0) goto LAB_011be060;
LAB_011be048:
    if (bVar2 == 0xab) goto LAB_011be060;
  }
  else {
    uVar7 = 0;
    if (bVar2 != 0xb0) goto LAB_011be048;
LAB_011be060:
    v8::internal::InterpretedFrame::PatchBytecodeArray(local_80,uVar12 | uVar13);
  }
  v8::internal::interpreter::Interpreter::GetBytecodeHandler
            (*(Interpreter **)(param_3 + 0xb6e8),(ulong)bVar2,1);
  if ((uVar7 & 1) == 0) {
    uVar10 = v8::internal::StackGuard::HandleInterrupts((StackGuard *)(param_3 + 0x48));
    if (((uVar10 & 1) == 0) || ((int)uVar10 != *(int *)(param_3 + 0x180))) {
      uVar10 = *(ulong *)(*(long *)(param_3 + 0xb6c8) + 0x68);
    }
  }
  else {
    uVar10 = *(ulong *)(param_3 + 0x180);
  }
  lVar17 = (ulong)bVar2 << 1;
LAB_011be0b0:
  v8::internal::ReturnValueScope::~ReturnValueScope(aRStack_618);
  *(undefined8 *)(param_3 + 0x95a0) = uVar9;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_660 != (byte **)0x0) && (*local_658 != 0)) {
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x28))(plVar8,local_658,local_650,local_648);
  }
  if (local_640 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_640,(RuntimeCallTimer *)((ulong)&local_640 | 8));
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar18._8_8_ = lVar17;
  auVar18._0_8_ = uVar10;
  return auVar18;
}

