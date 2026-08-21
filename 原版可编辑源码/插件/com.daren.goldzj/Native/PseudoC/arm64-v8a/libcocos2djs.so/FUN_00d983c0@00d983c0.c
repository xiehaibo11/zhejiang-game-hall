
void FUN_00d983c0(long param_1,undefined8 *param_2,long *param_3,uint param_4,int param_5)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  ulong uVar9;
  
  if ((0 < param_5) && (uVar4 = *(uint *)(param_1 + 0x30), uVar4 != 0)) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x218) + 0x10);
    do {
      pbVar7 = (byte *)*param_2;
      puVar8 = *(undefined1 **)(*param_3 + (ulong)param_4 * 8);
      uVar9 = (ulong)uVar4;
      do {
        pbVar2 = pbVar7 + 1;
        bVar5 = *pbVar7;
        pbVar3 = pbVar7 + 2;
        uVar9 = uVar9 - 1;
        pbVar7 = pbVar7 + 3;
        *puVar8 = (char)((uint)(*(int *)(lVar6 + ((ulong)*pbVar2 | 0x100) * 8) +
                                *(int *)(lVar6 + (ulong)bVar5 * 8) +
                               *(int *)(lVar6 + ((ulong)*pbVar3 | 0x200) * 8)) >> 0x10);
        puVar8 = puVar8 + 1;
      } while (uVar9 != 0);
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}

