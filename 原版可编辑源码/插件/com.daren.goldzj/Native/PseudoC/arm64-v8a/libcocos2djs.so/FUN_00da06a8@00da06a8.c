
void FUN_00da06a8(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  
  if ((0 < param_5) && (uVar2 = *(uint *)(param_1 + 0x88), uVar2 != 0)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x288) + 0x30);
    do {
      lVar7 = (ulong)param_3 * 8;
      param_3 = param_3 + 1;
      pbVar4 = *(byte **)(*param_2 + lVar7);
      pbVar5 = *(byte **)(param_2[1] + lVar7);
      pbVar6 = *(byte **)(param_2[2] + lVar7);
      puVar8 = (undefined1 *)*param_4;
      uVar9 = (ulong)uVar2;
      do {
        uVar9 = uVar9 - 1;
        *puVar8 = (char)((uint)(*(int *)(lVar3 + ((ulong)*pbVar5 | 0x100) * 8) +
                                *(int *)(lVar3 + (ulong)*pbVar4 * 8) +
                               *(int *)(lVar3 + ((ulong)*pbVar6 | 0x200) * 8)) >> 0x10);
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
        pbVar6 = pbVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar9 != 0);
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}

