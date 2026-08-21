
/* void cocos2d::experimental::volumeMulti<4, 4, float, float, float, int, short>(float*, unsigned
   long, float const*, int*, float const*, short) */

void cocos2d::experimental::volumeMulti<4,4,float,float,float,int,short>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (param_4 == (int *)0x0) {
    if (3 < param_2) {
      if ((param_3 + param_2 * 4 <= param_1 || param_1 + param_2 * 4 <= param_3) &&
         ((float *)((long)param_5 + 1U) <= param_1 || param_1 + param_2 * 4 <= param_5)) {
        uVar8 = param_2 & 0xfffffffffffffffc;
        pfVar1 = param_3 + uVar8 * 4;
        pfVar2 = param_1 + uVar8 * 4;
        uVar9 = uVar8;
        do {
          fVar25 = *param_3;
          fVar13 = param_3[1];
          fVar17 = param_3[2];
          fVar21 = param_3[3];
          fVar10 = param_3[4];
          fVar14 = param_3[5];
          fVar18 = param_3[6];
          fVar22 = param_3[7];
          fVar11 = param_3[8];
          fVar15 = param_3[9];
          fVar19 = param_3[10];
          fVar23 = param_3[0xb];
          fVar12 = param_3[0xc];
          fVar16 = param_3[0xd];
          fVar20 = param_3[0xe];
          fVar24 = param_3[0xf];
          param_3 = param_3 + 0x10;
          fVar26 = *param_5;
          uVar9 = uVar9 - 4;
          *param_1 = fVar25 * fVar26;
          param_1[1] = fVar13 * fVar26;
          param_1[2] = fVar17 * fVar26;
          param_1[3] = fVar21 * fVar26;
          param_1[4] = fVar10 * fVar26;
          param_1[5] = fVar14 * fVar26;
          param_1[6] = fVar18 * fVar26;
          param_1[7] = fVar22 * fVar26;
          param_1[8] = fVar11 * fVar26;
          param_1[9] = fVar15 * fVar26;
          param_1[10] = fVar19 * fVar26;
          param_1[0xb] = fVar23 * fVar26;
          param_1[0xc] = fVar12 * fVar26;
          param_1[0xd] = fVar16 * fVar26;
          param_1[0xe] = fVar20 * fVar26;
          param_1[0xf] = fVar24 * fVar26;
          param_1 = param_1 + 0x10;
        } while (uVar9 != 0);
        bVar3 = uVar8 == param_2;
        param_3 = pfVar1;
        param_2 = param_2 - uVar8;
        param_1 = pfVar2;
        if (bVar3) {
          return;
        }
      }
    }
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_3 * *param_5;
      param_1[1] = param_3[1] * *param_5;
      param_1[2] = param_3[2] * *param_5;
      pfVar1 = param_3 + 3;
      param_3 = param_3 + 4;
      param_1[3] = *pfVar1 * *param_5;
      param_1 = param_1 + 4;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar25 = *param_3;
      if (fVar25 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar25) {
        iVar4 = 0x7fffffff;
      }
      else {
        fVar10 = 0.5;
        if (fVar25 * 1.3421773e+08 <= 0.0) {
          fVar10 = -0.5;
        }
        iVar4 = (int)(fVar10 + fVar25 * 1.3421773e+08);
      }
      *param_1 = fVar25 * *param_5;
      fVar25 = param_3[1];
      if (fVar25 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else if (16.0 <= fVar25) {
        iVar5 = 0x7fffffff;
      }
      else {
        fVar10 = 0.5;
        if (fVar25 * 1.3421773e+08 <= 0.0) {
          fVar10 = -0.5;
        }
        iVar5 = (int)(fVar10 + fVar25 * 1.3421773e+08);
      }
      param_1[1] = fVar25 * *param_5;
      fVar25 = param_3[2];
      if (fVar25 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else if (16.0 <= fVar25) {
        iVar6 = 0x7fffffff;
      }
      else {
        fVar10 = 0.5;
        if (fVar25 * 1.3421773e+08 <= 0.0) {
          fVar10 = -0.5;
        }
        iVar6 = (int)(fVar10 + fVar25 * 1.3421773e+08);
      }
      param_1[2] = fVar25 * *param_5;
      fVar25 = param_3[3];
      if (fVar25 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar25) {
        iVar7 = 0x7fffffff;
      }
      else {
        fVar10 = 0.5;
        if (fVar25 * 1.3421773e+08 <= 0.0) {
          fVar10 = -0.5;
        }
        iVar7 = (int)(fVar10 + fVar25 * 1.3421773e+08);
      }
      param_1[3] = fVar25 * *param_5;
      iVar7 = iVar7 + iVar6 + iVar5 + iVar4;
      iVar4 = iVar7 + 3;
      if (-1 < iVar7) {
        iVar4 = iVar7;
      }
      param_3 = param_3 + 4;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + (iVar4 >> 0xe) * (int)param_6;
      param_1 = param_1 + 4;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

