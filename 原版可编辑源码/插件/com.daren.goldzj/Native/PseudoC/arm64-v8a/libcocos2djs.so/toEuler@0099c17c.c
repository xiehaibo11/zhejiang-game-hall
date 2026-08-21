
/* cocos2d::Quaternion::toEuler(cocos2d::Quaternion const&, cocos2d::Vec3*, bool) */

void cocos2d::Quaternion::toEuler(Quaternion *param_1,Vec3 *param_2,bool param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 4);
  fVar6 = *(float *)(param_1 + 8);
  fVar5 = *(float *)(param_1 + 0xc);
  fVar7 = fVar2 * fVar4 + fVar6 * fVar5;
  if (fVar7 <= 0.499999) {
    if (-0.499999 <= fVar7) {
                    /* catch() { ... } // from try @ 0099c0f4 with catch @ 0099c24c */
                    /* catch() { ... } // from try @ 0099c0e8 with catch @ 0099c250 */
                    /* catch() { ... } // from try @ 0099c0c8 with catch @ 0099c254 */
                    /* catch() { ... } // from try @ 0099c100 with catch @ 0099c264 */
      fVar8 = fVar6 * fVar6 + fVar6 * fVar6;
      fVar3 = atan2f((fVar2 + fVar2) * fVar5 - (fVar4 + fVar4) * fVar6,
                     (1.0 - (fVar2 * fVar2 + fVar2 * fVar2)) - fVar8);
      fVar3 = fVar3 * 57.29578;
      fVar2 = atan2f((fVar4 + fVar4) * fVar5 - (fVar2 + fVar2) * fVar6,
                     (1.0 - (fVar4 * fVar4 + fVar4 * fVar4)) - fVar8);
      fVar2 = fVar2 * 57.29578;
      fVar4 = asinf(fVar7 + fVar7);
      fVar4 = fVar4 * 57.29578;
      if (param_3) {
                    /* try { // try from 0099c2bc to 00a9c30f has its CatchHandler @ 0099c2bc
                       catch() { ... } // from try @ 0099c2bc with catch @ 0099c2bc
                       catch() { ... } // from try @ 0099c424 with catch @ 0099c2bc */
        fVar7 = -180.0;
        fVar5 = fVar3 + 1e-06;
        fVar6 = fVar7;
        if (fVar5 == 0.0 || 0.0 > fVar5) {
          iVar1 = 0xb4;
          if (0.0 <= fVar5) {
            iVar1 = 0;
          }
          fVar6 = (float)iVar1;
        }
        fVar5 = fVar2 + 1e-06;
        if (fVar5 == 0.0 || 0.0 > fVar5) {
          iVar1 = 0xb4;
          if (0.0 <= fVar5) {
            iVar1 = 0;
          }
          fVar7 = (float)iVar1;
        }
        if (fVar4 + 1e-06 <= 0.0) {
          iVar1 = -0xb4;
          if (0.0 <= fVar4 + 1e-06) {
            iVar1 = 0;
          }
          fVar5 = (float)iVar1;
        }
        else {
                    /* try { // try from 0099c310 to 00a9c327 has its CatchHandler @ 0099c4a0 */
          fVar5 = 180.0;
        }
        fVar3 = fVar3 + fVar6;
        fVar2 = fVar2 + fVar7;
                    /* try { // try from 0099c330 to 00a9c33b has its CatchHandler @ 0099c49c */
        fVar4 = fVar5 - fVar4;
      }
      goto LAB_0099c214;
    }
    fVar5 = atan2f(fVar2,fVar5);
    fVar2 = -57.29578;
    fVar4 = -90.0;
  }
  else {
    fVar5 = atan2f(fVar2,fVar5);
    fVar2 = 57.29578;
                    /* try { // try from 0099c1d8 to 00a9c2bb has its CatchHandler @ 0099c074 */
    fVar4 = 90.0;
  }
  fVar2 = (fVar5 + fVar5) * fVar2;
  fVar3 = 0.0;
LAB_0099c214:
  *(float *)param_2 = fVar3;
  *(float *)(param_2 + 4) = fVar2;
  *(float *)(param_2 + 8) = fVar4;
  return;
}

