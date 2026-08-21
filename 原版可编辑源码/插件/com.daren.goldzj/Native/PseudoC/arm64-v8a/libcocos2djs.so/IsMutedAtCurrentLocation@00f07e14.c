
/* v8::internal::Debug::IsMutedAtCurrentLocation(v8::internal::JavaScriptFrame*) */

undefined4 __thiscall
v8::internal::Debug::IsMutedAtCurrentLocation(Debug *this,JavaScriptFrame *param_1)

{
  BreakLocation *pBVar1;
  undefined8 uVar2;
  long lVar3;
  Debug DVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  Isolate *pIVar12;
  long lVar13;
  Debug *local_690;
  undefined8 uStack_688;
  undefined4 local_680;
  undefined **local_678;
  StackGuard *local_670;
  int local_658;
  FrameSummary aFStack_648 [24];
  ulong *local_630;
  void *local_610;
  void *local_608;
  undefined8 uStack_600;
  long *local_88;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  pIVar12 = *(Isolate **)(this + 0x88);
  uVar2 = *(undefined8 *)(pIVar12 + 0x95a0);
  lVar3 = *(long *)(pIVar12 + 0x95a8);
  *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + 1;
  FrameSummary::GetTop((FrameSummary *)param_1,(StandardFrame *)param_1);
  local_610 = (void *)(*local_630 & 0xffffffff00000000 | (ulong)*(uint *)(*local_630 + 0xb));
  uVar7 = SharedFunctionInfo::HasBreakInfo((SharedFunctionInfo *)&local_610);
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    pIVar8 = *(Isolate **)(this + 0x88);
    uVar7 = *local_630 & 0xffffffff00000000;
    uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)(*local_630 + 0xb)) + 0xf);
    if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
      *puVar9 = uVar7;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar7);
    }
    uStack_688 = *(undefined8 *)(this + 0x40);
    local_690 = this;
    InterruptsScope::InterruptsScope
              ((InterruptsScope *)&local_678,*(undefined8 *)(this + 0x88),0xff,0);
    local_678 = &PTR__InterruptsScope_01c98490;
    *(Debug ***)(local_690 + 0x40) = &local_690;
    local_680 = *(undefined4 *)(local_690 + 0x48);
    StackTraceFrameIterator::StackTraceFrameIterator
              ((StackTraceFrameIterator *)&local_610,*(Isolate **)(local_690 + 0x88));
    uVar6 = 0;
    if (local_88 != (long *)0x0) {
      uVar6 = (**(code **)(*local_88 + 0x38))();
    }
    *(undefined4 *)(local_690 + 0x48) = uVar6;
    UpdateState(local_690);
    local_608 = (void *)0x0;
    uStack_600 = 0;
    local_610 = (void *)0x0;
    BreakLocation::AllAtCurrentStatement(puVar9,param_1,&local_610);
    if (local_608 != local_610) {
      lVar13 = 0;
      uVar7 = 0;
      uVar6 = 0;
      DVar4 = this[0xd];
      do {
        if (DVar4 != (Debug)0x0) {
          pBVar1 = (BreakLocation *)((long)local_610 + lVar13);
          uVar10 = BreakLocation::HasBreakPoint(pBVar1,*(undefined8 *)(this + 0x88),puVar9);
          if ((uVar10 & 1) != 0) {
            lVar11 = GetHitBreakPoints(this,puVar9,*(undefined4 *)(pBVar1 + 0x10));
            if (lVar11 != 0) {
              uVar6 = 0;
              goto joined_r0x00f08028;
            }
            uVar6 = 1;
          }
        }
        uVar7 = uVar7 + 1;
        lVar13 = lVar13 + 0x18;
        if ((ulong)(((long)local_608 - (long)local_610 >> 3) * -0x5555555555555555) <= uVar7)
        goto joined_r0x00f08028;
        DVar4 = this[0xd];
      } while( true );
    }
    uVar6 = 0;
joined_r0x00f08028:
    if (local_610 != (void *)0x0) {
      local_608 = local_610;
      operator_delete(local_610);
    }
    *(undefined8 *)(local_690 + 0x40) = uStack_688;
    *(undefined4 *)(local_690 + 0x48) = local_680;
    UpdateState(local_690);
    local_678 = &PTR__InterruptsScope_01c984b0;
    if (local_658 != 2) {
      StackGuard::PopInterruptsScope(local_670);
    }
  }
  FrameSummary::~FrameSummary(aFStack_648);
  if (pIVar12 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar12 + 0x95a0) = uVar2;
    *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + -1;
    if (*(long *)(pIVar12 + 0x95a8) != lVar3) {
      *(long *)(pIVar12 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(pIVar12);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

