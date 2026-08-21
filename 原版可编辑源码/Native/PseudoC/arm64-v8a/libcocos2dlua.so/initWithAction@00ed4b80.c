
/* cocos2d::AccelDeccelAmplitude::initWithAction(cocos2d::Action*, float) */

bool __thiscall
cocos2d::AccelDeccelAmplitude::initWithAction
          (AccelDeccelAmplitude *this,Action *param_1,float param_2)

{
  bool bVar1;
  ulong uVar2;
  
                    /* try { // try from 00ed4b84 to 00fd4c9f has its CatchHandler @ 00ed4b84
                       catch() { ... } // from try @ 00ed4b84 with catch @ 00ed4b84
                       catch() { ... } // from try @ 00ed4d04 with catch @ 00ed4b84 */
  uVar2 = ActionInterval::initWithDuration((ActionInterval *)this,param_2);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(undefined4 *)(this + 0x58) = 0x3f800000;
    *(Action **)(this + 0x60) = param_1;
    Ref::retain((Ref *)param_1);
  }
  return bVar1;
}

