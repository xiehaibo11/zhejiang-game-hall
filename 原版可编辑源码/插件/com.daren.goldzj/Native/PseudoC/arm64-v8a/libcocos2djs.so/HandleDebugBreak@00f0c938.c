
/* v8::internal::Debug::HandleDebugBreak(v8::internal::IgnoreBreakMode) */

void __thiscall v8::internal::Debug::HandleDebugBreak(Debug *this,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  Debug *pDVar4;
  Isolate *pIVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  Isolate *pIVar11;
  Debug *local_658;
  undefined8 uStack_650;
  undefined4 local_648;
  undefined **local_640;
  StackGuard *local_638;
  int local_620;
  StackFrameIterator aSStack_610 [1416];
  JavaScriptFrame *local_88;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  LiveEdit::InitializeThreadLocal(this);
  lVar10 = *(long *)(this + 0x88);
  if ((((*(int *)(*(long *)(lVar10 + 0x9508) + 8) != 0) || (this[0xc] != (Debug)0x0)) ||
      (this[8] == (Debug)0x0)) ||
     (uVar3 = GetCurrentStackPosition(), uVar3 < *(ulong *)(lVar10 + 0x58))) goto LAB_00f0c98c;
  StackFrameIterator::StackFrameIterator(aSStack_610,*(Isolate **)(this + 0x88));
  if (local_88 != (JavaScriptFrame *)0x0) {
    JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_610);
  }
  pDVar4 = (Debug *)(**(code **)(*(long *)local_88 + 0x98))();
  if ((((ulong)pDVar4 & 1) != 0) &&
     (uVar3 = (ulong)pDVar4 & 0xffffffff00000000,
     *(short *)((uVar3 | 7) + (ulong)*(uint *)(pDVar4 + -1)) == 0x439)) {
    pIVar11 = *(Isolate **)(this + 0x88);
    uVar9 = *(undefined8 *)(pIVar11 + 0x95a0);
    lVar10 = *(long *)(pIVar11 + 0x95a8);
    *(int *)(pIVar11 + 0x95b0) = *(int *)(pIVar11 + 0x95b0) + 1;
    pIVar5 = *(Isolate **)(this + 0x88);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(undefined8 **)(pIVar5 + 0x95a0);
      if (puVar6 == *(undefined8 **)(pIVar5 + 0x95a8)) {
        puVar6 = (undefined8 *)HandleScope::Extend(pIVar5);
      }
      *(undefined8 **)(pIVar5 + 0x95a0) = puVar6 + 1;
      *puVar6 = pDVar4;
    }
    else {
      puVar6 = (undefined8 *)
               CanonicalHandleScope::Lookup
                         (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),(ulong)pDVar4);
      pDVar4 = (Debug *)*puVar6;
      uVar3 = (ulong)pDVar4 & 0xffffffff00000000;
    }
    uVar8 = *(uint *)(pDVar4 + 0xb);
    pIVar5 = *(Isolate **)(this + 0x88);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar7 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar3 | uVar8;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar3 | uVar8);
    }
    if (param_2 == 1) {
      pDVar4 = (Debug *)IsBlackboxed(this,puVar7);
      if (((ulong)pDVar4 & 1) == 0) goto LAB_00f0cb04;
LAB_00f0caf0:
      uVar8 = 1;
    }
    else {
      pDVar4 = (Debug *)AllFramesOnStackAreBlackboxed(this);
      if (((ulong)pDVar4 & 1) != 0) goto LAB_00f0caf0;
LAB_00f0cb04:
      pDVar4 = (Debug *)IsMutedAtCurrentLocation(this,local_88);
      uVar8 = (uint)pDVar4 & 1;
    }
    if (pIVar11 != (Isolate *)0x0) {
      *(undefined8 *)(pIVar11 + 0x95a0) = uVar9;
      *(int *)(pIVar11 + 0x95b0) = *(int *)(pIVar11 + 0x95b0) + -1;
      if (*(long *)(pIVar11 + 0x95a8) != lVar10) {
        *(long *)(pIVar11 + 0x95a8) = lVar10;
        pDVar4 = (Debug *)HandleScope::DeleteExtensions(pIVar11);
      }
    }
    if (uVar8 != 0) goto LAB_00f0c98c;
  }
  for (puVar6 = *(undefined8 **)(this + 0x18); puVar6 != (undefined8 *)0x0;
      puVar6 = (undefined8 *)puVar6[1]) {
    uVar9 = *puVar6;
    ClearBreakPoints(pDVar4,uVar9);
    pDVar4 = (Debug *)ApplyBreakPoints(this,uVar9);
  }
  pIVar5 = *(Isolate **)(this + 0x88);
  *(undefined8 *)(this + 0x50) = 0;
  this[0x58] = (Debug)0x0;
  this[0x84] = (Debug)0x0;
  this[0x4c] = (Debug)0xff;
  *(undefined8 *)(this + 0x5c) = 0xffffffffffffffff;
  *(undefined4 *)(this + 100) = 0xffffffff;
  this[9] = (Debug)(*(int *)(pIVar5 + 0xb80c) == 0x20);
  uVar9 = *(undefined8 *)(pIVar5 + 0x95a0);
  lVar10 = *(long *)(pIVar5 + 0x95a8);
  *(int *)(pIVar5 + 0x95b0) = *(int *)(pIVar5 + 0x95b0) + 1;
  uStack_650 = *(undefined8 *)(this + 0x40);
  local_658 = this;
  InterruptsScope::InterruptsScope
            ((InterruptsScope *)&local_640,*(undefined8 *)(this + 0x88),0xff,0);
  local_640 = &PTR__InterruptsScope_01c98490;
  *(Debug ***)(local_658 + 0x40) = &local_658;
  local_648 = *(undefined4 *)(local_658 + 0x48);
  StackTraceFrameIterator::StackTraceFrameIterator
            ((StackTraceFrameIterator *)aSStack_610,*(Isolate **)(local_658 + 0x88));
  uVar2 = 0;
  if (local_88 != (JavaScriptFrame *)0x0) {
    uVar2 = (**(code **)(*(long *)local_88 + 0x38))();
  }
  *(undefined4 *)(local_658 + 0x48) = uVar2;
  UpdateState(local_658);
  OnDebugBreak(this,*(long *)(this + 0x88) + 0x168);
  *(undefined8 *)(local_658 + 0x40) = uStack_650;
  *(undefined4 *)(local_658 + 0x48) = local_648;
  UpdateState(local_658);
  local_640 = &PTR__InterruptsScope_01c984b0;
  if (local_620 != 2) {
    StackGuard::PopInterruptsScope(local_638);
  }
  if (pIVar5 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar5 + 0x95a0) = uVar9;
    *(int *)(pIVar5 + 0x95b0) = *(int *)(pIVar5 + 0x95b0) + -1;
    if (*(long *)(pIVar5 + 0x95a8) != lVar10) {
      *(long *)(pIVar5 + 0x95a8) = lVar10;
      HandleScope::DeleteExtensions(pIVar5);
    }
  }
LAB_00f0c98c:
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

