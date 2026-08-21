
/* void cocos2d::volumeRampMulti<4, 6, short, float, float, int, int>(short*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<4,6,short,float,float,int,int>
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
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  undefined2 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  fVar15 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      fVar7 = (float)*(undefined8 *)param_3 * fVar15 + 384.0;
      fVar6 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar15 + 384.0;
      uVar16 = (undefined2)((uint)fVar6 >> 0x10);
      fVar17 = (float)*(undefined8 *)(param_3 + 2) * fVar15 + 384.0;
      fVar18 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar15 + 384.0;
      auVar20._0_4_ = -(uint)(0x43c07fff < (int)fVar7);
      auVar20._4_4_ = -(uint)(0x43c07fff < (int)fVar6);
      auVar20._8_4_ = -(uint)(0x43c07fff < (int)fVar17);
      auVar20._12_4_ = -(uint)(0x43c07fff < (int)fVar18);
      auVar19._0_4_ = -(uint)((int)fVar7 < 0x43bf8000);
      auVar19._4_4_ = -(uint)((int)fVar6 < 0x43bf8000);
      auVar19._8_4_ = -(uint)((int)fVar17 < 0x43bf8000);
      auVar19._12_4_ = -(uint)((int)fVar18 < 0x43bf8000);
      auVar3._8_4_ = 0x7fff;
      auVar3._0_8_ = 0x7fff00007fff;
      auVar3._12_4_ = 0x7fff;
      auVar5._4_2_ = SUB42(fVar6,0);
      auVar5._0_4_ = fVar7;
      auVar5._6_2_ = uVar16;
      auVar5._8_4_ = fVar17;
      auVar5._12_4_ = fVar18;
      auVar21._4_2_ = SUB42(fVar6,0);
      auVar21._0_4_ = fVar7;
      auVar21._6_2_ = uVar16;
      auVar21._8_4_ = fVar17;
      auVar21._12_4_ = fVar18;
      auVar21 = auVar21 ^ (auVar5 ^ auVar3) & auVar20;
      auVar4._8_4_ = 0x8000;
      auVar4._0_8_ = 0x800000008000;
      auVar4._12_4_ = 0x8000;
      auVar21 = auVar21 ^ (auVar21 ^ auVar4) & auVar19;
      *(ulong *)param_1 =
           CONCAT26(auVar21._12_2_,CONCAT24(auVar21._8_2_,CONCAT22(auVar21._4_2_,auVar21._0_2_)));
      fVar6 = param_3[4] * fVar15 + 384.0;
      fVar7 = 4.59163e-41;
      if ((int)fVar6 < 0x43c08000) {
        fVar7 = fVar6;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar6) {
        sVar2 = SUB42(fVar7,0);
      }
      param_1[4] = sVar2;
      pfVar1 = param_3 + 5;
      param_3 = param_3 + 6;
      fVar6 = *pfVar1 * fVar15 + 384.0;
      fVar7 = 4.59163e-41;
      if ((int)fVar6 < 0x43c08000) {
        fVar7 = fVar6;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar6) {
        sVar2 = SUB42(fVar7,0);
      }
      param_1[5] = sVar2;
      param_2 = param_2 - 1;
      param_1 = param_1 + 6;
      fVar15 = *param_6 + fVar15;
      *param_5 = fVar15;
    } while (param_2 != 0);
  }
  else {
    fVar7 = 4.59163e-41;
                    /* try { // try from 00a8e9ac to 00b8ea8f has its CatchHandler @ 00a8e848 */
    do {
      fVar6 = *param_3;
      if (fVar6 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar6) {
        iVar9 = 0x7fffffff;
      }
      else {
        fVar17 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar17 = -0.5;
        }
        iVar9 = (int)(fVar17 + fVar6 * 1.3421773e+08);
      }
      fVar17 = fVar6 * fVar15 + 384.0;
      fVar6 = fVar7;
      if ((int)fVar17 < 0x43c08000) {
        fVar6 = fVar17;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar6,0);
      }
      *param_1 = sVar2;
      fVar6 = param_3[1];
      if (fVar6 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar6) {
        iVar10 = 0x7fffffff;
      }
      else {
                    /* catch() { ... } // from try @ 00a8e8c8 with catch @ 00a8ea20 */
                    /* catch() { ... } // from try @ 00a8e8bc with catch @ 00a8ea24 */
                    /* catch() { ... } // from try @ 00a8e89c with catch @ 00a8ea28 */
        fVar17 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar17 = -0.5;
        }
        iVar10 = (int)(fVar17 + fVar6 * 1.3421773e+08);
                    /* catch() { ... } // from try @ 00a8e8d4 with catch @ 00a8ea38 */
      }
      fVar17 = fVar6 * fVar15 + 384.0;
      fVar6 = fVar7;
      if ((int)fVar17 < 0x43c08000) {
        fVar6 = fVar17;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar6,0);
      }
      param_1[1] = sVar2;
      fVar6 = param_3[2];
      if (fVar6 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar6) {
        iVar11 = 0x7fffffff;
      }
      else {
        fVar17 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar17 = -0.5;
        }
                    /* catch() { ... } // from try @ 00a8eaec with catch @ 00a8ea90 */
        iVar11 = (int)(fVar17 + fVar6 * 1.3421773e+08);
      }
      fVar17 = fVar6 * fVar15 + 384.0;
      fVar6 = fVar7;
      if ((int)fVar17 < 0x43c08000) {
        fVar6 = fVar17;
      }
      sVar8 = -0x8000;
      sVar2 = sVar8;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar6,0);
      }
      param_1[2] = sVar2;
      fVar6 = param_3[3];
      if (fVar6 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else {
                    /* try { // try from 00a8eadc to 00b8eaeb has its CatchHandler @ 00a8ee38 */
        if (16.0 <= fVar6) {
          iVar12 = 0x7fffffff;
        }
        else {
                    /* try { // try from 00a8eaec to 00b8ee53 has its CatchHandler @ 00a8ea90 */
          fVar17 = 0.5;
          if (fVar6 * 1.3421773e+08 <= 0.0) {
            fVar17 = -0.5;
          }
          iVar12 = (int)(fVar17 + fVar6 * 1.3421773e+08);
        }
      }
      fVar17 = fVar6 * fVar15 + 384.0;
      fVar6 = fVar7;
      if ((int)fVar17 < 0x43c08000) {
        fVar6 = fVar17;
      }
      sVar2 = sVar8;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar6,0);
      }
      param_1[3] = sVar2;
      fVar6 = param_3[4];
      if (fVar6 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar6) {
        iVar13 = 0x7fffffff;
      }
      else {
        fVar17 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar17 = -0.5;
        }
        iVar13 = (int)(fVar17 + fVar6 * 1.3421773e+08);
      }
      fVar17 = fVar6 * fVar15 + 384.0;
      fVar6 = fVar7;
      if ((int)fVar17 < 0x43c08000) {
        fVar6 = fVar17;
      }
      sVar2 = sVar8;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar6,0);
      }
      param_1[4] = sVar2;
      fVar6 = param_3[5];
      if (fVar6 <= -16.0) {
        iVar14 = -0x80000000;
      }
      else if (16.0 <= fVar6) {
        iVar14 = 0x7fffffff;
      }
      else {
        fVar17 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar17 = -0.5;
        }
        iVar14 = (int)(fVar17 + fVar6 * 1.3421773e+08);
      }
      fVar17 = fVar6 * fVar15 + 384.0;
      fVar6 = fVar7;
      if ((int)fVar17 < 0x43c08000) {
        fVar6 = fVar17;
      }
      if (0x43bf7fff < (int)fVar17) {
        sVar8 = SUB42(fVar6,0);
      }
      param_1[5] = sVar8;
      fVar15 = *param_6 + fVar15;
      *param_5 = fVar15;
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) *
                 ((iVar14 + iVar13 + iVar12 + iVar11 + iVar10 + iVar9) / 6 >> 0xc);
      param_3 = param_3 + 6;
      param_2 = param_2 - 1;
      param_1 = param_1 + 6;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

