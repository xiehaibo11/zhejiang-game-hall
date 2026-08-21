
/* v8::internal::Debug::SetScriptSource(v8::internal::Handle<v8::internal::Script>,
   v8::internal::Handle<v8::internal::String>, bool, v8::debug::LiveEditResult*) */

void __thiscall
v8::internal::Debug::SetScriptSource
          (Debug *this,undefined8 param_2,undefined8 param_3,uint param_4,int *param_5)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  Debug *local_640;
  undefined8 uStack_638;
  undefined4 local_630;
  undefined **local_628;
  StackGuard *local_620;
  int local_608;
  StackTraceFrameIterator aSStack_5f8 [1416];
  long *local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uStack_638 = *(undefined8 *)(this + 0x40);
  local_640 = this;
  InterruptsScope::InterruptsScope
            ((InterruptsScope *)&local_628,*(undefined8 *)(this + 0x88),0xff,0);
  local_628 = &PTR__InterruptsScope_01c98490;
  *(Debug ***)(local_640 + 0x40) = &local_640;
  local_630 = *(undefined4 *)(local_640 + 0x48);
  StackTraceFrameIterator::StackTraceFrameIterator(aSStack_5f8,*(Isolate **)(local_640 + 0x88));
  uVar3 = 0;
  if (local_70 != (long *)0x0) {
    uVar3 = (**(code **)(*local_70 + 0x38))();
  }
  *(undefined4 *)(local_640 + 0x48) = uVar3;
  UpdateState(local_640);
  if (-1 < (char)this[0x38]) {
    Histogram::AddSample((int)*(undefined8 *)(*(long *)(this + 0x30) + 0x9520) + 0xf8);
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x80;
  }
  this[0xb] = (Debug)0x1;
  LiveEdit::PatchScript(*(undefined8 *)(this + 0x88),param_2,param_3,param_4 & 1,param_5);
  this[0xb] = (Debug)0x0;
  iVar1 = *param_5;
  *(undefined8 *)(local_640 + 0x40) = uStack_638;
  *(undefined4 *)(local_640 + 0x48) = local_630;
  UpdateState(local_640);
  local_628 = &PTR__InterruptsScope_01c984b0;
  if (local_608 != 2) {
    StackGuard::PopInterruptsScope(local_620);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}

