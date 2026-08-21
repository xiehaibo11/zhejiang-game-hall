
/* cocos2d::DeccelAmplitude::initWithAction(cocos2d::Action*, float) */

bool __thiscall
cocos2d::DeccelAmplitude::initWithAction(DeccelAmplitude *this,Action *param_1,float param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = ActionInterval::initWithDuration((ActionInterval *)this,param_2);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(undefined4 *)(this + 0x58) = 0x3f800000;
    *(Action **)(this + 0x60) = param_1;
                    /* try { // try from 00ed531c to 00fd533f has its CatchHandler @ 00ed56fc */
    Ref::retain((Ref *)param_1);
  }
  return bVar1;
}

