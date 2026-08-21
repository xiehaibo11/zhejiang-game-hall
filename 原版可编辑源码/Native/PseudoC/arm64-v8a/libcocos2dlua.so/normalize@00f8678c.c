
/* cocos2d::Vec2::normalize() */

void __thiscall cocos2d::Vec2::normalize(Vec2 *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  fVar3 = fVar1 * fVar1 + fVar2 * fVar2;
  if ((fVar3 != 1.0) && (fVar3 = SQRT(fVar3), 2e-37 <= fVar3)) {
    fVar3 = 1.0 / fVar3;
    *(float *)this = fVar1 * fVar3;
    *(float *)(this + 4) = fVar2 * fVar3;
  }
  return;
}

