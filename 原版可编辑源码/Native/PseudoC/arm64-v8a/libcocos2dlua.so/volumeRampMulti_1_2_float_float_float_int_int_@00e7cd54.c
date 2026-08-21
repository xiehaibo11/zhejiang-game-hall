
/* void cocos2d::experimental::volumeRampMulti<1, 2, float, float, float, int, int>(float*, unsigned
   long, float const*, int*, float*, float const*, int*, int) */

void cocos2d::experimental::volumeRampMulti<1,2,float,float,float,int,int>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * *param_5;
      *param_5 = *param_6 + *param_5;
      param_1[1] = param_1[1] + *param_3 * param_5[1];
      param_1 = param_1 + 2;
      param_5[1] = param_6[1] + param_5[1];
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar4 = *param_3;
      if (fVar4 <= -16.0) {
        iVar2 = -0x80000000;
      }
      else if (16.0 <= fVar4) {
        iVar2 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar4 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar2 = (int)(fVar1 + fVar4 * 1.3421773e+08);
      }
      *param_1 = fVar4 * *param_5 + *param_1;
      *param_5 = *param_6 + *param_5;
      fVar4 = *param_3;
      if (fVar4 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar4) {
        iVar3 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar4 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar3 = (int)(fVar1 + fVar4 * 1.3421773e+08);
      }
      iVar3 = iVar3 + iVar2;
      param_1[1] = fVar4 * param_5[1] + param_1[1];
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      param_3 = param_3 + 1;
      param_5[1] = param_6[1] + param_5[1];
      param_2 = param_2 - 1;
      param_1 = param_1 + 2;
      *param_4 = *param_4 + (*param_7 >> 0x10) * (iVar3 >> 0xd);
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

