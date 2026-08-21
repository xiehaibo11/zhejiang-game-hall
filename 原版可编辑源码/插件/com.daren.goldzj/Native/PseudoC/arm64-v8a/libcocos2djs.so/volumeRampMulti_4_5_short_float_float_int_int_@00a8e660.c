
/* void cocos2d::volumeRampMulti<4, 5, short, float, float, int, int>(short*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<4,5,short,float,float,int,int>
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
  float fVar14;
  undefined2 uVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  fVar14 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      fVar7 = (float)*(undefined8 *)param_3 * fVar14 + 384.0;
      fVar6 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar14 + 384.0;
      uVar15 = (undefined2)((uint)fVar6 >> 0x10);
      fVar16 = (float)*(undefined8 *)(param_3 + 2) * fVar14 + 384.0;
      fVar17 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar14 + 384.0;
      auVar19._0_4_ = -(uint)(0x43c07fff < (int)fVar7);
      auVar19._4_4_ = -(uint)(0x43c07fff < (int)fVar6);
      auVar19._8_4_ = -(uint)(0x43c07fff < (int)fVar16);
      auVar19._12_4_ = -(uint)(0x43c07fff < (int)fVar17);
      auVar18._0_4_ = -(uint)((int)fVar7 < 0x43bf8000);
      auVar18._4_4_ = -(uint)((int)fVar6 < 0x43bf8000);
      auVar18._8_4_ = -(uint)((int)fVar16 < 0x43bf8000);
      auVar18._12_4_ = -(uint)((int)fVar17 < 0x43bf8000);
      auVar3._8_4_ = 0x7fff;
      auVar3._0_8_ = 0x7fff00007fff;
      auVar3._12_4_ = 0x7fff;
      auVar5._4_2_ = SUB42(fVar6,0);
      auVar5._0_4_ = fVar7;
      auVar5._6_2_ = uVar15;
      auVar5._8_4_ = fVar16;
      auVar5._12_4_ = fVar17;
      auVar20._4_2_ = SUB42(fVar6,0);
      auVar20._0_4_ = fVar7;
      auVar20._6_2_ = uVar15;
      auVar20._8_4_ = fVar16;
      auVar20._12_4_ = fVar17;
      auVar20 = auVar20 ^ (auVar5 ^ auVar3) & auVar19;
      auVar4._8_4_ = 0x8000;
      auVar4._0_8_ = 0x800000008000;
      auVar4._12_4_ = 0x8000;
      auVar20 = auVar20 ^ (auVar20 ^ auVar4) & auVar18;
      *(ulong *)param_1 =
           CONCAT26(auVar20._12_2_,CONCAT24(auVar20._8_2_,CONCAT22(auVar20._4_2_,auVar20._0_2_)));
      pfVar1 = param_3 + 4;
      param_3 = param_3 + 5;
      fVar6 = *pfVar1 * fVar14 + 384.0;
      fVar7 = 4.59163e-41;
      if ((int)fVar6 < 0x43c08000) {
        fVar7 = fVar6;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar6) {
        sVar2 = SUB42(fVar7,0);
      }
      param_1[4] = sVar2;
      param_2 = param_2 - 1;
      param_1 = param_1 + 5;
      fVar14 = *param_6 + fVar14;
      *param_5 = fVar14;
    } while (param_2 != 0);
  }
  else {
    fVar7 = 4.59163e-41;
    do {
      fVar6 = *param_3;
      if (fVar6 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar6) {
        iVar9 = 0x7fffffff;
      }
      else {
        fVar16 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar16 = -0.5;
        }
        iVar9 = (int)(fVar16 + fVar6 * 1.3421773e+08);
      }
      fVar16 = fVar6 * fVar14 + 384.0;
      fVar6 = fVar7;
      if ((int)fVar16 < 0x43c08000) {
        fVar6 = fVar16;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar16) {
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
        fVar16 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar16 = -0.5;
        }
        iVar10 = (int)(fVar16 + fVar6 * 1.3421773e+08);
      }
      fVar16 = fVar6 * fVar14 + 384.0;
      fVar6 = fVar7;
      if ((int)fVar16 < 0x43c08000) {
        fVar6 = fVar16;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar16) {
        sVar2 = SUB42(fVar6,0);
      }
      param_1[1] = sVar2;
                    /* try { // try from 00a8e760 to 00b8e7a3 has its CatchHandler @ 00a8e7c0 */
      fVar6 = param_3[2];
      if (fVar6 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar6) {
        iVar11 = 0x7fffffff;
      }
      else {
        fVar16 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar16 = -0.5;
        }
        iVar11 = (int)(fVar16 + fVar6 * 1.3421773e+08);
      }
                    /* try { // try from 00a8e7a4 to 00b8e847 has its CatchHandler @ 00a8e4f0 */
      fVar16 = fVar6 * fVar14 + 384.0;
      fVar6 = fVar7;
      if ((int)fVar16 < 0x43c08000) {
        fVar6 = fVar16;
      }
      sVar8 = -0x8000;
      sVar2 = sVar8;
      if (0x43bf7fff < (int)fVar16) {
        sVar2 = SUB42(fVar6,0);
      }
                    /* catch() { ... } // from try @ 00a8e5a8 with catch @ 00a8e7bc */
      param_1[2] = sVar2;
                    /* catch() { ... } // from try @ 00a8e5b4 with catch @ 00a8e7c0
                       catch() { ... } // from try @ 00a8e760 with catch @ 00a8e7c0 */
      fVar6 = param_3[3];
      if (fVar6 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar6) {
        iVar12 = 0x7fffffff;
      }
      else {
                    /* catch() { ... } // from try @ 00a8e574 with catch @ 00a8e7d8 */
                    /* catch() { ... } // from try @ 00a8e568 with catch @ 00a8e7dc */
                    /* catch() { ... } // from try @ 00a8e548 with catch @ 00a8e7e0 */
        fVar16 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar16 = -0.5;
        }
        iVar12 = (int)(fVar16 + fVar6 * 1.3421773e+08);
                    /* catch() { ... } // from try @ 00a8e580 with catch @ 00a8e7f0
                       catch() { ... } // from try @ 00a8e608 with catch @ 00a8e7f0 */
      }
      fVar16 = fVar6 * fVar14 + 384.0;
      fVar6 = fVar7;
      if ((int)fVar16 < 0x43c08000) {
        fVar6 = fVar16;
      }
      sVar2 = sVar8;
      if (0x43bf7fff < (int)fVar16) {
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
        fVar16 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar16 = -0.5;
        }
                    /* try { // try from 00a8e848 to 00b8e89b has its CatchHandler @ 00a8e848
                       catch() { ... } // from try @ 00a8e848 with catch @ 00a8e848
                       catch() { ... } // from try @ 00a8e9ac with catch @ 00a8e848 */
        iVar13 = (int)(fVar16 + fVar6 * 1.3421773e+08);
      }
      fVar16 = fVar6 * fVar14 + 384.0;
      fVar6 = fVar7;
      if ((int)fVar16 < 0x43c08000) {
        fVar6 = fVar16;
      }
      if (0x43bf7fff < (int)fVar16) {
        sVar8 = SUB42(fVar6,0);
      }
      param_1[4] = sVar8;
      fVar14 = *param_6 + fVar14;
      *param_5 = fVar14;
                    /* try { // try from 00a8e89c to 00b8e8b3 has its CatchHandler @ 00a8ea28 */
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) * ((iVar13 + iVar12 + iVar11 + iVar10 + iVar9) / 5 >> 0xc);
                    /* try { // try from 00a8e8bc to 00b8e8c7 has its CatchHandler @ 00a8ea24 */
      param_3 = param_3 + 5;
      param_2 = param_2 - 1;
      param_1 = param_1 + 5;
                    /* try { // try from 00a8e8c8 to 00b8e8d3 has its CatchHandler @ 00a8ea20 */
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

