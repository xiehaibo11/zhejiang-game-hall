
/* cocos2d::OrbitCamera::sphericalRadius(float*, float*, float*) */

void __thiscall
cocos2d::OrbitCamera::sphericalRadius
          (OrbitCamera *this,float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
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
  *param_2 = fVar1;
  fVar1 = asinf(fVar6 / fVar2);
  fVar2 = 3.1415927 - fVar1;
  if (0.0 <= fVar5) {
    fVar2 = fVar1;
  }
  *param_3 = fVar2;
  *param_1 = fVar3 * 8388608.0;
  return;
}

