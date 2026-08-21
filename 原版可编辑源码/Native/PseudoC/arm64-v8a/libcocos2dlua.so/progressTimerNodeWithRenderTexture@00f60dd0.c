
/* cocos2d::TransitionProgressVertical::progressTimerNodeWithRenderTexture(cocos2d::RenderTexture*)
    */

ProgressTimer * __thiscall
cocos2d::TransitionProgressVertical::progressTimerNodeWithRenderTexture
          (TransitionProgressVertical *this,RenderTexture *param_1)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  ProgressTimer *this_01;
  undefined8 local_38;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)Director::getInstance();
  pSVar2 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)&local_30,pSVar2);
  this_01 = (ProgressTimer *)ProgressTimer::create(*(Sprite **)(param_1 + 0x380));
  Sprite::setFlippedY(*(Sprite **)(this_01 + 0x310),true);
  ProgressTimer::setType(this_01,1);
  local_38 = 0;
  ProgressTimer::setMidpoint(this_01,(Vec2 *)&local_38);
  *(undefined8 *)(this_01 + 0x304) = 0x3f80000000000000;
  ProgressTimer::setPercentage(this_01,100.0);
                    /* catch() { ... } // from try @ 00f60cb0 with catch @ 00f60e58 */
                    /* catch() { ... } // from try @ 00f60cdc with catch @ 00f60e6c */
  (**(code **)(*(long *)this_01 + 200))(local_30 * 0.5,fStack_2c * 0.5,this_01);
  local_38 = 0x3f0000003f000000;
                    /* catch() { ... } // from try @ 00f60be0 with catch @ 00f60e88 */
  (**(code **)(*(long *)this_01 + 0x148))(this_01,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00f60ea8 to 01060fab has its CatchHandler @ 00f60ea8
                       catch() { ... } // from try @ 00f60ea8 with catch @ 00f60ea8
                       catch() { ... } // from try @ 00f60fd4 with catch @ 00f60ea8
                       catch() { ... } // from try @ 00f6102c with catch @ 00f60ea8 */
    return this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

