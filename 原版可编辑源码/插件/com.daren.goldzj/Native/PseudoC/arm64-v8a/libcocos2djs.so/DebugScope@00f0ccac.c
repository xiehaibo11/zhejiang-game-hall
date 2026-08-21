
/* v8::internal::DebugScope::DebugScope(v8::internal::Debug*) */

void __thiscall v8::internal::DebugScope::DebugScope(DebugScope *this,Debug *param_1)

{
  long lVar1;
  undefined4 uVar2;
  StackTraceFrameIterator aSStack_5d8 [1416];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(Debug **)this = param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x40);
  InterruptsScope::InterruptsScope
            ((InterruptsScope *)(this + 0x18),*(undefined8 *)(param_1 + 0x88),0xff,0);
  *(undefined ***)(this + 0x18) = &PTR__InterruptsScope_01c98490;
  *(DebugScope **)(*(long *)this + 0x40) = this;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(*(long *)this + 0x48);
  StackTraceFrameIterator::StackTraceFrameIterator(aSStack_5d8,*(Isolate **)(*(long *)this + 0x88));
  uVar2 = 0;
  if (local_50 != (long *)0x0) {
    uVar2 = (**(code **)(*local_50 + 0x38))();
  }
  *(undefined4 *)(*(long *)this + 0x48) = uVar2;
  Debug::UpdateState(*(Debug **)this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

