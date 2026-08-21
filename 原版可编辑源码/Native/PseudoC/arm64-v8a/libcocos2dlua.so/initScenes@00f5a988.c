
/* cocos2d::TransitionSlideInR::initScenes() */

void __thiscall cocos2d::TransitionSlideInR::initScenes(TransitionSlideInR *this)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  float local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)Director::getInstance();
  pSVar2 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)local_30,pSVar2);
                    /* try { // try from 00f5a9c0 to 0105aa03 has its CatchHandler @ 00f5a9c0
                       catch(type#1 @ 00000000) { ... } // from try @ 00f5a9c0 with catch @ 00f5a9c0
                        */
  (**(code **)(**(long **)(this + 0x370) + 200))(local_30[0] + -0.5,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

