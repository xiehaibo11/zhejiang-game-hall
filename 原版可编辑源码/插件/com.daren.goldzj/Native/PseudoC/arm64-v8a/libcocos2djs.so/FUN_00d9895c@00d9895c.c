
void FUN_00d9895c(long param_1,undefined8 *param_2,long *param_3,uint param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  ulong uVar13;
  
  if ((0 < param_5) && (uVar2 = *(uint *)(param_1 + 0x30), uVar2 != 0)) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x218) + 0x10);
    do {
      lVar8 = (ulong)param_4 * 8;
      pbVar7 = (byte *)*param_2;
      puVar9 = *(undefined1 **)(*param_3 + lVar8);
      puVar10 = *(undefined1 **)(param_3[1] + lVar8);
      puVar11 = *(undefined1 **)(param_3[2] + lVar8);
      pbVar12 = *(byte **)(param_3[3] + lVar8);
      uVar13 = (ulong)uVar2;
      do {
        uVar3 = ~(uint)*pbVar7;
        uVar4 = ~(uint)pbVar7[1];
        uVar5 = ~(uint)pbVar7[2];
        *pbVar12 = pbVar7[3];
        *puVar9 = (char)((uint)(*(int *)(lVar6 + (ulong)(uVar4 & 0xff | 0x100) * 8) +
                                *(int *)(lVar6 + ((ulong)uVar3 & 0xff) * 8) +
                               *(int *)(lVar6 + (ulong)(uVar5 & 0xff | 0x200) * 8)) >> 0x10);
        *puVar10 = (char)((uint)(*(int *)(lVar6 + (ulong)(uVar4 & 0xff | 0x400) * 8) +
                                 *(int *)(lVar6 + (ulong)(uVar3 & 0xff | 0x300) * 8) +
                                *(int *)(lVar6 + (ulong)(uVar5 & 0xff | 0x500) * 8)) >> 0x10);
        uVar13 = uVar13 - 1;
        pbVar7 = pbVar7 + 4;
        *puVar11 = (char)((uint)(*(int *)(lVar6 + (ulong)(uVar4 & 0xff | 0x600) * 8) +
                                 *(int *)(lVar6 + (ulong)(uVar3 & 0xff | 0x500) * 8) +
                                *(int *)(lVar6 + (ulong)(uVar5 & 0xff | 0x700) * 8)) >> 0x10);
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
        pbVar12 = pbVar12 + 1;
      } while (uVar13 != 0);
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}

