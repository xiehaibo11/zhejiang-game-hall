
/* cocos2d::Physics3D6DofConstraint::setAngularUpperLimit(cocos2d::Vec3 const&) */

void cocos2d::Physics3D6DofConstraint::setAngularUpperLimit(Vec3 *param_1)

{
  Vec3 *in_x1;
  float fVar1;
  long lVar2;
  float fVar3;
  float in_s1;
  float in_s2;
  
  fVar3 = (float)convertVec3TobtVector3(in_x1);
  lVar2 = *(long *)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 0101a7b0 with catch @ 0101a770 */
  fVar3 = fmodf(fVar3,6.2831855);
  if (-3.1415927 <= fVar3) {
                    /* try { // try from 0101a7a8 to 0111a7af has its CatchHandler @ 0101a820 */
    if (3.1415927 < fVar3) {
                    /* try { // try from 0101a7b0 to 0111a83b has its CatchHandler @ 0101a770 */
      fVar1 = -6.2831855;
      goto LAB_0101a7b4;
    }
  }
  else {
    fVar1 = 6.2831855;
LAB_0101a7b4:
    fVar3 = fVar3 + fVar1;
  }
  *(float *)(lVar2 + 0x380) = fVar3;
  fVar3 = fmodf(in_s1,6.2831855);
  if (-3.1415927 <= fVar3) {
    if (3.1415927 < fVar3) {
      fVar1 = -6.2831855;
      goto LAB_0101a810;
    }
  }
  else {
    fVar1 = 6.2831855;
LAB_0101a810:
    fVar3 = fVar3 + fVar1;
  }
                    /* catch() { ... } // from try @ 0101a7a8 with catch @ 0101a820 */
  *(float *)(lVar2 + 0x3c0) = fVar3;
  fVar3 = fmodf(in_s2,6.2831855);
  if (-3.1415927 <= fVar3) {
    if (fVar3 <= 3.1415927) goto LAB_0101a874;
    fVar1 = -6.2831855;
  }
  else {
    fVar1 = 6.2831855;
  }
  fVar3 = fVar3 + fVar1;
LAB_0101a874:
  *(float *)(lVar2 + 0x400) = fVar3;
  return;
}

