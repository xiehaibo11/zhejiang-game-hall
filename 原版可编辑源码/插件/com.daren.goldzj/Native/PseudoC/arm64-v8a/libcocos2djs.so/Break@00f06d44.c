
/* v8::internal::Debug::Break(v8::internal::JavaScriptFrame*,
   v8::internal::Handle<v8::internal::JSFunction>) */

void __thiscall v8::internal::Debug::Break(Debug *this,FrameSummary *param_1,ulong *param_3)

{
  int iVar1;
  int iVar2;
  Debug DVar3;
  Debug DVar4;
  long lVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  Isolate *pIVar9;
  ulong *puVar10;
  Debug *pDVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  Debug *pDVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  BreakLocation aBStack_668 [8];
  int local_660;
  int local_65c;
  int local_658;
  Debug *local_650;
  undefined8 uStack_648;
  undefined4 local_640;
  undefined **local_638;
  StackGuard *local_630;
  int local_618;
  ulong local_608 [7];
  int local_5d0;
  long *local_80;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  LiveEdit::InitializeThreadLocal(this);
  if (this[0xc] != (Debug)0x0) goto LAB_00f071c0;
  uStack_648 = *(undefined8 *)(this + 0x40);
  local_650 = this;
  InterruptsScope::InterruptsScope
            ((InterruptsScope *)&local_638,*(undefined8 *)(this + 0x88),0xff,0);
  local_638 = &PTR__InterruptsScope_01c98490;
  *(Debug ***)(local_650 + 0x40) = &local_650;
  local_640 = *(undefined4 *)(local_650 + 0x48);
  StackTraceFrameIterator::StackTraceFrameIterator
            ((StackTraceFrameIterator *)local_608,*(Isolate **)(local_650 + 0x88));
  uVar7 = 0;
  if (local_80 != (long *)0x0) {
    uVar7 = (**(code **)(*local_80 + 0x38))();
  }
  *(undefined4 *)(local_650 + 0x48) = uVar7;
  UpdateState(local_650);
  DVar3 = this[0xc];
  this[0xc] = (Debug)0x1;
  pIVar9 = *(Isolate **)(this + 0x88);
  uVar16 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 0xb);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
    *puVar10 = uVar16;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar16);
  }
  uVar16 = EnsureBreakInfo(this,puVar10);
  if ((uVar16 & 1) == 0) goto switchD_00f070dc_caseD_ffffffff;
  PrepareFunctionForDebugExecution(this,puVar10);
  pIVar9 = *(Isolate **)(this + 0x88);
  uVar16 = *puVar10 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar10 + 0xf);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
    *puVar10 = uVar16;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar16);
  }
  pDVar11 = (Debug *)BreakLocation::FromFrame(aBStack_668,puVar10,param_1);
  if (this[0xd] == (Debug)0x0) {
LAB_00f06f8c:
    if (this[0x84] != (Debug)0x0) {
      pDVar15 = (Debug *)0x0;
      bVar6 = true;
      puVar17 = *(undefined8 **)(this + 0x18);
      goto joined_r0x00f06f84;
    }
    if (local_65c == 6) goto switchD_00f070dc_caseD_ffffffff;
    DVar4 = this[0x4c];
    auVar18 = CurrentFrameCount(this);
    pDVar11 = auVar18._0_8_;
    iVar1 = *(int *)(this + 100);
    iVar8 = auVar18._0_4_;
    if (this[0x58] != (Debug)0x0) {
      if (iVar8 <= iVar1) {
        for (puVar17 = *(undefined8 **)(this + 0x18); puVar17 != (undefined8 *)0x0;
            puVar17 = (undefined8 *)puVar17[1]) {
          uVar13 = *puVar17;
          ClearBreakPoints(pDVar11,uVar13);
          pDVar11 = (Debug *)ApplyBreakPoints(this,uVar13);
        }
        this[0x4c] = (Debug)0xff;
        *(undefined8 *)(this + 0x50) = 0;
        this[0x58] = (Debug)0x0;
        *(undefined8 *)(this + 0x5c) = 0xffffffffffffffff;
        *(undefined4 *)(this + 100) = 0xffffffff;
        this[0x84] = (Debug)0x0;
        iVar14 = 0;
        this[9] = (Debug)(*(int *)(*(long *)(this + 0x88) + 0xb80c) == 0x20);
        goto LAB_00f07180;
      }
      goto switchD_00f070dc_caseD_ffffffff;
    }
    iVar14 = (int)(char)DVar4;
    if (3 < iVar14 + 1U) {
      for (puVar17 = *(undefined8 **)(this + 0x18); puVar17 != (undefined8 *)0x0;
          puVar17 = (undefined8 *)puVar17[1]) {
        uVar13 = *puVar17;
        ClearBreakPoints(pDVar11,uVar13);
        pDVar11 = (Debug *)ApplyBreakPoints(this,uVar13);
      }
      this[0x4c] = (Debug)0xff;
      *(undefined8 *)(this + 0x50) = 0;
      this[0x58] = (Debug)0x0;
      *(undefined8 *)(this + 0x5c) = 0xffffffffffffffff;
      *(undefined4 *)(this + 100) = 0xffffffff;
      this[0x84] = (Debug)0x0;
      this[9] = (Debug)(*(int *)(*(long *)(this + 0x88) + 0xb80c) == 0x20);
LAB_00f07180:
      PrepareStep(this,iVar14);
      goto switchD_00f070dc_caseD_ffffffff;
    }
    iVar2 = *(int *)(this + 0x60);
    switch(iVar14) {
    case 0:
      if (iVar1 < iVar8) break;
      for (puVar17 = *(undefined8 **)(this + 0x18); puVar17 != (undefined8 *)0x0;
          puVar17 = (undefined8 *)puVar17[1]) {
        uVar13 = *puVar17;
        ClearBreakPoints(pDVar11,uVar13);
        pDVar11 = (Debug *)ApplyBreakPoints(this,uVar13);
      }
LAB_00f0734c:
      this[0x4c] = (Debug)0xff;
      lVar12 = *(long *)(this + 0x88);
      *(undefined8 *)(this + 0x50) = 0;
      this[0x58] = (Debug)0x0;
      *(undefined8 *)(this + 0x5c) = 0xffffffffffffffff;
      *(undefined4 *)(this + 100) = 0xffffffff;
      this[0x84] = (Debug)0x0;
      this[9] = (Debug)(*(int *)(lVar12 + 0xb80c) == 0x20);
LAB_00f07388:
      pDVar11 = (Debug *)(lVar12 + 0x168);
      goto LAB_00f0700c;
    case 1:
      if (iVar8 <= iVar1) goto switchD_00f070dc_caseD_2;
      break;
    case 2:
switchD_00f070dc_caseD_2:
      if (local_65c != 5) {
        FrameSummary::GetTop(param_1,auVar18._8_8_);
        if ((local_65c == 4) || (iVar8 != iVar2)) {
          pDVar11 = (Debug *)FrameSummary::~FrameSummary((FrameSummary *)local_608);
          for (puVar17 = *(undefined8 **)(this + 0x18); puVar17 != (undefined8 *)0x0;
              puVar17 = (undefined8 *)puVar17[1]) {
            uVar13 = *puVar17;
            ClearBreakPoints(pDVar11,uVar13);
            pDVar11 = (Debug *)ApplyBreakPoints(this,uVar13);
          }
          goto LAB_00f0734c;
        }
        iVar1 = *(int *)(this + 0x5c);
        iVar8 = FrameSummary::SourceStatementPosition((FrameSummary *)local_608);
        pDVar11 = (Debug *)FrameSummary::~FrameSummary((FrameSummary *)local_608);
        for (puVar17 = *(undefined8 **)(this + 0x18); puVar17 != (undefined8 *)0x0;
            puVar17 = (undefined8 *)puVar17[1]) {
          uVar13 = *puVar17;
          ClearBreakPoints(pDVar11,uVar13);
          pDVar11 = (Debug *)ApplyBreakPoints(this,uVar13);
        }
        this[0x4c] = (Debug)0xff;
        lVar12 = *(long *)(this + 0x88);
        *(undefined8 *)(this + 0x50) = 0;
        this[0x58] = (Debug)0x0;
        this[0x84] = (Debug)0x0;
        *(undefined4 *)(this + 100) = 0xffffffff;
        *(undefined8 *)(this + 0x5c) = 0xffffffffffffffff;
        this[9] = (Debug)(*(int *)(lVar12 + 0xb80c) == 0x20);
        if (iVar1 == iVar8) goto LAB_00f07180;
        goto LAB_00f07388;
      }
      pDVar11 = (Debug *)InterpretedFrame::ReadInterpreterRegister((int)param_1);
      puVar17 = *(undefined8 **)(this + 0x18);
      *(Debug **)(this + 0x70) = pDVar11;
      for (; puVar17 != (undefined8 *)0x0; puVar17 = (undefined8 *)puVar17[1]) {
        uVar13 = *puVar17;
        ClearBreakPoints(pDVar11,uVar13);
        pDVar11 = (Debug *)ApplyBreakPoints(this,uVar13);
      }
      this[0x4c] = (Debug)0xff;
      *(undefined8 *)(this + 0x50) = 0;
      this[0x58] = (Debug)0x0;
      *(undefined8 *)(this + 0x5c) = 0xffffffffffffffff;
      *(undefined4 *)(this + 100) = 0xffffffff;
      this[0x84] = (Debug)0x0;
      this[9] = (Debug)(*(int *)(*(long *)(this + 0x88) + 0xb80c) == 0x20);
    }
  }
  else {
    local_608[0] = *puVar10;
    pDVar11 = (Debug *)DebugInfo::HasBreakPoint
                                 ((DebugInfo *)local_608,*(Isolate **)(this + 0x88),local_658);
    if (((ulong)pDVar11 & 1) == 0) goto LAB_00f06f8c;
    local_608[0] = *puVar10;
    uVar16 = DebugInfo::CanBreakAtEntry((DebugInfo *)local_608);
    if ((uVar16 & 1) == 0) {
      BreakIterator::BreakIterator((BreakIterator *)local_608,puVar10);
      pDVar11 = (Debug *)BreakIterator::SkipToPosition((BreakIterator *)local_608,local_658);
      if (local_5d0 == local_660) goto LAB_00f06f64;
      goto LAB_00f06f8c;
    }
    local_608[0] = *puVar10;
    pDVar11 = (Debug *)DebugInfo::BreakAtEntry((DebugInfo *)local_608);
    if (((ulong)pDVar11 & 1) == 0) goto LAB_00f06f8c;
LAB_00f06f64:
    pDVar11 = (Debug *)GetHitBreakPoints(this,puVar10,local_658);
    if (pDVar11 == (Debug *)0x0) goto LAB_00f06f8c;
    bVar6 = false;
    puVar17 = *(undefined8 **)(this + 0x18);
    pDVar15 = pDVar11;
joined_r0x00f06f84:
    for (; puVar17 != (undefined8 *)0x0; puVar17 = (undefined8 *)puVar17[1]) {
      uVar13 = *puVar17;
      ClearBreakPoints(pDVar11,uVar13);
      pDVar11 = (Debug *)ApplyBreakPoints(this,uVar13);
    }
    this[0x4c] = (Debug)0xff;
    *(undefined8 *)(this + 0x50) = 0;
    this[0x58] = (Debug)0x0;
    this[0x84] = (Debug)0x0;
    *(undefined4 *)(this + 100) = 0xffffffff;
    *(undefined8 *)(this + 0x5c) = 0xffffffffffffffff;
    this[9] = (Debug)(*(int *)(*(long *)(this + 0x88) + 0xb80c) == 0x20);
    pDVar11 = (Debug *)(*(long *)(this + 0x88) + 0x168);
    if (!bVar6) {
      pDVar11 = pDVar15;
    }
LAB_00f0700c:
    OnDebugBreak(this,pDVar11);
  }
switchD_00f070dc_caseD_ffffffff:
  this[0xc] = DVar3;
  *(undefined8 *)(local_650 + 0x40) = uStack_648;
  *(undefined4 *)(local_650 + 0x48) = local_640;
  UpdateState(local_650);
  local_638 = &PTR__InterruptsScope_01c984b0;
  if (local_618 != 2) {
    StackGuard::PopInterruptsScope(local_630);
  }
LAB_00f071c0:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

