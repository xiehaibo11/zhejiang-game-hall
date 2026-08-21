
void FUN_010e61b4(long param_1,long param_2,long param_3,long param_4)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  
  iVar11 = *(int *)(param_1 + 0x164);
  uVar7 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  if (-2 < iVar11) {
    uVar5 = *(uint *)(param_1 + 0x30);
    if (0 < (int)(uVar7 - uVar5)) {
      uVar21 = (ulong)(iVar11 + 2);
      iVar11 = uVar5 + ~uVar7;
      if (iVar11 < -1) {
        iVar11 = -2;
      }
      plVar20 = (long *)(param_3 + -8);
      do {
        memset((void *)(*plVar20 + (ulong)uVar5),
               (uint)*(byte *)((long)(*plVar20 + (ulong)uVar5) + -1),
               (ulong)(((uVar7 + 1) - uVar5) + iVar11) + 1);
        uVar21 = uVar21 - 1;
        plVar20 = plVar20 + 1;
      } while (uVar21 != 0);
      iVar11 = *(int *)(param_1 + 0x164);
    }
  }
  if (0 < iVar11) {
    lVar13 = 0;
    iVar11 = *(int *)(param_1 + 0x134) * -0x200 + 0x10000;
    iVar12 = *(int *)(param_1 + 0x134) * 0x40;
    if (uVar7 == 2) {
      do {
        plVar20 = (long *)(param_3 + lVar13 * 8);
        pbVar8 = (byte *)*plVar20;
        puVar16 = *(undefined1 **)(param_4 + lVar13 * 8);
        lVar13 = lVar13 + 1;
        bVar6 = *pbVar8;
        iVar9 = (uint)*(byte *)plVar20[1] + (uint)*(byte *)plVar20[-1] + (uint)bVar6;
        iVar10 = (uint)((byte *)plVar20[1])[1] + (uint)((byte *)plVar20[-1])[1] + (uint)pbVar8[1];
        *puVar16 = (char)(((iVar9 * 2 - (uint)bVar6) + iVar10) * iVar12 + iVar11 * (uint)bVar6 +
                          0x8000 >> 0x10);
        puVar16[1] = (char)(((iVar9 + iVar10 * 2) - (uint)pbVar8[1]) * iVar12 +
                            iVar11 * (uint)pbVar8[1] + 0x8000 >> 0x10);
      } while (lVar13 < *(int *)(param_1 + 0x164));
    }
    else {
      lVar2 = (ulong)(uVar7 - 3) + 2;
      do {
        lVar14 = lVar13 * 8;
        lVar13 = lVar13 + 1;
        plVar20 = (long *)(param_3 + lVar14);
        pbVar17 = *(byte **)(param_3 + lVar13 * 8);
        pbVar18 = (byte *)plVar20[-1];
        pbVar4 = (byte *)*plVar20;
        puVar15 = *(undefined1 **)(param_4 + lVar14);
        bVar6 = *pbVar4;
        iVar10 = (uint)*pbVar17 + (uint)*pbVar18 + (uint)bVar6;
        iVar3 = (uint)pbVar17[1] + (uint)pbVar18[1] + (uint)pbVar4[1];
        *puVar15 = (char)(((iVar10 * 2 - (uint)bVar6) + iVar3) * iVar12 + iVar11 * (uint)bVar6 +
                          0x8000 >> 0x10);
        pbVar8 = pbVar4 + 2;
        pbVar17 = pbVar17 + 2;
        pbVar18 = pbVar18 + 2;
        puVar16 = puVar15;
        iVar9 = 2 - uVar7;
        do {
          iVar19 = iVar3;
          puVar16 = puVar16 + 1;
          pbVar1 = pbVar8 + -1;
          iVar3 = (uint)*pbVar17 + (uint)*pbVar18 + (uint)*pbVar8;
          iVar9 = iVar9 + 1;
          pbVar8 = pbVar8 + 1;
          *puVar16 = (char)((((iVar10 + iVar19) - (uint)*pbVar1) + iVar3) * iVar12 +
                            iVar11 * (uint)*pbVar1 + 0x8000 >> 0x10);
          pbVar17 = pbVar17 + 1;
          pbVar18 = pbVar18 + 1;
          iVar10 = iVar19;
        } while (iVar9 != 0);
        puVar15[lVar2] =
             (char)(((iVar19 + iVar3 * 2) - (uint)pbVar4[lVar2]) * iVar12 +
                    iVar11 * (uint)pbVar4[lVar2] + 0x8000 >> 0x10);
      } while (lVar13 < *(int *)(param_1 + 0x164));
    }
  }
  return;
}

