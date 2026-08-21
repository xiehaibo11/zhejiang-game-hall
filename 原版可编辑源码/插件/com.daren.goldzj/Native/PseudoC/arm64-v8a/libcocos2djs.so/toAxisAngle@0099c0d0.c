
/* cocos2d::Quaternion::toAxisAngle(cocos2d::Vec3*) const */

float __thiscall cocos2d::Quaternion::toAxisAngle(Quaternion *this,Vec3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float __x;
  
  fVar3 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  fVar1 = *(float *)(this + 8);
  __x = *(float *)(this + 0xc);
                    /* try { // try from 0099c0e8 to 00a9c0f3 has its CatchHandler @ 0099c250 */
                    /* try { // try from 0099c0f4 to 00a9c0ff has its CatchHandler @ 0099c24c */
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1 + __x * __x;
                    /* try { // try from 0099c100 to 00a9c1d7 has its CatchHandler @ 0099c264 */
  if ((fVar4 != 1.0) && (fVar4 = SQRT(fVar4), 1e-06 <= fVar4)) {
    fVar4 = 1.0 / fVar4;
    fVar3 = fVar3 * fVar4;
    fVar2 = fVar2 * fVar4;
    fVar1 = fVar1 * fVar4;
    __x = __x * fVar4;
  }
  *(float *)param_1 = fVar3;
  *(float *)(param_1 + 4) = fVar2;
  *(float *)(param_1 + 8) = fVar1;
  Vec3::normalize(param_1);
  fVar1 = acosf(__x);
  return fVar1 + fVar1;
}

