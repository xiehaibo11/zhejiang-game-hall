
/* cocos2d::Quaternion::squad(cocos2d::Quaternion const&, cocos2d::Quaternion const&,
   cocos2d::Quaternion const&, cocos2d::Quaternion const&, float, cocos2d::Quaternion*) */

void cocos2d::Quaternion::squad
               (Quaternion *param_1,Quaternion *param_2,Quaternion *param_3,Quaternion *param_4,
               float param_5,Quaternion *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_28;
  
  fVar5 = *(float *)param_1;
  local_28 = *(float *)(param_1 + 4);
  fVar6 = *(float *)param_2;
  fVar8 = *(float *)(param_2 + 4);
  fVar12 = *(float *)(param_1 + 8);
  fVar13 = *(float *)(param_1 + 0xc);
  fVar9 = *(float *)(param_2 + 8);
  fVar10 = *(float *)(param_2 + 0xc);
  fVar7 = fVar5 * fVar6 + local_28 * fVar8 + fVar12 * fVar9 + fVar13 * fVar10;
                    /* try { // try from 0099c674 to 00a9c757 has its CatchHandler @ 0099c508 */
  if (ABS(fVar7) < 1.0) {
    fVar1 = acosf(fVar7);
    fVar7 = SQRT(1.0 - fVar7 * fVar7);
    if (1e-05 < ABS(fVar7)) {
      fVar2 = sinf((1.0 - param_5) * fVar1);
      fVar2 = fVar2 / fVar7;
      fVar1 = sinf(fVar1 * param_5);
                    /* catch() { ... } // from try @ 0099c588 with catch @ 0099c6e8 */
                    /* catch() { ... } // from try @ 0099c57c with catch @ 0099c6ec */
      fVar1 = fVar1 / fVar7;
                    /* catch() { ... } // from try @ 0099c55c with catch @ 0099c6f0 */
                    /* catch() { ... } // from try @ 0099c594 with catch @ 0099c700 */
      fVar5 = fVar5 * fVar2 + fVar6 * fVar1;
      local_28 = local_28 * fVar2 + fVar8 * fVar1;
      fVar12 = fVar12 * fVar2 + fVar9 * fVar1;
      fVar13 = fVar13 * fVar2 + fVar10 * fVar1;
    }
  }
  fVar14 = *(float *)param_3;
  fVar6 = *(float *)(param_3 + 4);
  fVar2 = *(float *)param_4;
  fVar11 = *(float *)(param_4 + 4);
  fVar7 = *(float *)(param_3 + 8);
  fVar1 = *(float *)(param_3 + 0xc);
  fVar10 = *(float *)(param_4 + 8);
  fVar8 = *(float *)(param_4 + 0xc);
                    /* try { // try from 0099c758 to 00a9c7ab has its CatchHandler @ 0099c758
                       catch() { ... } // from try @ 0099c758 with catch @ 0099c758
                       catch() { ... } // from try @ 0099c8c4 with catch @ 0099c758 */
  fVar9 = fVar14 * fVar2 + fVar6 * fVar11 + fVar7 * fVar10 + fVar1 * fVar8;
  if (ABS(fVar9) < 1.0) {
    fVar3 = acosf(fVar9);
    fVar9 = SQRT(1.0 - fVar9 * fVar9);
    if (1e-05 < ABS(fVar9)) {
                    /* try { // try from 0099c7ac to 00a9c7c3 has its CatchHandler @ 0099c940 */
      fVar4 = sinf((1.0 - param_5) * fVar3);
      fVar4 = fVar4 / fVar9;
      fVar3 = sinf(fVar3 * param_5);
                    /* try { // try from 0099c7cc to 00a9c7d7 has its CatchHandler @ 0099c93c */
      fVar3 = fVar3 / fVar9;
                    /* try { // try from 0099c7d8 to 00a9c7e3 has its CatchHandler @ 0099c938 */
                    /* try { // try from 0099c7e4 to 00a9c8c3 has its CatchHandler @ 0099c950 */
      fVar14 = fVar14 * fVar4 + fVar2 * fVar3;
      fVar6 = fVar6 * fVar4 + fVar11 * fVar3;
      fVar7 = fVar7 * fVar4 + fVar10 * fVar3;
      fVar1 = fVar1 * fVar4 + fVar8 * fVar3;
    }
  }
  fVar8 = fVar13 * fVar1 + fVar12 * fVar7 + local_28 * fVar6 + fVar5 * fVar14;
  if (1.0 <= ABS(fVar8)) {
    *(float *)param_6 = fVar5;
  }
  else {
    fVar9 = acosf(fVar8);
    fVar8 = SQRT(1.0 - fVar8 * fVar8);
    if (1e-05 < ABS(fVar8)) {
      fVar2 = (param_5 + param_5) * (1.0 - param_5);
      fVar10 = sinf((1.0 - fVar2) * fVar9);
      fVar10 = fVar10 / fVar8;
      fVar9 = sinf(fVar2 * fVar9);
      fVar9 = fVar9 / fVar8;
                    /* try { // try from 0099c8c4 to 00a9c9a7 has its CatchHandler @ 0099c758 */
      fVar13 = fVar13 * fVar10 + fVar1 * fVar9;
      *(float *)param_6 = fVar5 * fVar10 + fVar14 * fVar9;
      *(float *)(param_6 + 4) = local_28 * fVar10 + fVar6 * fVar9;
      *(float *)(param_6 + 8) = fVar12 * fVar10 + fVar7 * fVar9;
      goto LAB_0099c914;
    }
    *(float *)param_6 = fVar5;
  }
  *(float *)(param_6 + 4) = local_28;
  *(float *)(param_6 + 8) = fVar12;
LAB_0099c914:
  *(float *)(param_6 + 0xc) = fVar13;
                    /* catch() { ... } // from try @ 0099c7d8 with catch @ 0099c938 */
  return;
}

