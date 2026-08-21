
/* void cocos2d::volumeRampMulti<4, 5, short, short, int, int, int>(short*, unsigned long, short
   const*, int*, int*, int const*, int*, int) */

void cocos2d::volumeRampMulti<4,5,short,short,int,int,int>
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
  short sVar8;
  uint uVar9;
  int iVar10;
  
                    /* catch() { ... } // from try @ 00a94b48 with catch @ 00a94d0c */
  if (param_4 == (int *)0x0) {
    iVar10 = *param_5;
    do {
      iVar3 = iVar10 >> 0x10;
      uVar9 = iVar3 * *param_3;
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar2;
      uVar9 = iVar3 * param_3[1];
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar2;
      uVar9 = iVar3 * param_3[2];
                    /* try { // try from 00a94e7c to 00b94ecf has its CatchHandler @ 00a94e7c
                       catch() { ... } // from try @ 00a94e7c with catch @ 00a94e7c
                       catch() { ... } // from try @ 00a95188 with catch @ 00a94e7c */
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar2;
      uVar9 = iVar3 * param_3[3];
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar2;
      psVar1 = param_3 + 4;
      param_3 = param_3 + 5;
      uVar9 = iVar3 * *psVar1;
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
                    /* try { // try from 00a94ed0 to 00b94ee7 has its CatchHandler @ 00a951b0 */
      param_1[4] = uVar2;
      param_2 = param_2 - 1;
      param_1 = param_1 + 5;
      iVar10 = iVar10 + *param_6;
      *param_5 = iVar10;
    } while (param_2 != 0);
  }
  else {
    do {
      iVar3 = *param_5;
      sVar4 = *param_3;
      iVar10 = iVar3 >> 0x10;
                    /* catch() { ... } // from try @ 00a94b38 with catch @ 00a94d24 */
      uVar9 = iVar10 * sVar4;
                    /* catch() { ... } // from try @ 00a94550 with catch @ 00a94d28 */
      uVar2 = (ushort)(uVar9 >> 0xc);
                    /* catch() { ... } // from try @ 00a94888 with catch @ 00a94d38 */
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar2;
                    /* catch() { ... } // from try @ 00a947f0 with catch @ 00a94d40
                       catch() { ... } // from try @ 00a948a4 with catch @ 00a94d40 */
      sVar5 = param_3[1];
      uVar9 = iVar10 * sVar5;
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar2;
      sVar6 = param_3[2];
                    /* catch() { ... } // from try @ 00a945e8 with catch @ 00a94d68
                       catch() { ... } // from try @ 00a94698 with catch @ 00a94d68
                       catch() { ... } // from try @ 00a947a8 with catch @ 00a94d68 */
      uVar9 = iVar10 * sVar6;
                    /* catch() { ... } // from try @ 00a9471c with catch @ 00a94d6c
                       catch() { ... } // from try @ 00a9475c with catch @ 00a94d6c */
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar2;
      sVar7 = param_3[3];
      uVar9 = iVar10 * sVar7;
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      param_1[3] = uVar2;
      sVar8 = param_3[4];
      param_3 = param_3 + 5;
      uVar9 = iVar10 * sVar8;
      uVar2 = (ushort)(uVar9 >> 0xc);
      if ((int)uVar9 >> 0x1f != (int)uVar9 >> 0x1b) {
        uVar2 = (ushort)((int)uVar9 >> 0x1f) ^ 0x7fff;
      }
      param_1[4] = uVar2;
                    /* catch() { ... } // from try @ 00a943dc with catch @ 00a94dd4 */
                    /* catch() { ... } // from try @ 00a945a4 with catch @ 00a94dd8 */
                    /* catch() { ... } // from try @ 00a94b14 with catch @ 00a94ddc
                       catch() { ... } // from try @ 00a94b64 with catch @ 00a94ddc */
                    /* catch() { ... } // from try @ 00a94a54 with catch @ 00a94de0 */
                    /* catch() { ... } // from try @ 00a943d0 with catch @ 00a94de4
                       catch() { ... } // from try @ 00a94488 with catch @ 00a94de4 */
      *param_5 = iVar3 + *param_6;
                    /* catch() { ... } // from try @ 00a94390 with catch @ 00a94dfc */
                    /* catch() { ... } // from try @ 00a94a5c with catch @ 00a94e00 */
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) *
                 ((((int)sVar5 + (int)sVar4 + (int)sVar6 + (int)sVar7 + (int)sVar8) * 0x1000) / 5 >>
                 0xc);
                    /* catch() { ... } // from try @ 00a9437c with catch @ 00a94e10 */
      param_2 = param_2 - 1;
                    /* catch() { ... } // from try @ 00a94350 with catch @ 00a94e14 */
      param_1 = param_1 + 5;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

