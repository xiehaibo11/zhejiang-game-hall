
/* void cocos2d::experimental::volumeRampMulti<4, 7, short, float, float, int, int>(short*, unsigned
   long, float const*, int*, float*, float const*, int*, int) */

void cocos2d::experimental::volumeRampMulti<4,7,short,float,float,int,int>
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
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  undefined2 uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  fVar14 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      fVar15 = (float)*(undefined8 *)param_3 * fVar14 + 384.0;
      fVar17 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar14 + 384.0;
      uVar21 = (undefined2)((uint)fVar17 >> 0x10);
      fVar16 = (float)*(undefined8 *)(param_3 + 2) * fVar14 + 384.0;
      fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar14 + 384.0;
      auVar24._0_4_ = -(uint)(0x43c07fff < (int)fVar15);
      auVar24._4_4_ = -(uint)(0x43c07fff < (int)fVar17);
      auVar24._8_4_ = -(uint)(0x43c07fff < (int)fVar16);
      auVar24._12_4_ = -(uint)(0x43c07fff < (int)fVar22);
      auVar23._0_4_ = -(uint)((int)fVar15 < 0x43bf8000);
      auVar23._4_4_ = -(uint)((int)fVar17 < 0x43bf8000);
      auVar23._8_4_ = -(uint)((int)fVar16 < 0x43bf8000);
      auVar23._12_4_ = -(uint)((int)fVar22 < 0x43bf8000);
      auVar3._8_4_ = 0x7fff;
      auVar3._0_8_ = 0x7fff00007fff;
      auVar3._12_4_ = 0x7fff;
      auVar5._4_2_ = SUB42(fVar17,0);
      auVar5._0_4_ = fVar15;
      auVar5._6_2_ = uVar21;
      auVar5._8_4_ = fVar16;
      auVar5._12_4_ = fVar22;
      auVar25._4_2_ = SUB42(fVar17,0);
      auVar25._0_4_ = fVar15;
      auVar25._6_2_ = uVar21;
      auVar25._8_4_ = fVar16;
      auVar25._12_4_ = fVar22;
      auVar25 = auVar25 ^ (auVar5 ^ auVar3) & auVar24;
      auVar4._8_4_ = 0x8000;
      auVar4._0_8_ = 0x800000008000;
      auVar4._12_4_ = 0x8000;
      auVar25 = auVar25 ^ (auVar25 ^ auVar4) & auVar23;
      *(ulong *)param_1 =
           CONCAT26(auVar25._12_2_,CONCAT24(auVar25._8_2_,CONCAT22(auVar25._4_2_,auVar25._0_2_)));
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
      param_1[6] = sVar2;
      param_2 = param_2 - 1;
      param_1 = param_1 + 7;
      fVar14 = *param_6 + fVar14;
      *param_5 = fVar14;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar15 = *param_3;
      uVar20 = 0x3fe0;
      uVar18 = 0xbfe0;
      if (fVar15 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar15) {
        iVar7 = 0x7fffffff;
      }
      else {
        uVar19 = uVar20;
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          uVar19 = uVar18;
        }
        iVar7 = (int)((double)((ulong)uVar19 << 0x30) + (double)(fVar15 * 1.3421773e+08));
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
        uVar19 = uVar20;
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          uVar19 = uVar18;
        }
        iVar8 = (int)((double)((ulong)uVar19 << 0x30) + (double)(fVar15 * 1.3421773e+08));
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
        uVar19 = uVar20;
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          uVar19 = uVar18;
        }
        iVar9 = (int)((double)((ulong)uVar19 << 0x30) + (double)(fVar15 * 1.3421773e+08));
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
        uVar19 = uVar20;
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          uVar19 = uVar18;
        }
        iVar10 = (int)((double)((ulong)uVar19 << 0x30) + (double)(fVar15 * 1.3421773e+08));
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
        uVar19 = uVar20;
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          uVar19 = uVar18;
        }
        iVar11 = (int)((double)((ulong)uVar19 << 0x30) + (double)(fVar15 * 1.3421773e+08));
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
        uVar19 = uVar20;
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          uVar19 = uVar18;
        }
        iVar12 = (int)((double)((ulong)uVar19 << 0x30) + (double)(fVar15 * 1.3421773e+08));
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
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          uVar20 = uVar18;
        }
        iVar13 = (int)((double)((ulong)uVar20 << 0x30) + (double)(fVar15 * 1.3421773e+08));
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
      fVar14 = *param_6 + fVar14;
      *param_5 = fVar14;
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) *
                 ((iVar13 + iVar12 + iVar11 + iVar10 + iVar9 + iVar8 + iVar7) / 7 >> 0xc);
      param_3 = param_3 + 7;
      param_2 = param_2 - 1;
      param_1 = param_1 + 7;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

