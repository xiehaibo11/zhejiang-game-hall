
/* cocos2d::Physics3D6DofConstraint::setAngularLowerLimit(cocos2d::Vec3 const&) */

void cocos2d::Physics3D6DofConstraint::setAngularLowerLimit(Vec3 *param_1)

{
  Vec3 *in_x1;
  float fVar1;
  long lVar2;
  float fVar3;
  float in_s1;
  float in_s2;
  
  fVar3 = (float)convertVec3TobtVector3(in_x1);
  lVar2 = *(long *)(param_1 + 0x28);
  fVar3 = fmodf(fVar3,6.2831855);
                    /* try { // try from 0101a5e0 to 0111a627 has its CatchHandler @ 0101a5e0
                       catch() { ... } // from try @ 0101a5e0 with catch @ 0101a5e0
                       catch() { ... } // from try @ 0101a630 with catch @ 0101a5e0 */
  if (-3.1415927 <= fVar3) {
    if (3.1415927 < fVar3) {
      fVar1 = -6.2831855;
      goto LAB_0101a60c;
    }
  }
  else {
    fVar1 = 6.2831855;
LAB_0101a60c:
    fVar3 = fVar3 + fVar1;
  }
  *(float *)(lVar2 + 0x37c) = fVar3;
                    /* try { // try from 0101a628 to 0111a62f has its CatchHandler @ 0101a664 */
  fVar3 = fmodf(in_s1,6.2831855);
                    /* try { // try from 0101a630 to 0111a677 has its CatchHandler @ 0101a5e0 */
  if (-3.1415927 <= fVar3) {
    if (3.1415927 < fVar3) {
                    /* catch() { ... } // from try @ 0101a628 with catch @ 0101a664 */
      fVar1 = -6.2831855;
      goto LAB_0101a668;
    }
  }
  else {
    fVar1 = 6.2831855;
LAB_0101a668:
    fVar3 = fVar3 + fVar1;
  }
                    /* try { // try from 0101a678 to 0111a6b7 has its CatchHandler @ 0101a678
                       catch() { ... } // from try @ 0101a678 with catch @ 0101a678
                       catch() { ... } // from try @ 0101a6c0 with catch @ 0101a678 */
  *(float *)(lVar2 + 0x3bc) = fVar3;
  fVar3 = fmodf(in_s2,6.2831855);
  if (-3.1415927 <= fVar3) {
                    /* try { // try from 0101a6b8 to 0111a6bf has its CatchHandler @ 0101a6f4 */
    if (fVar3 <= 3.1415927) goto LAB_0101a6cc;
                    /* try { // try from 0101a6c0 to 0111a707 has its CatchHandler @ 0101a678 */
    fVar1 = -6.2831855;
  }
  else {
    fVar1 = 6.2831855;
  }
  fVar3 = fVar3 + fVar1;
LAB_0101a6cc:
  *(float *)(lVar2 + 0x3fc) = fVar3;
  return;
}

