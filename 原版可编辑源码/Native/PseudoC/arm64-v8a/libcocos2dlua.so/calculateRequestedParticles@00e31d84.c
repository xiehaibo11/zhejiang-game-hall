
/* cocos2d::PUEmitter::calculateRequestedParticles(float) */

uint __thiscall cocos2d::PUEmitter::calculateRequestedParticles(PUEmitter *this,float param_1)

{
  PUEmitter PVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  
  if (this[0x34] == (PUEmitter)0x0) {
    if ((this[0x1a4] != (PUEmitter)0x0) &&
       (fVar3 = *(float *)(this + 0x1a0), *(float *)(this + 0x1a0) = fVar3 - param_1,
       fVar3 - param_1 <= 0.0)) {
      this[0x34] = (PUEmitter)0x1;
      if (this[0x1e6] == (PUEmitter)0x0) {
                    /* catch() { ... } // from try @ 00e31f94 with catch @ 00e31ed8 */
        *(undefined2 *)(this + 0x1e5) = 0x101;
        PVar1 = this[0x19c];
      }
      else {
        PVar1 = this[0x19c];
      }
      if (PVar1 == (PUEmitter)0x0) {
        fVar3 = *(float *)(this + 0x198);
      }
      else {
        fVar3 = (float)PUDynamicAttributeHelper::calculate
                                 ((PUDynamicAttributeHelper *)(this + 0x194),
                                  *(PUDynamicAttribute **)(this + 0x138),
                                  *(float *)(*(long *)(this + 0x28) + 0x440),0.0);
        *(float *)(this + 0x198) = fVar3;
      }
      if (0.0 < fVar3) {
        this[0x34] = (PUEmitter)0x1;
        *(undefined4 *)(this + 0x1a0) = 0;
      }
      return 0;
    }
    return 0;
  }
  if (*(long **)(this + 0x100) == (long *)0x0) {
                    /* try { // try from 00e31dfc to 00f31dff has its CatchHandler @ 00e31e68 */
    uVar2 = 0;
    PVar1 = this[0x19c];
  }
  else {
                    /* try { // try from 00e31dac to 00f31dcb has its CatchHandler @ 00e31d28 */
                    /* catch() { ... } // from try @ 00e31d70 with catch @ 00e31db8 */
    fVar3 = (float)(**(code **)(**(long **)(this + 0x100) + 0x10))
                             (*(undefined4 *)(*(long *)(this + 0x28) + 0x440));
    if (this[0x1a6] == (PUEmitter)0x0) {
      fVar3 = fVar3 * param_1 + *(float *)(this + 400);
      uVar2 = (uint)fVar3;
      *(float *)(this + 400) = fVar3;
    }
    else if (this[0x1a8] == (PUEmitter)0x0) {
      uVar2 = (uint)fVar3;
      this[0x1a8] = (PUEmitter)0x1;
    }
    else {
      uVar2 = 0;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e31dfc with catch @ 00e31e68
                        */
    *(float *)(this + 400) = *(float *)(this + 400) - (float)uVar2;
    PVar1 = this[0x19c];
  }
  if (PVar1 != (PUEmitter)0x0) {
    fVar3 = *(float *)(this + 0x198);
    *(float *)(this + 0x198) = fVar3 - param_1;
    if (0.0 < fVar3 - param_1) {
      return uVar2;
    }
    this[0x34] = (PUEmitter)0x0;
    if (this[0x1e6] == (PUEmitter)0x0) {
      *(undefined2 *)(this + 0x1e5) = 0x100;
    }
    if (this[0x1a4] != (PUEmitter)0x0) {
      uVar4 = PUDynamicAttributeHelper::calculate
                        ((PUDynamicAttributeHelper *)(this + 0x194),
                         *(PUDynamicAttribute **)(this + 0x140),
                         *(float *)(*(long *)(this + 0x28) + 0x440),0.0);
      *(undefined4 *)(this + 0x1a0) = uVar4;
      return uVar2;
    }
    return uVar2;
  }
  return uVar2;
}

