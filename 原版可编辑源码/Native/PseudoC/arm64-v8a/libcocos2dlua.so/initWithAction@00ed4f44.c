
/* cocos2d::AccelAmplitude::initWithAction(cocos2d::Action*, float) */

bool __thiscall
cocos2d::AccelAmplitude::initWithAction(AccelAmplitude *this,Action *param_1,float param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = ActionInterval::initWithDuration((ActionInterval *)this,param_2);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(undefined4 *)(this + 0x58) = 0x3f800000;
    *(Action **)(this + 0x60) = param_1;
    Ref::retain((Ref *)param_1);
  }
  return bVar1;
}

