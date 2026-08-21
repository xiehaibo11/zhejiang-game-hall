
/* void cocos2d::volumeMulti<3, 6, int, int, short, int, short>(int*, unsigned long, int const*,
   int*, short const*, short) */

void cocos2d::volumeMulti<3,6,int,int,short,int,short>
               (int *param_1,ulong param_2,int *param_3,int *param_4,short *param_5,short param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  
  sVar8 = *param_5;
  iVar9 = (int)sVar8;
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
                    /* try { // try from 00a8424c to 00b84263 has its CatchHandler @ 00a8465c */
      *param_1 = *param_1 + (*param_3 >> 0xc) * iVar9;
      param_1[1] = param_1[1] + (param_3[1] >> 0xc) * iVar9;
                    /* try { // try from 00a8426c to 00b84277 has its CatchHandler @ 00a84658 */
      param_1[2] = param_1[2] + (param_3[2] >> 0xc) * iVar9;
                    /* try { // try from 00a84278 to 00b84283 has its CatchHandler @ 00a84654 */
                    /* try { // try from 00a84284 to 00b8429b has its CatchHandler @ 00a8466c */
      param_1[3] = param_1[3] + (param_3[3] >> 0xc) * iVar9;
      param_1[4] = param_1[4] + (param_3[4] >> 0xc) * iVar9;
      piVar1 = param_3 + 5;
      param_3 = param_3 + 6;
      param_1[5] = param_1[5] + (*piVar1 >> 0xc) * iVar9;
      param_1 = param_1 + 6;
    } while (param_2 != 0);
  }
  else {
                    /* catch() { ... } // from try @ 00a83f88 with catch @ 00a84180 */
                    /* catch() { ... } // from try @ 00a83f7c with catch @ 00a84184 */
    do {
                    /* catch() { ... } // from try @ 00a83f5c with catch @ 00a84188 */
      iVar2 = *param_3;
      param_2 = param_2 - 1;
                    /* catch() { ... } // from try @ 00a83f94 with catch @ 00a84198
                       catch() { ... } // from try @ 00a83ffc with catch @ 00a84198 */
      *param_1 = *param_1 + (iVar2 >> 0xc) * (int)sVar8;
      iVar3 = param_3[1];
      param_1[1] = param_1[1] + (iVar3 >> 0xc) * (int)sVar8;
      iVar4 = param_3[2];
      param_1[2] = param_1[2] + (iVar4 >> 0xc) * iVar9;
      iVar5 = param_3[3];
      param_1[3] = param_1[3] + (iVar5 >> 0xc) * iVar9;
      iVar6 = param_3[4];
                    /* try { // try from 00a841f0 to 00b8424b has its CatchHandler @ 00a841f0
                       catch() { ... } // from try @ 00a841f0 with catch @ 00a841f0
                       catch() { ... } // from try @ 00a84460 with catch @ 00a841f0
                       catch() { ... } // from try @ 00a84560 with catch @ 00a841f0 */
      param_1[4] = param_1[4] + (iVar6 >> 0xc) * iVar9;
      iVar7 = param_3[5];
      param_3 = param_3 + 6;
      param_1[5] = param_1[5] + (iVar7 >> 0xc) * iVar9;
      *param_4 = *param_4 +
                 ((iVar7 + iVar6 + iVar5 + iVar4 + iVar3 + iVar2) / 6 >> 0xc) * (int)param_6;
      param_1 = param_1 + 6;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

