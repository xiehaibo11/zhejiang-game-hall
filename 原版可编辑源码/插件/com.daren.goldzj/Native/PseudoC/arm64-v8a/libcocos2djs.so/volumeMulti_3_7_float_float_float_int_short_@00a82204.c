
/* void cocos2d::volumeMulti<3, 7, float, float, float, int, short>(float*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<3,7,float,float,float,int,short>
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
  int iVar8;
  int iVar9;
  float fVar10;
  
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * *param_5;
                    /* try { // try from 00a824c8 to 00b824d7 has its CatchHandler @ 00a82594 */
                    /* try { // try from 00a824d8 to 00b8263b has its CatchHandler @ 00a82168 */
      param_1[1] = param_1[1] + param_3[1] * *param_5;
      param_1[2] = param_1[2] + param_3[2] * *param_5;
      param_1[3] = param_1[3] + param_3[3] * *param_5;
                    /* catch() { ... } // from try @ 00a822fc with catch @ 00a8250c */
                    /* catch() { ... } // from try @ 00a822ec with catch @ 00a8251c */
      param_1[4] = param_1[4] + param_3[4] * *param_5;
                    /* catch() { ... } // from try @ 00a822d0 with catch @ 00a8252c */
      param_1[5] = param_1[5] + param_3[5] * *param_5;
      pfVar1 = param_3 + 6;
                    /* catch() { ... } // from try @ 00a822c0 with catch @ 00a8253c */
      param_3 = param_3 + 7;
                    /* catch() { ... } // from try @ 00a822ac with catch @ 00a8254c */
      param_1[6] = param_1[6] + *pfVar1 * *param_5;
      param_1 = param_1 + 7;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar10 = *param_3;
      if (fVar10 <= -16.0) {
        iVar3 = -0x80000000;
                    /* try { // try from 00a82264 to 00b8226b has its CatchHandler @ 00a82570 */
      }
      else {
                    /* try { // try from 00a8223c to 00b82243 has its CatchHandler @ 00a82594 */
        if (16.0 <= fVar10) {
          iVar3 = 0x7fffffff;
        }
        else {
                    /* try { // try from 00a82248 to 00b8225f has its CatchHandler @ 00a82578 */
          fVar2 = 0.5;
          if (fVar10 * 1.3421773e+08 <= 0.0) {
            fVar2 = -0.5;
          }
          iVar3 = (int)(fVar2 + fVar10 * 1.3421773e+08);
        }
      }
                    /* try { // try from 00a8226c to 00b8228b has its CatchHandler @ 00a8257c */
      *param_1 = fVar10 * *param_5 + *param_1;
      fVar10 = param_3[1];
      if (fVar10 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else {
                    /* try { // try from 00a8228c to 00b8229b has its CatchHandler @ 00a8256c */
        if (16.0 <= fVar10) {
          iVar4 = 0x7fffffff;
        }
        else {
                    /* try { // try from 00a822a0 to 00b822ab has its CatchHandler @ 00a82564 */
          fVar2 = 0.5;
          if (fVar10 * 1.3421773e+08 <= 0.0) {
            fVar2 = -0.5;
          }
          iVar4 = (int)(fVar2 + fVar10 * 1.3421773e+08);
                    /* try { // try from 00a822ac to 00b822bb has its CatchHandler @ 00a8254c */
        }
      }
                    /* try { // try from 00a822c0 to 00b822cb has its CatchHandler @ 00a8253c */
      param_1[1] = fVar10 * *param_5 + param_1[1];
                    /* try { // try from 00a822d0 to 00b822d7 has its CatchHandler @ 00a8252c */
      fVar10 = param_3[2];
      if (fVar10 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else if (16.0 <= fVar10) {
        iVar5 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a822ec to 00b822f7 has its CatchHandler @ 00a8251c */
        fVar2 = 0.5;
        if (fVar10 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
                    /* try { // try from 00a822fc to 00b82303 has its CatchHandler @ 00a8250c */
        iVar5 = (int)(fVar2 + fVar10 * 1.3421773e+08);
      }
      param_1[2] = fVar10 * *param_5 + param_1[2];
      fVar10 = param_3[3];
      if (fVar10 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else {
                    /* try { // try from 00a82334 to 00b823d7 has its CatchHandler @ 00a825e4 */
        if (16.0 <= fVar10) {
          iVar6 = 0x7fffffff;
        }
        else {
          fVar2 = 0.5;
          if (fVar10 * 1.3421773e+08 <= 0.0) {
            fVar2 = -0.5;
          }
          iVar6 = (int)(fVar2 + fVar10 * 1.3421773e+08);
        }
      }
      param_1[3] = fVar10 * *param_5 + param_1[3];
      fVar10 = param_3[4];
      if (fVar10 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar10) {
        iVar7 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar10 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar7 = (int)(fVar2 + fVar10 * 1.3421773e+08);
      }
      param_1[4] = fVar10 * *param_5 + param_1[4];
      fVar10 = param_3[5];
                    /* try { // try from 00a823d8 to 00b824c7 has its CatchHandler @ 00a82168 */
      if (fVar10 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar10) {
        iVar8 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar10 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar8 = (int)(fVar2 + fVar10 * 1.3421773e+08);
      }
      param_1[5] = fVar10 * *param_5 + param_1[5];
      fVar10 = param_3[6];
      if (fVar10 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar10) {
        iVar9 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar10 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar9 = (int)(fVar2 + fVar10 * 1.3421773e+08);
      }
      param_1[6] = fVar10 * *param_5 + param_1[6];
      param_2 = param_2 - 1;
      param_3 = param_3 + 7;
      *param_4 = *param_4 +
                 ((iVar9 + iVar8 + iVar7 + iVar6 + iVar5 + iVar4 + iVar3) / 7 >> 0xc) * (int)param_6
      ;
      param_1 = param_1 + 7;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

