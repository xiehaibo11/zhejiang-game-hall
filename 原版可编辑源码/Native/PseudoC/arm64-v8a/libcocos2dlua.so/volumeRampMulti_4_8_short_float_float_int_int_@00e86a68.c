
/* void cocos2d::experimental::volumeRampMulti<4, 8, short, float, float, int, int>(short*, unsigned
   long, float const*, int*, float*, float const*, int*, int) */

void cocos2d::experimental::volumeRampMulti<4,8,short,float,float,int,int>
               (short *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  short sVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  fVar3 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      fVar25 = (float)*(undefined8 *)param_3 * fVar3 + 384.0;
      fVar27 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar3 + 384.0;
      fVar28 = (float)*(undefined8 *)(param_3 + 2) * fVar3 + 384.0;
      fVar29 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar3 + 384.0;
      fVar22 = param_3[4] * fVar3 + 384.0;
      fVar24 = param_3[5] * fVar3 + 384.0;
      uVar19 = (undefined2)((uint)fVar24 >> 0x10);
      fVar23 = param_3[6] * fVar3 + 384.0;
      uVar20 = (undefined2)((uint)fVar23 >> 0x10);
      fVar3 = param_3[7] * fVar3 + 384.0;
      uVar21 = (undefined2)((uint)fVar3 >> 0x10);
      auVar31._0_4_ = -(uint)(0x43c07fff < (int)fVar22);
      auVar31._4_4_ = -(uint)(0x43c07fff < (int)fVar24);
      auVar31._8_4_ = -(uint)(0x43c07fff < (int)fVar23);
      auVar31._12_4_ = -(uint)(0x43c07fff < (int)fVar3);
      uVar6 = SUB42(fVar25,0) ^ (SUB42(fVar25,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar25);
      uVar7 = SUB42(fVar27,0) ^ (SUB42(fVar27,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar27);
      uVar8 = SUB42(fVar28,0) ^ (SUB42(fVar28,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar28);
      uVar9 = SUB42(fVar29,0) ^ (SUB42(fVar29,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar29);
      auVar30._0_4_ = -(uint)((int)fVar22 < 0x43bf8000);
      auVar30._4_4_ = -(uint)((int)fVar24 < 0x43bf8000);
      auVar30._8_4_ = -(uint)((int)fVar23 < 0x43bf8000);
      auVar30._12_4_ = -(uint)((int)fVar3 < 0x43bf8000);
      auVar2._4_2_ = SUB42(fVar24,0);
      auVar2._0_4_ = fVar22;
      auVar2._6_2_ = uVar19;
      auVar2._8_2_ = SUB42(fVar23,0);
      auVar2._10_2_ = uVar20;
      auVar2._12_2_ = SUB42(fVar3,0);
      auVar2._14_2_ = uVar21;
      auVar4._8_4_ = 0x7fff;
      auVar4._0_8_ = 0x7fff00007fff;
      auVar4._12_4_ = 0x7fff;
      auVar32._4_2_ = SUB42(fVar24,0);
      auVar32._0_4_ = fVar22;
      auVar32._6_2_ = uVar19;
      auVar32._8_2_ = SUB42(fVar23,0);
      auVar32._10_2_ = uVar20;
      auVar32._12_2_ = SUB42(fVar3,0);
      auVar32._14_2_ = uVar21;
      auVar32 = auVar32 ^ (auVar2 ^ auVar4) & auVar31;
      auVar5._8_4_ = 0x8000;
      auVar5._0_8_ = 0x800000008000;
      auVar5._12_4_ = 0x8000;
      auVar32 = auVar32 ^ (auVar32 ^ auVar5) & auVar30;
      *(ulong *)(param_1 + 4) =
           CONCAT26(auVar32._12_2_,CONCAT24(auVar32._8_2_,CONCAT22(auVar32._4_2_,auVar32._0_2_)));
      *(ulong *)param_1 =
           CONCAT26(uVar9 ^ (uVar9 ^ 0x8000) & -(ushort)((int)fVar29 < 0x43bf8000),
                    CONCAT24(uVar8 ^ (uVar8 ^ 0x8000) & -(ushort)((int)fVar28 < 0x43bf8000),
                             CONCAT22(uVar7 ^ (uVar7 ^ 0x8000) & -(ushort)((int)fVar27 < 0x43bf8000)
                                      ,uVar6 ^ (uVar6 ^ 0x8000) &
                                               -(ushort)((int)fVar25 < 0x43bf8000))));
      fVar3 = *param_6 + *param_5;
      *param_5 = fVar3;
      param_1 = param_1 + 8;
      param_3 = param_3 + 8;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar22 = *param_3;
      if (fVar22 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar22) {
        iVar11 = 0x7fffffff;
      }
      else {
        uVar26 = 0x3fe00000;
        if (fVar22 * 1.3421773e+08 <= 0.0) {
          uVar26 = 0xbfe00000;
        }
        iVar11 = (int)((double)((ulong)uVar26 << 0x20) + (double)(fVar22 * 1.3421773e+08));
      }
      fVar23 = fVar22 * fVar3 + 384.0;
      fVar24 = 4.59163e-41;
      fVar22 = fVar24;
      if ((int)fVar23 < 0x43c08000) {
        fVar22 = fVar23;
      }
      sVar10 = -0x8000;
      sVar1 = sVar10;
      if (0x43bf7fff < (int)fVar23) {
        sVar1 = SUB42(fVar22,0);
      }
      *param_1 = sVar1;
      fVar22 = param_3[1];
      if (fVar22 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar22) {
        iVar12 = 0x7fffffff;
      }
      else {
        uVar26 = 0x3fe00000;
        if (fVar22 * 1.3421773e+08 <= 0.0) {
          uVar26 = 0xbfe00000;
        }
        iVar12 = (int)((double)((ulong)uVar26 << 0x20) + (double)(fVar22 * 1.3421773e+08));
      }
      fVar23 = fVar22 * fVar3 + 384.0;
      fVar22 = fVar24;
      if ((int)fVar23 < 0x43c08000) {
        fVar22 = fVar23;
      }
      sVar1 = sVar10;
      if (0x43bf7fff < (int)fVar23) {
        sVar1 = SUB42(fVar22,0);
      }
      param_1[1] = sVar1;
      fVar22 = param_3[2];
      if (fVar22 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar22) {
        iVar13 = 0x7fffffff;
      }
      else {
        uVar26 = 0x3fe00000;
        if (fVar22 * 1.3421773e+08 <= 0.0) {
          uVar26 = 0xbfe00000;
        }
        iVar13 = (int)((double)((ulong)uVar26 << 0x20) + (double)(fVar22 * 1.3421773e+08));
      }
      fVar23 = fVar22 * fVar3 + 384.0;
      fVar22 = fVar24;
      if ((int)fVar23 < 0x43c08000) {
        fVar22 = fVar23;
      }
      sVar1 = sVar10;
      if (0x43bf7fff < (int)fVar23) {
        sVar1 = SUB42(fVar22,0);
      }
      param_1[2] = sVar1;
      fVar22 = param_3[3];
      if (fVar22 <= -16.0) {
        iVar14 = -0x80000000;
      }
      else if (16.0 <= fVar22) {
        iVar14 = 0x7fffffff;
      }
      else {
        uVar26 = 0x3fe00000;
        if (fVar22 * 1.3421773e+08 <= 0.0) {
          uVar26 = 0xbfe00000;
        }
        iVar14 = (int)((double)((ulong)uVar26 << 0x20) + (double)(fVar22 * 1.3421773e+08));
      }
      fVar22 = fVar22 * fVar3 + 384.0;
      if ((int)fVar22 < 0x43c08000) {
        fVar24 = fVar22;
      }
      if (0x43bf7fff < (int)fVar22) {
        sVar10 = SUB42(fVar24,0);
      }
      param_1[3] = sVar10;
      fVar22 = param_3[4];
      if (fVar22 <= -16.0) {
        iVar15 = -0x80000000;
      }
      else if (16.0 <= fVar22) {
        iVar15 = 0x7fffffff;
      }
      else {
        uVar26 = 0x3fe00000;
        if (fVar22 * 1.3421773e+08 <= 0.0) {
          uVar26 = 0xbfe00000;
        }
        iVar15 = (int)((double)((ulong)uVar26 << 0x20) + (double)(fVar22 * 1.3421773e+08));
      }
      fVar23 = fVar22 * fVar3 + 384.0;
      fVar22 = 4.59163e-41;
      fVar24 = fVar22;
      if ((int)fVar23 < 0x43c08000) {
        fVar24 = fVar23;
      }
      sVar10 = -0x8000;
      sVar1 = sVar10;
      if (0x43bf7fff < (int)fVar23) {
        sVar1 = SUB42(fVar24,0);
      }
      param_1[4] = sVar1;
      fVar24 = param_3[5];
      if (fVar24 <= -16.0) {
        iVar16 = -0x80000000;
      }
      else if (16.0 <= fVar24) {
        iVar16 = 0x7fffffff;
      }
      else {
        uVar26 = 0x3fe00000;
        if (fVar24 * 1.3421773e+08 <= 0.0) {
          uVar26 = 0xbfe00000;
        }
        iVar16 = (int)((double)((ulong)uVar26 << 0x20) + (double)(fVar24 * 1.3421773e+08));
      }
      fVar23 = fVar24 * fVar3 + 384.0;
      fVar24 = fVar22;
      if ((int)fVar23 < 0x43c08000) {
        fVar24 = fVar23;
      }
      sVar1 = sVar10;
      if (0x43bf7fff < (int)fVar23) {
        sVar1 = SUB42(fVar24,0);
      }
      param_1[5] = sVar1;
      fVar24 = param_3[6];
      if (fVar24 <= -16.0) {
        iVar17 = -0x80000000;
      }
      else if (16.0 <= fVar24) {
        iVar17 = 0x7fffffff;
      }
      else {
        uVar26 = 0x3fe00000;
        if (fVar24 * 1.3421773e+08 <= 0.0) {
          uVar26 = 0xbfe00000;
        }
        iVar17 = (int)((double)((ulong)uVar26 << 0x20) + (double)(fVar24 * 1.3421773e+08));
      }
      fVar23 = fVar24 * fVar3 + 384.0;
      fVar24 = fVar22;
      if ((int)fVar23 < 0x43c08000) {
        fVar24 = fVar23;
      }
      if (0x43bf7fff < (int)fVar23) {
        sVar10 = SUB42(fVar24,0);
      }
      param_1[6] = sVar10;
      fVar24 = param_3[7];
      if (fVar24 <= -16.0) {
        iVar18 = -0x80000000;
      }
      else if (16.0 <= fVar24) {
        iVar18 = 0x7fffffff;
      }
      else {
        uVar26 = 0x3fe00000;
        if (fVar24 * 1.3421773e+08 <= 0.0) {
          uVar26 = 0xbfe00000;
        }
        iVar18 = (int)((double)((ulong)uVar26 << 0x20) + (double)(fVar24 * 1.3421773e+08));
      }
      fVar24 = fVar24 * fVar3 + 384.0;
      if ((int)fVar24 < 0x43c08000) {
        fVar22 = fVar24;
      }
      sVar1 = -0x8000;
      if (0x43bf7fff < (int)fVar24) {
        sVar1 = SUB42(fVar22,0);
      }
      param_1[7] = sVar1;
      iVar18 = iVar18 + iVar17 + iVar16 + iVar15 + iVar14 + iVar13 + iVar12 + iVar11;
      fVar3 = *param_6 + fVar3;
      *param_5 = fVar3;
      iVar11 = iVar18 + 7;
      if (-1 < iVar18) {
        iVar11 = iVar18;
      }
      *param_4 = *param_4 + (*param_7 >> 0x10) * (iVar11 >> 0xf);
      param_3 = param_3 + 8;
      param_2 = param_2 - 1;
      param_1 = param_1 + 8;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

