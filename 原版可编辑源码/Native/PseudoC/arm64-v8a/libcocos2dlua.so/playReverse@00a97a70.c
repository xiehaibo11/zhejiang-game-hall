
/* fairygui::Transition::playReverse(int, float, std::__ndk1::function<void ()>) */

void __thiscall
fairygui::Transition::playReverse
          (Transition *param_1_00,Transition *this,undefined4 param_1,long *param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  local_60 = alStack_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)param_4[4];
  if (plVar2 == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (param_4 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_80);
  }
  else {
    local_60 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
  play(param_1_00,0,0xbf800000,this,param_1,alStack_80,1);
  if (alStack_80 == local_60) {
    pcVar3 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00a97b38;
    pcVar3 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar3)();
LAB_00a97b38:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

