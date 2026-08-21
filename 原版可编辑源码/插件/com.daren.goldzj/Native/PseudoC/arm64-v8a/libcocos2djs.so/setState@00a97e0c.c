
/* cocos2d::Track::setState(cocos2d::Track::State) */

void __thiscall cocos2d::Track::setState(Track *this,int param_2)

{
  long lVar1;
  long *plVar2;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::mutex::lock((mutex *)(this + 0xa8));
  if (*(int *)(this + 0xa4) != param_2) {
    *(int *)(this + 0xa0) = *(int *)(this + 0xa4);
    *(int *)(this + 0xa4) = param_2;
    plVar2 = *(long **)(this + 0x60);
    local_3c = param_2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_3c);
  }
  std::__ndk1::mutex::unlock((mutex *)(this + 0xa8));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

