
void FUN_010ecfbc(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 uVar16;
  undefined8 uVar15;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (0 < *(int *)(param_1 + 0x1a4)) {
    lVar12 = *param_4;
    lVar14 = 0;
    uVar13 = 0;
    do {
      if (*(uint *)(param_1 + 0x88) == 0) {
        uVar5 = 0;
      }
      else {
        puVar8 = *(undefined1 **)(lVar12 + uVar13 * 8);
        puVar6 = *(undefined1 **)(param_3 + lVar14 * 8);
        puVar3 = puVar8 + *(uint *)(param_1 + 0x88);
        puVar9 = puVar3;
        if (puVar3 <= puVar8 + 2) {
          puVar9 = puVar8 + 2;
        }
        uVar1 = ((ulong)(puVar9 + (-1 - (long)puVar8)) >> 1) + 1;
        puVar9 = puVar8;
        if ((uVar1 < 0x20) || (uVar10 = uVar1 & 0xffffffffffffffe0, uVar10 == 0)) {
LAB_010ed0b0:
          do {
            uVar16 = *puVar6;
            *puVar9 = uVar16;
            puVar9[1] = uVar16;
            puVar9 = puVar9 + 2;
            puVar6 = puVar6 + 1;
          } while (puVar9 < puVar3);
        }
        else {
          puVar2 = puVar8 + 2;
          puVar4 = puVar3;
          if (puVar3 <= puVar2) {
            puVar4 = puVar2;
          }
          if ((puVar8 < puVar6 + ((ulong)(puVar4 + (-1 - (long)puVar8)) >> 1) + 1) &&
             (puVar6 < puVar2 + ((ulong)(puVar4 + (-1 - (long)puVar8)) & 0xfffffffffffffffe)))
          goto LAB_010ed0b0;
          puVar9 = puVar8 + uVar10 * 2;
          puVar8 = puVar8 + 0x20;
          puVar7 = (undefined8 *)(puVar6 + 0x10);
          uVar11 = uVar10;
          do {
            uVar17 = puVar7[-1];
            uVar15 = puVar7[-2];
            uVar19 = puVar7[1];
            uVar18 = *puVar7;
            uVar11 = uVar11 - 0x20;
            puVar7 = puVar7 + 4;
            puVar8[-0x20] = (char)uVar15;
            puVar8[-0x1f] = (char)uVar15;
            uVar16 = (undefined1)((ulong)uVar15 >> 8);
            puVar8[-0x1e] = uVar16;
            puVar8[-0x1d] = uVar16;
            uVar16 = (undefined1)((ulong)uVar15 >> 0x10);
            puVar8[-0x1c] = uVar16;
            puVar8[-0x1b] = uVar16;
            uVar16 = (undefined1)((ulong)uVar15 >> 0x18);
            puVar8[-0x1a] = uVar16;
            puVar8[-0x19] = uVar16;
            uVar16 = (undefined1)((ulong)uVar15 >> 0x20);
            puVar8[-0x18] = uVar16;
            puVar8[-0x17] = uVar16;
            uVar16 = (undefined1)((ulong)uVar15 >> 0x28);
            puVar8[-0x16] = uVar16;
            puVar8[-0x15] = uVar16;
            uVar16 = (undefined1)((ulong)uVar15 >> 0x30);
            puVar8[-0x14] = uVar16;
            puVar8[-0x13] = uVar16;
            uVar16 = (undefined1)((ulong)uVar15 >> 0x38);
            puVar8[-0x12] = uVar16;
            puVar8[-0x11] = uVar16;
            puVar8[-0x10] = (char)uVar17;
            puVar8[-0xf] = (char)uVar17;
            uVar16 = (undefined1)((ulong)uVar17 >> 8);
            puVar8[-0xe] = uVar16;
            puVar8[-0xd] = uVar16;
            uVar16 = (undefined1)((ulong)uVar17 >> 0x10);
            puVar8[-0xc] = uVar16;
            puVar8[-0xb] = uVar16;
            uVar16 = (undefined1)((ulong)uVar17 >> 0x18);
            puVar8[-10] = uVar16;
            puVar8[-9] = uVar16;
            uVar16 = (undefined1)((ulong)uVar17 >> 0x20);
            puVar8[-8] = uVar16;
            puVar8[-7] = uVar16;
            uVar16 = (undefined1)((ulong)uVar17 >> 0x28);
            puVar8[-6] = uVar16;
            puVar8[-5] = uVar16;
            uVar16 = (undefined1)((ulong)uVar17 >> 0x30);
            puVar8[-4] = uVar16;
            puVar8[-3] = uVar16;
            uVar16 = (undefined1)((ulong)uVar17 >> 0x38);
            puVar8[-2] = uVar16;
            puVar8[-1] = uVar16;
            *puVar8 = (char)uVar18;
            puVar8[1] = (char)uVar18;
            uVar16 = (undefined1)((ulong)uVar18 >> 8);
            puVar8[2] = uVar16;
            puVar8[3] = uVar16;
            uVar16 = (undefined1)((ulong)uVar18 >> 0x10);
            puVar8[4] = uVar16;
            puVar8[5] = uVar16;
            uVar16 = (undefined1)((ulong)uVar18 >> 0x18);
            puVar8[6] = uVar16;
            puVar8[7] = uVar16;
            uVar16 = (undefined1)((ulong)uVar18 >> 0x20);
            puVar8[8] = uVar16;
            puVar8[9] = uVar16;
            uVar16 = (undefined1)((ulong)uVar18 >> 0x28);
            puVar8[10] = uVar16;
            puVar8[0xb] = uVar16;
            uVar16 = (undefined1)((ulong)uVar18 >> 0x30);
            puVar8[0xc] = uVar16;
            puVar8[0xd] = uVar16;
            uVar16 = (undefined1)((ulong)uVar18 >> 0x38);
            puVar8[0xe] = uVar16;
            puVar8[0xf] = uVar16;
            puVar8[0x10] = (char)uVar19;
            puVar8[0x11] = (char)uVar19;
            uVar16 = (undefined1)((ulong)uVar19 >> 8);
            puVar8[0x12] = uVar16;
            puVar8[0x13] = uVar16;
            uVar16 = (undefined1)((ulong)uVar19 >> 0x10);
            puVar8[0x14] = uVar16;
            puVar8[0x15] = uVar16;
            uVar16 = (undefined1)((ulong)uVar19 >> 0x18);
            puVar8[0x16] = uVar16;
            puVar8[0x17] = uVar16;
            uVar16 = (undefined1)((ulong)uVar19 >> 0x20);
            puVar8[0x18] = uVar16;
            puVar8[0x19] = uVar16;
            uVar16 = (undefined1)((ulong)uVar19 >> 0x28);
            puVar8[0x1a] = uVar16;
            puVar8[0x1b] = uVar16;
            uVar16 = (undefined1)((ulong)uVar19 >> 0x30);
            puVar8[0x1c] = uVar16;
            puVar8[0x1d] = uVar16;
            uVar16 = (undefined1)((ulong)uVar19 >> 0x38);
            puVar8[0x1e] = uVar16;
            puVar8[0x1f] = uVar16;
            puVar8 = puVar8 + 0x40;
          } while (uVar11 != 0);
          puVar6 = puVar6 + uVar10;
          if (uVar1 != uVar10) goto LAB_010ed0b0;
        }
        uVar5 = *(undefined4 *)(param_1 + 0x88);
      }
      jcopy_sample_rows(lVar12,uVar13 & 0xffffffff,lVar12,(uint)uVar13 | 1,1,uVar5);
      uVar13 = uVar13 + 2;
      lVar14 = lVar14 + 1;
    } while ((long)uVar13 < (long)*(int *)(param_1 + 0x1a4));
  }
  return;
}

