
/* void cocos2d::experimental::volumeMulti<4, 7, short, float, float, int, short>(short*, unsigned
   long, float const*, int*, float const*, short) */

void cocos2d::experimental::volumeMulti<4,7,short,float,float,int,short>
               (short *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  float *pfVar1;
  short sVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined2 uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  fVar14 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      fVar15 = (float)*(undefined8 *)param_3 * fVar14 + 384.0;
      fVar17 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar14 + 384.0;
      uVar18 = (undefined2)((uint)fVar17 >> 0x10);
      fVar16 = (float)*(undefined8 *)(param_3 + 2) * fVar14 + 384.0;
      fVar19 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar14 + 384.0;
      auVar21._0_4_ = -(uint)(0x43c07fff < (int)fVar15);
      auVar21._4_4_ = -(uint)(0x43c07fff < (int)fVar17);
      auVar21._8_4_ = -(uint)(0x43c07fff < (int)fVar16);
      auVar21._12_4_ = -(uint)(0x43c07fff < (int)fVar19);
      auVar20._0_4_ = -(uint)((int)fVar15 < 0x43bf8000);
      auVar20._4_4_ = -(uint)((int)fVar17 < 0x43bf8000);
      auVar20._8_4_ = -(uint)((int)fVar16 < 0x43bf8000);
      auVar20._12_4_ = -(uint)((int)fVar19 < 0x43bf8000);
      auVar3._8_4_ = 0x7fff;
      auVar3._0_8_ = 0x7fff00007fff;
      auVar3._12_4_ = 0x7fff;
      auVar5._4_2_ = SUB42(fVar17,0);
      auVar5._0_4_ = fVar15;
      auVar5._6_2_ = uVar18;
      auVar5._8_4_ = fVar16;
      auVar5._12_4_ = fVar19;
      auVar22._4_2_ = SUB42(fVar17,0);
      auVar22._0_4_ = fVar15;
      auVar22._6_2_ = uVar18;
      auVar22._8_4_ = fVar16;
      auVar22._12_4_ = fVar19;
      auVar22 = auVar22 ^ (auVar5 ^ auVar3) & auVar21;
      auVar4._8_4_ = 0x8000;
      auVar4._0_8_ = 0x800000008000;
      auVar4._12_4_ = 0x8000;
      auVar22 = auVar22 ^ (auVar22 ^ auVar4) & auVar20;
      *(ulong *)param_1 =
           CONCAT26(auVar22._12_2_,CONCAT24(auVar22._8_2_,CONCAT22(auVar22._4_2_,auVar22._0_2_)));
      fVar17 = param_3[4] * fVar14 + 384.0;
      fVar15 = 4.59163e-41;
      if ((int)fVar17 < 0x43c08000) {
        fVar15 = fVar17;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar15,0);
      }
      param_1[4] = sVar2;
      fVar17 = param_3[5] * fVar14 + 384.0;
      fVar15 = 4.59163e-41;
      if ((int)fVar17 < 0x43c08000) {
        fVar15 = fVar17;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar15,0);
      }
      param_1[5] = sVar2;
      pfVar1 = param_3 + 6;
      param_3 = param_3 + 7;
      fVar17 = *pfVar1 * fVar14 + 384.0;
      fVar15 = 4.59163e-41;
      if ((int)fVar17 < 0x43c08000) {
        fVar15 = fVar17;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar15,0);
      }
      param_2 = param_2 - 1;
      param_1[6] = sVar2;
      param_1 = param_1 + 7;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar15 = *param_3;
      if (fVar15 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar15) {
        iVar7 = 0x7fffffff;
      }
      else {
        fVar17 = 0.5;
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          fVar17 = -0.5;
        }
        iVar7 = (int)(fVar17 + fVar15 * 1.3421773e+08);
      }
      fVar16 = fVar15 * fVar14 + 384.0;
      fVar17 = 4.59163e-41;
      fVar15 = fVar17;
      if ((int)fVar16 < 0x43c08000) {
        fVar15 = fVar16;
      }
      sVar6 = -0x8000;
      sVar2 = sVar6;
      if (0x43bf7fff < (int)fVar16) {
        sVar2 = SUB42(fVar15,0);
      }
      *param_1 = sVar2;
      fVar15 = param_3[1];
      if (fVar15 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar15) {
        iVar8 = 0x7fffffff;
      }
      else {
        fVar16 = 0.5;
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          fVar16 = -0.5;
        }
        iVar8 = (int)(fVar16 + fVar15 * 1.3421773e+08);
      }
      fVar16 = fVar15 * fVar14 + 384.0;
      fVar15 = fVar17;
      if ((int)fVar16 < 0x43c08000) {
        fVar15 = fVar16;
      }
      sVar2 = sVar6;
      if (0x43bf7fff < (int)fVar16) {
        sVar2 = SUB42(fVar15,0);
      }
      param_1[1] = sVar2;
      fVar15 = param_3[2];
      if (fVar15 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar15) {
        iVar9 = 0x7fffffff;
      }
      else {
        fVar16 = 0.5;
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          fVar16 = -0.5;
        }
        iVar9 = (int)(fVar16 + fVar15 * 1.3421773e+08);
      }
      fVar16 = fVar15 * fVar14 + 384.0;
      fVar15 = fVar17;
      if ((int)fVar16 < 0x43c08000) {
        fVar15 = fVar16;
      }
      sVar2 = sVar6;
      if (0x43bf7fff < (int)fVar16) {
        sVar2 = SUB42(fVar15,0);
      }
      param_1[2] = sVar2;
      fVar15 = param_3[3];
      if (fVar15 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar15) {
        iVar10 = 0x7fffffff;
      }
      else {
        fVar16 = 0.5;
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          fVar16 = -0.5;
        }
        iVar10 = (int)(fVar16 + fVar15 * 1.3421773e+08);
      }
      fVar15 = fVar15 * fVar14 + 384.0;
      if ((int)fVar15 < 0x43c08000) {
        fVar17 = fVar15;
      }
      if (0x43bf7fff < (int)fVar15) {
        sVar6 = SUB42(fVar17,0);
      }
      param_1[3] = sVar6;
      fVar15 = param_3[4];
      if (fVar15 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar15) {
        iVar11 = 0x7fffffff;
      }
      else {
        fVar17 = 0.5;
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          fVar17 = -0.5;
        }
        iVar11 = (int)(fVar17 + fVar15 * 1.3421773e+08);
      }
      fVar17 = fVar15 * fVar14 + 384.0;
      fVar15 = 4.59163e-41;
      if ((int)fVar17 < 0x43c08000) {
        fVar15 = fVar17;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar15,0);
      }
      param_1[4] = sVar2;
      fVar15 = param_3[5];
      if (fVar15 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar15) {
        iVar12 = 0x7fffffff;
      }
      else {
        fVar17 = 0.5;
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          fVar17 = -0.5;
        }
        iVar12 = (int)(fVar17 + fVar15 * 1.3421773e+08);
      }
      fVar17 = fVar15 * fVar14 + 384.0;
      fVar15 = 4.59163e-41;
      if ((int)fVar17 < 0x43c08000) {
        fVar15 = fVar17;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar15,0);
      }
      param_1[5] = sVar2;
      fVar15 = param_3[6];
      if (fVar15 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar15) {
        iVar13 = 0x7fffffff;
      }
      else {
        fVar17 = 0.5;
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          fVar17 = -0.5;
        }
        iVar13 = (int)(fVar17 + fVar15 * 1.3421773e+08);
      }
      fVar17 = fVar15 * fVar14 + 384.0;
      fVar15 = 4.59163e-41;
      if ((int)fVar17 < 0x43c08000) {
        fVar15 = fVar17;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar15,0);
      }
      param_1[6] = sVar2;
      param_3 = param_3 + 7;
      param_2 = param_2 - 1;
      *param_4 = *param_4 +
                 ((iVar13 + iVar12 + iVar11 + iVar10 + iVar9 + iVar8 + iVar7) / 7 >> 0xc) *
                 (int)param_6;
      param_1 = param_1 + 7;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

