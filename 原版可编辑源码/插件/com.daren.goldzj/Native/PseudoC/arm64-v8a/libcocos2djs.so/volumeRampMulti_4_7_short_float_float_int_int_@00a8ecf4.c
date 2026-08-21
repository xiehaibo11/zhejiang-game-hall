
/* void cocos2d::volumeRampMulti<4, 7, short, float, float, int, int>(short*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<4,7,short,float,float,int,int>
               (short *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  float *pfVar1;
  short sVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  undefined2 uVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  fVar17 = *param_5;
  if (param_4 == (int *)0x0) {
                    /* try { // try from 00a8f030 to 00b8f067 has its CatchHandler @ 00a8f030
                       catch() { ... } // from try @ 00a8f030 with catch @ 00a8f030
                       catch() { ... } // from try @ 00a8f070 with catch @ 00a8f030 */
    fVar8 = 4.59163e-41;
    do {
      fVar6 = (float)*(undefined8 *)param_3 * fVar17 + 384.0;
      fVar7 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar17 + 384.0;
      uVar18 = (undefined2)((uint)fVar7 >> 0x10);
      fVar19 = (float)*(undefined8 *)(param_3 + 2) * fVar17 + 384.0;
      fVar20 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar17 + 384.0;
      auVar22._0_4_ = -(uint)(0x43c07fff < (int)fVar6);
      auVar22._4_4_ = -(uint)(0x43c07fff < (int)fVar7);
      auVar22._8_4_ = -(uint)(0x43c07fff < (int)fVar19);
      auVar22._12_4_ = -(uint)(0x43c07fff < (int)fVar20);
                    /* try { // try from 00a8f068 to 00b8f06f has its CatchHandler @ 00a8f080 */
      auVar21._0_4_ = -(uint)((int)fVar6 < 0x43bf8000);
      auVar21._4_4_ = -(uint)((int)fVar7 < 0x43bf8000);
      auVar21._8_4_ = -(uint)((int)fVar19 < 0x43bf8000);
      auVar21._12_4_ = -(uint)((int)fVar20 < 0x43bf8000);
      auVar3._8_4_ = 0x7fff;
      auVar3._0_8_ = 0x7fff00007fff;
      auVar3._12_4_ = 0x7fff;
      auVar5._4_2_ = SUB42(fVar7,0);
      auVar5._0_4_ = fVar6;
      auVar5._6_2_ = uVar18;
      auVar5._8_4_ = fVar19;
      auVar5._12_4_ = fVar20;
      auVar23._4_2_ = SUB42(fVar7,0);
      auVar23._0_4_ = fVar6;
      auVar23._6_2_ = uVar18;
      auVar23._8_4_ = fVar19;
      auVar23._12_4_ = fVar20;
      auVar23 = auVar23 ^ (auVar5 ^ auVar3) & auVar22;
      auVar4._8_4_ = 0x8000;
      auVar4._0_8_ = 0x800000008000;
      auVar4._12_4_ = 0x8000;
                    /* try { // try from 00a8f070 to 00b8f093 has its CatchHandler @ 00a8f030 */
      auVar23 = auVar23 ^ (auVar23 ^ auVar4) & auVar21;
      *(ulong *)param_1 =
           CONCAT26(auVar23._12_2_,CONCAT24(auVar23._8_2_,CONCAT22(auVar23._4_2_,auVar23._0_2_)));
                    /* catch() { ... } // from try @ 00a8f068 with catch @ 00a8f080 */
      fVar7 = param_3[4] * fVar17 + 384.0;
      fVar6 = fVar8;
      if ((int)fVar7 < 0x43c08000) {
        fVar6 = fVar7;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar7) {
        sVar2 = SUB42(fVar6,0);
      }
      param_1[4] = sVar2;
      fVar7 = param_3[5] * fVar17 + 384.0;
      fVar6 = fVar8;
      if ((int)fVar7 < 0x43c08000) {
        fVar6 = fVar7;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar7) {
        sVar2 = SUB42(fVar6,0);
      }
      param_1[5] = sVar2;
      pfVar1 = param_3 + 6;
      param_3 = param_3 + 7;
      fVar7 = *pfVar1 * fVar17 + 384.0;
      fVar6 = fVar8;
      if ((int)fVar7 < 0x43c08000) {
        fVar6 = fVar7;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar7) {
        sVar2 = SUB42(fVar6,0);
      }
      param_1[6] = sVar2;
                    /* try { // try from 00a8f0f0 to 00b8f137 has its CatchHandler @ 00a8f0f0
                       catch() { ... } // from try @ 00a8f0f0 with catch @ 00a8f0f0
                       catch() { ... } // from try @ 00a8f1a0 with catch @ 00a8f0f0 */
      param_2 = param_2 - 1;
      param_1 = param_1 + 7;
      fVar17 = *param_6 + fVar17;
      *param_5 = fVar17;
    } while (param_2 != 0);
  }
  else {
    fVar8 = 4.59163e-41;
    do {
      fVar6 = *param_3;
      if (fVar6 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar6) {
        iVar10 = 0x7fffffff;
      }
      else {
        fVar7 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar7 = -0.5;
        }
        iVar10 = (int)(fVar7 + fVar6 * 1.3421773e+08);
      }
      fVar7 = fVar6 * fVar17 + 384.0;
      fVar6 = fVar8;
      if ((int)fVar7 < 0x43c08000) {
        fVar6 = fVar7;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar7) {
        sVar2 = SUB42(fVar6,0);
      }
      *param_1 = sVar2;
      fVar6 = param_3[1];
      if (fVar6 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar6) {
        iVar11 = 0x7fffffff;
      }
      else {
        fVar7 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar7 = -0.5;
        }
        iVar11 = (int)(fVar7 + fVar6 * 1.3421773e+08);
      }
      fVar7 = fVar6 * fVar17 + 384.0;
      fVar6 = fVar8;
      if ((int)fVar7 < 0x43c08000) {
        fVar6 = fVar7;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar7) {
        sVar2 = SUB42(fVar6,0);
      }
      param_1[1] = sVar2;
      fVar6 = param_3[2];
      if (fVar6 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar6) {
        iVar12 = 0x7fffffff;
      }
      else {
        fVar7 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar7 = -0.5;
        }
        iVar12 = (int)(fVar7 + fVar6 * 1.3421773e+08);
      }
                    /* catch() { ... } // from try @ 00a8eadc with catch @ 00a8ee38 */
      fVar7 = fVar6 * fVar17 + 384.0;
      fVar6 = fVar8;
      if ((int)fVar7 < 0x43c08000) {
        fVar6 = fVar7;
      }
      sVar9 = -0x8000;
      sVar2 = sVar9;
      if (0x43bf7fff < (int)fVar7) {
        sVar2 = SUB42(fVar6,0);
      }
      param_1[2] = sVar2;
                    /* try { // try from 00a8ee54 to 00b8ee7b has its CatchHandler @ 00a8ee54
                       catch() { ... } // from try @ 00a8ee54 with catch @ 00a8ee54
                       catch() { ... } // from try @ 00a8eee8 with catch @ 00a8ee54 */
      fVar6 = param_3[3];
      if (fVar6 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar6) {
        iVar13 = 0x7fffffff;
      }
      else {
        fVar7 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar7 = -0.5;
        }
                    /* try { // try from 00a8ee7c to 00b8ee8f has its CatchHandler @ 00a8ef2c */
        iVar13 = (int)(fVar7 + fVar6 * 1.3421773e+08);
      }
                    /* try { // try from 00a8ee94 to 00b8eea3 has its CatchHandler @ 00a8ef28 */
      fVar7 = fVar6 * fVar17 + 384.0;
                    /* try { // try from 00a8eea4 to 00b8eec7 has its CatchHandler @ 00a8ef18 */
      fVar6 = fVar8;
      if ((int)fVar7 < 0x43c08000) {
        fVar6 = fVar7;
      }
      sVar2 = sVar9;
      if (0x43bf7fff < (int)fVar7) {
        sVar2 = SUB42(fVar6,0);
      }
      param_1[3] = sVar2;
      fVar6 = param_3[4];
      if (fVar6 <= -16.0) {
                    /* try { // try from 00a8eee8 to 00b8ef43 has its CatchHandler @ 00a8ee54 */
        iVar14 = -0x80000000;
      }
      else if (16.0 <= fVar6) {
        iVar14 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8eed0 to 00b8eee7 has its CatchHandler @ 00a8ef30 */
        fVar7 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar7 = -0.5;
        }
        iVar14 = (int)(fVar7 + fVar6 * 1.3421773e+08);
      }
      fVar7 = fVar6 * fVar17 + 384.0;
      fVar6 = fVar8;
      if ((int)fVar7 < 0x43c08000) {
        fVar6 = fVar7;
      }
      sVar2 = sVar9;
      if (0x43bf7fff < (int)fVar7) {
        sVar2 = SUB42(fVar6,0);
      }
      param_1[4] = sVar2;
      fVar6 = param_3[5];
                    /* catch() { ... } // from try @ 00a8eea4 with catch @ 00a8ef18 */
      if (fVar6 <= -16.0) {
        iVar15 = -0x80000000;
      }
      else {
                    /* catch() { ... } // from try @ 00a8ee94 with catch @ 00a8ef28 */
        if (16.0 <= fVar6) {
          iVar15 = 0x7fffffff;
        }
        else {
                    /* catch() { ... } // from try @ 00a8ee7c with catch @ 00a8ef2c */
                    /* catch() { ... } // from try @ 00a8eed0 with catch @ 00a8ef30 */
          fVar7 = 0.5;
          if (fVar6 * 1.3421773e+08 <= 0.0) {
            fVar7 = -0.5;
          }
          iVar15 = (int)(fVar7 + fVar6 * 1.3421773e+08);
        }
      }
      fVar7 = fVar6 * fVar17 + 384.0;
      fVar6 = fVar8;
      if ((int)fVar7 < 0x43c08000) {
        fVar6 = fVar7;
      }
      if (0x43bf7fff < (int)fVar7) {
        sVar9 = SUB42(fVar6,0);
      }
      param_1[5] = sVar9;
      fVar6 = param_3[6];
      if (fVar6 <= -16.0) {
        iVar16 = -0x80000000;
      }
      else if (16.0 <= fVar6) {
                    /* try { // try from 00a8efb0 to 00b8efe3 has its CatchHandler @ 00a8efb0
                       catch() { ... } // from try @ 00a8efb0 with catch @ 00a8efb0
                       catch() { ... } // from try @ 00a8eff8 with catch @ 00a8efb0 */
        iVar16 = 0x7fffffff;
      }
      else {
        fVar7 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar7 = -0.5;
        }
        iVar16 = (int)(fVar7 + fVar6 * 1.3421773e+08);
      }
      fVar7 = fVar6 * fVar17 + 384.0;
      fVar6 = fVar8;
      if ((int)fVar7 < 0x43c08000) {
        fVar6 = fVar7;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar7) {
        sVar2 = SUB42(fVar6,0);
      }
      param_1[6] = sVar2;
                    /* try { // try from 00a8efe4 to 00b8efeb has its CatchHandler @ 00a8f01c */
      fVar17 = *param_6 + fVar17;
      *param_5 = fVar17;
                    /* try { // try from 00a8eff4 to 00b8eff7 has its CatchHandler @ 00a8f00c */
                    /* try { // try from 00a8eff8 to 00b8f02f has its CatchHandler @ 00a8efb0 */
                    /* catch() { ... } // from try @ 00a8eff4 with catch @ 00a8f00c */
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) *
                 ((iVar16 + iVar15 + iVar14 + iVar13 + iVar12 + iVar11 + iVar10) / 7 >> 0xc);
      param_3 = param_3 + 7;
      param_2 = param_2 - 1;
                    /* catch() { ... } // from try @ 00a8efe4 with catch @ 00a8f01c */
      param_1 = param_1 + 7;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

