
undefined8 FUN_0012be7c(byte *param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ushort *puVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  
  uVar13 = *(uint *)(param_1 + 0x40);
  uVar1 = *(uint *)(param_1 + 0x58);
  uVar17 = (ulong)uVar1;
  lVar7 = *(long *)(param_1 + 0x10);
  uVar10 = uVar13 & (-1 << (ulong)(param_1[2] & 0x1f) ^ 0xffffffffU);
  uVar18 = (ulong)(uVar1 + uVar10 * 0x10);
  uVar12 = *(uint *)(param_1 + 0x38);
  uVar11 = *(uint *)(param_1 + 0x3c);
  pbVar6 = (byte *)*param_3;
  pbVar4 = param_2;
  if (uVar12 >> 0x18 == 0) {
    if (pbVar6 <= param_2) {
      return 0;
    }
    pbVar4 = param_2 + 1;
    uVar12 = uVar12 << 8;
    uVar11 = (uint)*param_2 | uVar11 << 8;
  }
  uVar8 = (uVar12 >> 0xb) * (uint)*(ushort *)(lVar7 + uVar18 * 2 + -0x200);
  uVar9 = uVar11 - uVar8;
  if (uVar11 < uVar8) {
    lVar7 = lVar7 + 0x280;
    if (*(int *)(param_1 + 0x44) != 0 || uVar13 != 0) {
      lVar19 = *(long *)(param_1 + 0x28);
      if (lVar19 == 0) {
        lVar19 = *(long *)(param_1 + 0x20);
      }
      lVar7 = lVar7 + (ulong)(((uint)(*(byte *)(lVar19 + *(long *)(param_1 + 0x18) + -1) >>
                                     (ulong)(8 - *param_1 & 0x1f)) +
                              ((uVar13 & (-1 << (ulong)(param_1[1] & 0x1f) ^ 0xffffffffU)) <<
                              (ulong)(*param_1 & 0x1f))) * 0x300) * 2;
    }
    if (uVar1 < 7) {
      uVar17 = 1;
      do {
        pbVar5 = pbVar4;
        if (uVar8 >> 0x18 == 0) {
          if (pbVar6 <= pbVar4) {
            return 0;
          }
          pbVar5 = pbVar4 + 1;
          uVar8 = uVar8 << 8;
          uVar11 = (uint)*pbVar4 | uVar11 << 8;
        }
        uVar10 = (uVar8 >> 0xb) * (uint)*(ushort *)(lVar7 + uVar17 * 2);
        if (uVar11 < uVar10) {
          uVar12 = (int)uVar17 << 1;
          uVar8 = uVar10;
        }
        else {
          uVar12 = (int)uVar17 << 1 | 1;
          uVar8 = uVar8 - uVar10;
          uVar11 = uVar11 - uVar10;
        }
        uVar17 = (ulong)uVar12;
        pbVar4 = pbVar5;
      } while (uVar12 < 0x100);
    }
    else {
      if (*(ulong *)(param_1 + 0x28) < (ulong)*(uint *)(param_1 + 0x48)) {
        lVar19 = *(long *)(param_1 + 0x20);
      }
      else {
        lVar19 = 0;
      }
      uVar12 = (uint)*(byte *)(*(long *)(param_1 + 0x18) +
                              (*(ulong *)(param_1 + 0x28) - (ulong)*(uint *)(param_1 + 0x48)) +
                              lVar19);
      uVar10 = 1;
      uVar13 = 0x100;
      do {
        uVar1 = uVar13 & uVar12 << 1;
        pbVar5 = pbVar4;
        uVar9 = uVar8;
        if (uVar8 >> 0x18 == 0) {
          if (pbVar6 <= pbVar4) {
            return 0;
          }
          pbVar5 = pbVar4 + 1;
          uVar9 = uVar8 << 8;
          uVar11 = (uint)*pbVar4 | uVar11 << 8;
        }
        uVar8 = (uVar9 >> 0xb) * (uint)*(ushort *)(lVar7 + (ulong)(uVar1 + uVar13 + uVar10) * 2);
        uVar2 = uVar11 - uVar8;
        if (uVar11 < uVar8) {
          uVar10 = uVar10 << 1;
          uVar13 = uVar1 ^ uVar13;
        }
        else {
          uVar10 = uVar10 << 1 | 1;
          uVar8 = uVar9 - uVar8;
          uVar11 = uVar2;
          uVar13 = uVar1;
        }
        uVar12 = uVar12 << 1;
        pbVar4 = pbVar5;
      } while (uVar10 < 0x100);
    }
    uVar3 = 1;
    goto LAB_0012c120;
  }
  uVar12 = uVar12 - uVar8;
  pbVar5 = pbVar4;
  if (uVar12 >> 0x18 == 0) {
    if (pbVar6 <= pbVar4) {
      return 0;
    }
    pbVar5 = pbVar4 + 1;
    uVar12 = uVar12 * 0x100;
    uVar9 = (uint)*pbVar4 | uVar9 * 0x100;
  }
  uVar13 = (uVar12 >> 0xb) * (uint)*(ushort *)(lVar7 + uVar17 * 2 + 0x20);
  uVar11 = uVar9 - uVar13;
  if (uVar9 < uVar13) {
    uVar3 = 2;
    lVar19 = -0x300;
    uVar18 = (ulong)uVar13;
    uVar2 = uVar9;
  }
  else {
    uVar12 = uVar12 - uVar13;
    pbVar4 = pbVar5;
    if (uVar12 >> 0x18 == 0) {
      if (pbVar6 <= pbVar5) {
        return 0;
      }
      pbVar4 = pbVar5 + 1;
      uVar12 = uVar12 * 0x100;
      uVar11 = (uint)*pbVar5 | uVar11 * 0x100;
    }
    uVar2 = (uVar12 >> 0xb) * (uint)*(ushort *)(lVar7 + uVar17 * 2 + 0x38);
    uVar1 = uVar11 - uVar2;
    pbVar5 = pbVar4;
    if (uVar11 < uVar2) {
      if (uVar2 >> 0x18 == 0) {
        if (pbVar6 <= pbVar4) {
          return 0;
        }
        pbVar5 = pbVar4 + 1;
        uVar2 = uVar2 * 0x100;
        uVar11 = (uint)*pbVar4 | uVar11 << 8;
      }
      uVar8 = (uVar2 >> 0xb) * (uint)*(ushort *)(lVar7 + uVar18 * 2 + -0xc00);
      if (uVar11 < uVar8) {
        uVar3 = 3;
        goto LAB_0012c120;
      }
      uVar18 = (ulong)(uVar2 - uVar8);
      uVar1 = uVar11 - uVar8;
    }
    else {
      uVar12 = uVar12 - uVar2;
      if (uVar12 >> 0x18 == 0) {
        if (pbVar6 <= pbVar4) {
          return 0;
        }
        pbVar5 = pbVar4 + 1;
        uVar12 = uVar12 * 0x100;
        uVar1 = (uint)*pbVar4 | uVar1 * 0x100;
      }
      uVar8 = (uVar12 >> 0xb) * (uint)*(ushort *)(lVar7 + uVar17 * 2 + 0x50);
      uVar18 = (ulong)uVar8;
      uVar11 = uVar1 - uVar8;
      if (uVar8 <= uVar1) {
        uVar12 = uVar12 - uVar8;
        if (uVar12 >> 0x18 == 0) {
          if (pbVar6 <= pbVar5) {
            return 0;
          }
          uVar12 = uVar12 * 0x100;
          uVar11 = (uint)*pbVar5 | uVar11 * 0x100;
          pbVar5 = pbVar5 + 1;
        }
        uVar8 = (uVar12 >> 0xb) * (uint)*(ushort *)(lVar7 + uVar17 * 2 + 0x68);
        uVar18 = (ulong)uVar8;
        uVar2 = uVar11 - uVar8;
        uVar1 = uVar11;
        if (uVar8 <= uVar11) {
          uVar18 = (ulong)(uVar12 - uVar8);
          uVar3 = 3;
          lVar19 = -0x500;
          goto LAB_0012c1c8;
        }
      }
    }
    uVar2 = uVar1;
    uVar3 = 3;
    lVar19 = -0x500;
  }
LAB_0012c1c8:
  puVar15 = (ushort *)(lVar7 + lVar19 * 2);
  pbVar4 = pbVar5;
  if ((uVar18 & 0xff000000) == 0) {
    if (pbVar6 <= pbVar5) {
      return 0;
    }
    pbVar4 = pbVar5 + 1;
    uVar18 = (ulong)(uint)((int)uVar18 << 8);
    uVar2 = (uint)*pbVar5 | uVar2 << 8;
  }
  uVar8 = (int)(uVar18 >> 0xb) * (uint)*puVar15;
  uVar11 = uVar2 - uVar8;
  uVar10 = uVar10 << 4;
  if (uVar2 < uVar8) {
    iVar16 = 0;
    puVar15 = puVar15 + uVar10;
    uVar12 = 8;
  }
  else {
    uVar12 = (int)uVar18 - uVar8;
    if (uVar12 >> 0x18 == 0) {
      if (pbVar6 <= pbVar4) {
        return 0;
      }
      uVar12 = uVar12 * 0x100;
      uVar11 = (uint)*pbVar4 | uVar11 * 0x100;
      pbVar4 = pbVar4 + 1;
    }
    uVar8 = (uVar12 >> 0xb) * (uint)puVar15[8];
    uVar2 = uVar11 - uVar8;
    if (uVar11 < uVar8) {
      uVar12 = 8;
      puVar15 = puVar15 + (ulong)uVar10 + 8;
      iVar16 = 8;
      uVar2 = uVar11;
    }
    else {
      uVar8 = uVar12 - uVar8;
      puVar15 = puVar15 + 0x100;
      iVar16 = 0x10;
      uVar12 = 0x100;
    }
  }
  uVar17 = 1;
  do {
    pbVar5 = pbVar4;
    uVar11 = uVar8;
    if (uVar8 >> 0x18 == 0) {
      if (pbVar6 <= pbVar4) {
        return 0;
      }
      pbVar5 = pbVar4 + 1;
      uVar11 = uVar8 << 8;
      uVar2 = (uint)*pbVar4 | uVar2 << 8;
    }
    uVar8 = (uVar11 >> 0xb) * (uint)puVar15[uVar17];
    uVar10 = uVar2 - uVar8;
    if (uVar2 < uVar8) {
      uVar1 = (int)uVar17 << 1;
    }
    else {
      uVar1 = (int)uVar17 << 1 | 1;
      uVar8 = uVar11 - uVar8;
      uVar2 = uVar10;
    }
    uVar17 = (ulong)uVar1;
    pbVar4 = pbVar5;
  } while (uVar1 < uVar12);
  if (uVar9 < uVar13) {
    uVar11 = (uVar1 - uVar12) + iVar16;
    if (2 < uVar11) {
      uVar11 = 3;
    }
    uVar17 = 1;
    do {
      pbVar5 = pbVar4;
      uVar10 = uVar8;
      if (uVar8 >> 0x18 == 0) {
        if (pbVar6 <= pbVar4) {
          return 0;
        }
        pbVar5 = pbVar4 + 1;
        uVar10 = uVar8 << 8;
        uVar2 = (uint)*pbVar4 | uVar2 << 8;
      }
      uVar8 = (uVar10 >> 0xb) *
              (uint)*(ushort *)(lVar7 + (ulong)(uVar11 << 6) * 2 + 0x80 + uVar17 * 2);
      uVar12 = uVar2 - uVar8;
      if (uVar2 < uVar8) {
        uVar13 = (int)uVar17 << 1;
      }
      else {
        uVar13 = (int)uVar17 << 1 | 1;
        uVar8 = uVar10 - uVar8;
        uVar2 = uVar12;
      }
      uVar17 = (ulong)uVar13;
      uVar10 = uVar13 - 0x40;
      pbVar4 = pbVar5;
    } while (uVar13 < 0x40);
    if (3 < uVar10) {
      if (uVar10 < 0xe) {
        uVar11 = (uVar10 >> 1) - 1;
        lVar7 = lVar7 + (ulong)((uVar13 & 1 | 2) << (ulong)(uVar11 & 0x1f)) * 2 + -0xd00;
      }
      else {
        iVar16 = (uVar10 >> 1) - 5;
        do {
          pbVar5 = pbVar4;
          if (uVar8 >> 0x18 == 0) {
            if (pbVar6 <= pbVar4) {
              return 0;
            }
            pbVar5 = pbVar4 + 1;
            uVar8 = uVar8 << 8;
            uVar2 = (uint)*pbVar4 | uVar2 << 8;
          }
          uVar11 = uVar8 >> 1;
          uVar10 = uVar8 >> 1;
          uVar8 = uVar8 >> 1;
          iVar16 = iVar16 + -1;
          uVar2 = uVar2 - (0xffffffffU - ((int)(uVar2 - uVar11) >> 0x1f) & uVar10);
          pbVar4 = pbVar5;
        } while (iVar16 != 0);
        uVar11 = 4;
      }
      uVar17 = 1;
      iVar16 = 1;
      pbVar4 = pbVar5;
      do {
        pbVar5 = pbVar4;
        uVar10 = uVar8;
        if (uVar8 >> 0x18 == 0) {
          if (pbVar6 <= pbVar4) {
            return 0;
          }
          pbVar5 = pbVar4 + 1;
          uVar10 = uVar8 << 8;
          uVar2 = (uint)*pbVar4 | uVar2 << 8;
        }
        uVar8 = (uVar10 >> 0xb) * (uint)*(ushort *)(lVar7 + uVar17 * 2);
        uVar12 = uVar2 - uVar8;
        iVar14 = iVar16;
        if (uVar8 <= uVar2) {
          uVar8 = uVar10 - uVar8;
          iVar14 = iVar16 << 1;
          uVar2 = uVar12;
        }
        iVar16 = iVar16 << 1;
        uVar11 = uVar11 - 1;
        uVar17 = (ulong)(uint)(iVar14 + (int)uVar17);
        pbVar4 = pbVar5;
      } while (uVar11 != 0);
    }
  }
LAB_0012c120:
  if (uVar8 >> 0x18 == 0) {
    if (pbVar6 <= pbVar5) {
      return 0;
    }
    pbVar5 = pbVar5 + 1;
  }
  *param_3 = (long)pbVar5;
  return uVar3;
}

