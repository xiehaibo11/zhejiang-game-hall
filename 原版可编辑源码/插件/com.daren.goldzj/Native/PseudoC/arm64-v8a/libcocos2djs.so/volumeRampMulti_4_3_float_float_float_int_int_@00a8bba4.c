
/* void cocos2d::volumeRampMulti<4, 3, float, float, float, int, int>(float*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<4,3,float,float,float,int,int>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_3 * fVar6;
      param_1[1] = param_3[1] * *param_5;
      pfVar1 = param_3 + 2;
      param_3 = param_3 + 3;
      param_1[2] = *pfVar1 * *param_5;
      param_1 = param_1 + 3;
      fVar6 = *param_6 + *param_5;
      *param_5 = fVar6;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar7 = *param_3;
      if (fVar7 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar7) {
        iVar3 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8bbec to 00b8bc3f has its CatchHandler @ 00a8bbec
                       catch() { ... } // from try @ 00a8bbec with catch @ 00a8bbec
                       catch() { ... } // from try @ 00a8bcf0 with catch @ 00a8bbec */
        fVar2 = 0.5;
        if (fVar7 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar3 = (int)(fVar2 + fVar7 * 1.3421773e+08);
      }
      *param_1 = fVar7 * fVar6;
      fVar6 = param_3[1];
      if (fVar6 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar6) {
        iVar4 = 0x7fffffff;
      }
      else {
        fVar7 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar7 = -0.5;
        }
        iVar4 = (int)(fVar7 + fVar6 * 1.3421773e+08);
                    /* try { // try from 00a8bc40 to 00b8bc57 has its CatchHandler @ 00a8bd6c */
      }
      param_1[1] = fVar6 * *param_5;
      fVar6 = param_3[2];
                    /* try { // try from 00a8bc60 to 00b8bc6b has its CatchHandler @ 00a8bd68 */
      if (fVar6 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else {
                    /* try { // try from 00a8bc6c to 00b8bc77 has its CatchHandler @ 00a8bd64 */
        if (16.0 <= fVar6) {
          iVar5 = 0x7fffffff;
        }
        else {
                    /* try { // try from 00a8bc78 to 00b8bcef has its CatchHandler @ 00a8bd7c */
          fVar7 = 0.5;
          if (fVar6 * 1.3421773e+08 <= 0.0) {
            fVar7 = -0.5;
          }
          iVar5 = (int)(fVar7 + fVar6 * 1.3421773e+08);
        }
      }
      param_1[2] = fVar6 * *param_5;
      fVar6 = *param_6 + *param_5;
      *param_5 = fVar6;
      *param_4 = *param_4 + (*param_7 >> 0x10) * ((iVar5 + iVar4 + iVar3) / 3 >> 0xc);
      param_2 = param_2 - 1;
      param_3 = param_3 + 3;
      param_1 = param_1 + 3;
                    /* try { // try from 00a8bcf0 to 00b8bdd3 has its CatchHandler @ 00a8bbec */
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

