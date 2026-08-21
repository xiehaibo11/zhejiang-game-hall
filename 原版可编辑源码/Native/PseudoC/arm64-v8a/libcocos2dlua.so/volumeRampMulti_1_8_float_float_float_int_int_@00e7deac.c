
/* void cocos2d::experimental::volumeRampMulti<1, 8, float, float, float, int, int>(float*, unsigned
   long, float const*, int*, float*, float const*, int*, int) */

void cocos2d::experimental::volumeRampMulti<1,8,float,float,float,int,int>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  float fVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
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
      param_5[4] = param_6[4] + param_5[4];
      param_1[5] = param_1[5] + *param_3 * param_5[5];
      param_5[5] = param_6[5] + param_5[5];
      param_1[6] = param_1[6] + *param_3 * param_5[6];
      param_5[6] = param_6[6] + param_5[6];
      param_1[7] = param_1[7] + *param_3 * param_5[7];
      param_1 = param_1 + 8;
      param_5[7] = param_6[7] + param_5[7];
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  else {
    do {
      lVar2 = 0;
      iVar3 = 0;
      do {
        fVar5 = *param_3;
        if (fVar5 <= -16.0) {
          iVar4 = -0x80000000;
        }
        else if (16.0 <= fVar5) {
          iVar4 = 0x7fffffff;
        }
        else {
          fVar1 = 0.5;
          if (fVar5 * 1.3421773e+08 <= 0.0) {
            fVar1 = -0.5;
          }
          iVar4 = (int)(fVar1 + fVar5 * 1.3421773e+08);
        }
        iVar3 = iVar4 + iVar3;
        *(float *)((long)param_1 + lVar2) =
             fVar5 * *(float *)((long)param_5 + lVar2) + *(float *)((long)param_1 + lVar2);
        *(float *)((long)param_5 + lVar2) =
             *(float *)((long)param_6 + lVar2) + *(float *)((long)param_5 + lVar2);
        lVar2 = lVar2 + 4;
      } while (lVar2 != 0x20);
      iVar4 = iVar3 + 7;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      *param_4 = *param_4 + (*param_7 >> 0x10) * (iVar4 >> 0xf);
      param_3 = param_3 + 1;
      param_2 = param_2 - 1;
      param_1 = param_1 + 8;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

