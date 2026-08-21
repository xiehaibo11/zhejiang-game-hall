
/* cocos2d::CardinalSplineTo::initWithDuration(float, cocos2d::PointArray*, float) */

undefined8 __thiscall
cocos2d::CardinalSplineTo::initWithDuration
          (CardinalSplineTo *this,float param_1,PointArray *param_2,float param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,param_1);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (param_2 != (PointArray *)0x0) {
      Ref::retain((Ref *)param_2);
    }
    if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x58));
    }
    uVar2 = 1;
    *(PointArray **)(this + 0x58) = param_2;
    *(float *)(this + 100) = param_3;
  }
  return uVar2;
}

