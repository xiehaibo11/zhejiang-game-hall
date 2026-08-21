
/* cocos2d::TransitionMoveInR::initScenes() */

void __thiscall cocos2d::TransitionMoveInR::initScenes(TransitionMoveInR *this)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)Director::getInstance();
  pSVar2 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)local_30,pSVar2);
  (**(code **)(**(long **)(this + 0x370) + 200))(local_30[0],0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

