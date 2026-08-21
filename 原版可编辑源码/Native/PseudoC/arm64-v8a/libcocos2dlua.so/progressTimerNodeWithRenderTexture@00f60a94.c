
/* cocos2d::TransitionProgressRadialCW::progressTimerNodeWithRenderTexture(cocos2d::RenderTexture*)
    */

ProgressTimer * __thiscall
cocos2d::TransitionProgressRadialCW::progressTimerNodeWithRenderTexture
          (TransitionProgressRadialCW *this,RenderTexture *param_1)

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
  ProgressTimer::setType(this_01,0);
  ProgressTimer::setReverseDirection(this_01,true);
  ProgressTimer::setPercentage(this_01,100.0);
                    /* try { // try from 00f60b10 to 01060bdf has its CatchHandler @ 00f60b10
                       catch() { ... } // from try @ 00f60b10 with catch @ 00f60b10
                       catch() { ... } // from try @ 00f60bf0 with catch @ 00f60b10
                       catch() { ... } // from try @ 00f60cec with catch @ 00f60b10 */
  (**(code **)(*(long *)this_01 + 200))(local_30 * 0.5,fStack_2c * 0.5,this_01);
  local_38 = 0x3f0000003f000000;
  (**(code **)(*(long *)this_01 + 0x148))(this_01,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

