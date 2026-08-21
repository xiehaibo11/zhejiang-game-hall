
/* void cocos2d::experimental::volumeMulti<4, 8, short, float, float, int, short>(short*, unsigned
   long, float const*, int*, float const*, short) */

void cocos2d::experimental::volumeMulti<4,8,short,float,float,int,short>
               (short *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  short sVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ushort uVar22;
  undefined2 uVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  fVar18 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      fVar19 = (float)*(undefined8 *)param_3 * fVar18 + 384.0;
      fVar21 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar18 + 384.0;
      uVar23 = (undefined2)((uint)fVar21 >> 0x10);
      fVar20 = (float)*(undefined8 *)(param_3 + 2) * fVar18 + 384.0;
      uVar24 = (undefined2)((uint)fVar20 >> 0x10);
      fVar5 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar18 + 384.0;
      uVar25 = (undefined2)((uint)fVar5 >> 0x10);
      fVar26 = (float)*(undefined8 *)(param_3 + 4) * fVar18 + 384.0;
      fVar27 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20) * fVar18 + 384.0;
      fVar28 = (float)*(undefined8 *)(param_3 + 6) * fVar18 + 384.0;
      fVar29 = (float)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20) * fVar18 + 384.0;
      auVar31._0_4_ = -(uint)(0x43c07fff < (int)fVar19);
      auVar31._4_4_ = -(uint)(0x43c07fff < (int)fVar21);
      auVar31._8_4_ = -(uint)(0x43c07fff < (int)fVar20);
      auVar31._12_4_ = -(uint)(0x43c07fff < (int)fVar5);
      auVar30._0_4_ = -(uint)((int)fVar19 < 0x43bf8000);
      auVar30._4_4_ = -(uint)((int)fVar21 < 0x43bf8000);
      auVar30._8_4_ = -(uint)((int)fVar20 < 0x43bf8000);
      auVar30._12_4_ = -(uint)((int)fVar5 < 0x43bf8000);
      auVar2._8_4_ = 0x7fff;
      auVar2._0_8_ = 0x7fff00007fff;
      auVar2._12_4_ = 0x7fff;
      auVar4._4_2_ = SUB42(fVar21,0);
      auVar4._0_4_ = fVar19;
      auVar4._6_2_ = uVar23;
      auVar4._8_2_ = SUB42(fVar20,0);
      auVar4._10_2_ = uVar24;
      auVar4._12_2_ = SUB42(fVar5,0);
      auVar4._14_2_ = uVar25;
      auVar32._4_2_ = SUB42(fVar21,0);
      auVar32._0_4_ = fVar19;
      auVar32._6_2_ = uVar23;
      auVar32._8_2_ = SUB42(fVar20,0);
      auVar32._10_2_ = uVar24;
      auVar32._12_2_ = SUB42(fVar5,0);
      auVar32._14_2_ = uVar25;
      auVar32 = auVar32 ^ (auVar4 ^ auVar2) & auVar31;
      uVar22 = SUB42(fVar26,0) ^ (SUB42(fVar26,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar26);
      uVar6 = SUB42(fVar27,0) ^ (SUB42(fVar27,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar27);
      uVar7 = SUB42(fVar28,0) ^ (SUB42(fVar28,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar28);
      uVar8 = SUB42(fVar29,0) ^ (SUB42(fVar29,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar29);
      auVar3._8_4_ = 0x8000;
      auVar3._0_8_ = 0x800000008000;
      auVar3._12_4_ = 0x8000;
      auVar32 = auVar32 ^ (auVar32 ^ auVar3) & auVar30;
      *(ulong *)(param_1 + 4) =
           CONCAT26(uVar8 ^ (uVar8 ^ 0x8000) & -(ushort)((int)fVar29 < 0x43bf8000),
                    CONCAT24(uVar7 ^ (uVar7 ^ 0x8000) & -(ushort)((int)fVar28 < 0x43bf8000),
                             CONCAT22(uVar6 ^ (uVar6 ^ 0x8000) & -(ushort)((int)fVar27 < 0x43bf8000)
                                      ,uVar22 ^ (uVar22 ^ 0x8000) &
                                                -(ushort)((int)fVar26 < 0x43bf8000))));
      *(ulong *)param_1 =
           CONCAT26(auVar32._12_2_,CONCAT24(auVar32._8_2_,CONCAT22(auVar32._4_2_,auVar32._0_2_)));
      param_1 = param_1 + 8;
      param_3 = param_3 + 8;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar19 = *param_3;
      if (fVar19 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar19) {
        iVar10 = 0x7fffffff;
      }
      else {
        uVar22 = 0x3fe0;
        if (fVar19 * 1.3421773e+08 <= 0.0) {
          uVar22 = 0xbfe0;
        }
        iVar10 = (int)((double)((ulong)uVar22 << 0x30) + (double)(fVar19 * 1.3421773e+08));
      }
      fVar20 = fVar19 * fVar18 + 384.0;
      fVar21 = 4.59163e-41;
      fVar19 = fVar21;
      if ((int)fVar20 < 0x43c08000) {
        fVar19 = fVar20;
      }
      sVar9 = -0x8000;
      sVar1 = sVar9;
      if (0x43bf7fff < (int)fVar20) {
        sVar1 = SUB42(fVar19,0);
      }
      *param_1 = sVar1;
      fVar19 = param_3[1];
      if (fVar19 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar19) {
        iVar11 = 0x7fffffff;
      }
      else {
        uVar22 = 0x3fe0;
        if (fVar19 * 1.3421773e+08 <= 0.0) {
          uVar22 = 0xbfe0;
        }
        iVar11 = (int)((double)((ulong)uVar22 << 0x30) + (double)(fVar19 * 1.3421773e+08));
      }
      fVar20 = fVar19 * fVar18 + 384.0;
      fVar19 = fVar21;
      if ((int)fVar20 < 0x43c08000) {
        fVar19 = fVar20;
      }
      sVar1 = sVar9;
      if (0x43bf7fff < (int)fVar20) {
        sVar1 = SUB42(fVar19,0);
      }
      param_1[1] = sVar1;
      fVar19 = param_3[2];
      if (fVar19 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar19) {
        iVar12 = 0x7fffffff;
      }
      else {
        uVar22 = 0x3fe0;
        if (fVar19 * 1.3421773e+08 <= 0.0) {
          uVar22 = 0xbfe0;
        }
        iVar12 = (int)((double)((ulong)uVar22 << 0x30) + (double)(fVar19 * 1.3421773e+08));
      }
      fVar20 = fVar19 * fVar18 + 384.0;
      fVar19 = fVar21;
      if ((int)fVar20 < 0x43c08000) {
        fVar19 = fVar20;
      }
      sVar1 = sVar9;
      if (0x43bf7fff < (int)fVar20) {
        sVar1 = SUB42(fVar19,0);
      }
      param_1[2] = sVar1;
      fVar19 = param_3[3];
      if (fVar19 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar19) {
        iVar13 = 0x7fffffff;
      }
      else {
        uVar22 = 0x3fe0;
        if (fVar19 * 1.3421773e+08 <= 0.0) {
          uVar22 = 0xbfe0;
        }
        iVar13 = (int)((double)((ulong)uVar22 << 0x30) + (double)(fVar19 * 1.3421773e+08));
      }
      fVar19 = fVar19 * fVar18 + 384.0;
      if ((int)fVar19 < 0x43c08000) {
        fVar21 = fVar19;
      }
      if (0x43bf7fff < (int)fVar19) {
        sVar9 = SUB42(fVar21,0);
      }
      param_1[3] = sVar9;
      fVar19 = param_3[4];
      if (fVar19 <= -16.0) {
        iVar14 = -0x80000000;
      }
      else if (16.0 <= fVar19) {
        iVar14 = 0x7fffffff;
      }
      else {
        uVar22 = 0x3fe0;
        if (fVar19 * 1.3421773e+08 <= 0.0) {
          uVar22 = 0xbfe0;
        }
        iVar14 = (int)((double)((ulong)uVar22 << 0x30) + (double)(fVar19 * 1.3421773e+08));
      }
      fVar20 = fVar19 * fVar18 + 384.0;
      fVar19 = 4.59163e-41;
      fVar21 = fVar19;
      if ((int)fVar20 < 0x43c08000) {
        fVar21 = fVar20;
      }
      sVar9 = -0x8000;
      sVar1 = sVar9;
      if (0x43bf7fff < (int)fVar20) {
        sVar1 = SUB42(fVar21,0);
      }
      param_1[4] = sVar1;
      fVar21 = param_3[5];
      if (fVar21 <= -16.0) {
        iVar15 = -0x80000000;
      }
      else if (16.0 <= fVar21) {
        iVar15 = 0x7fffffff;
      }
      else {
        uVar22 = 0x3fe0;
        if (fVar21 * 1.3421773e+08 <= 0.0) {
          uVar22 = 0xbfe0;
        }
        iVar15 = (int)((double)((ulong)uVar22 << 0x30) + (double)(fVar21 * 1.3421773e+08));
      }
      fVar20 = fVar21 * fVar18 + 384.0;
      fVar21 = fVar19;
      if ((int)fVar20 < 0x43c08000) {
        fVar21 = fVar20;
      }
      sVar1 = sVar9;
      if (0x43bf7fff < (int)fVar20) {
        sVar1 = SUB42(fVar21,0);
      }
      param_1[5] = sVar1;
      fVar21 = param_3[6];
      if (fVar21 <= -16.0) {
        iVar16 = -0x80000000;
      }
      else if (16.0 <= fVar21) {
        iVar16 = 0x7fffffff;
      }
      else {
        uVar22 = 0x3fe0;
        if (fVar21 * 1.3421773e+08 <= 0.0) {
          uVar22 = 0xbfe0;
        }
        iVar16 = (int)((double)((ulong)uVar22 << 0x30) + (double)(fVar21 * 1.3421773e+08));
      }
      fVar20 = fVar21 * fVar18 + 384.0;
      fVar21 = fVar19;
      if ((int)fVar20 < 0x43c08000) {
        fVar21 = fVar20;
      }
      if (0x43bf7fff < (int)fVar20) {
        sVar9 = SUB42(fVar21,0);
      }
      param_1[6] = sVar9;
      fVar21 = param_3[7];
      if (fVar21 <= -16.0) {
        iVar17 = -0x80000000;
      }
      else if (16.0 <= fVar21) {
        iVar17 = 0x7fffffff;
      }
      else {
        uVar22 = 0x3fe0;
        if (fVar21 * 1.3421773e+08 <= 0.0) {
          uVar22 = 0xbfe0;
        }
        iVar17 = (int)((double)((ulong)uVar22 << 0x30) + (double)(fVar21 * 1.3421773e+08));
      }
      fVar21 = fVar21 * fVar18 + 384.0;
      iVar17 = iVar17 + iVar16 + iVar15 + iVar14 + iVar13 + iVar12 + iVar11 + iVar10;
      if ((int)fVar21 < 0x43c08000) {
        fVar19 = fVar21;
      }
      sVar1 = -0x8000;
      if (0x43bf7fff < (int)fVar21) {
        sVar1 = SUB42(fVar19,0);
      }
      param_1[7] = sVar1;
      iVar10 = iVar17 + 7;
      if (-1 < iVar17) {
        iVar10 = iVar17;
      }
      param_3 = param_3 + 8;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + (iVar10 >> 0xf) * (int)param_6;
      param_1 = param_1 + 8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

