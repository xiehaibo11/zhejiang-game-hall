
/* cocos2d::Twirl::initWithDuration(float, cocos2d::Size const&, cocos2d::Vec2 const&, unsigned int,
   float) */

bool __thiscall
cocos2d::Twirl::initWithDuration
          (Twirl *this,float param_1,Size *param_2,Vec2 *param_3,uint param_4,float param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
                    /* try { // try from 00ed7f94 to 00fd7fbf has its CatchHandler @ 00ed86c4 */
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    uVar3 = *(undefined8 *)param_3;
    *(uint *)(this + 0x70) = param_4;
    *(float *)(this + 0x74) = param_5;
    *(undefined4 *)(this + 0x78) = 0x3f800000;
    *(undefined8 *)(this + 0x68) = uVar3;
  }
  return bVar1;
}

