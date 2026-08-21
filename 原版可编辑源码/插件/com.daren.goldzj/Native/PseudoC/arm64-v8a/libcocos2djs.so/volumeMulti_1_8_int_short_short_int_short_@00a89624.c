
/* void cocos2d::volumeMulti<1, 8, int, short, short, int, short>(int*, unsigned long, short const*,
   int*, short const*, short) */

void cocos2d::volumeMulti<1,8,int,short,short,int,short>
               (int *param_1,ulong param_2,short *param_3,int *param_4,short *param_5,short param_6)

{
  int iVar1;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar2;
  
  if (param_4 == (int *)0x0) {
    uVar3 = *(undefined8 *)param_5;
    uVar4 = *(undefined8 *)(param_5 + 4);
    do {
      param_2 = param_2 - 1;
      iVar1 = (int)*param_3;
      iVar2 = (int)*param_3;
                    /* try { // try from 00a89688 to 00b89787 has its CatchHandler @ 00a89570 */
      *(ulong *)(param_1 + 2) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                    iVar2 * (short)((ulong)uVar3 >> 0x30),
                    (int)*(undefined8 *)(param_1 + 2) + iVar2 * (short)((ulong)uVar3 >> 0x20));
      *(ulong *)param_1 =
           CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                    iVar1 * (short)((ulong)uVar3 >> 0x10),
                    (int)*(undefined8 *)param_1 + iVar1 * (short)uVar3);
      *(ulong *)(param_1 + 6) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) +
                    iVar2 * (short)((ulong)uVar4 >> 0x30),
                    (int)*(undefined8 *)(param_1 + 6) + iVar2 * (short)((ulong)uVar4 >> 0x20));
      *(ulong *)(param_1 + 4) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) +
                    iVar1 * (short)((ulong)uVar4 >> 0x10),
                    (int)*(undefined8 *)(param_1 + 4) + iVar1 * (short)uVar4);
      param_1 = param_1 + 8;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  else {
    uVar3 = *(undefined8 *)param_5;
    uVar4 = *(undefined8 *)(param_5 + 4);
    do {
                    /* try { // try from 00a89638 to 00b8964f has its CatchHandler @ 00a89730 */
      param_2 = param_2 - 1;
      iVar1 = (int)*param_3;
      iVar2 = (int)*param_3;
                    /* try { // try from 00a89650 to 00b89657 has its CatchHandler @ 00a89704 */
      *(ulong *)(param_1 + 2) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                    iVar2 * (short)((ulong)uVar3 >> 0x30),
                    (int)*(undefined8 *)(param_1 + 2) + iVar2 * (short)((ulong)uVar3 >> 0x20));
      *(ulong *)param_1 =
           CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                    iVar1 * (short)((ulong)uVar3 >> 0x10),
                    (int)*(undefined8 *)param_1 + iVar1 * (short)uVar3);
      *(ulong *)(param_1 + 6) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) +
                    iVar2 * (short)((ulong)uVar4 >> 0x30),
                    (int)*(undefined8 *)(param_1 + 6) + iVar2 * (short)((ulong)uVar4 >> 0x20));
      *(ulong *)(param_1 + 4) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) +
                    iVar1 * (short)((ulong)uVar4 >> 0x10),
                    (int)*(undefined8 *)(param_1 + 4) + iVar1 * (short)uVar4);
                    /* try { // try from 00a89658 to 00b89687 has its CatchHandler @ 00a8970c */
      *param_4 = *param_4 + iVar2 * param_6;
      param_1 = param_1 + 8;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

