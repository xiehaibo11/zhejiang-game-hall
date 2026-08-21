
/* fairygui::Transition::play(std::__ndk1::function<void ()>) */

void __thiscall fairygui::Transition::play(Transition *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  local_50 = alStack_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)param_2[4];
  if (plVar2 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (param_2 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
  play((Transition *)0x0,0,0xbf800000,this,1,alStack_70,0);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00a9735c;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00a9735c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

