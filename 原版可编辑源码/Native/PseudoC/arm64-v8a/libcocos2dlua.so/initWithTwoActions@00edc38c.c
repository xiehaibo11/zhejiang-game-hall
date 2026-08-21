
/* cocos2d::Sequence::initWithTwoActions(cocos2d::FiniteTimeAction*, cocos2d::FiniteTimeAction*) */

undefined4 __thiscall
cocos2d::Sequence::initWithTwoActions
          (Sequence *this,FiniteTimeAction *param_1,FiniteTimeAction *param_2)

{
  undefined4 uVar1;
  float fVar2;
  
                    /* catch() { ... } // from try @ 00edc1d4 with catch @ 00edc390
                       try { // try from 00edc390 to 00fdc447 has its CatchHandler @ 00edc134 */
                    /* catch() { ... } // from try @ 00edc250 with catch @ 00edc394 */
                    /* catch() { ... } // from try @ 00edc1b0 with catch @ 00edc398 */
  if ((param_1 == (FiniteTimeAction *)0x0) || (param_2 == (FiniteTimeAction *)0x0)) {
    log("Sequence::initWithTwoActions error: action is nullptr!!");
    uVar1 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 00edc1a0 with catch @ 00edc3ac */
                    /* catch() { ... } // from try @ 00edc20c with catch @ 00edc3b0 */
    uVar1 = 1;
    fVar2 = 1e-06;
    if (1e-06 < ABS(*(float *)(param_1 + 0x4c) + *(float *)(param_2 + 0x4c))) {
      fVar2 = *(float *)(param_1 + 0x4c) + *(float *)(param_2 + 0x4c);
    }
                    /* catch() { ... } // from try @ 00edc1e4 with catch @ 00edc3d0
                       catch() { ... } // from try @ 00edc384 with catch @ 00edc3d0 */
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined2 *)(this + 0x54) = 1;
    *(float *)(this + 0x4c) = fVar2;
    *(FiniteTimeAction **)(this + 0x58) = param_1;
    Ref::retain((Ref *)param_1);
                    /* catch() { ... } // from try @ 00edc178 with catch @ 00edc3f0 */
    *(FiniteTimeAction **)(this + 0x60) = param_2;
    Ref::retain((Ref *)param_2);
  }
  return uVar1;
}

