
/* cocos2d::Vec2::getNormalized() const */

float __thiscall cocos2d::Vec2::getNormalized(Vec2 *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)this;
  fVar2 = fVar1 * fVar1 + *(float *)(this + 4) * *(float *)(this + 4);
  if ((fVar2 != 1.0) && (fVar2 = SQRT(fVar2), 2e-37 <= fVar2)) {
    fVar1 = (1.0 / fVar2) * fVar1;
  }
  return fVar1;
}

