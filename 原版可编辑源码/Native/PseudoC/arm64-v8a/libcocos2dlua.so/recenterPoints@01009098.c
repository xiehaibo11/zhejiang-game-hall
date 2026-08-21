
/* cocos2d::PhysicsShape::recenterPoints(cocos2d::Vec2*, int, cocos2d::Vec2 const&) */

void cocos2d::PhysicsShape::recenterPoints(Vec2 *param_1,int param_2,Vec2 *param_3)

{
  float fVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  undefined8 uVar13;
  float in_s1;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar10 = (ulong)(uint)param_2;
  uVar11 = (ulong)param_2;
                    /* try { // try from 010090b4 to 011090c3 has its CatchHandler @ 0100914c */
  uVar3 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
  if (uVar11 >> 0x3d != 0) {
    uVar3 = 0xffffffffffffffff;
  }
                    /* try { // try from 010090c4 to 01109167 has its CatchHandler @ 01009054 */
  pvVar2 = operator_new__(uVar3);
  fVar12 = (float)cpCentroidForPoly(param_2,pvVar2);
  if (param_2 < 1) goto LAB_010091d4;
  if ((uint)param_2 < 8) {
    uVar4 = 0;
LAB_01009144:
                    /* catch() { ... } // from try @ 010090b4 with catch @ 0100914c */
    lVar5 = uVar10 - uVar4;
    puVar6 = (undefined8 *)((long)pvVar2 + uVar4 * 8);
    do {
      lVar5 = lVar5 + -1;
      *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) - in_s1,(float)*puVar6 - fVar12);
      puVar6 = puVar6 + 1;
                    /* catch() { ... } // from try @ 010091c0 with catch @ 01009168 */
    } while (lVar5 != 0);
  }
  else {
    uVar4 = uVar10 & 0xfffffff8;
    pfVar7 = (float *)((long)pvVar2 + 0x20);
    uVar3 = uVar4;
    do {
      uVar3 = uVar3 - 8;
      pfVar7[-8] = pfVar7[-8] - fVar12;
      pfVar7[-7] = pfVar7[-7] - in_s1;
      pfVar7[-6] = pfVar7[-6] - fVar12;
      pfVar7[-5] = pfVar7[-5] - in_s1;
      pfVar7[-4] = pfVar7[-4] - fVar12;
      pfVar7[-3] = pfVar7[-3] - in_s1;
      pfVar7[-2] = pfVar7[-2] - fVar12;
      pfVar7[-1] = pfVar7[-1] - in_s1;
      *pfVar7 = *pfVar7 - fVar12;
      pfVar7[1] = pfVar7[1] - in_s1;
      pfVar7[2] = pfVar7[2] - fVar12;
      pfVar7[3] = pfVar7[3] - in_s1;
      pfVar7[4] = pfVar7[4] - fVar12;
      pfVar7[5] = pfVar7[5] - in_s1;
      pfVar7[6] = pfVar7[6] - fVar12;
      pfVar7[7] = pfVar7[7] - in_s1;
      pfVar7 = pfVar7 + 0x10;
    } while (uVar3 != 0);
    if (uVar4 != uVar10) goto LAB_01009144;
  }
  if (0 < param_2) {
    if ((uint)param_2 < 8) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar10 & 0xfffffff8;
      puVar6 = (undefined8 *)((long)pvVar2 + 0x20);
      puVar8 = (undefined8 *)(param_1 + 0x20);
      uVar3 = uVar4;
      do {
        uVar13 = puVar6[-4];
        uVar15 = puVar6[-1];
        uVar14 = puVar6[-2];
        uVar17 = puVar6[1];
        uVar16 = *puVar6;
        uVar19 = puVar6[3];
        uVar18 = puVar6[2];
        uVar3 = uVar3 - 8;
        puVar8[-3] = puVar6[-3];
        puVar8[-4] = uVar13;
        puVar8[-1] = uVar15;
        puVar8[-2] = uVar14;
        puVar8[1] = uVar17;
        *puVar8 = uVar16;
        puVar8[3] = uVar19;
        puVar8[2] = uVar18;
        puVar6 = puVar6 + 8;
        puVar8 = puVar8 + 8;
      } while (uVar3 != 0);
                    /* try { // try from 010091b0 to 011091bf has its CatchHandler @ 01009218 */
      if (uVar4 == uVar10) goto LAB_010091d4;
    }
    lVar5 = uVar10 - uVar4;
                    /* try { // try from 010091c0 to 01109233 has its CatchHandler @ 01009168 */
    puVar6 = (undefined8 *)(param_1 + uVar4 * 8);
    puVar8 = (undefined8 *)((long)pvVar2 + uVar4 * 8);
    do {
      lVar5 = lVar5 + -1;
      *puVar6 = *puVar8;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar5 != 0);
  }
LAB_010091d4:
  operator_delete__(pvVar2);
  if (((*(float *)param_3 != 0.0) || (*(float *)(param_3 + 4) != 0.0)) && (0 < param_2)) {
                    /* catch() { ... } // from try @ 010091b0 with catch @ 01009218 */
    *(ulong *)param_1 =
         CONCAT44(*(float *)(param_3 + 4) + (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                  *(float *)param_3 + (float)*(undefined8 *)param_1);
    if (1 < param_2) {
      uVar3 = uVar11 - 1;
                    /* catch() { ... } // from try @ 0100928c with catch @ 01009234 */
      if (uVar3 < 4) {
        uVar10 = 1;
      }
      else {
                    /* try { // try from 0100927c to 0110928b has its CatchHandler @ 01009350 */
        uVar10 = 1;
        if ((param_3 + 1 <= param_1 + 8 || (float *)((long)(param_1 + uVar11 * 8) + -4) <= param_3)
           && (param_3 + 5 <= param_1 + 0xc || param_1 + uVar11 * 8 <= param_3 + 4)) {
                    /* try { // try from 0100928c to 0110936b has its CatchHandler @ 01009234 */
          uVar9 = uVar3 & 0xfffffffffffffffc;
          uVar10 = uVar9 | 1;
          pfVar7 = (float *)(param_1 + 8);
          uVar4 = uVar9;
          do {
            fVar12 = *(float *)param_3;
            uVar4 = uVar4 - 4;
            fVar1 = *(float *)(param_3 + 4);
            *pfVar7 = fVar12 + *pfVar7;
            pfVar7[1] = fVar1 + pfVar7[1];
            pfVar7[2] = fVar12 + pfVar7[2];
            pfVar7[3] = fVar1 + pfVar7[3];
            pfVar7[4] = fVar12 + pfVar7[4];
            pfVar7[5] = fVar1 + pfVar7[5];
            pfVar7[6] = fVar12 + pfVar7[6];
            pfVar7[7] = fVar1 + pfVar7[7];
            pfVar7 = pfVar7 + 8;
          } while (uVar4 != 0);
          if (uVar3 == uVar9) {
            return;
          }
        }
      }
      do {
        lVar5 = uVar10 * 8;
        uVar10 = uVar10 + 1;
        *(ulong *)(param_1 + lVar5) =
             CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_1 + lVar5) >> 0x20),
                      (float)*(undefined8 *)param_3 + (float)*(undefined8 *)(param_1 + lVar5));
      } while ((long)uVar10 < (long)uVar11);
    }
  }
  return;
}

