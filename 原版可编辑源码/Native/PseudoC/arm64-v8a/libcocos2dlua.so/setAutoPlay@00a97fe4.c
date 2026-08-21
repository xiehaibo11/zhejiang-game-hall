
/* fairygui::Transition::setAutoPlay(bool, int, float) */

void __thiscall
fairygui::Transition::setAutoPlay(Transition *this,bool param_1,int param_2,float param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0xbc] != (Transition)param_1) {
    this[0xbc] = (Transition)param_1;
    *(int *)(this + 0xc0) = param_2;
    *(float *)(this + 0xc4) = param_3;
    uVar2 = GObject::onStage(*(GObject **)(this + 0x40));
    if (param_1) {
      if ((uVar2 & 1) != 0) {
                    /* WARNING: Load size is inaccurate */
        local_50 = (long *)0x0;
        play(*(Transition **)(this + 0xc4),this,*(undefined4 *)(this + 0xc0),alStack_70);
        if (alStack_70 == local_50) {
          pcVar3 = *(code **)(*local_50 + 0x20);
        }
        else {
          if (local_50 == (long *)0x0) goto LAB_00a98014;
          pcVar3 = *(code **)(*local_50 + 0x28);
        }
        (*pcVar3)();
      }
    }
    else if ((uVar2 & 1) == 0) {
      stop(this,false,true);
    }
  }
LAB_00a98014:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

