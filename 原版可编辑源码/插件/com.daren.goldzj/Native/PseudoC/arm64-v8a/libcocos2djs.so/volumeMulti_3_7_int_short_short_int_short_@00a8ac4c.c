
/* void cocos2d::volumeMulti<3, 7, int, short, short, int, short>(int*, unsigned long, short const*,
   int*, short const*, short) */

void cocos2d::volumeMulti<3,7,int,short,short,int,short>
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
  
                    /* try { // try from 00a8ac4c to 00b8ac9f has its CatchHandler @ 00a8ac4c
                       catch() { ... } // from try @ 00a8ac4c with catch @ 00a8ac4c
                       catch() { ... } // from try @ 00a8adb4 with catch @ 00a8ac4c */
  iVar5 = (int)*param_5;
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
      param_1[5] = param_1[5] + iVar5 * param_3[5];
      psVar1 = param_3 + 6;
      param_3 = param_3 + 7;
      param_1[6] = param_1[6] + iVar5 * *psVar1;
      param_1 = param_1 + 7;
    } while (param_2 != 0);
  }
  else {
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
           CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + iVar5 * iVar7,
                    (int)*(undefined8 *)param_1 + iVar5 * (short)uVar6);
      sVar2 = param_3[4];
                    /* try { // try from 00a8aca0 to 00b8acb7 has its CatchHandler @ 00a8ae30 */
      param_1[4] = param_1[4] + iVar5 * sVar2;
      sVar3 = param_3[5];
      param_1[5] = param_1[5] + iVar5 * sVar3;
      sVar4 = param_3[6];
                    /* try { // try from 00a8acc0 to 00b8accb has its CatchHandler @ 00a8ae2c */
      param_3 = param_3 + 7;
                    /* try { // try from 00a8accc to 00b8acd7 has its CatchHandler @ 00a8ae28 */
      param_1[6] = param_1[6] + iVar5 * sVar4;
                    /* try { // try from 00a8acd8 to 00b8adb3 has its CatchHandler @ 00a8ae40 */
      *param_4 = *param_4 +
                 (((iVar7 + (short)uVar6 + iVar8 + iVar9 + (int)sVar2 + (int)sVar3 + (int)sVar4) *
                  0x1000) / 7 >> 0xc) * (int)param_6;
      param_1 = param_1 + 7;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

