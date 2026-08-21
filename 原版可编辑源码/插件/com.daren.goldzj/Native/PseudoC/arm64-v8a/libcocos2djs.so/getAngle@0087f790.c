
/* cocos2d::Vec2::getAngle(cocos2d::Vec2 const&) const */

float __thiscall cocos2d::Vec2::getAngle(Vec2 *this,Vec2 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)this;
  fVar1 = *(float *)(this + 4);
  fVar5 = fVar3 * fVar3 + fVar1 * fVar1;
  if ((fVar5 != 1.0) && (fVar5 = SQRT(fVar5), 2e-37 <= fVar5)) {
    fVar5 = 1.0 / fVar5;
    fVar3 = fVar5 * fVar3;
    fVar1 = fVar5 * fVar1;
  }
  fVar2 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 4);
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  if ((fVar5 != 1.0) && (fVar5 = SQRT(fVar5), 2e-37 <= fVar5)) {
    fVar5 = 1.0 / fVar5;
    fVar2 = fVar5 * fVar2;
    fVar4 = fVar5 * fVar4;
  }
  fVar1 = atan2f(fVar4 * fVar3 - fVar2 * fVar1,fVar4 * fVar1 + fVar2 * fVar3);
  fVar3 = 0.0;
  if (1.1920929e-07 <= ABS(fVar1)) {
    fVar3 = fVar1;
  }
  return fVar3;
}

