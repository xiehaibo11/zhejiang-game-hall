
/* fairygui::Transition::play(int, float, float, float, std::__ndk1::function<void ()>) */

void __thiscall
fairygui::Transition::play
          (Transition *param_1_00,undefined8 param_2,undefined8 param_3,Transition *this,
          undefined4 param_1,long *param_6)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  local_70 = alStack_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)param_6[4];
  if (plVar2 == (long *)0x0) {
    local_70 = (long *)0x0;
  }
  else if (param_6 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_90);
  }
  else {
    local_70 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
  play(param_1_00,param_2,param_3,this,param_1,alStack_90,0);
  if (alStack_90 == local_70) {
    pcVar3 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00a978ec;
    pcVar3 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar3)();
LAB_00a978ec:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

