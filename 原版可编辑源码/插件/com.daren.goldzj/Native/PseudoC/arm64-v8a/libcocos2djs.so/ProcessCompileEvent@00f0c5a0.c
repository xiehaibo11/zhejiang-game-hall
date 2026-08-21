
/* v8::internal::Debug::ProcessCompileEvent(bool, v8::internal::Handle<v8::internal::Script>) */

void __thiscall v8::internal::Debug::ProcessCompileEvent(Debug *this,uint param_2,ulong *param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  Debug DVar4;
  Debug DVar5;
  long lVar6;
  undefined4 uVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  Debug *local_658;
  undefined8 uStack_650;
  undefined4 local_648;
  undefined **local_640;
  StackGuard *local_638;
  int local_620;
  ulong local_610 [177];
  long *local_88;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  if (this[0xb] == (Debug)0x0) {
    pIVar8 = *(Isolate **)(this + 0x88);
    uVar12 = *param_3;
    uVar11 = *(ulong *)(pIVar8 + 0x2bc8) & 0xffffffff00000000;
    uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(pIVar8 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
      *puVar9 = uVar11;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar11);
      uVar11 = *puVar9;
    }
    uVar3 = *(uint *)(uVar11 + 0xab);
    *(uint *)(uVar12 + 0x13) = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar13 = uVar11 & 0xffffffff00000000 | (ulong)uVar3;
      uVar10 = uVar11 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
      uVar11 = *(ulong *)(uVar10 + 8);
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,uVar12 + 0x13,uVar13);
        uVar11 = *(ulong *)(uVar10 | 8);
      }
      if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,uVar12 + 0x13,uVar13);
      }
    }
    if (((this[10] == (Debug)0x0) && (this[8] != (Debug)0x0)) &&
       (*(int *)(*(long *)(this + 0x88) + 0xb80c) != 0x20)) {
      local_610[0] = *param_3;
      uVar11 = Script::IsUserJavaScript((Script *)local_610);
      if ((((uVar11 & 1) != 0) || ((*(uint *)(*param_3 + 0x17) & 0xfffffffe) == 6)) &&
         (*(long *)this != 0)) {
        DVar4 = this[10];
        this[10] = (Debug)0x1;
        uStack_650 = *(undefined8 *)(this + 0x40);
        local_658 = this;
        InterruptsScope::InterruptsScope
                  ((InterruptsScope *)&local_640,*(undefined8 *)(this + 0x88),0xff,0);
        local_640 = &PTR__InterruptsScope_01c98490;
        *(Debug ***)(local_658 + 0x40) = &local_658;
        local_648 = *(undefined4 *)(local_658 + 0x48);
        StackTraceFrameIterator::StackTraceFrameIterator
                  ((StackTraceFrameIterator *)local_610,*(Isolate **)(local_658 + 0x88));
        uVar7 = 0;
        if (local_88 != (long *)0x0) {
          uVar7 = (**(code **)(*local_88 + 0x38))();
        }
        *(undefined4 *)(local_658 + 0x48) = uVar7;
        UpdateState(local_658);
        pIVar8 = *(Isolate **)(this + 0x88);
        uVar1 = *(undefined8 *)(pIVar8 + 0x95a0);
        lVar2 = *(long *)(pIVar8 + 0x95a8);
        *(int *)(pIVar8 + 0x95b0) = *(int *)(pIVar8 + 0x95b0) + 1;
        DVar5 = this[0xc];
        this[0xc] = (Debug)0x1;
        PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::PerIsolateAssertScope
                  ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true> *)local_610,
                   *(Isolate **)(this + 0x88));
        (**(code **)(**(long **)this + 0x10))(*(long **)this,param_3,this[0xb],param_2 & 1);
        PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::~PerIsolateAssertScope
                  ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true> *)local_610);
        this[0xc] = DVar5;
        if (pIVar8 != (Isolate *)0x0) {
          *(undefined8 *)(pIVar8 + 0x95a0) = uVar1;
          *(int *)(pIVar8 + 0x95b0) = *(int *)(pIVar8 + 0x95b0) + -1;
          if (*(long *)(pIVar8 + 0x95a8) != lVar2) {
            *(long *)(pIVar8 + 0x95a8) = lVar2;
            HandleScope::DeleteExtensions(pIVar8);
          }
        }
        *(undefined8 *)(local_658 + 0x40) = uStack_650;
        *(undefined4 *)(local_658 + 0x48) = local_648;
        UpdateState(local_658);
        local_640 = &PTR__InterruptsScope_01c984b0;
        if (local_620 != 2) {
          StackGuard::PopInterruptsScope(local_638);
        }
        this[10] = DVar4;
      }
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

