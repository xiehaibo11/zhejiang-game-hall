
/* cocos2d::extension::ControlPotentiometer::initWithTrackSprite_ProgressTimer_ThumbSprite(cocos2d::Sprite*,
   cocos2d::ProgressTimer*, cocos2d::Sprite*) */

bool __thiscall
cocos2d::extension::ControlPotentiometer::initWithTrackSprite_ProgressTimer_ThumbSprite
          (ControlPotentiometer *this,Sprite *param_1,ProgressTimer *param_2,Sprite *param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00e0f8d0 to 00f0f8db has its CatchHandler @ 00e0f998 */
                    /* try { // try from 00e0f8dc to 00f0f943 has its CatchHandler @ 00e0f7c4 */
  uVar2 = Control::init((Control *)this);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    (**(code **)(*(long *)this + 0x6d0))(this,param_2);
    (**(code **)(*(long *)this + 0x6c0))(this,param_3);
    uVar3 = (**(code **)(*(long *)param_2 + 0xb0))(param_2);
    (**(code **)(*(long *)param_3 + 0x98))(param_3,uVar3);
                    /* try { // try from 00e0f944 to 00f0f94f has its CatchHandler @ 00e0f980 */
    (**(code **)(*(long *)this + 0x210))(this,param_3,2);
                    /* try { // try from 00e0f950 to 00f0f9db has its CatchHandler @ 00e0f7c4 */
    (**(code **)(*(long *)this + 0x210))(this,param_2,1);
    (**(code **)(*(long *)this + 0x208))(this,param_1);
                    /* catch() { ... } // from try @ 00e0f944 with catch @ 00e0f980 */
    uVar3 = (**(code **)(*(long *)param_1 + 0x168))(param_1);
                    /* catch() { ... } // from try @ 00e0f8d0 with catch @ 00e0f998 */
    (**(code **)(*(long *)this + 0x160))(this,uVar3);
                    /* catch() { ... } // from try @ 00e0f870 with catch @ 00e0f9a4 */
    *(undefined8 *)(this + 0x358) = 0;
                    /* catch() { ... } // from try @ 00e0f84c with catch @ 00e0f9b4 */
                    /* catch() { ... } // from try @ 00e0f858 with catch @ 00e0f9b8 */
    *(undefined4 *)(this + 0x360) = 0x3f800000;
    ProgressTimer::setPercentage(*(ProgressTimer **)(this + 0x370),0.0);
                    /* catch() { ... } // from try @ 00e0f838 with catch @ 00e0f9c8 */
    (**(code **)(**(long **)(this + 0x368) + 0x180))(0);
                    /* try { // try from 00e0f9e0 to 00f0fa1f has its CatchHandler @ 00e0f9e0
                       catch() { ... } // from try @ 00e0f9e0 with catch @ 00e0f9e0
                       catch() { ... } // from try @ 00e0fa2c with catch @ 00e0f9e0 */
    (**(code **)(*(long *)this + 0x688))(this,0x100);
  }
  return bVar1;
}

