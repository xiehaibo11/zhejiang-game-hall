
void FUN_010e6610(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  long *plVar19;
  ulong uVar20;
  
  iVar13 = *(int *)(param_1 + 0x164);
  iVar6 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  if (-2 < iVar13) {
    uVar5 = *(uint *)(param_1 + 0x30);
    if (0 < (int)(iVar6 * 2 - uVar5)) {
      uVar20 = (ulong)(iVar13 + 2);
      iVar13 = (uVar5 - 1) + iVar6 * -2;
      if (iVar13 < -1) {
        iVar13 = -2;
      }
      plVar19 = (long *)(param_3 + -8);
      do {
        memset((void *)(*plVar19 + (ulong)uVar5),
               (uint)*(byte *)((long)(*plVar19 + (ulong)uVar5) + -1),
               (ulong)(((iVar6 * 2 | 1U) - uVar5) + iVar13) + 1);
        uVar20 = uVar20 - 1;
        plVar19 = plVar19 + 1;
      } while (uVar20 != 0);
      iVar13 = *(int *)(param_1 + 0x164);
    }
  }
  if (0 < iVar13) {
    lVar15 = (ulong)(iVar6 - 2) * 2;
    iVar13 = *(int *)(param_1 + 0x134) * -0x50 + 0x4000;
    lVar14 = 0;
    uVar20 = 0;
    iVar16 = *(int *)(param_1 + 0x134) * 0x10;
    do {
      plVar19 = (long *)(param_3 + uVar20 * 8);
      pbVar4 = (byte *)plVar19[-1];
      pbVar8 = (byte *)*plVar19;
      pbVar7 = *(byte **)(param_3 + (uVar20 | 1) * 8);
      uVar20 = uVar20 + 2;
      pbVar10 = *(byte **)(param_3 + uVar20 * 8);
      puVar17 = *(undefined1 **)(param_4 + lVar14 * 8);
      pbVar18 = pbVar8 + 2;
      *puVar17 = (char)(((uint)*pbVar10 * 3 + (uint)*pbVar4 + (uint)pbVar4[2] + (uint)pbVar10[2] +
                        ((uint)*pbVar7 + (uint)*pbVar8 + (uint)*pbVar4 + (uint)pbVar4[1]) * 2 +
                        (uint)pbVar10[1] * 2 + (uint)*pbVar18 * 2 + (uint)pbVar7[2] * 2) * iVar16 +
                        ((uint)pbVar8[1] + (uint)*pbVar8 + (uint)*pbVar7 + (uint)pbVar7[1]) * iVar13
                        + 0x8000 >> 0x10);
      pbVar8 = pbVar7 + 2;
      pbVar9 = pbVar4 + 2;
      pbVar11 = pbVar10 + 2;
      puVar12 = puVar17;
      iVar1 = 2 - iVar6;
      while( true ) {
        puVar12 = puVar12 + 1;
        iVar3 = (uint)pbVar18[1] + (uint)*pbVar18 + (uint)*pbVar8 + (uint)pbVar8[1];
        iVar2 = (uint)pbVar9[1] + (uint)*pbVar9 + (uint)*pbVar11 + (uint)pbVar11[1] +
                (uint)pbVar18[-1];
        if (iVar1 == 0) break;
        pbVar18 = pbVar18 + 2;
        iVar1 = iVar1 + 1;
        *puVar12 = (char)(((uint)pbVar9[2] + (uint)pbVar9[-1] + (uint)pbVar11[-1] +
                           (iVar2 + (uint)*pbVar18 + (uint)pbVar8[-1] + (uint)pbVar8[2]) * 2 +
                          (uint)pbVar11[2]) * iVar16 + iVar3 * iVar13 + 0x8000 >> 0x10);
        pbVar8 = pbVar8 + 2;
        pbVar9 = pbVar9 + 2;
        pbVar11 = pbVar11 + 2;
      }
      puVar17[(ulong)(iVar6 - 2) + 1] =
           (char)(((uint)pbVar11[1] + (uint)pbVar9[1] + (uint)pbVar4[lVar15 + 1] +
                   (uint)pbVar10[lVar15 + 1] +
                  ((uint)pbVar8[1] + (uint)pbVar18[1] + iVar2 + (uint)pbVar7[lVar15 + 1]) * 2) *
                  iVar16 + iVar3 * iVar13 + 0x8000 >> 0x10);
      lVar14 = lVar14 + 1;
    } while ((long)uVar20 < (long)*(int *)(param_1 + 0x164));
  }
  return;
}

