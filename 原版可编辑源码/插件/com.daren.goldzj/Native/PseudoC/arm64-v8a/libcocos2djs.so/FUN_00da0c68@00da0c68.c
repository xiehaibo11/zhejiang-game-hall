
void FUN_00da0c68(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined1 *puVar17;
  
  if ((0 < param_5) && (uVar6 = *(uint *)(param_1 + 0x88), uVar6 != 0)) {
    lVar13 = *(long *)(param_1 + 0x288);
    lVar12 = *(long *)(param_1 + 0x1b8);
    lVar3 = *(long *)(lVar13 + 0x10);
    lVar5 = *(long *)(lVar13 + 0x18);
    lVar4 = *(long *)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    do {
      lVar9 = (ulong)param_3 * 8;
      puVar10 = (undefined1 *)*param_4;
      param_3 = param_3 + 1;
      uVar11 = (ulong)uVar6;
      pbVar14 = *(byte **)(*param_2 + lVar9);
      pbVar15 = *(byte **)(param_2[1] + lVar9);
      pbVar16 = *(byte **)(param_2[2] + lVar9);
      puVar17 = *(undefined1 **)(param_2[3] + lVar9);
      do {
        bVar7 = *pbVar16;
        uVar11 = uVar11 - 1;
        uVar2 = ~(uint)*pbVar14 & 0xff;
        bVar8 = *pbVar15;
        *puVar10 = *(undefined1 *)(lVar12 + (int)(uVar2 - *(int *)(lVar3 + (ulong)bVar7 * 4)));
        puVar10[1] = *(undefined1 *)
                      (lVar12 + (int)(uVar2 - (int)((ulong)(*(long *)(lVar4 + (ulong)bVar7 * 8) +
                                                           *(long *)(lVar13 + (ulong)bVar8 * 8)) >>
                                                   0x10)));
        puVar10[2] = *(undefined1 *)(lVar12 + (int)(uVar2 - *(int *)(lVar5 + (ulong)bVar8 * 4)));
        puVar10[3] = *puVar17;
        puVar10 = puVar10 + 4;
        pbVar14 = pbVar14 + 1;
        pbVar15 = pbVar15 + 1;
        pbVar16 = pbVar16 + 1;
        puVar17 = puVar17 + 1;
      } while (uVar11 != 0);
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}

