
/* void cocos2d::volumeMulti<3, 6, int, short, short, int, short>(int*, unsigned long, short const*,
   int*, short const*, short) */

void cocos2d::volumeMulti<3,6,int,short,short,int,short>
               (int *param_1,ulong param_2,short *param_3,int *param_4,short *param_5,short param_6)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  sVar2 = *param_5;
  iVar5 = (int)sVar2;
  if (param_4 == (int *)0x0) {
    do {
      uVar6 = *(undefined8 *)param_3;
      param_2 = param_2 - 1;
      *(ulong *)(param_1 + 2) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                    iVar5 * (short)((ulong)uVar6 >> 0x30),
                    (int)*(undefined8 *)(param_1 + 2) + iVar5 * (short)((ulong)uVar6 >> 0x20));
      *(ulong *)param_1 =
           CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                    iVar5 * (short)((ulong)uVar6 >> 0x10),
                    (int)*(undefined8 *)param_1 + iVar5 * (short)uVar6);
      param_1[4] = param_1[4] + iVar5 * param_3[4];
      psVar1 = param_3 + 5;
      param_3 = param_3 + 6;
      param_1[5] = param_1[5] + iVar5 * *psVar1;
      param_1 = param_1 + 6;
    } while (param_2 != 0);
  }
  else {
                    /* try { // try from 00a8ab68 to 00b8ac4b has its CatchHandler @ 00a8aa64 */
    do {
      uVar6 = *(undefined8 *)param_3;
      param_2 = param_2 - 1;
      iVar7 = (int)(short)((ulong)uVar6 >> 0x10);
      iVar8 = (int)(short)((ulong)uVar6 >> 0x20);
      iVar9 = (int)(short)((ulong)uVar6 >> 0x30);
      *(ulong *)(param_1 + 2) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + iVar5 * iVar9,
                    (int)*(undefined8 *)(param_1 + 2) + iVar5 * iVar8);
      *(ulong *)param_1 =
           CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + sVar2 * iVar7,
                    (int)*(undefined8 *)param_1 + (int)sVar2 * (int)(short)uVar6);
      sVar3 = param_3[4];
      param_1[4] = param_1[4] + iVar5 * sVar3;
      sVar4 = param_3[5];
      param_3 = param_3 + 6;
      param_1[5] = param_1[5] + iVar5 * sVar4;
                    /* catch() { ... } // from try @ 00a8aae4 with catch @ 00a8abdc */
                    /* catch() { ... } // from try @ 00a8aad8 with catch @ 00a8abe0 */
                    /* catch() { ... } // from try @ 00a8aab8 with catch @ 00a8abe4 */
                    /* catch() { ... } // from try @ 00a8aaf0 with catch @ 00a8abf4 */
      *param_4 = *param_4 +
                 (((iVar7 + (short)uVar6 + iVar8 + iVar9 + (int)sVar3 + (int)sVar4) * 0x1000) / 6 >>
                 0xc) * (int)param_6;
      param_1 = param_1 + 6;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

