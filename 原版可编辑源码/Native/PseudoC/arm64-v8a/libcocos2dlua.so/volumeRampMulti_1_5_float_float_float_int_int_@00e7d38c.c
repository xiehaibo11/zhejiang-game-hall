
/* void cocos2d::experimental::volumeRampMulti<1, 5, float, float, float, int, int>(float*, unsigned
   long, float const*, int*, float*, float const*, int*, int) */

void cocos2d::experimental::volumeRampMulti<1,5,float,float,float,int,int>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * *param_5;
      *param_5 = *param_6 + *param_5;
      param_1[1] = param_1[1] + *param_3 * param_5[1];
      param_5[1] = param_6[1] + param_5[1];
      param_1[2] = param_1[2] + *param_3 * param_5[2];
      param_5[2] = param_6[2] + param_5[2];
      param_1[3] = param_1[3] + *param_3 * param_5[3];
      param_5[3] = param_6[3] + param_5[3];
      param_1[4] = param_1[4] + *param_3 * param_5[4];
      param_1 = param_1 + 5;
      param_5[4] = param_6[4] + param_5[4];
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar7 = *param_3;
      if (fVar7 <= -16.0) {
        iVar2 = -0x80000000;
      }
      else if (16.0 <= fVar7) {
        iVar2 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar7 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar2 = (int)(fVar1 + fVar7 * 1.3421773e+08);
      }
      *param_1 = fVar7 * *param_5 + *param_1;
      *param_5 = *param_6 + *param_5;
      fVar7 = *param_3;
      if (fVar7 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar7) {
        iVar3 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar7 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar3 = (int)(fVar1 + fVar7 * 1.3421773e+08);
      }
      param_1[1] = fVar7 * param_5[1] + param_1[1];
      param_5[1] = param_6[1] + param_5[1];
      fVar7 = *param_3;
      if (fVar7 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar7) {
        iVar4 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar7 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar4 = (int)(fVar1 + fVar7 * 1.3421773e+08);
      }
      param_1[2] = fVar7 * param_5[2] + param_1[2];
      param_5[2] = param_6[2] + param_5[2];
      fVar7 = *param_3;
      if (fVar7 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else if (16.0 <= fVar7) {
        iVar5 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar7 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar5 = (int)(fVar1 + fVar7 * 1.3421773e+08);
      }
      param_1[3] = fVar7 * param_5[3] + param_1[3];
      param_5[3] = param_6[3] + param_5[3];
      fVar7 = *param_3;
      if (fVar7 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else if (16.0 <= fVar7) {
        iVar6 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar7 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar6 = (int)(fVar1 + fVar7 * 1.3421773e+08);
      }
      param_1[4] = fVar7 * param_5[4] + param_1[4];
      param_5[4] = param_6[4] + param_5[4];
      param_3 = param_3 + 1;
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) * ((iVar6 + iVar5 + iVar4 + iVar3 + iVar2) / 5 >> 0xc);
      param_2 = param_2 - 1;
      param_1 = param_1 + 5;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

