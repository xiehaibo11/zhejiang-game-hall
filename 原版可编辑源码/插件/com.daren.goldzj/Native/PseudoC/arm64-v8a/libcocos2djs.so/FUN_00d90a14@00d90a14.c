
void FUN_00d90a14(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 uVar15;
  undefined8 uVar14;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  iVar7 = *(int *)(param_1 + 0x1a4);
  if (0 < iVar7) {
    lVar5 = *param_4;
    lVar6 = 0;
    do {
      if (*(uint *)(param_1 + 0x88) != 0) {
        puVar10 = *(undefined1 **)(lVar5 + lVar6 * 8);
        puVar8 = *(undefined1 **)(param_3 + lVar6 * 8);
        puVar3 = puVar10 + *(uint *)(param_1 + 0x88);
        puVar11 = puVar3;
        if (puVar3 <= puVar10 + 2) {
          puVar11 = puVar10 + 2;
        }
        uVar1 = ((ulong)(puVar11 + (-1 - (long)puVar10)) >> 1) + 1;
        puVar11 = puVar10;
        if ((uVar1 < 0x20) || (uVar12 = uVar1 & 0xffffffffffffffe0, uVar12 == 0)) {
LAB_00d90ae8:
          do {
            uVar15 = *puVar8;
            *puVar11 = uVar15;
            puVar11[1] = uVar15;
            puVar11 = puVar11 + 2;
            puVar8 = puVar8 + 1;
          } while (puVar11 < puVar3);
        }
        else {
          puVar2 = puVar10 + 2;
          puVar4 = puVar3;
          if (puVar3 <= puVar2) {
            puVar4 = puVar2;
          }
          if ((puVar10 < puVar8 + ((ulong)(puVar4 + (-1 - (long)puVar10)) >> 1) + 1) &&
             (puVar8 < puVar2 + ((ulong)(puVar4 + (-1 - (long)puVar10)) & 0xfffffffffffffffe)))
          goto LAB_00d90ae8;
          puVar11 = puVar10 + uVar12 * 2;
          puVar10 = puVar10 + 0x20;
          puVar9 = (undefined8 *)(puVar8 + 0x10);
          uVar13 = uVar12;
          do {
            uVar16 = puVar9[-1];
            uVar14 = puVar9[-2];
            uVar18 = puVar9[1];
            uVar17 = *puVar9;
            uVar13 = uVar13 - 0x20;
            puVar9 = puVar9 + 4;
            puVar10[-0x20] = (char)uVar14;
            puVar10[-0x1f] = (char)uVar14;
            uVar15 = (undefined1)((ulong)uVar14 >> 8);
            puVar10[-0x1e] = uVar15;
            puVar10[-0x1d] = uVar15;
            uVar15 = (undefined1)((ulong)uVar14 >> 0x10);
            puVar10[-0x1c] = uVar15;
            puVar10[-0x1b] = uVar15;
            uVar15 = (undefined1)((ulong)uVar14 >> 0x18);
            puVar10[-0x1a] = uVar15;
            puVar10[-0x19] = uVar15;
            uVar15 = (undefined1)((ulong)uVar14 >> 0x20);
            puVar10[-0x18] = uVar15;
            puVar10[-0x17] = uVar15;
            uVar15 = (undefined1)((ulong)uVar14 >> 0x28);
            puVar10[-0x16] = uVar15;
            puVar10[-0x15] = uVar15;
            uVar15 = (undefined1)((ulong)uVar14 >> 0x30);
            puVar10[-0x14] = uVar15;
            puVar10[-0x13] = uVar15;
            uVar15 = (undefined1)((ulong)uVar14 >> 0x38);
            puVar10[-0x12] = uVar15;
            puVar10[-0x11] = uVar15;
            puVar10[-0x10] = (char)uVar16;
            puVar10[-0xf] = (char)uVar16;
            uVar15 = (undefined1)((ulong)uVar16 >> 8);
            puVar10[-0xe] = uVar15;
            puVar10[-0xd] = uVar15;
            uVar15 = (undefined1)((ulong)uVar16 >> 0x10);
            puVar10[-0xc] = uVar15;
            puVar10[-0xb] = uVar15;
            uVar15 = (undefined1)((ulong)uVar16 >> 0x18);
            puVar10[-10] = uVar15;
            puVar10[-9] = uVar15;
            uVar15 = (undefined1)((ulong)uVar16 >> 0x20);
            puVar10[-8] = uVar15;
            puVar10[-7] = uVar15;
            uVar15 = (undefined1)((ulong)uVar16 >> 0x28);
            puVar10[-6] = uVar15;
            puVar10[-5] = uVar15;
            uVar15 = (undefined1)((ulong)uVar16 >> 0x30);
            puVar10[-4] = uVar15;
            puVar10[-3] = uVar15;
            uVar15 = (undefined1)((ulong)uVar16 >> 0x38);
            puVar10[-2] = uVar15;
            puVar10[-1] = uVar15;
            *puVar10 = (char)uVar17;
            puVar10[1] = (char)uVar17;
            uVar15 = (undefined1)((ulong)uVar17 >> 8);
            puVar10[2] = uVar15;
            puVar10[3] = uVar15;
            uVar15 = (undefined1)((ulong)uVar17 >> 0x10);
            puVar10[4] = uVar15;
            puVar10[5] = uVar15;
            uVar15 = (undefined1)((ulong)uVar17 >> 0x18);
            puVar10[6] = uVar15;
            puVar10[7] = uVar15;
            uVar15 = (undefined1)((ulong)uVar17 >> 0x20);
            puVar10[8] = uVar15;
            puVar10[9] = uVar15;
            uVar15 = (undefined1)((ulong)uVar17 >> 0x28);
            puVar10[10] = uVar15;
            puVar10[0xb] = uVar15;
            uVar15 = (undefined1)((ulong)uVar17 >> 0x30);
            puVar10[0xc] = uVar15;
            puVar10[0xd] = uVar15;
            uVar15 = (undefined1)((ulong)uVar17 >> 0x38);
            puVar10[0xe] = uVar15;
            puVar10[0xf] = uVar15;
            puVar10[0x10] = (char)uVar18;
            puVar10[0x11] = (char)uVar18;
            uVar15 = (undefined1)((ulong)uVar18 >> 8);
            puVar10[0x12] = uVar15;
            puVar10[0x13] = uVar15;
            uVar15 = (undefined1)((ulong)uVar18 >> 0x10);
            puVar10[0x14] = uVar15;
            puVar10[0x15] = uVar15;
            uVar15 = (undefined1)((ulong)uVar18 >> 0x18);
            puVar10[0x16] = uVar15;
            puVar10[0x17] = uVar15;
            uVar15 = (undefined1)((ulong)uVar18 >> 0x20);
            puVar10[0x18] = uVar15;
            puVar10[0x19] = uVar15;
            uVar15 = (undefined1)((ulong)uVar18 >> 0x28);
            puVar10[0x1a] = uVar15;
            puVar10[0x1b] = uVar15;
            uVar15 = (undefined1)((ulong)uVar18 >> 0x30);
            puVar10[0x1c] = uVar15;
            puVar10[0x1d] = uVar15;
            uVar15 = (undefined1)((ulong)uVar18 >> 0x38);
            puVar10[0x1e] = uVar15;
            puVar10[0x1f] = uVar15;
            puVar10 = puVar10 + 0x40;
          } while (uVar13 != 0);
          puVar8 = puVar8 + uVar12;
          if (uVar1 != uVar12) goto LAB_00d90ae8;
        }
        iVar7 = *(int *)(param_1 + 0x1a4);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar7);
  }
  return;
}

