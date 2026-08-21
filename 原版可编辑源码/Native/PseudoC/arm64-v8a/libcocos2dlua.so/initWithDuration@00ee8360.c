
/* cocos2d::ProgressFromTo::initWithDuration(float, float, float) */

bool __thiscall
cocos2d::ProgressFromTo::initWithDuration
          (ProgressFromTo *this,float param_1,float param_2,float param_3)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = ActionInterval::initWithDuration((ActionInterval *)this,param_1);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(float *)(this + 0x58) = param_3;
    *(float *)(this + 0x5c) = param_2;
  }
  return bVar1;
}

