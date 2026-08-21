
/* fairygui::GMovieClip::setPlaySettings(int, int, int, int, std::__ndk1::function<void ()>) */

void __thiscall
fairygui::GMovieClip::setPlaySettings
          (GMovieClip *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,long *param_6)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  ActionMovieClip *pAVar4;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  local_70 = alStack_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)param_6[4];
  pAVar4 = *(ActionMovieClip **)(this + 0x1e0);
  if (plVar2 == (long *)0x0) {
    local_70 = (long *)0x0;
  }
  else if (param_6 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_90);
  }
  else {
    local_70 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  ActionMovieClip::setPlaySettings(pAVar4,param_1,param_2,param_3,param_4,alStack_90);
  if (alStack_90 == local_70) {
    pcVar3 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00a8120c;
    pcVar3 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar3)();
LAB_00a8120c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

