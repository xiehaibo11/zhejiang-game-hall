
/* cocos2d::Blink::initWithDuration(float, int) */

undefined4 __thiscall cocos2d::Blink::initWithDuration(Blink *this,float param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  if (param_2 < 0) {
    log("Blink::initWithDuration error:blinks should be >= 0");
    uVar1 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 00ee252c with catch @ 00ee25c8 */
    uVar1 = 1;
    fVar2 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar2 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
                    /* catch() { ... } // from try @ 00ee261c with catch @ 00ee25e4 */
    *(undefined2 *)(this + 0x54) = 1;
    *(float *)(this + 0x4c) = fVar2;
    *(int *)(this + 0x58) = param_2;
  }
  return uVar1;
}

