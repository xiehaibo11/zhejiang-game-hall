
/* void cocos2d::volumeMulti<4, 8, short, float, float, int, short>(short*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<4,8,short,float,float,int,short>
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
  ushort uVar9;
  float fVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  undefined2 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  fVar20 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      fVar10 = (float)*(undefined8 *)param_3 * fVar20 + 384.0;
      fVar24 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar20 + 384.0;
      uVar21 = (undefined2)((uint)fVar24 >> 0x10);
      fVar25 = (float)*(undefined8 *)(param_3 + 2) * fVar20 + 384.0;
      uVar22 = (undefined2)((uint)fVar25 >> 0x10);
      fVar5 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar20 + 384.0;
      uVar23 = (undefined2)((uint)fVar5 >> 0x10);
      fVar26 = (float)*(undefined8 *)(param_3 + 4) * fVar20 + 384.0;
      fVar27 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20) * fVar20 + 384.0;
      fVar28 = (float)*(undefined8 *)(param_3 + 6) * fVar20 + 384.0;
      fVar29 = (float)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20) * fVar20 + 384.0;
      auVar31._0_4_ = -(uint)(0x43c07fff < (int)fVar10);
      auVar31._4_4_ = -(uint)(0x43c07fff < (int)fVar24);
      auVar31._8_4_ = -(uint)(0x43c07fff < (int)fVar25);
      auVar31._12_4_ = -(uint)(0x43c07fff < (int)fVar5);
      auVar30._0_4_ = -(uint)((int)fVar10 < 0x43bf8000);
      auVar30._4_4_ = -(uint)((int)fVar24 < 0x43bf8000);
      auVar30._8_4_ = -(uint)((int)fVar25 < 0x43bf8000);
      auVar30._12_4_ = -(uint)((int)fVar5 < 0x43bf8000);
      auVar2._8_4_ = 0x7fff;
      auVar2._0_8_ = 0x7fff00007fff;
      auVar2._12_4_ = 0x7fff;
      auVar4._4_2_ = SUB42(fVar24,0);
      auVar4._0_4_ = fVar10;
      auVar4._6_2_ = uVar21;
      auVar4._8_2_ = SUB42(fVar25,0);
      auVar4._10_2_ = uVar22;
      auVar4._12_2_ = SUB42(fVar5,0);
      auVar4._14_2_ = uVar23;
      auVar32._4_2_ = SUB42(fVar24,0);
      auVar32._0_4_ = fVar10;
      auVar32._6_2_ = uVar21;
      auVar32._8_2_ = SUB42(fVar25,0);
      auVar32._10_2_ = uVar22;
      auVar32._12_2_ = SUB42(fVar5,0);
      auVar32._14_2_ = uVar23;
      auVar32 = auVar32 ^ (auVar4 ^ auVar2) & auVar31;
      uVar6 = SUB42(fVar26,0) ^ (SUB42(fVar26,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar26);
      uVar7 = SUB42(fVar27,0) ^ (SUB42(fVar27,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar27);
      uVar8 = SUB42(fVar28,0) ^ (SUB42(fVar28,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar28);
      uVar9 = SUB42(fVar29,0) ^ (SUB42(fVar29,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar29);
      auVar3._8_4_ = 0x8000;
      auVar3._0_8_ = 0x800000008000;
      auVar3._12_4_ = 0x8000;
      auVar32 = auVar32 ^ (auVar32 ^ auVar3) & auVar30;
      *(ulong *)(param_1 + 4) =
           CONCAT26(uVar9 ^ (uVar9 ^ 0x8000) & -(ushort)((int)fVar29 < 0x43bf8000),
                    CONCAT24(uVar8 ^ (uVar8 ^ 0x8000) & -(ushort)((int)fVar28 < 0x43bf8000),
                             CONCAT22(uVar7 ^ (uVar7 ^ 0x8000) & -(ushort)((int)fVar27 < 0x43bf8000)
                                      ,uVar6 ^ (uVar6 ^ 0x8000) &
                                               -(ushort)((int)fVar26 < 0x43bf8000))));
      *(ulong *)param_1 =
           CONCAT26(auVar32._12_2_,CONCAT24(auVar32._8_2_,CONCAT22(auVar32._4_2_,auVar32._0_2_)));
      param_1 = param_1 + 8;
      param_3 = param_3 + 8;
    } while (param_2 != 0);
  }
  else {
    fVar10 = 4.59163e-41;
    do {
      fVar24 = *param_3;
      if (fVar24 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar24) {
        iVar12 = 0x7fffffff;
      }
      else {
        fVar25 = 0.5;
        if (fVar24 * 1.3421773e+08 <= 0.0) {
          fVar25 = -0.5;
        }
        iVar12 = (int)(fVar25 + fVar24 * 1.3421773e+08);
      }
      fVar25 = fVar24 * fVar20 + 384.0;
      fVar24 = fVar10;
      if ((int)fVar25 < 0x43c08000) {
        fVar24 = fVar25;
      }
      sVar1 = -0x8000;
      if (0x43bf7fff < (int)fVar25) {
        sVar1 = SUB42(fVar24,0);
      }
      *param_1 = sVar1;
      fVar24 = param_3[1];
      if (fVar24 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar24) {
        iVar13 = 0x7fffffff;
      }
      else {
        fVar25 = 0.5;
        if (fVar24 * 1.3421773e+08 <= 0.0) {
          fVar25 = -0.5;
        }
        iVar13 = (int)(fVar25 + fVar24 * 1.3421773e+08);
      }
      fVar25 = fVar24 * fVar20 + 384.0;
      fVar24 = fVar10;
      if ((int)fVar25 < 0x43c08000) {
        fVar24 = fVar25;
      }
      sVar1 = -0x8000;
      if (0x43bf7fff < (int)fVar25) {
        sVar1 = SUB42(fVar24,0);
      }
      param_1[1] = sVar1;
      fVar24 = param_3[2];
      if (fVar24 <= -16.0) {
        iVar14 = -0x80000000;
      }
      else if (16.0 <= fVar24) {
        iVar14 = 0x7fffffff;
      }
      else {
        fVar25 = 0.5;
        if (fVar24 * 1.3421773e+08 <= 0.0) {
          fVar25 = -0.5;
        }
        iVar14 = (int)(fVar25 + fVar24 * 1.3421773e+08);
      }
      fVar25 = fVar24 * fVar20 + 384.0;
      fVar24 = fVar10;
      if ((int)fVar25 < 0x43c08000) {
        fVar24 = fVar25;
      }
      sVar11 = -0x8000;
      sVar1 = sVar11;
      if (0x43bf7fff < (int)fVar25) {
        sVar1 = SUB42(fVar24,0);
      }
      param_1[2] = sVar1;
      fVar24 = param_3[3];
      if (fVar24 <= -16.0) {
        iVar15 = -0x80000000;
      }
      else if (16.0 <= fVar24) {
        iVar15 = 0x7fffffff;
      }
      else {
        fVar25 = 0.5;
        if (fVar24 * 1.3421773e+08 <= 0.0) {
          fVar25 = -0.5;
        }
        iVar15 = (int)(fVar25 + fVar24 * 1.3421773e+08);
      }
      fVar25 = fVar24 * fVar20 + 384.0;
      fVar24 = fVar10;
      if ((int)fVar25 < 0x43c08000) {
        fVar24 = fVar25;
      }
      sVar1 = sVar11;
      if (0x43bf7fff < (int)fVar25) {
        sVar1 = SUB42(fVar24,0);
      }
      param_1[3] = sVar1;
      fVar24 = param_3[4];
      if (fVar24 <= -16.0) {
        iVar16 = -0x80000000;
      }
      else if (16.0 <= fVar24) {
        iVar16 = 0x7fffffff;
      }
      else {
        fVar25 = 0.5;
        if (fVar24 * 1.3421773e+08 <= 0.0) {
          fVar25 = -0.5;
        }
        iVar16 = (int)(fVar25 + fVar24 * 1.3421773e+08);
      }
      fVar25 = fVar24 * fVar20 + 384.0;
      fVar24 = fVar10;
      if ((int)fVar25 < 0x43c08000) {
        fVar24 = fVar25;
      }
      sVar1 = sVar11;
      if (0x43bf7fff < (int)fVar25) {
        sVar1 = SUB42(fVar24,0);
      }
      param_1[4] = sVar1;
      fVar24 = param_3[5];
      if (fVar24 <= -16.0) {
        iVar17 = -0x80000000;
      }
      else if (16.0 <= fVar24) {
        iVar17 = 0x7fffffff;
      }
      else {
        fVar25 = 0.5;
        if (fVar24 * 1.3421773e+08 <= 0.0) {
          fVar25 = -0.5;
        }
        iVar17 = (int)(fVar25 + fVar24 * 1.3421773e+08);
      }
      fVar25 = fVar24 * fVar20 + 384.0;
      fVar24 = fVar10;
      if ((int)fVar25 < 0x43c08000) {
        fVar24 = fVar25;
      }
      if (0x43bf7fff < (int)fVar25) {
        sVar11 = SUB42(fVar24,0);
      }
      param_1[5] = sVar11;
      fVar24 = param_3[6];
      if (fVar24 <= -16.0) {
        iVar18 = -0x80000000;
      }
      else if (16.0 <= fVar24) {
        iVar18 = 0x7fffffff;
      }
      else {
        fVar25 = 0.5;
        if (fVar24 * 1.3421773e+08 <= 0.0) {
          fVar25 = -0.5;
        }
        iVar18 = (int)(fVar25 + fVar24 * 1.3421773e+08);
      }
      fVar25 = fVar24 * fVar20 + 384.0;
      fVar24 = fVar10;
      if ((int)fVar25 < 0x43c08000) {
        fVar24 = fVar25;
      }
      sVar1 = -0x8000;
      if (0x43bf7fff < (int)fVar25) {
        sVar1 = SUB42(fVar24,0);
      }
      param_1[6] = sVar1;
      fVar24 = param_3[7];
      if (fVar24 <= -16.0) {
        iVar19 = -0x80000000;
      }
      else if (16.0 <= fVar24) {
        iVar19 = 0x7fffffff;
      }
      else {
        fVar25 = 0.5;
        if (fVar24 * 1.3421773e+08 <= 0.0) {
          fVar25 = -0.5;
        }
        iVar19 = (int)(fVar25 + fVar24 * 1.3421773e+08);
      }
      fVar25 = fVar24 * fVar20 + 384.0;
      iVar19 = iVar19 + iVar18 + iVar17 + iVar16 + iVar15 + iVar14 + iVar13 + iVar12;
      fVar24 = fVar10;
      if ((int)fVar25 < 0x43c08000) {
        fVar24 = fVar25;
      }
      sVar1 = -0x8000;
      if (0x43bf7fff < (int)fVar25) {
        sVar1 = SUB42(fVar24,0);
      }
      param_1[7] = sVar1;
      iVar12 = iVar19 + 7;
      if (-1 < iVar19) {
        iVar12 = iVar19;
      }
      param_3 = param_3 + 8;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + (iVar12 >> 0xf) * (int)param_6;
      param_1 = param_1 + 8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

