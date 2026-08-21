
/* void cocos2d::experimental::volumeRampMulti<4, 4, short, float, float, int, int>(short*, unsigned
   long, float const*, int*, float*, float const*, int*, int) */

void cocos2d::experimental::volumeRampMulti<4,4,short,float,float,int,int>
               (short *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  short sVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ushort uVar14;
  undefined2 uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  fVar10 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      fVar11 = (float)*(undefined8 *)param_3 * fVar10 + 384.0;
      fVar13 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar10 + 384.0;
      uVar15 = (undefined2)((uint)fVar13 >> 0x10);
      fVar12 = (float)*(undefined8 *)(param_3 + 2) * fVar10 + 384.0;
      fVar16 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar10 + 384.0;
      auVar18._0_4_ = -(uint)(0x43c07fff < (int)fVar11);
      auVar18._4_4_ = -(uint)(0x43c07fff < (int)fVar13);
      auVar18._8_4_ = -(uint)(0x43c07fff < (int)fVar12);
      auVar18._12_4_ = -(uint)(0x43c07fff < (int)fVar16);
      auVar17._0_4_ = -(uint)((int)fVar11 < 0x43bf8000);
      auVar17._4_4_ = -(uint)((int)fVar13 < 0x43bf8000);
      auVar17._8_4_ = -(uint)((int)fVar12 < 0x43bf8000);
      auVar17._12_4_ = -(uint)((int)fVar16 < 0x43bf8000);
      auVar2._8_4_ = 0x7fff;
      auVar2._0_8_ = 0x7fff00007fff;
      auVar2._12_4_ = 0x7fff;
      auVar4._4_2_ = SUB42(fVar13,0);
      auVar4._0_4_ = fVar11;
      auVar4._6_2_ = uVar15;
      auVar4._8_4_ = fVar12;
      auVar4._12_4_ = fVar16;
      auVar19._4_2_ = SUB42(fVar13,0);
      auVar19._0_4_ = fVar11;
      auVar19._6_2_ = uVar15;
      auVar19._8_4_ = fVar12;
      auVar19._12_4_ = fVar16;
      auVar19 = auVar19 ^ (auVar4 ^ auVar2) & auVar18;
      auVar3._8_4_ = 0x8000;
      auVar3._0_8_ = 0x800000008000;
      auVar3._12_4_ = 0x8000;
      auVar19 = auVar19 ^ (auVar19 ^ auVar3) & auVar17;
      *(ulong *)param_1 =
           CONCAT26(auVar19._12_2_,CONCAT24(auVar19._8_2_,CONCAT22(auVar19._4_2_,auVar19._0_2_)));
      fVar10 = *param_6 + fVar10;
      *param_5 = fVar10;
      param_1 = param_1 + 4;
      param_3 = param_3 + 4;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar11 = *param_3;
      if (fVar11 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar6 = 0x7fffffff;
      }
      else {
        uVar14 = 0x3fe0;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          uVar14 = 0xbfe0;
        }
        iVar6 = (int)((double)((ulong)uVar14 << 0x30) + (double)(fVar11 * 1.3421773e+08));
      }
      fVar12 = fVar11 * fVar10 + 384.0;
      fVar11 = 4.59163e-41;
      fVar13 = fVar11;
      if ((int)fVar12 < 0x43c08000) {
        fVar13 = fVar12;
      }
      sVar5 = -0x8000;
      sVar1 = sVar5;
      if (0x43bf7fff < (int)fVar12) {
        sVar1 = SUB42(fVar13,0);
      }
      *param_1 = sVar1;
      fVar13 = param_3[1];
      if (fVar13 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar13) {
        iVar7 = 0x7fffffff;
      }
      else {
        uVar14 = 0x3fe0;
        if (fVar13 * 1.3421773e+08 <= 0.0) {
          uVar14 = 0xbfe0;
        }
        iVar7 = (int)((double)((ulong)uVar14 << 0x30) + (double)(fVar13 * 1.3421773e+08));
      }
      fVar12 = fVar13 * fVar10 + 384.0;
      fVar13 = fVar11;
      if ((int)fVar12 < 0x43c08000) {
        fVar13 = fVar12;
      }
      sVar1 = sVar5;
      if (0x43bf7fff < (int)fVar12) {
        sVar1 = SUB42(fVar13,0);
      }
      param_1[1] = sVar1;
      fVar13 = param_3[2];
      if (fVar13 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar13) {
        iVar8 = 0x7fffffff;
      }
      else {
        uVar14 = 0x3fe0;
        if (fVar13 * 1.3421773e+08 <= 0.0) {
          uVar14 = 0xbfe0;
        }
        iVar8 = (int)((double)((ulong)uVar14 << 0x30) + (double)(fVar13 * 1.3421773e+08));
      }
      fVar12 = fVar13 * fVar10 + 384.0;
      fVar13 = fVar11;
      if ((int)fVar12 < 0x43c08000) {
        fVar13 = fVar12;
      }
      if (0x43bf7fff < (int)fVar12) {
        sVar5 = SUB42(fVar13,0);
      }
      param_1[2] = sVar5;
      fVar13 = param_3[3];
      if (fVar13 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar13) {
        iVar9 = 0x7fffffff;
      }
      else {
        uVar14 = 0x3fe0;
        if (fVar13 * 1.3421773e+08 <= 0.0) {
          uVar14 = 0xbfe0;
        }
        iVar9 = (int)((double)((ulong)uVar14 << 0x30) + (double)(fVar13 * 1.3421773e+08));
      }
      fVar13 = fVar13 * fVar10 + 384.0;
      if ((int)fVar13 < 0x43c08000) {
        fVar11 = fVar13;
      }
      sVar1 = -0x8000;
      if (0x43bf7fff < (int)fVar13) {
        sVar1 = SUB42(fVar11,0);
      }
      param_1[3] = sVar1;
      iVar9 = iVar9 + iVar8 + iVar7 + iVar6;
      fVar10 = *param_6 + fVar10;
      *param_5 = fVar10;
      iVar6 = iVar9 + 3;
      if (-1 < iVar9) {
        iVar6 = iVar9;
      }
      *param_4 = *param_4 + (*param_7 >> 0x10) * (iVar6 >> 0xe);
      param_3 = param_3 + 4;
      param_2 = param_2 - 1;
      param_1 = param_1 + 4;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

