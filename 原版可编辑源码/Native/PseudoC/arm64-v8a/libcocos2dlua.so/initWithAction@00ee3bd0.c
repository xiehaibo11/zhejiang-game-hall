
/* cocos2d::ReverseTime::initWithAction(cocos2d::FiniteTimeAction*) */

undefined8 __thiscall
cocos2d::ReverseTime::initWithAction(ReverseTime *this,FiniteTimeAction *param_1)

{
  Ref *this_00;
  undefined8 uVar1;
  float fVar2;
  
  if ((param_1 == (FiniteTimeAction *)0x0) ||
     (this_00 = *(Ref **)(this + 0x58), this_00 == (Ref *)param_1)) {
                    /* try { // try from 00ee3c44 to 00fe3c4b has its CatchHandler @ 00ee3ca8 */
    log("ReverseTime::initWithAction error: action is null or action equal to _other");
    uVar1 = 0;
  }
  else {
    fVar2 = 1e-06;
                    /* try { // try from 00ee3c08 to 00fe3c43 has its CatchHandler @ 00ee3c08
                       catch() { ... } // from try @ 00ee3c08 with catch @ 00ee3c08
                       catch() { ... } // from try @ 00ee3c58 with catch @ 00ee3c08 */
    if (1e-06 < ABS(*(float *)(param_1 + 0x4c))) {
      fVar2 = *(float *)(param_1 + 0x4c);
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(float *)(this + 0x4c) = fVar2;
    *(undefined2 *)(this + 0x54) = 1;
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(FiniteTimeAction **)(this + 0x58) = param_1;
    Ref::retain((Ref *)param_1);
    uVar1 = 1;
  }
                    /* try { // try from 00ee3c50 to 00fe3c57 has its CatchHandler @ 00ee3c68 */
  return uVar1;
}

