
/* cocos2d::TransitionMoveInL::action() */

void __thiscall cocos2d::TransitionMoveInL::action(TransitionMoveInL *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  MoveTo::create(*(float *)(this + 0x380),(Vec2 *)&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

