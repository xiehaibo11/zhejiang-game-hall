
/* cocos2d::PUEmitter::notifyStart() */

void __thiscall cocos2d::PUEmitter::notifyStart(PUEmitter *this)

{
  float fVar1;
  undefined4 uVar2;
  
                    /* catch() { ... } // from try @ 00e31f1c with catch @ 00e31fe4 */
                    /* catch() { ... } // from try @ 00e31f58 with catch @ 00e31fec */
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  this[0x1a6] = this[0x1a7];
  this[0x1a8] = this[0x1a9];
  this[0x34] = this[0x1e5];
  if (this[0x1e6] == (PUEmitter)0x0) {
    this[0x1e6] = (PUEmitter)0x1;
  }
  if (this[0x1e5] == (PUEmitter)0x0) {
    if (this[0x1a4] != (PUEmitter)0x0) {
      uVar2 = PUDynamicAttributeHelper::calculate
                        ((PUDynamicAttributeHelper *)(this + 0x194),
                         *(PUDynamicAttribute **)(this + 0x140),
                         *(float *)(*(long *)(this + 0x28) + 0x440),0.0);
      *(undefined4 *)(this + 0x1a0) = uVar2;
    }
  }
  else if (this[0x19c] != (PUEmitter)0x0) {
    fVar1 = (float)PUDynamicAttributeHelper::calculate
                             ((PUDynamicAttributeHelper *)(this + 0x194),
                              *(PUDynamicAttribute **)(this + 0x138),
                              *(float *)(*(long *)(this + 0x28) + 0x440),0.0);
    *(float *)(this + 0x198) = fVar1;
    if (0.0 < fVar1) {
      this[0x34] = (PUEmitter)0x1;
      *(undefined4 *)(this + 0x1a0) = 0;
    }
  }
  return;
}

