
/* cocos2d::Quaternion::getNormalized() const */

void cocos2d::Quaternion::getNormalized(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_x0;
  float *in_x8;
  float fVar5;
  
  fVar1 = *in_x0;
  fVar2 = in_x0[1];
  *in_x8 = fVar1;
  in_x8[1] = fVar2;
  fVar3 = in_x0[2];
  fVar4 = in_x0[3];
  fVar5 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  in_x8[2] = fVar3;
  in_x8[3] = fVar4;
  if ((fVar5 != 1.0) && (fVar5 = SQRT(fVar5), 1e-06 <= fVar5)) {
    fVar5 = 1.0 / fVar5;
    *in_x8 = fVar5 * fVar1;
    in_x8[1] = fVar5 * fVar2;
    in_x8[2] = fVar5 * fVar3;
    in_x8[3] = fVar5 * fVar4;
  }
  return;
}

