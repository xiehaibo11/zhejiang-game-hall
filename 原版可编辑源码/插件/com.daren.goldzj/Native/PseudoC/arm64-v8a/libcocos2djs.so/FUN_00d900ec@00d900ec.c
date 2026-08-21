
void FUN_00d900ec(long param_1,long *param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  
  lVar11 = *(long *)(param_1 + 0x280);
  uVar5 = *(uint *)(param_1 + 0x88);
  lVar19 = (param_3 & 0xffffffff) * 8;
  lVar10 = *(long *)(param_1 + 0x1b8);
  lVar1 = *(long *)(lVar11 + 0x20);
  lVar2 = *(long *)(lVar11 + 0x28);
  lVar13 = *(long *)(lVar11 + 0x30);
  lVar11 = *(long *)(lVar11 + 0x38);
  pbVar14 = *(byte **)(*param_2 + lVar19);
  pbVar16 = *(byte **)(param_2[1] + lVar19);
  pbVar15 = *(byte **)(param_2[2] + lVar19);
  puVar12 = (undefined1 *)*param_4;
  uVar3 = uVar5 >> 1;
  pbVar17 = pbVar16;
  if (uVar3 != 0) {
    uVar18 = (ulong)(uVar3 - 1);
    pbVar17 = pbVar16 + uVar18 + 1;
    iVar4 = -uVar3;
    pbVar6 = pbVar15;
    pbVar7 = pbVar14;
    puVar8 = puVar12;
    do {
      uVar20 = (ulong)*pbVar7;
      iVar4 = iVar4 + 1;
      lVar21 = (long)*(int *)(lVar1 + (ulong)*pbVar6 * 4);
      lVar9 = (long)*(int *)(lVar2 + (ulong)*pbVar16 * 4);
      lVar19 = (*(long *)(lVar13 + (ulong)*pbVar6 * 8) + *(long *)(lVar11 + (ulong)*pbVar16 * 8)) *
               0x10000 >> 0x20;
      *puVar8 = *(undefined1 *)(lVar10 + lVar21 + uVar20);
      puVar8[1] = *(undefined1 *)(lVar10 + uVar20 + lVar19);
      puVar8[2] = *(undefined1 *)(lVar10 + lVar9 + uVar20);
      uVar20 = (ulong)pbVar7[1];
      pbVar7 = pbVar7 + 2;
      puVar8[3] = *(undefined1 *)(lVar10 + lVar21 + uVar20);
      puVar8[4] = *(undefined1 *)(lVar10 + uVar20 + lVar19);
      puVar8[5] = *(undefined1 *)(lVar10 + lVar9 + uVar20);
      puVar8 = puVar8 + 6;
      pbVar6 = pbVar6 + 1;
      pbVar16 = pbVar16 + 1;
    } while (iVar4 != 0);
    uVar5 = *(uint *)(param_1 + 0x88);
    pbVar15 = pbVar15 + uVar18 + 1;
    pbVar14 = pbVar14 + uVar18 * 2 + 2;
    puVar12 = puVar12 + uVar18 * 6 + 6;
  }
  if ((uVar5 & 1) != 0) {
    uVar18 = (ulong)*pbVar14;
    lVar11 = *(long *)(lVar11 + (ulong)*pbVar17 * 8);
    lVar13 = *(long *)(lVar13 + (ulong)*pbVar15 * 8);
    iVar4 = *(int *)(lVar2 + (ulong)*pbVar17 * 4);
    *puVar12 = *(undefined1 *)(lVar10 + (long)*(int *)(lVar1 + (ulong)*pbVar15 * 4) + uVar18);
    puVar12[1] = *(undefined1 *)(lVar10 + uVar18 + (long)(int)((ulong)(lVar13 + lVar11) >> 0x10));
    puVar12[2] = *(undefined1 *)(lVar10 + (long)iVar4 + uVar18);
  }
  return;
}

