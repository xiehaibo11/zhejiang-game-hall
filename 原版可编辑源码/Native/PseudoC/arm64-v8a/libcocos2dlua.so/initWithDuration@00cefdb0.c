
/* cocosbuilder::CCBRotateYTo::initWithDuration(float, float) */

bool __thiscall
cocosbuilder::CCBRotateYTo::initWithDuration(CCBRotateYTo *this,float param_1,float param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = cocos2d::ActionInterval::initWithDuration((ActionInterval *)this,param_1);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(float *)(this + 0x5c) = param_2;
  }
  return bVar1;
}

