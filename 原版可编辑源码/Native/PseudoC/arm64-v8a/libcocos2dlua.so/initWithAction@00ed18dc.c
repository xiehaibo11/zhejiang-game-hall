
/* cocos2d::EaseElastic::initWithAction(cocos2d::ActionInterval*, float) */

undefined8 __thiscall
cocos2d::EaseElastic::initWithAction(EaseElastic *this,ActionInterval *param_1,float param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00ed1904 to 00fd1943 has its CatchHandler @ 00ed1904
                       catch() { ... } // from try @ 00ed1904 with catch @ 00ed1904
                       catch() { ... } // from try @ 00ed1954 with catch @ 00ed1904
                       catch() { ... } // from try @ 00ed2574 with catch @ 00ed1904
                       catch() { ... } // from try @ 00ed2730 with catch @ 00ed1904 */
  if ((param_1 == (ActionInterval *)0x0) ||
     (uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,*(float *)(param_1 + 0x4c)),
     (uVar1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    *(ActionInterval **)(this + 0x58) = param_1;
    Ref::retain((Ref *)param_1);
    uVar2 = 1;
    *(float *)(this + 0x60) = param_2;
  }
  return uVar2;
}

