
/* void cocos2d::volumeRampMulti<3, 5, int, int, int, int, int>(int*, unsigned long, int const*,
   int*, int*, int const*, int*, int) */

void cocos2d::volumeRampMulti<3,5,int,int,int,int,int>
               (int *param_1,ulong param_2,int *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_4 == (int *)0x0) {
    iVar6 = *param_5;
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (iVar6 >> 0x10) * (*param_3 >> 0xc);
      param_1[1] = param_1[1] + (*param_5 >> 0x10) * (param_3[1] >> 0xc);
                    /* try { // try from 00a839cc to 00b839e3 has its CatchHandler @ 00a83bf8 */
      param_1[2] = param_1[2] + (*param_5 >> 0x10) * (param_3[2] >> 0xc);
                    /* try { // try from 00a839ec to 00b839f7 has its CatchHandler @ 00a83bf4 */
      param_1[3] = param_1[3] + (*param_5 >> 0x10) * (param_3[3] >> 0xc);
      piVar1 = param_3 + 4;
                    /* try { // try from 00a839f8 to 00b83a03 has its CatchHandler @ 00a83bf0 */
      param_3 = param_3 + 5;
                    /* try { // try from 00a83a04 to 00b83a1b has its CatchHandler @ 00a83c08 */
      param_1[4] = param_1[4] + (*param_5 >> 0x10) * (*piVar1 >> 0xc);
      param_1 = param_1 + 5;
      iVar6 = *param_5 + *param_6;
      *param_5 = iVar6;
    } while (param_2 != 0);
  }
  else {
    do {
      iVar6 = *param_3;
                    /* try { // try from 00a83898 to 00b838db has its CatchHandler @ 00a838f0 */
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (*param_5 >> 0x10) * (iVar6 >> 0xc);
      iVar2 = param_3[1];
      param_1[1] = param_1[1] + (*param_5 >> 0x10) * (iVar2 >> 0xc);
      iVar3 = param_3[2];
                    /* try { // try from 00a838dc to 00b83977 has its CatchHandler @ 00a83690 */
      param_1[2] = param_1[2] + (*param_5 >> 0x10) * (iVar3 >> 0xc);
      iVar4 = param_3[3];
                    /* catch() { ... } // from try @ 00a83750 with catch @ 00a838f0
                       catch() { ... } // from try @ 00a83898 with catch @ 00a838f0 */
      param_1[3] = param_1[3] + (*param_5 >> 0x10) * (iVar4 >> 0xc);
                    /* catch() { ... } // from try @ 00a83710 with catch @ 00a83908 */
      iVar5 = param_3[4];
                    /* catch() { ... } // from try @ 00a83704 with catch @ 00a8390c */
                    /* catch() { ... } // from try @ 00a836e4 with catch @ 00a83910 */
                    /* catch() { ... } // from try @ 00a8371c with catch @ 00a83920
                       catch() { ... } // from try @ 00a83784 with catch @ 00a83920 */
      param_1[4] = param_1[4] + (*param_5 >> 0x10) * (iVar5 >> 0xc);
      *param_5 = *param_5 + *param_6;
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) * ((iVar5 + iVar4 + iVar3 + iVar2 + iVar6) / 5 >> 0xc);
      param_3 = param_3 + 5;
      param_1 = param_1 + 5;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
                    /* try { // try from 00a83978 to 00b839cb has its CatchHandler @ 00a83978
                       catch() { ... } // from try @ 00a83978 with catch @ 00a83978
                       catch() { ... } // from try @ 00a83bc4 with catch @ 00a83978 */
    } while (param_2 != 0);
  }
  return;
}

