
/* void cocos2d::experimental::volumeRampMulti<3, 8, float, float, float, int, int>(float*, unsigned
   long, float const*, int*, float*, float const*, int*, int) */

void cocos2d::experimental::volumeRampMulti<3,8,float,float,float,int,int>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  
  fVar11 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * fVar11;
      param_1[1] = param_1[1] + param_3[1] * *param_5;
      param_1[2] = param_1[2] + param_3[2] * *param_5;
      param_1[3] = param_1[3] + param_3[3] * *param_5;
      param_1[4] = param_1[4] + param_3[4] * *param_5;
      param_1[5] = param_1[5] + param_3[5] * *param_5;
      param_1[6] = param_1[6] + param_3[6] * *param_5;
      pfVar1 = param_3 + 7;
      param_3 = param_3 + 8;
      param_1[7] = param_1[7] + *pfVar1 * *param_5;
      param_1 = param_1 + 8;
      fVar11 = *param_6 + *param_5;
      *param_5 = fVar11;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar12 = *param_3;
      if (fVar12 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar12) {
        iVar3 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar12 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar3 = (int)(fVar2 + fVar12 * 1.3421773e+08);
      }
      *param_1 = fVar12 * fVar11 + *param_1;
      fVar11 = param_3[1];
      if (fVar11 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar4 = 0x7fffffff;
      }
      else {
        fVar12 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar12 = -0.5;
        }
        iVar4 = (int)(fVar12 + fVar11 * 1.3421773e+08);
      }
      param_1[1] = fVar11 * *param_5 + param_1[1];
      fVar11 = param_3[2];
      if (fVar11 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar5 = 0x7fffffff;
      }
      else {
        fVar12 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar12 = -0.5;
        }
        iVar5 = (int)(fVar12 + fVar11 * 1.3421773e+08);
      }
      param_1[2] = fVar11 * *param_5 + param_1[2];
      fVar11 = param_3[3];
      if (fVar11 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar6 = 0x7fffffff;
      }
      else {
        fVar12 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar12 = -0.5;
        }
        iVar6 = (int)(fVar12 + fVar11 * 1.3421773e+08);
      }
      param_1[3] = fVar11 * *param_5 + param_1[3];
      fVar11 = param_3[4];
      if (fVar11 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar7 = 0x7fffffff;
      }
      else {
        fVar12 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar12 = -0.5;
        }
        iVar7 = (int)(fVar12 + fVar11 * 1.3421773e+08);
      }
      param_1[4] = fVar11 * *param_5 + param_1[4];
      fVar11 = param_3[5];
      if (fVar11 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar8 = 0x7fffffff;
      }
      else {
        fVar12 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar12 = -0.5;
        }
        iVar8 = (int)(fVar12 + fVar11 * 1.3421773e+08);
      }
      param_1[5] = fVar11 * *param_5 + param_1[5];
      fVar11 = param_3[6];
      if (fVar11 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar9 = 0x7fffffff;
      }
      else {
        fVar12 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar12 = -0.5;
        }
        iVar9 = (int)(fVar12 + fVar11 * 1.3421773e+08);
      }
      param_1[6] = fVar11 * *param_5 + param_1[6];
      fVar11 = param_3[7];
      if (fVar11 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar10 = 0x7fffffff;
      }
      else {
        fVar12 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar12 = -0.5;
        }
        iVar10 = (int)(fVar12 + fVar11 * 1.3421773e+08);
      }
      iVar10 = iVar10 + iVar9 + iVar8 + iVar7 + iVar6 + iVar5 + iVar4 + iVar3;
      param_1[7] = fVar11 * *param_5 + param_1[7];
      iVar3 = iVar10 + 7;
      if (-1 < iVar10) {
        iVar3 = iVar10;
      }
      fVar11 = *param_6 + *param_5;
      *param_5 = fVar11;
      param_3 = param_3 + 8;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + (*param_7 >> 0x10) * (iVar3 >> 0xf);
      param_1 = param_1 + 8;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

