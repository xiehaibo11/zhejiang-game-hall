
/* v8::internal::Debug::RestoreDebug(char*) */

char * __thiscall v8::internal::Debug::RestoreDebug(Debug *this,char *param_1)

{
  long lVar1;
  undefined4 uVar2;
  Debug *pDVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Debug *local_630;
  undefined8 uStack_628;
  undefined4 local_620;
  undefined **local_618;
  StackGuard *local_610;
  int local_5f8;
  StackTraceFrameIterator aSStack_5e8 [1416];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x40) = uVar4;
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x68) = uVar10;
  *(undefined8 *)(this + 0x60) = uVar9;
  *(undefined8 *)(this + 0x78) = uVar6;
  *(undefined8 *)(this + 0x70) = uVar4;
  *(undefined8 *)(this + 0x58) = uVar8;
  *(undefined8 *)(this + 0x50) = uVar7;
  uStack_628 = *(undefined8 *)(this + 0x40);
  local_630 = this;
  InterruptsScope::InterruptsScope
            ((InterruptsScope *)&local_618,*(undefined8 *)(this + 0x88),0xff,0);
  local_618 = &PTR__InterruptsScope_01c98490;
  *(Debug ***)(local_630 + 0x40) = &local_630;
  local_620 = *(undefined4 *)(local_630 + 0x48);
  StackTraceFrameIterator::StackTraceFrameIterator(aSStack_5e8,*(Isolate **)(local_630 + 0x88));
  uVar2 = 0;
  if (local_60 != (long *)0x0) {
    uVar2 = (**(code **)(*local_60 + 0x38))();
  }
  *(undefined4 *)(local_630 + 0x48) = uVar2;
  pDVar3 = (Debug *)UpdateState(local_630);
  for (puVar5 = *(undefined8 **)(this + 0x18); puVar5 != (undefined8 *)0x0;
      puVar5 = (undefined8 *)puVar5[1]) {
    uVar4 = *puVar5;
    ClearBreakPoints(pDVar3,uVar4);
    pDVar3 = (Debug *)ApplyBreakPoints(this,uVar4);
  }
  if (this[0x4c] != (Debug)0xff) {
    PrepareStep(this);
  }
  *(undefined8 *)(local_630 + 0x40) = uStack_628;
  *(undefined4 *)(local_630 + 0x48) = local_620;
  UpdateState(local_630);
  local_618 = &PTR__InterruptsScope_01c984b0;
  if (local_5f8 != 2) {
    StackGuard::PopInterruptsScope(local_610);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1 + 0x48;
}

