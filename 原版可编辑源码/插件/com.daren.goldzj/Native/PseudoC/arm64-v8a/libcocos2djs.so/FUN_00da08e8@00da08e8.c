
void FUN_00da08e8(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  undefined1 *puVar16;
  
  if ((0 < param_5) && (uVar5 = *(uint *)(param_1 + 0x88), uVar5 != 0)) {
    lVar11 = *(long *)(param_1 + 0x288);
    lVar10 = *(long *)(param_1 + 0x1b8);
    lVar2 = *(long *)(lVar11 + 0x10);
    lVar4 = *(long *)(lVar11 + 0x18);
    lVar3 = *(long *)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar11 + 0x28);
    do {
      lVar15 = (ulong)param_3 * 8;
      puVar16 = (undefined1 *)*param_4;
      param_3 = param_3 + 1;
      uVar8 = (ulong)uVar5;
      pbVar12 = *(byte **)(*param_2 + lVar15);
      pbVar13 = *(byte **)(param_2[1] + lVar15);
      pbVar14 = *(byte **)(param_2[2] + lVar15);
      do {
        uVar9 = (ulong)*pbVar12;
        bVar6 = *pbVar14;
        uVar8 = uVar8 - 1;
        bVar7 = *pbVar13;
        *puVar16 = *(undefined1 *)(lVar10 + (long)*(int *)(lVar2 + (ulong)bVar6 * 4) + uVar9);
        puVar16[1] = *(undefined1 *)
                      (lVar10 + uVar9 + (long)(int)((ulong)(*(long *)(lVar3 + (ulong)bVar6 * 8) +
                                                           *(long *)(lVar11 + (ulong)bVar7 * 8)) >>
                                                   0x10));
        puVar16[2] = *(undefined1 *)(lVar10 + (long)*(int *)(lVar4 + (ulong)bVar7 * 4) + uVar9);
        puVar16 = puVar16 + 3;
        pbVar12 = pbVar12 + 1;
        pbVar13 = pbVar13 + 1;
        pbVar14 = pbVar14 + 1;
      } while (uVar8 != 0);
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}

