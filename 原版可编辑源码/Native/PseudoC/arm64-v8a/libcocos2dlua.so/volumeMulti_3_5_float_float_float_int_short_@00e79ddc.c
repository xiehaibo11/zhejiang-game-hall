
/* void cocos2d::experimental::volumeMulti<3, 5, float, float, float, int, short>(float*, unsigned
   long, float const*, int*, float const*, short) */

void cocos2d::experimental::volumeMulti<3,5,float,float,float,int,short>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * *param_5;
      param_1[1] = param_1[1] + param_3[1] * *param_5;
      param_1[2] = param_1[2] + param_3[2] * *param_5;
      param_1[3] = param_1[3] + param_3[3] * *param_5;
      pfVar1 = param_3 + 4;
      param_3 = param_3 + 5;
      param_1[4] = param_1[4] + *pfVar1 * *param_5;
      param_1 = param_1 + 5;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar8 = *param_3;
      if (fVar8 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar3 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar3 = (int)(fVar2 + fVar8 * 1.3421773e+08);
      }
      *param_1 = fVar8 * *param_5 + *param_1;
      fVar8 = param_3[1];
      if (fVar8 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar4 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar4 = (int)(fVar2 + fVar8 * 1.3421773e+08);
      }
      param_1[1] = fVar8 * *param_5 + param_1[1];
      fVar8 = param_3[2];
      if (fVar8 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar5 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar5 = (int)(fVar2 + fVar8 * 1.3421773e+08);
      }
      param_1[2] = fVar8 * *param_5 + param_1[2];
      fVar8 = param_3[3];
      if (fVar8 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar6 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar6 = (int)(fVar2 + fVar8 * 1.3421773e+08);
      }
      param_1[3] = fVar8 * *param_5 + param_1[3];
      fVar8 = param_3[4];
      if (fVar8 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar7 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar7 = (int)(fVar2 + fVar8 * 1.3421773e+08);
      }
      param_1[4] = fVar8 * *param_5 + param_1[4];
      param_2 = param_2 - 1;
      param_3 = param_3 + 5;
      *param_4 = *param_4 + ((iVar7 + iVar6 + iVar5 + iVar4 + iVar3) / 5 >> 0xc) * (int)param_6;
      param_1 = param_1 + 5;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

