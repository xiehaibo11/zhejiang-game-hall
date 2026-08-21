
/* cocos2d::TransitionSlideInR::action() */

void __thiscall cocos2d::TransitionSlideInR::action(TransitionSlideInR *this)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  float local_38 [2];
  float local_30 [2];
  long local_28;
  
                    /* try { // try from 00f5aa04 to 0105aa2b has its CatchHandler @ 00f5ab00 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)Director::getInstance();
  pSVar2 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)local_30,pSVar2);
  local_38[0] = -(local_30[0] + -0.5);
  local_38[1] = 0.0;
  MoveBy::create(*(float *)(this + 0x380),(Vec2 *)local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

