
/* void cocos2d::volumeRampMulti<4, 4, float, float, float, int, int>(float*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<4,4,float,float,float,int,int>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_3 * fVar7;
      param_1[1] = param_3[1] * *param_5;
      param_1[2] = param_3[2] * *param_5;
      pfVar1 = param_3 + 3;
      param_3 = param_3 + 4;
      param_1[3] = *pfVar1 * *param_5;
      param_1 = param_1 + 4;
      fVar7 = *param_6 + *param_5;
      *param_5 = fVar7;
    } while (param_2 != 0);
  }
  else {
                    /* catch() { ... } // from try @ 00a8bc6c with catch @ 00a8bd64 */
                    /* catch() { ... } // from try @ 00a8bc60 with catch @ 00a8bd68 */
                    /* catch() { ... } // from try @ 00a8bc40 with catch @ 00a8bd6c */
    do {
      fVar8 = *param_3;
      if (fVar8 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else {
                    /* catch() { ... } // from try @ 00a8bc78 with catch @ 00a8bd7c */
        if (16.0 <= fVar8) {
          iVar3 = 0x7fffffff;
        }
        else {
          fVar2 = 0.5;
          if (fVar8 * 1.3421773e+08 <= 0.0) {
            fVar2 = -0.5;
          }
          iVar3 = (int)(fVar2 + fVar8 * 1.3421773e+08);
        }
      }
      *param_1 = fVar8 * fVar7;
      fVar7 = param_3[1];
      if (fVar7 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar7) {
        iVar4 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8bdd4 to 00b8be27 has its CatchHandler @ 00a8bdd4
                       catch() { ... } // from try @ 00a8bdd4 with catch @ 00a8bdd4
                       catch() { ... } // from try @ 00a8bed8 with catch @ 00a8bdd4 */
        fVar8 = 0.5;
        if (fVar7 * 1.3421773e+08 <= 0.0) {
          fVar8 = -0.5;
        }
        iVar4 = (int)(fVar8 + fVar7 * 1.3421773e+08);
      }
      param_1[1] = fVar7 * *param_5;
      fVar7 = param_3[2];
      if (fVar7 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else if (16.0 <= fVar7) {
        iVar5 = 0x7fffffff;
      }
      else {
        fVar8 = 0.5;
        if (fVar7 * 1.3421773e+08 <= 0.0) {
          fVar8 = -0.5;
        }
                    /* try { // try from 00a8be28 to 00b8be3f has its CatchHandler @ 00a8bf54 */
        iVar5 = (int)(fVar8 + fVar7 * 1.3421773e+08);
      }
      param_1[2] = fVar7 * *param_5;
                    /* try { // try from 00a8be48 to 00b8be53 has its CatchHandler @ 00a8bf50 */
      fVar7 = param_3[3];
                    /* try { // try from 00a8be54 to 00b8be5f has its CatchHandler @ 00a8bf4c */
      if (fVar7 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else {
                    /* try { // try from 00a8be60 to 00b8bed7 has its CatchHandler @ 00a8bf64 */
        if (16.0 <= fVar7) {
          iVar6 = 0x7fffffff;
        }
        else {
          fVar8 = 0.5;
          if (fVar7 * 1.3421773e+08 <= 0.0) {
            fVar8 = -0.5;
          }
          iVar6 = (int)(fVar8 + fVar7 * 1.3421773e+08);
        }
      }
      param_1[3] = fVar7 * *param_5;
      iVar6 = iVar6 + iVar5 + iVar4 + iVar3;
      fVar7 = *param_6 + *param_5;
      *param_5 = fVar7;
      iVar3 = iVar6 + 3;
      if (-1 < iVar6) {
        iVar3 = iVar6;
      }
      *param_4 = *param_4 + (*param_7 >> 0x10) * (iVar3 >> 0xe);
      param_3 = param_3 + 4;
      param_2 = param_2 - 1;
                    /* try { // try from 00a8bed8 to 00b8bfbb has its CatchHandler @ 00a8bdd4 */
      param_1 = param_1 + 4;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

