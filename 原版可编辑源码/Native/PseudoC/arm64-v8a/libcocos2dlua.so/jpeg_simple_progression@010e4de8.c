
void jpeg_simple_progression(long *param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 uVar18;
  int iVar19;
  
  iVar17 = *(int *)((long)param_1 + 0x24);
  uVar2 = *(uint *)((long)param_1 + 0x5c);
  uVar14 = (ulong)uVar2;
  if (iVar17 != 100) {
    puVar7 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar7 + 5) = 0x15;
    *(int *)((long)puVar7 + 0x2c) = iVar17;
    (*(code *)*puVar7)(param_1);
  }
  if (uVar2 == 3) {
    if ((*(uint *)(param_1 + 0xc) | 4) == 7) {
      uVar15 = 10;
      puVar4 = (uint *)param_1[0x47];
    }
    else {
LAB_010e4e68:
      uVar15 = uVar2 << 2 | 2;
      puVar4 = (uint *)param_1[0x47];
    }
    if (puVar4 == (uint *)0x0) goto LAB_010e4e84;
LAB_010e4e78:
    if ((int)param_1[0x48] < (int)uVar15) goto LAB_010e4e84;
  }
  else {
    if ((int)uVar2 < 5) goto LAB_010e4e68;
    uVar15 = uVar2 * 6;
    puVar4 = (uint *)param_1[0x47];
    if (puVar4 != (uint *)0x0) goto LAB_010e4e78;
LAB_010e4e84:
    uVar6 = uVar15;
    if ((int)uVar15 < 0xb) {
      uVar6 = 10;
    }
    *(uint *)(param_1 + 0x48) = uVar6;
    puVar4 = (uint *)(**(code **)param_1[1])(param_1,0,(ulong)uVar6 * 0x24);
    param_1[0x47] = (long)puVar4;
  }
  param_1[0x23] = (long)puVar4;
  *(uint *)(param_1 + 0x22) = uVar15;
  if (uVar2 == 3) {
    if ((*(uint *)(param_1 + 0xc) | 4) == 7) {
      puVar4[7] = 0;
      puVar4[8] = 1;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[0x10] = 0;
      puVar4[0x11] = 2;
      puVar4[0xe] = 1;
      puVar4[0xf] = 5;
      puVar4[0x32] = 1;
      puVar4[0x33] = 0x3f;
      puVar4[0x34] = 2;
      puVar4[0x35] = 1;
      puVar4[0x19] = 0;
      puVar4[0x1a] = 1;
      puVar4[0x17] = 1;
      puVar4[0x18] = 0x3f;
      puVar4[0x22] = 0;
      puVar4[0x23] = 1;
      puVar4[0x20] = 1;
      puVar4[0x21] = 0x3f;
      puVar4[0x2b] = 0;
      puVar4[0x2c] = 2;
      puVar4[0x29] = 6;
      puVar4[0x2a] = 0x3f;
      puVar4[0x3d] = 1;
      puVar4[0x3e] = 0;
      puVar4[0x3b] = 0;
      puVar4[0x3c] = 0;
      puVar4[0] = 3;
      puVar4[1] = 0;
      puVar4[2] = 1;
      puVar4[3] = 2;
      puVar4[0x12] = 1;
      puVar4[0x13] = 2;
      puVar4[0x36] = 3;
      puVar4[0x37] = 0;
      puVar4[0x38] = 1;
      puVar4[0x39] = 2;
      puVar4[0x3f] = 1;
      puVar4[0x40] = 2;
      puVar4[9] = 1;
      puVar4[10] = 0;
      puVar4[0x1b] = 1;
      puVar4[0x1c] = 1;
      puVar4[0x24] = 1;
      puVar4[0x25] = 0;
      puVar4[0x2d] = 1;
      puVar4[0x2e] = 0;
      puVar4[0x48] = 1;
      puVar4[0x49] = 1;
      puVar4[0x46] = 1;
      puVar4[0x47] = 0;
      puVar4[0x44] = 1;
      puVar4[0x45] = 0x3f;
      puVar4[0x4f] = 1;
      puVar4[0x50] = 0;
      puVar4[0x4d] = 1;
      puVar4[0x4e] = 0x3f;
      puVar4[0x51] = 1;
      puVar4[0x52] = 0;
      puVar4[0x58] = 1;
      puVar4[0x59] = 0;
      puVar4[0x56] = 1;
      puVar4[0x57] = 0x3f;
      return;
    }
    *puVar4 = 3;
LAB_010e4fa4:
    uVar5 = 0;
LAB_010e5014:
    do {
      puVar4[uVar5 + 1] = (uint)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar14 != uVar5);
LAB_010e5028:
    bVar3 = true;
    lVar11 = 1;
    puVar4[7] = 0;
    puVar4[8] = 1;
    puVar4[5] = 0;
    puVar4[6] = 0;
  }
  else {
    if ((int)uVar2 < 5) {
      *puVar4 = uVar2;
      if (0 < (int)uVar2) {
        if (uVar2 < 8) goto LAB_010e4fa4;
        uVar5 = uVar14 - (uVar2 & 7);
        if (uVar5 != 0) {
          uVar18 = 0x300000002;
          uVar16 = 0x100000000;
          puVar8 = puVar4 + 5;
          uVar9 = uVar5;
          do {
            iVar17 = (int)((ulong)uVar16 >> 0x20);
            iVar19 = (int)((ulong)uVar18 >> 0x20);
            *(undefined8 *)(puVar8 + -2) = uVar18;
            *(undefined8 *)(puVar8 + -4) = uVar16;
            *(ulong *)(puVar8 + 2) = CONCAT44(iVar19 + 4,(int)uVar18 + 4);
            *(ulong *)puVar8 = CONCAT44(iVar17 + 4,(int)uVar16 + 4);
            uVar16 = CONCAT44(iVar17 + 8,(int)uVar16 + 8);
            uVar18 = CONCAT44(iVar19 + 8,(int)uVar18 + 8);
            uVar9 = uVar9 - 8;
            puVar8 = puVar8 + 8;
          } while (uVar9 != 0);
          if ((uVar2 & 7) == 0) goto LAB_010e5028;
        }
        goto LAB_010e5014;
      }
      goto LAB_010e5028;
    }
    uVar15 = uVar2 - 1;
    uVar5 = (ulong)uVar15 + 1;
    puVar8 = puVar4;
    if (uVar5 < 2) {
      uVar5 = 0;
LAB_010e50a4:
      do {
        *puVar8 = 1;
        puVar8[1] = (uint)uVar5;
        uVar6 = (uint)uVar5 + 1;
        uVar5 = (ulong)uVar6;
        puVar8[7] = 0;
        puVar8[8] = 1;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8 = puVar8 + 9;
      } while (uVar2 != uVar6);
    }
    else {
      uVar5 = uVar5 - (~uVar15 & 1);
      if (uVar5 == 0) goto LAB_010e50a4;
      uVar9 = 0;
      puVar8 = puVar4 + 9;
      do {
        uVar6 = (uint)uVar9;
        puVar8[-9] = 1;
        puVar8[-8] = uVar6;
        uVar9 = uVar9 + 2;
        puVar8[-2] = 0;
        puVar8[-1] = 1;
        puVar8[-4] = 0;
        puVar8[-3] = 0;
        puVar8[7] = 0;
        puVar8[8] = 1;
        puVar8[5] = 0;
        puVar8[6] = 0;
        *puVar8 = 1;
        puVar8[1] = uVar6 + 1;
        puVar8 = puVar8 + 0x12;
      } while (uVar5 != uVar9);
      puVar8 = puVar4 + uVar5 * 9;
      if ((~uVar15 & 1) != 0) goto LAB_010e50a4;
    }
    bVar3 = false;
    lVar11 = (ulong)uVar15 + 1;
  }
  uVar15 = uVar2 - 1;
  uVar5 = (ulong)uVar15;
  puVar8 = puVar4 + lVar11 * 9;
  if (0 < (int)uVar2) {
    uVar9 = uVar5 + 1;
    puVar12 = puVar8;
    if (uVar9 < 2) {
      uVar10 = 0;
LAB_010e5158:
      do {
        *puVar12 = 1;
        puVar12[1] = (uint)uVar10;
        uVar6 = (uint)uVar10 + 1;
        uVar10 = (ulong)uVar6;
        puVar12[7] = 0;
        puVar12[8] = 2;
        puVar12[5] = 1;
        puVar12[6] = 5;
        puVar12 = puVar12 + 9;
      } while (uVar2 != uVar6);
    }
    else {
      uVar10 = uVar9 - (~uVar15 & 1);
      if (uVar10 == 0) goto LAB_010e5158;
      uVar13 = 0;
      puVar12 = puVar4 + lVar11 * 9 + 9;
      do {
        uVar6 = (uint)uVar13;
        puVar12[-9] = 1;
        puVar12[-8] = uVar6;
        uVar13 = uVar13 + 2;
        puVar12[-2] = 0;
        puVar12[-1] = 2;
        puVar12[-4] = 1;
        puVar12[-3] = 5;
        puVar12[7] = 0;
        puVar12[8] = 2;
        puVar12[5] = 1;
        puVar12[6] = 5;
        *puVar12 = 1;
        puVar12[1] = uVar6 + 1;
        puVar12 = puVar12 + 0x12;
      } while (uVar10 != uVar13);
      puVar12 = puVar8 + uVar10 * 9;
      if ((~uVar15 & 1) != 0) goto LAB_010e5158;
    }
    lVar1 = uVar5 + 1;
    puVar8 = puVar8 + lVar1 * 9;
    puVar12 = puVar8;
    if (uVar9 < 2) {
      uVar10 = 0;
LAB_010e5200:
      do {
        *puVar12 = 1;
        puVar12[1] = (uint)uVar10;
        uVar6 = (uint)uVar10 + 1;
        uVar10 = (ulong)uVar6;
        puVar12[7] = 0;
        puVar12[8] = 2;
        puVar12[5] = 6;
        puVar12[6] = 0x3f;
        puVar12 = puVar12 + 9;
      } while (uVar2 != uVar6);
    }
    else {
      uVar10 = uVar9 - (~uVar15 & 1);
      if (uVar10 == 0) goto LAB_010e5200;
      uVar13 = 0;
      puVar4 = puVar4 + (lVar11 + uVar5) * 9 + 0x17;
      do {
        uVar6 = (uint)uVar13;
        puVar4[-0xe] = 1;
        puVar4[-0xd] = uVar6;
        uVar13 = uVar13 + 2;
        puVar4[-7] = 0;
        puVar4[-6] = 2;
        puVar4[-9] = 6;
        puVar4[-8] = 0x3f;
        puVar4[2] = 0;
        puVar4[3] = 2;
        puVar4[0] = 6;
        puVar4[1] = 0x3f;
        puVar4[-5] = 1;
        puVar4[-4] = uVar6 + 1;
        puVar4 = puVar4 + 0x12;
      } while (uVar10 != uVar13);
      puVar12 = puVar8 + uVar10 * 9;
      if ((~uVar15 & 1) != 0) goto LAB_010e5200;
    }
    puVar8 = puVar8 + lVar1 * 9;
    puVar4 = puVar8;
    if (uVar9 < 2) {
      uVar9 = 0;
LAB_010e5298:
      do {
        *puVar4 = 1;
        puVar4[1] = (uint)uVar9;
        uVar6 = (uint)uVar9 + 1;
        uVar9 = (ulong)uVar6;
        puVar4[7] = 2;
        puVar4[8] = 1;
        puVar4[5] = 1;
        puVar4[6] = 0x3f;
        puVar4 = puVar4 + 9;
      } while (uVar2 != uVar6);
    }
    else {
      uVar9 = uVar9 - (~uVar15 & 1);
      if (uVar9 == 0) goto LAB_010e5298;
      uVar10 = 0;
      do {
        uVar6 = (uint)uVar10;
        *puVar4 = 1;
        puVar4[1] = uVar6;
        uVar10 = uVar10 + 2;
        puVar4[7] = 2;
        puVar4[8] = 1;
        puVar4[5] = 1;
        puVar4[6] = 0x3f;
        puVar4[0x10] = 2;
        puVar4[0x11] = 1;
        puVar4[0xe] = 1;
        puVar4[0xf] = 0x3f;
        puVar4[9] = 1;
        puVar4[10] = uVar6 + 1;
        puVar4 = puVar4 + 0x12;
      } while (uVar9 != uVar10);
      puVar4 = puVar8 + uVar9 * 9;
      if ((~uVar15 & 1) != 0) goto LAB_010e5298;
    }
    puVar8 = puVar8 + lVar1 * 9;
  }
  if (bVar3) {
    *puVar8 = uVar2;
    if (0 < (int)uVar2) {
      if (uVar2 < 8) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar14 - (uVar2 & 7);
        if (uVar5 != 0) {
          uVar18 = 0x300000002;
          uVar16 = 0x100000000;
          puVar4 = puVar8 + 5;
          uVar9 = uVar5;
          do {
            iVar17 = (int)((ulong)uVar16 >> 0x20);
            iVar19 = (int)((ulong)uVar18 >> 0x20);
            *(undefined8 *)(puVar4 + -2) = uVar18;
            *(undefined8 *)(puVar4 + -4) = uVar16;
            *(ulong *)(puVar4 + 2) = CONCAT44(iVar19 + 4,(int)uVar18 + 4);
            *(ulong *)puVar4 = CONCAT44(iVar17 + 4,(int)uVar16 + 4);
            uVar16 = CONCAT44(iVar17 + 8,(int)uVar16 + 8);
            uVar18 = CONCAT44(iVar19 + 8,(int)uVar18 + 8);
            uVar9 = uVar9 - 8;
            puVar4 = puVar4 + 8;
          } while (uVar9 != 0);
          if ((uVar2 & 7) == 0) goto LAB_010e53d0;
        }
      }
      do {
        puVar8[uVar5 + 1] = (uint)uVar5;
        uVar5 = uVar5 + 1;
      } while (uVar14 != uVar5);
    }
LAB_010e53d0:
    lVar11 = 1;
    puVar8[7] = 1;
    puVar8[8] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    goto joined_r0x010e5374;
  }
  puVar4 = puVar8;
  if (uVar5 + 1 < 2) {
    uVar14 = 0;
LAB_010e5350:
    do {
      *puVar4 = 1;
      puVar4[1] = (uint)uVar14;
      uVar15 = (uint)uVar14 + 1;
      uVar14 = (ulong)uVar15;
      puVar4[7] = 1;
      puVar4[8] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4 = puVar4 + 9;
    } while (uVar2 != uVar15);
  }
  else {
    uVar14 = (uVar5 + 1) - (ulong)(~uVar15 & 1);
    if (uVar14 == 0) goto LAB_010e5350;
    uVar9 = 0;
    puVar4 = puVar8 + 9;
    do {
      uVar6 = (uint)uVar9;
      puVar4[-9] = 1;
      puVar4[-8] = uVar6;
      uVar9 = uVar9 + 2;
      puVar4[-2] = 1;
      puVar4[-1] = 0;
      puVar4[-4] = 0;
      puVar4[-3] = 0;
      puVar4[7] = 1;
      puVar4[8] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      *puVar4 = 1;
      puVar4[1] = uVar6 + 1;
      puVar4 = puVar4 + 0x12;
    } while (uVar14 != uVar9);
    puVar4 = puVar8 + uVar14 * 9;
    if ((~uVar15 & 1) != 0) goto LAB_010e5350;
  }
  lVar11 = uVar5 + 1;
joined_r0x010e5374:
  if (0 < (int)uVar2) {
    uVar14 = (ulong)(uVar2 - 1) + 1;
    puVar4 = puVar8 + lVar11 * 9;
    if (uVar14 < 2) {
      uVar14 = 0;
    }
    else {
      uVar15 = ~(uVar2 - 1) & 1;
      uVar14 = uVar14 - uVar15;
      if (uVar14 != 0) {
        uVar5 = 0;
        puVar4 = puVar4 + uVar14 * 9;
        puVar8 = puVar8 + lVar11 * 9 + 9;
        do {
          uVar6 = (uint)uVar5;
          puVar8[-9] = 1;
          puVar8[-8] = uVar6;
          uVar5 = uVar5 + 2;
          puVar8[-2] = 1;
          puVar8[-1] = 0;
          puVar8[-4] = 1;
          puVar8[-3] = 0x3f;
          puVar8[7] = 1;
          puVar8[8] = 0;
          puVar8[5] = 1;
          puVar8[6] = 0x3f;
          *puVar8 = 1;
          puVar8[1] = uVar6 + 1;
          puVar8 = puVar8 + 0x12;
        } while (uVar14 != uVar5);
        if (uVar15 == 0) {
          return;
        }
      }
    }
    do {
      *puVar4 = 1;
      puVar4[1] = (uint)uVar14;
      uVar15 = (uint)uVar14 + 1;
      uVar14 = (ulong)uVar15;
      puVar4[7] = 1;
      puVar4[8] = 0;
      puVar4[5] = 1;
      puVar4[6] = 0x3f;
      puVar4 = puVar4 + 9;
    } while (uVar2 != uVar15);
  }
  return;
}

