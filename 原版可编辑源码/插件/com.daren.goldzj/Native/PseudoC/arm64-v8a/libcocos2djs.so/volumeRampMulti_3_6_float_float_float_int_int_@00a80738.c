
/* void cocos2d::volumeRampMulti<3, 6, float, float, float, int, int>(float*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<3,6,float,float,float,int,int>
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
  float fVar9;
  float fVar10;
  
                    /* try { // try from 00a80738 to 00b8078b has its CatchHandler @ 00a80738
                       catch() { ... } // from try @ 00a80738 with catch @ 00a80738
                       catch() { ... } // from try @ 00a80908 with catch @ 00a80738 */
  fVar9 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * fVar9;
      param_1[1] = param_1[1] + param_3[1] * *param_5;
      param_1[2] = param_1[2] + param_3[2] * *param_5;
                    /* try { // try from 00a809ec to 00b80a43 has its CatchHandler @ 00a809ec
                       catch() { ... } // from try @ 00a809ec with catch @ 00a809ec
                       catch() { ... } // from try @ 00a80bac with catch @ 00a809ec */
      param_1[3] = param_1[3] + param_3[3] * *param_5;
      param_1[4] = param_1[4] + param_3[4] * *param_5;
      pfVar1 = param_3 + 5;
      param_3 = param_3 + 6;
      param_1[5] = param_1[5] + *pfVar1 * *param_5;
      param_1 = param_1 + 6;
      fVar9 = *param_6 + *param_5;
      *param_5 = fVar9;
                    /* try { // try from 00a80a44 to 00b80a5b has its CatchHandler @ 00a80c2c */
    } while (param_2 != 0);
  }
  else {
    do {
      fVar10 = *param_3;
      if (fVar10 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar10) {
        iVar3 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar10 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar3 = (int)(fVar2 + fVar10 * 1.3421773e+08);
                    /* try { // try from 00a8078c to 00b807a3 has its CatchHandler @ 00a80984 */
      }
      *param_1 = fVar10 * fVar9 + *param_1;
                    /* try { // try from 00a807ac to 00b807b7 has its CatchHandler @ 00a80980 */
      fVar9 = param_3[1];
                    /* try { // try from 00a807b8 to 00b807c3 has its CatchHandler @ 00a8097c */
      if (fVar9 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar4 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a807c4 to 00b80907 has its CatchHandler @ 00a80994 */
        fVar10 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar10 = -0.5;
        }
        iVar4 = (int)(fVar10 + fVar9 * 1.3421773e+08);
      }
      param_1[1] = fVar9 * *param_5 + param_1[1];
      fVar9 = param_3[2];
      if (fVar9 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar5 = 0x7fffffff;
      }
      else {
        fVar10 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar10 = -0.5;
        }
        iVar5 = (int)(fVar10 + fVar9 * 1.3421773e+08);
      }
      param_1[2] = fVar9 * *param_5 + param_1[2];
      fVar9 = param_3[3];
      if (fVar9 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar6 = 0x7fffffff;
      }
      else {
        fVar10 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar10 = -0.5;
        }
        iVar6 = (int)(fVar10 + fVar9 * 1.3421773e+08);
      }
      param_1[3] = fVar9 * *param_5 + param_1[3];
      fVar9 = param_3[4];
      if (fVar9 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar7 = 0x7fffffff;
      }
      else {
        fVar10 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar10 = -0.5;
        }
        iVar7 = (int)(fVar10 + fVar9 * 1.3421773e+08);
      }
      param_1[4] = fVar9 * *param_5 + param_1[4];
      fVar9 = param_3[5];
                    /* try { // try from 00a80908 to 00b809eb has its CatchHandler @ 00a80738 */
      if (fVar9 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar8 = 0x7fffffff;
      }
      else {
        fVar10 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar10 = -0.5;
        }
        iVar8 = (int)(fVar10 + fVar9 * 1.3421773e+08);
      }
      param_1[5] = fVar9 * *param_5 + param_1[5];
      fVar9 = *param_6 + *param_5;
      *param_5 = fVar9;
                    /* catch() { ... } // from try @ 00a807b8 with catch @ 00a8097c */
      param_2 = param_2 - 1;
                    /* catch() { ... } // from try @ 00a807ac with catch @ 00a80980 */
                    /* catch() { ... } // from try @ 00a8078c with catch @ 00a80984 */
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) * ((iVar8 + iVar7 + iVar6 + iVar5 + iVar4 + iVar3) / 6 >> 0xc);
      param_3 = param_3 + 6;
                    /* catch() { ... } // from try @ 00a807c4 with catch @ 00a80994 */
      param_1 = param_1 + 6;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

