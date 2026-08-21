
/* v8::internal::compiler::CodeAssembler::RegisterCallGenerationCallbacks(std::__ndk1::function<void
   ()> const&, std::__ndk1::function<void ()> const&) */

void __thiscall
v8::internal::compiler::CodeAssembler::RegisterCallGenerationCallbacks
          (CodeAssembler *this,function *param_1,function *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  local_50 = alStack_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x20);
  lVar4 = *(long *)this;
  if (plVar2 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  FUN_008feca4(alStack_70,lVar4 + 0x40);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_016814fc:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_016814fc;
  }
  plVar2 = *(long **)(param_2 + 0x20);
  lVar4 = *(long *)this;
  if (plVar2 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)param_2 == plVar2) {
    local_50 = alStack_70;
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  FUN_008feca4(alStack_70,lVar4 + 0x70);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_01681580;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_01681580:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

