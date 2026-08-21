
/* cocos2d::TransitionProgressHorizontal::progressTimerNodeWithRenderTexture(cocos2d::RenderTexture*)
    */

ProgressTimer * __thiscall
cocos2d::TransitionProgressHorizontal::progressTimerNodeWithRenderTexture
          (TransitionProgressHorizontal *this,RenderTexture *param_1)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  ProgressTimer *this_01;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)Director::getInstance();
  pSVar2 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)&local_40,pSVar2);
  this_01 = (ProgressTimer *)ProgressTimer::create(*(Sprite **)(param_1 + 0x380));
  Sprite::setFlippedY(*(Sprite **)(this_01 + 0x310),true);
  ProgressTimer::setType(this_01,1);
  local_48 = 0x3f800000;
  ProgressTimer::setMidpoint(this_01,(Vec2 *)&local_48);
  *(undefined8 *)(this_01 + 0x304) = 0x3f800000;
  ProgressTimer::setPercentage(this_01,100.0);
                    /* try { // try from 00f60cb0 to 01060ccb has its CatchHandler @ 00f60e58 */
  (**(code **)(*(long *)this_01 + 200))(local_40 * 0.5,fStack_3c * 0.5,this_01);
  local_48 = 0x3f0000003f000000;
                    /* try { // try from 00f60cdc to 01060ceb has its CatchHandler @ 00f60e6c */
  (**(code **)(*(long *)this_01 + 0x148))(this_01,&local_48);
                    /* try { // try from 00f60cec to 01060e9b has its CatchHandler @ 00f60b10 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

