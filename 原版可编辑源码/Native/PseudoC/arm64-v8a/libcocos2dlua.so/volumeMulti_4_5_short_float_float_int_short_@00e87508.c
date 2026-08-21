
/* void cocos2d::experimental::volumeMulti<4, 5, short, float, float, int, short>(short*, unsigned
   long, float const*, int*, float const*, short) */

void cocos2d::experimental::volumeMulti<4,5,short,float,float,int,short>
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
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined2 uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  fVar12 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      fVar14 = (float)*(undefined8 *)param_3 * fVar12 + 384.0;
      fVar13 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar12 + 384.0;
      uVar16 = (undefined2)((uint)fVar13 >> 0x10);
      fVar15 = (float)*(undefined8 *)(param_3 + 2) * fVar12 + 384.0;
      fVar17 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar12 + 384.0;
      auVar19._0_4_ = -(uint)(0x43c07fff < (int)fVar14);
      auVar19._4_4_ = -(uint)(0x43c07fff < (int)fVar13);
      auVar19._8_4_ = -(uint)(0x43c07fff < (int)fVar15);
      auVar19._12_4_ = -(uint)(0x43c07fff < (int)fVar17);
      auVar18._0_4_ = -(uint)((int)fVar14 < 0x43bf8000);
      auVar18._4_4_ = -(uint)((int)fVar13 < 0x43bf8000);
      auVar18._8_4_ = -(uint)((int)fVar15 < 0x43bf8000);
      auVar18._12_4_ = -(uint)((int)fVar17 < 0x43bf8000);
      auVar3._8_4_ = 0x7fff;
      auVar3._0_8_ = 0x7fff00007fff;
      auVar3._12_4_ = 0x7fff;
      auVar5._4_2_ = SUB42(fVar13,0);
      auVar5._0_4_ = fVar14;
      auVar5._6_2_ = uVar16;
      auVar5._8_4_ = fVar15;
      auVar5._12_4_ = fVar17;
      auVar20._4_2_ = SUB42(fVar13,0);
      auVar20._0_4_ = fVar14;
      auVar20._6_2_ = uVar16;
      auVar20._8_4_ = fVar15;
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
      fVar13 = *pfVar1 * fVar12 + 384.0;
      fVar14 = 4.59163e-41;
      if ((int)fVar13 < 0x43c08000) {
        fVar14 = fVar13;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar13) {
        sVar2 = SUB42(fVar14,0);
      }
      param_2 = param_2 - 1;
      param_1[4] = sVar2;
      param_1 = param_1 + 5;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar14 = *param_3;
      if (fVar14 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar14) {
        iVar7 = 0x7fffffff;
      }
      else {
        fVar13 = 0.5;
        if (fVar14 * 1.3421773e+08 <= 0.0) {
          fVar13 = -0.5;
        }
        iVar7 = (int)(fVar13 + fVar14 * 1.3421773e+08);
      }
      fVar15 = fVar14 * fVar12 + 384.0;
      fVar13 = 4.59163e-41;
      fVar14 = fVar13;
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
        fVar15 = 0.5;
        if (fVar14 * 1.3421773e+08 <= 0.0) {
          fVar15 = -0.5;
        }
        iVar8 = (int)(fVar15 + fVar14 * 1.3421773e+08);
      }
      fVar15 = fVar14 * fVar12 + 384.0;
      fVar14 = fVar13;
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
        fVar15 = 0.5;
        if (fVar14 * 1.3421773e+08 <= 0.0) {
          fVar15 = -0.5;
        }
        iVar9 = (int)(fVar15 + fVar14 * 1.3421773e+08);
      }
      fVar15 = fVar14 * fVar12 + 384.0;
      fVar14 = fVar13;
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
        fVar15 = 0.5;
        if (fVar14 * 1.3421773e+08 <= 0.0) {
          fVar15 = -0.5;
        }
        iVar10 = (int)(fVar15 + fVar14 * 1.3421773e+08);
      }
      fVar14 = fVar14 * fVar12 + 384.0;
      if ((int)fVar14 < 0x43c08000) {
        fVar13 = fVar14;
      }
      if (0x43bf7fff < (int)fVar14) {
        sVar6 = SUB42(fVar13,0);
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
        fVar13 = 0.5;
        if (fVar14 * 1.3421773e+08 <= 0.0) {
          fVar13 = -0.5;
        }
        iVar11 = (int)(fVar13 + fVar14 * 1.3421773e+08);
      }
      fVar13 = fVar14 * fVar12 + 384.0;
      fVar14 = 4.59163e-41;
      if ((int)fVar13 < 0x43c08000) {
        fVar14 = fVar13;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar13) {
        sVar2 = SUB42(fVar14,0);
      }
      param_1[4] = sVar2;
      param_3 = param_3 + 5;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + ((iVar11 + iVar10 + iVar9 + iVar8 + iVar7) / 5 >> 0xc) * (int)param_6;
      param_1 = param_1 + 5;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

