
/* v8::internal::Debug::OnException(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::debug::ExceptionType) */

void __thiscall
v8::internal::Debug::OnException(Debug *this,undefined8 param_2,ulong *param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  Debug DVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  Isolate *pIVar9;
  ulong *puVar10;
  ulong uVar11;
  Isolate *pIVar12;
  undefined8 local_bb8;
  Debug *local_bb0;
  undefined8 uStack_ba8;
  undefined4 local_ba0;
  undefined **local_b98;
  StackGuard *local_b90;
  int local_b78;
  JavaScriptFrame *local_628;
  StackTraceFrameIterator aSStack_610 [1416];
  JavaScriptFrame *local_88;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  iVar7 = Isolate::PredictExceptionCatcher(*(Isolate **)(this + 0x88));
  if (iVar7 != 3) {
    uVar11 = *param_3;
    bVar5 = iVar7 == 0;
    if (((uVar11 & 1) != 0) &&
       (0xa9 < *(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)))) {
      lVar1 = *(long *)(this + 0x88) + 0xba8;
      Object::SetProperty(*(long *)(this + 0x88),param_3,lVar1,lVar1,0,1);
      bVar5 = Isolate::PromiseHasUserDefinedRejectHandler(*(Isolate **)(this + 0x88),param_3);
      bVar5 = bVar5 ^ 1;
    }
    if (((*(long *)this != 0) &&
        (((((bVar5 & 1) != 0 && (this[0xf] != (Debug)0x0)) || (this[0xe] != (Debug)0x0)) &&
         ((StackFrameIterator::StackFrameIterator
                     ((StackFrameIterator *)&local_bb0,*(Isolate **)(this + 0x88)),
          local_628 != (JavaScriptFrame *)0x0 &&
          (JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)&local_bb0),
          local_628 != (JavaScriptFrame *)0x0)))))) &&
       (uVar11 = IsMutedAtCurrentLocation(this,local_628), (uVar11 & 1) == 0)) {
      StackTraceFrameIterator::StackTraceFrameIterator(aSStack_610,*(Isolate **)(this + 0x88));
      while (local_88 != (JavaScriptFrame *)0x0) {
        iVar7 = (**(code **)(*(long *)local_88 + 8))();
        if ((iVar7 != 8) && (iVar7 != 5)) {
          if (local_88 != (JavaScriptFrame *)0x0) {
            bVar6 = IsFrameBlackboxed(this,local_88);
            if ((bVar5 & bVar6 & 1) == 0) goto LAB_00f0bdac;
            goto LAB_00f0bda4;
          }
          break;
        }
        StackTraceFrameIterator::Advance(aSStack_610);
      }
      bVar6 = 1;
      if ((bVar5 & 1) != 0) {
LAB_00f0bda4:
        bVar6 = AllFramesOnStackAreBlackboxed(this);
      }
LAB_00f0bdac:
      if (((bVar6 & 1) == 0) && (local_628 != (JavaScriptFrame *)0x0)) {
        local_bb8 = *(undefined8 *)(this + 0x88);
        uVar11 = StackLimitCheck::JsHasOverflowed((StackLimitCheck *)&local_bb8,0);
        if ((uVar11 & 1) == 0) {
          uStack_ba8 = *(undefined8 *)(this + 0x40);
          local_bb0 = this;
          InterruptsScope::InterruptsScope
                    ((InterruptsScope *)&local_b98,*(undefined8 *)(this + 0x88),0xff,0);
          local_b98 = &PTR__InterruptsScope_01c98490;
          *(Debug ***)(local_bb0 + 0x40) = &local_bb0;
          local_ba0 = *(undefined4 *)(local_bb0 + 0x48);
          StackTraceFrameIterator::StackTraceFrameIterator
                    (aSStack_610,*(Isolate **)(local_bb0 + 0x88));
          uVar8 = 0;
          if (local_88 != (JavaScriptFrame *)0x0) {
            uVar8 = (**(code **)(*(long *)local_88 + 0x38))();
          }
          *(undefined4 *)(local_bb0 + 0x48) = uVar8;
          UpdateState(local_bb0);
          pIVar12 = *(Isolate **)(this + 0x88);
          *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + 1;
          uVar2 = *(undefined8 *)(pIVar12 + 0x95a0);
          lVar1 = *(long *)(pIVar12 + 0x95a8);
          pIVar9 = *(Isolate **)(this + 0x88);
          DVar3 = this[0xc];
          this[0xc] = (Debug)0x1;
          uVar11 = *(ulong *)(pIVar9 + 0x2bc8) & 0xffffffff00000000;
          uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(pIVar9 + 0x2bc8) - 1)) + 0x13);
          if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar10 = *(ulong **)(pIVar9 + 0x95a0);
            if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
              puVar10 = (ulong *)HandleScope::Extend(pIVar9);
            }
            *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
            *puVar10 = uVar11;
          }
          else {
            puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar11);
          }
          (**(code **)(**(long **)this + 0x20))
                    (*(long **)this,puVar10,param_2,param_3,bVar5 & 1,param_4);
          this[0xc] = DVar3;
          if (pIVar12 != (Isolate *)0x0) {
            *(undefined8 *)(pIVar12 + 0x95a0) = uVar2;
            *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + -1;
            if (*(long *)(pIVar12 + 0x95a8) != lVar1) {
              *(long *)(pIVar12 + 0x95a8) = lVar1;
              HandleScope::DeleteExtensions(pIVar12);
            }
          }
          *(undefined8 *)(local_bb0 + 0x40) = uStack_ba8;
          *(undefined4 *)(local_bb0 + 0x48) = local_ba0;
          UpdateState(local_bb0);
          local_b98 = &PTR__InterruptsScope_01c984b0;
          if (local_b78 != 2) {
            StackGuard::PopInterruptsScope(local_b90);
          }
        }
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

