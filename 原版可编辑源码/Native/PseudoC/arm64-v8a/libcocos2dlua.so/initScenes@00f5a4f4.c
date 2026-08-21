
/* cocos2d::TransitionSlideInL::initScenes() */

void __thiscall cocos2d::TransitionSlideInL::initScenes(TransitionSlideInL *this)

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
                    /* try { // try from 00f5a544 to 0105a54f has its CatchHandler @ 00f5a5d8 */
  (**(code **)(**(long **)(this + 0x370) + 200))(-(local_30[0] + -0.5),0);
                    /* try { // try from 00f5a550 to 0105a5c3 has its CatchHandler @ 00f5a5e8 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

