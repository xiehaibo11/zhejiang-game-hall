
/* cocos2d::TransitionSlideInB::initScenes() */

void __thiscall cocos2d::TransitionSlideInB::initScenes(TransitionSlideInB *this)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  Size aSStack_30 [4];
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)Director::getInstance();
  pSVar2 = (Size *)Director::getWinSize(this_00);
  Size::Size(aSStack_30,pSVar2);
  (**(code **)(**(long **)(this + 0x370) + 200))(0,-(local_2c + -0.5));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

