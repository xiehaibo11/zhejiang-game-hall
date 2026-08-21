
/* cocos2d::AccelDeccelAmplitude::update(float) */

void __thiscall cocos2d::AccelDeccelAmplitude::update(AccelDeccelAmplitude *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1 + param_1;
                    /* catch() { ... } // from try @ 00ed4cc8 with catch @ 00ed4e0c */
                    /* catch() { ... } // from try @ 00ed4cbc with catch @ 00ed4e14 */
                    /* catch() { ... } // from try @ 00ed4cd0 with catch @ 00ed4e24 */
  fVar2 = 1.0 - (fVar1 + -1.0);
  if (fVar1 <= 1.0) {
    fVar2 = fVar1;
  }
  fVar2 = powf(fVar2,*(float *)(this + 0x58));
  ActionInterval::setAmplitudeRate(fVar2);
  return;
}

