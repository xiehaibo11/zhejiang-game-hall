
/* void cocos2d::volumeMulti<3, 5, float, float, float, int, short>(float*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<3,5,float,float,float,int,short>
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
                    /* try { // try from 00a81f04 to 00b81ff3 has its CatchHandler @ 00a81c94 */
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
                    /* try { // try from 00a81cf0 to 00b81d07 has its CatchHandler @ 00a82100 */
        iVar3 = (int)(fVar2 + fVar8 * 1.3421773e+08);
      }
                    /* try { // try from 00a81d10 to 00b81d1b has its CatchHandler @ 00a820fc */
      *param_1 = fVar8 * *param_5 + *param_1;
      fVar8 = param_3[1];
                    /* try { // try from 00a81d1c to 00b81d27 has its CatchHandler @ 00a820f8 */
      if (fVar8 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else {
                    /* try { // try from 00a81d28 to 00b81d3f has its CatchHandler @ 00a82110 */
        if (16.0 <= fVar8) {
          iVar4 = 0x7fffffff;
        }
        else {
          fVar2 = 0.5;
          if (fVar8 * 1.3421773e+08 <= 0.0) {
            fVar2 = -0.5;
          }
          iVar4 = (int)(fVar2 + fVar8 * 1.3421773e+08);
        }
      }
      param_1[1] = fVar8 * *param_5 + param_1[1];
                    /* try { // try from 00a81d68 to 00b81d6f has its CatchHandler @ 00a820c0 */
      fVar8 = param_3[2];
                    /* try { // try from 00a81d74 to 00b81d8b has its CatchHandler @ 00a820a4 */
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
                    /* try { // try from 00a81d90 to 00b81d97 has its CatchHandler @ 00a8209c */
        iVar5 = (int)(fVar2 + fVar8 * 1.3421773e+08);
                    /* try { // try from 00a81d98 to 00b81db7 has its CatchHandler @ 00a820a8 */
      }
                    /* try { // try from 00a81db8 to 00b81dc7 has its CatchHandler @ 00a82098 */
      param_1[2] = fVar8 * *param_5 + param_1[2];
      fVar8 = param_3[3];
      if (fVar8 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else {
                    /* try { // try from 00a81dcc to 00b81dd7 has its CatchHandler @ 00a82090 */
        if (16.0 <= fVar8) {
          iVar6 = 0x7fffffff;
        }
        else {
                    /* try { // try from 00a81dd8 to 00b81de7 has its CatchHandler @ 00a82078 */
          fVar2 = 0.5;
          if (fVar8 * 1.3421773e+08 <= 0.0) {
            fVar2 = -0.5;
          }
          iVar6 = (int)(fVar2 + fVar8 * 1.3421773e+08);
                    /* try { // try from 00a81dec to 00b81df7 has its CatchHandler @ 00a82068 */
        }
      }
                    /* try { // try from 00a81dfc to 00b81e03 has its CatchHandler @ 00a82058 */
      param_1[3] = fVar8 * *param_5 + param_1[3];
      fVar8 = param_3[4];
                    /* try { // try from 00a81e18 to 00b81e23 has its CatchHandler @ 00a82048 */
      if (fVar8 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar7 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a81e28 to 00b81e2f has its CatchHandler @ 00a82038 */
        fVar2 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar7 = (int)(fVar2 + fVar8 * 1.3421773e+08);
      }
                    /* try { // try from 00a81e60 to 00b81f03 has its CatchHandler @ 00a82110 */
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

