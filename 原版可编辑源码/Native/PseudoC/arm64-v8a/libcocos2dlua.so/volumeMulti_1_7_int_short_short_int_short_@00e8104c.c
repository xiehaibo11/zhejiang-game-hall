
/* void cocos2d::experimental::volumeMulti<1, 7, int, short, short, int, short>(int*, unsigned long,
   short const*, int*, short const*, short) */

void cocos2d::experimental::volumeMulti<1,7,int,short,short,int,short>
               (int *param_1,ulong param_2,short *param_3,int *param_4,short *param_5,short param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (param_4 == (int *)0x0) {
    uVar6 = *(undefined8 *)param_5;
    sVar1 = param_5[4];
    sVar2 = param_5[5];
    sVar3 = param_5[6];
    do {
      sVar4 = *param_3;
      iVar5 = (int)sVar4;
      param_1[4] = param_1[4] + sVar1 * iVar5;
      param_1[5] = param_1[5] + sVar2 * iVar5;
      param_2 = param_2 - 1;
      param_1[6] = param_1[6] + (int)sVar3 * (int)sVar4;
      *(ulong *)(param_1 + 2) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                    iVar5 * (short)((ulong)uVar6 >> 0x30),
                    (int)*(undefined8 *)(param_1 + 2) + iVar5 * (short)((ulong)uVar6 >> 0x20));
      *(ulong *)param_1 =
           CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                    (int)sVar4 * (int)(short)((ulong)uVar6 >> 0x10),
                    (int)*(undefined8 *)param_1 + (int)sVar4 * (int)(short)uVar6);
      param_1 = param_1 + 7;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  else {
    uVar6 = *(undefined8 *)param_5;
    sVar1 = param_5[4];
    sVar2 = param_5[5];
    sVar3 = param_5[6];
    do {
      sVar4 = *param_3;
      param_2 = param_2 - 1;
      iVar5 = (int)sVar4;
      param_1[4] = param_1[4] + sVar1 * iVar5;
      param_1[5] = param_1[5] + sVar2 * iVar5;
      param_1[6] = param_1[6] + (int)sVar3 * (int)sVar4;
      *(ulong *)(param_1 + 2) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                    iVar5 * (short)((ulong)uVar6 >> 0x30),
                    (int)*(undefined8 *)(param_1 + 2) + iVar5 * (short)((ulong)uVar6 >> 0x20));
      *(ulong *)param_1 =
           CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                    (int)sVar4 * (int)(short)((ulong)uVar6 >> 0x10),
                    (int)*(undefined8 *)param_1 + (int)sVar4 * (int)(short)uVar6);
      *param_4 = *param_4 + (int)sVar4 * (int)param_6;
      param_1 = param_1 + 7;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

