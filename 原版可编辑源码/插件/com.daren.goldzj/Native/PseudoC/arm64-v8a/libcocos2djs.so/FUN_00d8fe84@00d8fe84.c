
void FUN_00d8fe84(long param_1,long *param_2,uint param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  
  lVar11 = *(long *)(param_1 + 0x280);
  uVar7 = *(uint *)(param_1 + 0x88);
  lVar10 = *(long *)(param_1 + 0x1b8);
  lVar2 = *(long *)(lVar11 + 0x20);
  lVar14 = *(long *)(lVar11 + 0x28);
  lVar3 = *(long *)(lVar11 + 0x30);
  lVar11 = *(long *)(lVar11 + 0x38);
  pbVar16 = *(byte **)(*param_2 + (ulong)(param_3 << 1) * 8);
  pbVar17 = *(byte **)(*param_2 + (ulong)(param_3 << 1 | 1) * 8);
  pbVar20 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
  pbVar19 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
  puVar13 = (undefined1 *)*param_4;
  puVar12 = (undefined1 *)param_4[1];
  uVar4 = uVar7 >> 1;
  pbVar18 = pbVar17;
  pbVar21 = pbVar20;
  if (uVar4 != 0) {
    uVar6 = (ulong)(uVar4 - 1);
    lVar15 = uVar6 * 2 + 2;
    pbVar21 = pbVar20 + uVar6 + 1;
    lVar1 = uVar6 * 6 + 6;
    pbVar18 = pbVar17 + lVar15;
    iVar8 = -uVar4;
    pbVar9 = pbVar19;
    pbVar22 = pbVar16;
    puVar23 = puVar12;
    puVar24 = puVar13;
    do {
      uVar26 = (ulong)*pbVar22;
      iVar8 = iVar8 + 1;
      lVar27 = (long)*(int *)(lVar2 + (ulong)*pbVar9 * 4);
      lVar25 = (long)*(int *)(lVar14 + (ulong)*pbVar20 * 4);
      lVar5 = (*(long *)(lVar3 + (ulong)*pbVar9 * 8) + *(long *)(lVar11 + (ulong)*pbVar20 * 8)) *
              0x10000 >> 0x20;
      *puVar24 = *(undefined1 *)(lVar10 + lVar27 + uVar26);
      puVar24[1] = *(undefined1 *)(lVar10 + uVar26 + lVar5);
      puVar24[2] = *(undefined1 *)(lVar10 + lVar25 + uVar26);
      uVar26 = (ulong)pbVar22[1];
      pbVar22 = pbVar22 + 2;
      puVar24[3] = *(undefined1 *)(lVar10 + lVar27 + uVar26);
      puVar24[4] = *(undefined1 *)(lVar10 + uVar26 + lVar5);
      puVar24[5] = *(undefined1 *)(lVar10 + lVar25 + uVar26);
      uVar26 = (ulong)*pbVar17;
      puVar24 = puVar24 + 6;
      *puVar23 = *(undefined1 *)(lVar10 + lVar27 + uVar26);
      puVar23[1] = *(undefined1 *)(lVar10 + uVar26 + lVar5);
      puVar23[2] = *(undefined1 *)(lVar10 + lVar25 + uVar26);
      uVar26 = (ulong)pbVar17[1];
      pbVar17 = pbVar17 + 2;
      puVar23[3] = *(undefined1 *)(lVar10 + lVar27 + uVar26);
      puVar23[4] = *(undefined1 *)(lVar10 + uVar26 + lVar5);
      puVar23[5] = *(undefined1 *)(lVar10 + lVar25 + uVar26);
      puVar23 = puVar23 + 6;
      pbVar9 = pbVar9 + 1;
      pbVar20 = pbVar20 + 1;
    } while (iVar8 != 0);
    pbVar19 = pbVar19 + uVar6 + 1;
    uVar7 = *(uint *)(param_1 + 0x88);
    pbVar16 = pbVar16 + lVar15;
    puVar13 = puVar13 + lVar1;
    puVar12 = puVar12 + lVar1;
  }
  if ((uVar7 & 1) != 0) {
    uVar6 = (ulong)*pbVar16;
    lVar15 = (long)*(int *)(lVar2 + (ulong)*pbVar19 * 4);
    lVar14 = (long)*(int *)(lVar14 + (ulong)*pbVar21 * 4);
    lVar2 = (*(long *)(lVar3 + (ulong)*pbVar19 * 8) + *(long *)(lVar11 + (ulong)*pbVar21 * 8)) *
            0x10000 >> 0x20;
    *puVar13 = *(undefined1 *)(lVar10 + lVar15 + uVar6);
    puVar13[1] = *(undefined1 *)(lVar10 + uVar6 + lVar2);
    puVar13[2] = *(undefined1 *)(lVar10 + lVar14 + uVar6);
    uVar6 = (ulong)*pbVar18;
    *puVar12 = *(undefined1 *)(lVar10 + lVar15 + uVar6);
    puVar12[1] = *(undefined1 *)(lVar10 + uVar6 + lVar2);
    puVar12[2] = *(undefined1 *)(lVar10 + lVar14 + uVar6);
  }
  return;
}

