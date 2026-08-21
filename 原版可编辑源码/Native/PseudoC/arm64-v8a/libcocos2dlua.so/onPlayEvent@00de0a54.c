
/* cocos2d::experimental::ui::VideoPlayer::onPlayEvent(int) */

void __thiscall cocos2d::experimental::ui::VideoPlayer::onPlayEvent(VideoPlayer *this,int param_1)

{
  long lVar1;
  long *plVar2;
  int local_34;
  VideoPlayer *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 == 1000) {
    this[0x4f4] = (VideoPlayer)0x0;
  }
  else {
    plVar2 = *(long **)(this + 0x540);
    this[0x4f0] = (VideoPlayer)(param_1 == 0);
    if (plVar2 != (long *)0x0) {
      local_34 = param_1;
      local_30 = this;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_30,&local_34);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

