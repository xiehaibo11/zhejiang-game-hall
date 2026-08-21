
/* cocos2d::OrbitCamera::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::OrbitCamera::startWithTarget(OrbitCamera *this,Node *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  ActionInterval::startWithTarget((ActionInterval *)this,param_1);
  fVar5 = *(float *)(this + 100) - *(float *)(this + 0x58);
  fVar6 = *(float *)(this + 0x68) - *(float *)(this + 0x5c);
  fVar1 = *(float *)(this + 0x6c) - *(float *)(this + 0x60);
  fVar2 = fVar5 * fVar5 + fVar6 * fVar6;
  fVar3 = SQRT(fVar2);
  fVar4 = SQRT(fVar2 + fVar1 * fVar1);
  fVar2 = 1.1920929e-07;
  if (fVar3 != 0.0) {
    fVar2 = fVar3;
  }
  fVar3 = 1.1920929e-07;
  if (fVar4 != 0.0) {
    fVar3 = fVar4;
  }
  fVar1 = acosf(fVar1 / fVar3);
  fVar4 = asinf(fVar6 / fVar2);
  fVar2 = 3.1415927 - fVar4;
  if (0.0 <= fVar5) {
    fVar2 = fVar4;
  }
  if (NAN(*(float *)(this + 0x7c))) {
    *(float *)(this + 0x7c) = fVar3 * 8388608.0;
  }
  fVar3 = *(float *)(this + 0x84);
  if (NAN(fVar3)) {
    fVar3 = fVar1 * 57.29578;
    *(float *)(this + 0x84) = fVar3;
  }
  fVar1 = *(float *)(this + 0x8c);
  if (NAN(fVar1)) {
    fVar1 = fVar2 * 57.29578;
    *(float *)(this + 0x8c) = fVar1;
  }
  *(float *)(this + 0x94) = fVar3 * 0.017453292;
  *(float *)(this + 0x9c) = fVar1 * 0.017453292;
  return;
}

