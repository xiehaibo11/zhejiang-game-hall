
/* cocos2d::PUEmitter::setEnabled(bool) */

void __thiscall cocos2d::PUEmitter::setEnabled(PUEmitter *this,bool param_1)

{
  float fVar1;
  undefined4 uVar2;
  
                    /* try { // try from 00e31f1c to 00f31f23 has its CatchHandler @ 00e31fe4 */
  this[0x34] = (PUEmitter)param_1;
  if (this[0x1e6] == (PUEmitter)0x0) {
    this[0x1e5] = (PUEmitter)param_1;
    this[0x1e6] = (PUEmitter)0x1;
  }
  if (param_1) {
    if (this[0x19c] == (PUEmitter)0x0) {
      fVar1 = *(float *)(this + 0x198);
    }
    else {
                    /* try { // try from 00e31f58 to 00f31f93 has its CatchHandler @ 00e31fec */
      fVar1 = (float)PUDynamicAttributeHelper::calculate
                               ((PUDynamicAttributeHelper *)(this + 0x194),
                                *(PUDynamicAttribute **)(this + 0x138),
                                *(float *)(*(long *)(this + 0x28) + 0x440),0.0);
      *(float *)(this + 0x198) = fVar1;
    }
    if (0.0 < fVar1) {
      this[0x34] = (PUEmitter)0x1;
      *(undefined4 *)(this + 0x1a0) = 0;
    }
  }
  else if (this[0x1a4] != (PUEmitter)0x0) {
                    /* try { // try from 00e31f94 to 00f3200f has its CatchHandler @ 00e31ed8 */
    uVar2 = PUDynamicAttributeHelper::calculate
                      ((PUDynamicAttributeHelper *)(this + 0x194),
                       *(PUDynamicAttribute **)(this + 0x140),
                       *(float *)(*(long *)(this + 0x28) + 0x440),0.0);
    *(undefined4 *)(this + 0x1a0) = uVar2;
  }
  return;
}

