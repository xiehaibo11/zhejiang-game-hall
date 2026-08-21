
/* void cocos2d::experimental::volumeRampMulti<4, 6, short, float, float, int, int>(short*, unsigned
   long, float const*, int*, float*, float const*, int*, int) */

void cocos2d::experimental::volumeRampMulti<4,6,short,float,float,int,int>
               (short *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  undefined2 uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  fVar13 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      fVar14 = (float)*(undefined8 *)param_3 * fVar13 + 384.0;
      fVar16 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar13 + 384.0;
      uVar20 = (undefined2)((uint)fVar16 >> 0x10);
      fVar15 = (float)*(undefined8 *)(param_3 + 2) * fVar13 + 384.0;
      fVar21 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar13 + 384.0;
      auVar23._0_4_ = -(uint)(0x43c07fff < (int)fVar14);
      auVar23._4_4_ = -(uint)(0x43c07fff < (int)fVar16);
      auVar23._8_4_ = -(uint)(0x43c07fff < (int)fVar15);
      auVar23._12_4_ = -(uint)(0x43c07fff < (int)fVar21);
      auVar22._0_4_ = -(uint)((int)fVar14 < 0x43bf8000);
      auVar22._4_4_ = -(uint)((int)fVar16 < 0x43bf8000);
      auVar22._8_4_ = -(uint)((int)fVar15 < 0x43bf8000);
      auVar22._12_4_ = -(uint)((int)fVar21 < 0x43bf8000);
      auVar3._8_4_ = 0x7fff;
      auVar3._0_8_ = 0x7fff00007fff;
      auVar3._12_4_ = 0x7fff;
      auVar5._4_2_ = SUB42(fVar16,0);
      auVar5._0_4_ = fVar14;
      auVar5._6_2_ = uVar20;
      auVar5._8_4_ = fVar15;
      auVar5._12_4_ = fVar21;
      auVar24._4_2_ = SUB42(fVar16,0);
      auVar24._0_4_ = fVar14;
      auVar24._6_2_ = uVar20;
      auVar24._8_4_ = fVar15;
      auVar24._12_4_ = fVar21;
      auVar24 = auVar24 ^ (auVar5 ^ auVar3) & auVar23;
      auVar4._8_4_ = 0x8000;
      auVar4._0_8_ = 0x800000008000;
      auVar4._12_4_ = 0x8000;
      auVar24 = auVar24 ^ (auVar24 ^ auVar4) & auVar22;
      *(ulong *)param_1 =
           CONCAT26(auVar24._12_2_,CONCAT24(auVar24._8_2_,CONCAT22(auVar24._4_2_,auVar24._0_2_)));
      fVar16 = param_3[4] * fVar13 + 384.0;
      fVar14 = 4.59163e-41;
      if ((int)fVar16 < 0x43c08000) {
        fVar14 = fVar16;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar16) {
        sVar2 = SUB42(fVar14,0);
      }
      param_1[4] = sVar2;
      pfVar1 = param_3 + 5;
      param_3 = param_3 + 6;
      fVar16 = *pfVar1 * fVar13 + 384.0;
      fVar14 = 4.59163e-41;
      if ((int)fVar16 < 0x43c08000) {
        fVar14 = fVar16;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar16) {
        sVar2 = SUB42(fVar14,0);
      }
      param_1[5] = sVar2;
      param_2 = param_2 - 1;
      param_1 = param_1 + 6;
      fVar13 = *param_6 + fVar13;
      *param_5 = fVar13;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar14 = *param_3;
      uVar19 = 0x3fe0;
      uVar17 = 0xbfe0;
      if (fVar14 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar14) {
        iVar7 = 0x7fffffff;
      }
      else {
        uVar18 = uVar19;
        if (fVar14 * 1.3421773e+08 <= 0.0) {
          uVar18 = uVar17;
        }
        iVar7 = (int)((double)((ulong)uVar18 << 0x30) + (double)(fVar14 * 1.3421773e+08));
      }
      fVar15 = fVar14 * fVar13 + 384.0;
      fVar16 = 4.59163e-41;
      fVar14 = fVar16;
      if ((int)fVar15 < 0x43c08000) {
        fVar14 = fVar15;
      }
      sVar6 = -0x8000;
      sVar2 = sVar6;
      if (0x43bf7fff < (int)fVar15) {
        sVar2 = SUB42(fVar14,0);
      }
      *param_1 = sVar2;
      fVar14 = param_3[1];
      if (fVar14 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar14) {
        iVar8 = 0x7fffffff;
      }
      else {
        uVar18 = uVar19;
        if (fVar14 * 1.3421773e+08 <= 0.0) {
          uVar18 = uVar17;
        }
        iVar8 = (int)((double)((ulong)uVar18 << 0x30) + (double)(fVar14 * 1.3421773e+08));
      }
      fVar15 = fVar14 * fVar13 + 384.0;
      fVar14 = fVar16;
      if ((int)fVar15 < 0x43c08000) {
        fVar14 = fVar15;
      }
      sVar2 = sVar6;
      if (0x43bf7fff < (int)fVar15) {
        sVar2 = SUB42(fVar14,0);
      }
      param_1[1] = sVar2;
      fVar14 = param_3[2];
      if (fVar14 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar14) {
        iVar9 = 0x7fffffff;
      }
      else {
        uVar18 = uVar19;
        if (fVar14 * 1.3421773e+08 <= 0.0) {
          uVar18 = uVar17;
        }
        iVar9 = (int)((double)((ulong)uVar18 << 0x30) + (double)(fVar14 * 1.3421773e+08));
      }
      fVar15 = fVar14 * fVar13 + 384.0;
      fVar14 = fVar16;
      if ((int)fVar15 < 0x43c08000) {
        fVar14 = fVar15;
      }
      sVar2 = sVar6;
      if (0x43bf7fff < (int)fVar15) {
        sVar2 = SUB42(fVar14,0);
      }
      param_1[2] = sVar2;
      fVar14 = param_3[3];
      if (fVar14 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar14) {
        iVar10 = 0x7fffffff;
      }
      else {
        uVar18 = uVar19;
        if (fVar14 * 1.3421773e+08 <= 0.0) {
          uVar18 = uVar17;
        }
        iVar10 = (int)((double)((ulong)uVar18 << 0x30) + (double)(fVar14 * 1.3421773e+08));
      }
      fVar14 = fVar14 * fVar13 + 384.0;
      if ((int)fVar14 < 0x43c08000) {
        fVar16 = fVar14;
      }
      if (0x43bf7fff < (int)fVar14) {
        sVar6 = SUB42(fVar16,0);
      }
      param_1[3] = sVar6;
      fVar14 = param_3[4];
      if (fVar14 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar14) {
        iVar11 = 0x7fffffff;
      }
      else {
        uVar18 = uVar19;
        if (fVar14 * 1.3421773e+08 <= 0.0) {
          uVar18 = uVar17;
        }
        iVar11 = (int)((double)((ulong)uVar18 << 0x30) + (double)(fVar14 * 1.3421773e+08));
      }
      fVar16 = fVar14 * fVar13 + 384.0;
      fVar14 = 4.59163e-41;
      if ((int)fVar16 < 0x43c08000) {
        fVar14 = fVar16;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar16) {
        sVar2 = SUB42(fVar14,0);
      }
      param_1[4] = sVar2;
      fVar14 = param_3[5];
      if (fVar14 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar14) {
        iVar12 = 0x7fffffff;
      }
      else {
        if (fVar14 * 1.3421773e+08 <= 0.0) {
          uVar19 = uVar17;
        }
        iVar12 = (int)((double)((ulong)uVar19 << 0x30) + (double)(fVar14 * 1.3421773e+08));
      }
      fVar16 = fVar14 * fVar13 + 384.0;
      fVar14 = 4.59163e-41;
      if ((int)fVar16 < 0x43c08000) {
        fVar14 = fVar16;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar16) {
        sVar2 = SUB42(fVar14,0);
      }
      param_1[5] = sVar2;
      fVar13 = *param_6 + fVar13;
      *param_5 = fVar13;
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) *
                 ((iVar12 + iVar11 + iVar10 + iVar9 + iVar8 + iVar7) / 6 >> 0xc);
      param_3 = param_3 + 6;
      param_2 = param_2 - 1;
      param_1 = param_1 + 6;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

