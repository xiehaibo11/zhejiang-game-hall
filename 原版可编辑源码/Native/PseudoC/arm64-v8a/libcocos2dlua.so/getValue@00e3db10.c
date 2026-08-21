
/* cocos2d::PUDynamicAttributeOscillate::getValue(float) */

float __thiscall
cocos2d::PUDynamicAttributeOscillate::getValue(PUDynamicAttributeOscillate *this,float param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(this + 0x2c) == 1) {
    dVar1 = (double)(*(float *)(this + 0x30) * param_1) * 3.141592653589793;
    dVar1 = sin(dVar1 + dVar1 + (double)*(float *)(this + 0x34));
    fVar3 = (float)dVar1;
    fVar2 = 1.0;
    if (fVar3 <= 0.0) {
      fVar2 = -1.0;
    }
    if (1e-05 <= ABS(fVar3)) {
      fVar2 = fVar3;
    }
    fVar2 = *(float *)(this + 0x38) + *(float *)(this + 0x3c) * fVar2;
  }
  else {
    fVar2 = 0.0;
    if (*(int *)(this + 0x2c) == 0) {
      fVar2 = *(float *)(this + 0x38);
      fVar3 = *(float *)(this + 0x3c);
      dVar1 = (double)(*(float *)(this + 0x30) * param_1) * 3.141592653589793;
      dVar1 = sin(dVar1 + dVar1 + (double)*(float *)(this + 0x34));
      fVar2 = (float)(dVar1 * (double)fVar3 + (double)fVar2);
    }
  }
  return fVar2;
}

