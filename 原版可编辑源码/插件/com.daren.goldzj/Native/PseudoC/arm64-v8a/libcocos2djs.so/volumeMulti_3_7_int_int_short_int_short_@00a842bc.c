
/* void cocos2d::volumeMulti<3, 7, int, int, short, int, short>(int*, unsigned long, int const*,
   int*, short const*, short) */

void cocos2d::volumeMulti<3,7,int,int,short,int,short>
               (int *param_1,ulong param_2,int *param_3,int *param_4,short *param_5,short param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (int)*param_5;
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (*param_3 >> 0xc) * iVar9;
                    /* try { // try from 00a843bc to 00b8445f has its CatchHandler @ 00a8466c */
      param_1[1] = param_1[1] + (param_3[1] >> 0xc) * iVar9;
      param_1[2] = param_1[2] + (param_3[2] >> 0xc) * iVar9;
      param_1[3] = param_1[3] + (param_3[3] >> 0xc) * iVar9;
      param_1[4] = param_1[4] + (param_3[4] >> 0xc) * iVar9;
      param_1[5] = param_1[5] + (param_3[5] >> 0xc) * iVar9;
      piVar1 = param_3 + 6;
      param_3 = param_3 + 7;
      param_1[6] = param_1[6] + (*piVar1 >> 0xc) * iVar9;
      param_1 = param_1 + 7;
    } while (param_2 != 0);
  }
  else {
                    /* try { // try from 00a842c4 to 00b842cb has its CatchHandler @ 00a8461c */
    do {
                    /* try { // try from 00a842d0 to 00b842e7 has its CatchHandler @ 00a84600 */
      iVar2 = *param_3;
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (iVar2 >> 0xc) * iVar9;
      iVar3 = param_3[1];
                    /* try { // try from 00a842ec to 00b842f3 has its CatchHandler @ 00a845f8 */
                    /* try { // try from 00a842f4 to 00b84313 has its CatchHandler @ 00a84604 */
      param_1[1] = param_1[1] + (iVar3 >> 0xc) * iVar9;
      iVar4 = param_3[2];
      param_1[2] = param_1[2] + (iVar4 >> 0xc) * iVar9;
      iVar5 = param_3[3];
                    /* try { // try from 00a84314 to 00b84323 has its CatchHandler @ 00a845f4 */
      param_1[3] = param_1[3] + (iVar5 >> 0xc) * iVar9;
                    /* try { // try from 00a84328 to 00b84333 has its CatchHandler @ 00a845ec */
      iVar6 = param_3[4];
                    /* try { // try from 00a84334 to 00b84343 has its CatchHandler @ 00a845d4 */
      param_1[4] = param_1[4] + (iVar6 >> 0xc) * iVar9;
      iVar7 = param_3[5];
                    /* try { // try from 00a84348 to 00b84353 has its CatchHandler @ 00a845c4 */
      param_1[5] = param_1[5] + (iVar7 >> 0xc) * iVar9;
                    /* try { // try from 00a84358 to 00b8435f has its CatchHandler @ 00a845b4 */
      iVar8 = param_3[6];
      param_3 = param_3 + 7;
      param_1[6] = param_1[6] + (iVar8 >> 0xc) * iVar9;
                    /* try { // try from 00a84374 to 00b8437f has its CatchHandler @ 00a845a4 */
                    /* try { // try from 00a84384 to 00b8438b has its CatchHandler @ 00a84594 */
      *param_4 = *param_4 +
                 ((iVar8 + iVar7 + iVar6 + iVar5 + iVar4 + iVar3 + iVar2) / 7 >> 0xc) * (int)param_6
      ;
      param_1 = param_1 + 7;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

