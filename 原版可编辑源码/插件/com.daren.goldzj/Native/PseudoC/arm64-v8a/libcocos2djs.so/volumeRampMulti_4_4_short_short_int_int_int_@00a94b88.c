
/* void cocos2d::volumeRampMulti<4, 4, short, short, int, int, int>(short*, unsigned long, short
   const*, int*, int*, int const*, int*, int) */

void cocos2d::volumeRampMulti<4,4,short,short,int,int,int>
               (short *param_1,ulong param_2,short *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  
                    /* try { // try from 00a94b88 to 00b94bdb has its CatchHandler @ 00a94cec */
  if (param_4 == (int *)0x0) {
    iVar9 = *param_5;
    do {
                    /* catch() { ... } // from try @ 00a946e8 with catch @ 00a94c68 */
      iVar3 = iVar9 >> 0x10;
      uVar8 = iVar3 * *param_3;
                    /* catch() { ... } // from try @ 00a946bc with catch @ 00a94c7c */
      uVar2 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar2 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar2;
      uVar8 = iVar3 * param_3[1];
                    /* catch() { ... } // from try @ 00a94608 with catch @ 00a94c9c
                       catch() { ... } // from try @ 00a94968 with catch @ 00a94c9c */
                    /* catch() { ... } // from try @ 00a94594 with catch @ 00a94ca0 */
      uVar2 = (ushort)(uVar8 >> 0xc);
                    /* catch() { ... } // from try @ 00a94580 with catch @ 00a94ca4 */
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar2 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
                    /* catch() { ... } // from try @ 00a9453c with catch @ 00a94ca8 */
      param_1[1] = uVar2;
      uVar8 = iVar3 * param_3[2];
                    /* catch() { ... } // from try @ 00a94514 with catch @ 00a94cb8 */
      uVar2 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar2 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar2;
      psVar1 = param_3 + 3;
                    /* catch() { ... } // from try @ 00a944e8 with catch @ 00a94ccc */
      param_3 = param_3 + 4;
      uVar8 = iVar3 * *psVar1;
      uVar2 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar2 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
                    /* catch() { ... } // from try @ 00a9442c with catch @ 00a94cec
                       catch() { ... } // from try @ 00a9462c with catch @ 00a94cec
                       catch() { ... } // from try @ 00a94b88 with catch @ 00a94cec
                       catch() { ... } // from try @ 00a94c34 with catch @ 00a94cec */
      param_1[3] = uVar2;
      param_2 = param_2 - 1;
      param_1 = param_1 + 4;
      iVar9 = iVar9 + *param_6;
      *param_5 = iVar9;
    } while (param_2 != 0);
  }
  else {
    do {
      iVar3 = *param_5;
      sVar4 = *param_3;
      iVar9 = iVar3 >> 0x10;
      uVar8 = iVar9 * sVar4;
      uVar2 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar2 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar2;
      sVar5 = param_3[1];
      uVar8 = iVar9 * sVar5;
      uVar2 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar2 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar2;
      sVar6 = param_3[2];
                    /* try { // try from 00a94bdc to 00b94c2b has its CatchHandler @ 00a942f4 */
      uVar8 = iVar9 * sVar6;
      uVar2 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar2 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar2;
      sVar7 = param_3[3];
      param_3 = param_3 + 4;
      uVar8 = iVar9 * sVar7;
      uVar2 = (ushort)(uVar8 >> 0xc);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> 0x1b) {
        uVar2 = (ushort)((int)uVar8 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar2;
                    /* try { // try from 00a94c2c to 00b94c33 has its CatchHandler @ 00a94c3c */
      param_2 = param_2 - 1;
                    /* try { // try from 00a94c34 to 00b94c3b has its CatchHandler @ 00a94cec */
      *param_5 = iVar3 + *param_6;
                    /* catch() { ... } // from try @ 00a94c2c with catch @ 00a94c3c
                       try { // try from 00a94c3c to 00b94e7b has its CatchHandler @ 00a942f4 */
                    /* catch() { ... } // from try @ 00a94614 with catch @ 00a94c40 */
      param_1 = param_1 + 4;
                    /* catch() { ... } // from try @ 00a945fc with catch @ 00a94c44 */
                    /* catch() { ... } // from try @ 00a9474c with catch @ 00a94c48 */
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) * ((int)sVar5 + (int)sVar4 + (int)sVar6 + (int)sVar7 >> 2);
                    /* catch() { ... } // from try @ 00a94738 with catch @ 00a94c54 */
                    /* catch() { ... } // from try @ 00a94710 with catch @ 00a94c58 */
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

