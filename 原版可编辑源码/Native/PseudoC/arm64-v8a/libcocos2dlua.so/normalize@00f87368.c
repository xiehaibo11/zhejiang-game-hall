
/* cocos2d::Vec3::normalize() */

void __thiscall cocos2d::Vec3::normalize(Vec3 *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 8);
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  if ((fVar4 != 1.0) && (fVar4 = SQRT(fVar4), 2e-37 <= fVar4)) {
    fVar4 = 1.0 / fVar4;
    *(float *)this = fVar1 * fVar4;
    *(float *)(this + 4) = fVar2 * fVar4;
    *(float *)(this + 8) = fVar3 * fVar4;
  }
  return;
}

