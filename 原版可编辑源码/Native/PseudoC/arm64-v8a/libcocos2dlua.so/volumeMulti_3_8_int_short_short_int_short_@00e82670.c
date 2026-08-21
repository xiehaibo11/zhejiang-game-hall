
/* void cocos2d::experimental::volumeMulti<3, 8, int, short, short, int, short>(int*, unsigned long,
   short const*, int*, short const*, short) */

void cocos2d::experimental::volumeMulti<3,8,int,short,short,int,short>
               (int *param_1,ulong param_2,short *param_3,int *param_4,short *param_5,short param_6)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar6;
  int iVar8;
  undefined8 uVar7;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar5;
  
  sVar2 = *param_5;
  if (param_4 == (int *)0x0) {
    iVar4 = (int)sVar2;
    do {
      uVar6 = *(undefined8 *)param_3;
      param_2 = param_2 - 1;
      *(ulong *)(param_1 + 2) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                    iVar4 * (short)((ulong)uVar6 >> 0x30),
                    (int)*(undefined8 *)(param_1 + 2) + iVar4 * (short)((ulong)uVar6 >> 0x20));
      *(ulong *)param_1 =
           CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                    iVar4 * (short)((ulong)uVar6 >> 0x10),
                    (int)*(undefined8 *)param_1 + iVar4 * (short)uVar6);
      uVar6 = *(undefined8 *)(param_3 + 4);
      param_3 = param_3 + 8;
      *(ulong *)(param_1 + 6) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) +
                    iVar4 * (short)((ulong)uVar6 >> 0x30),
                    (int)*(undefined8 *)(param_1 + 6) + iVar4 * (short)((ulong)uVar6 >> 0x20));
      *(ulong *)(param_1 + 4) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) +
                    iVar4 * (short)((ulong)uVar6 >> 0x10),
                    (int)*(undefined8 *)(param_1 + 4) + iVar4 * (short)uVar6);
      param_1 = param_1 + 8;
    } while (param_2 != 0);
  }
  else {
    iVar4 = (int)sVar2;
    iVar5 = (int)sVar2;
    do {
      uVar6 = *(undefined8 *)param_3;
      iVar8 = (int)(short)((ulong)uVar6 >> 0x10);
      iVar10 = (int)(short)((ulong)uVar6 >> 0x20);
      iVar12 = (int)(short)((ulong)uVar6 >> 0x30);
      *(ulong *)(param_1 + 2) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + iVar5 * iVar12,
                    (int)*(undefined8 *)(param_1 + 2) + iVar5 * iVar10);
      *(ulong *)param_1 =
           CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + iVar4 * iVar8,
                    (int)*(undefined8 *)param_1 + iVar4 * (short)uVar6);
      uVar7 = *(undefined8 *)(param_3 + 4);
      iVar9 = (int)(short)((ulong)uVar7 >> 0x10);
      iVar11 = (int)(short)((ulong)uVar7 >> 0x20);
      iVar13 = (int)(short)((ulong)uVar7 >> 0x30);
      *(ulong *)(param_1 + 6) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) + iVar5 * iVar13,
                    (int)*(undefined8 *)(param_1 + 6) + iVar5 * iVar11);
      *(ulong *)(param_1 + 4) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) + iVar4 * iVar9,
                    (int)*(undefined8 *)(param_1 + 4) + iVar4 * (short)uVar7);
      iVar13 = iVar8 + (short)uVar6 + iVar10 + iVar12 + (int)(short)uVar7 + iVar9 + iVar11 + iVar13;
      uVar3 = iVar13 * 0x1000;
      uVar1 = iVar13 * 0x1000 | 7;
      if (-1 < (int)uVar3) {
        uVar1 = uVar3;
      }
      param_3 = param_3 + 8;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + ((int)uVar1 >> 0xf) * (int)param_6;
      param_1 = param_1 + 8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

