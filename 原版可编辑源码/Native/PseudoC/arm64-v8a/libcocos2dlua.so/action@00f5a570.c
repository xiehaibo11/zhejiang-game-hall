
/* cocos2d::TransitionSlideInL::action() */

void __thiscall cocos2d::TransitionSlideInL::action(TransitionSlideInL *this)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  float local_38 [2];
  float local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)Director::getInstance();
  pSVar2 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)local_30,pSVar2);
  local_38[0] = local_30[0] + -0.5;
  local_38[1] = 0.0;
  MoveBy::create(*(float *)(this + 0x380),(Vec2 *)local_38);
                    /* try { // try from 00f5a5c4 to 0105a6ab has its CatchHandler @ 00f5a4a8 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00f5a544 with catch @ 00f5a5d8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

