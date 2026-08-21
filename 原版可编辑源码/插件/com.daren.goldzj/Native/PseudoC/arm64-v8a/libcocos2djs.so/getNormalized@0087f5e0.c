
/* cocos2d::Vec2::getNormalized() const */

void cocos2d::Vec2::getNormalized(void)

{
  float fVar1;
  float fVar2;
  float *in_x0;
  float *in_x8;
  float fVar3;
  
  fVar1 = *in_x0;
  fVar2 = in_x0[1];
  fVar3 = fVar2 * fVar2 + fVar1 * fVar1;
  *in_x8 = fVar1;
  in_x8[1] = fVar2;
  if ((fVar3 != 1.0) && (fVar3 = SQRT(fVar3), 2e-37 <= fVar3)) {
    fVar3 = 1.0 / fVar3;
    *in_x8 = fVar3 * fVar1;
    in_x8[1] = fVar3 * fVar2;
  }
  return;
}

