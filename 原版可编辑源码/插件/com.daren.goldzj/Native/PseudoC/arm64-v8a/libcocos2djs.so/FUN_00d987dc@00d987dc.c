
void FUN_00d987dc(long param_1,undefined8 *param_2,long *param_3,uint param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  
  if ((0 < param_5) && (uVar2 = *(uint *)(param_1 + 0x30), uVar2 != 0)) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x218) + 0x10);
    do {
      lVar8 = (ulong)param_4 * 8;
      pbVar7 = (byte *)*param_2;
      puVar9 = *(undefined1 **)(*param_3 + lVar8);
      puVar10 = *(undefined1 **)(param_3[1] + lVar8);
      puVar11 = *(undefined1 **)(param_3[2] + lVar8);
      uVar12 = (ulong)uVar2;
      do {
        bVar3 = pbVar7[1];
        bVar4 = *pbVar7;
        bVar5 = pbVar7[2];
        uVar12 = uVar12 - 1;
        pbVar7 = pbVar7 + 3;
        *puVar9 = (char)((uint)(*(int *)(lVar6 + (ulong)(bVar3 | 0x100) * 8) +
                                *(int *)(lVar6 + (ulong)bVar4 * 8) +
                               *(int *)(lVar6 + (ulong)(bVar5 | 0x200) * 8)) >> 0x10);
        *puVar10 = (char)((uint)(*(int *)(lVar6 + (ulong)(bVar3 | 0x400) * 8) +
                                 *(int *)(lVar6 + (ulong)(bVar4 | 0x300) * 8) +
                                *(int *)(lVar6 + (ulong)(bVar5 | 0x500) * 8)) >> 0x10);
        *puVar11 = (char)((uint)(*(int *)(lVar6 + (ulong)(bVar3 | 0x600) * 8) +
                                 *(int *)(lVar6 + (ulong)(bVar4 | 0x500) * 8) +
                                *(int *)(lVar6 + (ulong)(bVar5 | 0x700) * 8)) >> 0x10);
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar12 != 0);
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}

