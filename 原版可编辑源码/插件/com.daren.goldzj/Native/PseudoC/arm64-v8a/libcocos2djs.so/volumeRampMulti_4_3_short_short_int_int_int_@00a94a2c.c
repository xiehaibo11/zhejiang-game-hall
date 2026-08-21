
/* void cocos2d::volumeRampMulti<4, 3, short, short, int, int, int>(short*, unsigned long, short
   const*, int*, int*, int const*, int*, int) */

void cocos2d::volumeRampMulti<4,3,short,short,int,int,int>
               (short *param_1,ulong param_2,short *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  
  if (param_4 == (int *)0x0) {
    iVar8 = *param_5;
    do {
      iVar3 = iVar8 >> 0x10;
      uVar7 = iVar3 * *param_3;
                    /* try { // try from 00a94b14 to 00b94b37 has its CatchHandler @ 00a94ddc */
      uVar2 = (ushort)(uVar7 >> 0xc);
      if ((int)uVar7 >> 0x1f != (int)uVar7 >> 0x1b) {
        uVar2 = (ushort)((int)uVar7 >> 0x1f) ^ 0x7fff;
      }
      *param_1 = uVar2;
      uVar7 = iVar3 * param_3[1];
                    /* try { // try from 00a94b38 to 00b94b47 has its CatchHandler @ 00a94d24 */
      uVar2 = (ushort)(uVar7 >> 0xc);
      if ((int)uVar7 >> 0x1f != (int)uVar7 >> 0x1b) {
        uVar2 = (ushort)((int)uVar7 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar2;
      psVar1 = param_3 + 2;
                    /* try { // try from 00a94b48 to 00b94b5b has its CatchHandler @ 00a94d0c */
      param_3 = param_3 + 3;
      uVar7 = iVar3 * *psVar1;
      uVar2 = (ushort)(uVar7 >> 0xc);
                    /* try { // try from 00a94b64 to 00b94b77 has its CatchHandler @ 00a94ddc */
      if ((int)uVar7 >> 0x1f != (int)uVar7 >> 0x1b) {
        uVar2 = (ushort)((int)uVar7 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar2;
      param_2 = param_2 - 1;
      param_1 = param_1 + 3;
      iVar8 = iVar8 + *param_6;
      *param_5 = iVar8;
    } while (param_2 != 0);
  }
  else {
    do {
      iVar3 = *param_5;
      sVar4 = *param_3;
      iVar8 = iVar3 >> 0x10;
      uVar7 = iVar8 * sVar4;
                    /* try { // try from 00a94a54 to 00b94a5b has its CatchHandler @ 00a94de0 */
      uVar2 = (ushort)(uVar7 >> 0xc);
      if ((int)uVar7 >> 0x1f != (int)uVar7 >> 0x1b) {
        uVar2 = (ushort)((int)uVar7 >> 0x1f) ^ 0x7fff;
      }
                    /* try { // try from 00a94a5c to 00b94a8b has its CatchHandler @ 00a94e00 */
      *param_1 = uVar2;
      sVar5 = param_3[1];
      uVar7 = iVar8 * sVar5;
      uVar2 = (ushort)(uVar7 >> 0xc);
      if ((int)uVar7 >> 0x1f != (int)uVar7 >> 0x1b) {
        uVar2 = (ushort)((int)uVar7 >> 0x1f) ^ 0x7fff;
      }
      param_1[1] = uVar2;
      sVar6 = param_3[2];
      param_3 = param_3 + 3;
      uVar7 = iVar8 * sVar6;
      uVar2 = (ushort)(uVar7 >> 0xc);
      if ((int)uVar7 >> 0x1f != (int)uVar7 >> 0x1b) {
        uVar2 = (ushort)((int)uVar7 >> 0x1f) ^ 0x7fff;
      }
      param_1[2] = uVar2;
      *param_5 = iVar3 + *param_6;
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) * ((((int)sVar5 + (int)sVar4 + (int)sVar6) * 0x1000) / 3 >> 0xc)
      ;
      param_2 = param_2 - 1;
      param_1 = param_1 + 3;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

