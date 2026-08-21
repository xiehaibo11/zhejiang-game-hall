
/* cocos2d::TransitionProgressInOut::progressTimerNodeWithRenderTexture(cocos2d::RenderTexture*) */

ProgressTimer * __thiscall
cocos2d::TransitionProgressInOut::progressTimerNodeWithRenderTexture
          (TransitionProgressInOut *this,RenderTexture *param_1)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  ProgressTimer *this_01;
  undefined8 uVar3;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00f60fac to 01060fb7 has its CatchHandler @ 00f610b8 */
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)Director::getInstance();
                    /* try { // try from 00f60fbc to 01060fc7 has its CatchHandler @ 00f610bc */
  pSVar2 = (Size *)Director::getWinSize(this_00);
                    /* try { // try from 00f60fc8 to 01060fd3 has its CatchHandler @ 00f6108c */
  Size::Size((Size *)&local_40,pSVar2);
  this_01 = (ProgressTimer *)ProgressTimer::create(*(Sprite **)(param_1 + 0x380));
                    /* try { // try from 00f60fd4 to 01061003 has its CatchHandler @ 00f60ea8 */
  Sprite::setFlippedY(*(Sprite **)(this_01 + 0x310),true);
  ProgressTimer::setType(this_01,1);
  local_48 = 0x3f0000003f000000;
  ProgressTimer::setMidpoint(this_01,(Vec2 *)&local_48);
                    /* try { // try from 00f61004 to 0106101b has its CatchHandler @ 00f610ac */
  uVar3 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this_01 + 0x304) = uVar3;
  ProgressTimer::setPercentage(this_01,0.0);
                    /* try { // try from 00f6101c to 0106102b has its CatchHandler @ 00f6109c */
                    /* try { // try from 00f6102c to 010610cf has its CatchHandler @ 00f60ea8 */
  (**(code **)(*(long *)this_01 + 200))(local_40 * 0.5,fStack_3c * 0.5,this_01);
  local_48 = 0x3f0000003f000000;
  (**(code **)(*(long *)this_01 + 0x148))(this_01,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

