
/* cocos2d::TransitionMoveInT::initScenes() */

void __thiscall cocos2d::TransitionMoveInT::initScenes(TransitionMoveInT *this)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  Size aSStack_30 [4];
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f59e0c to 01059e0f has its CatchHandler @ 00f59e4c */
  this_00 = (Director *)Director::getInstance();
                    /* try { // try from 00f59e10 to 01059e8f has its CatchHandler @ 00f59ce8 */
  pSVar2 = (Size *)Director::getWinSize(this_00);
  Size::Size(aSStack_30,pSVar2);
  (**(code **)(**(long **)(this + 0x370) + 200))(0,local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f59e0c with catch @ 00f59e4c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f59d3c with catch @ 00f59e50
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f59da0 with catch @ 00f59e58
                        */
  __stack_chk_fail();
}

