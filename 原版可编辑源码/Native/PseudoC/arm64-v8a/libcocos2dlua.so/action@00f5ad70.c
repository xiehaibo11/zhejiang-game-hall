
/* cocos2d::TransitionSlideInT::action() */

void __thiscall cocos2d::TransitionSlideInT::action(TransitionSlideInT *this)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  undefined4 local_38;
  float local_34;
  Size aSStack_30 [4];
  float local_2c;
  long local_28;
  
                    /* try { // try from 00f5ad70 to 0105add7 has its CatchHandler @ 00f5ae5c */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)Director::getInstance();
  pSVar2 = (Size *)Director::getWinSize(this_00);
  Size::Size(aSStack_30,pSVar2);
  local_34 = -(local_2c + -0.5);
  local_38 = 0;
  MoveBy::create(*(float *)(this + 0x380),(Vec2 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

