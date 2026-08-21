
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00c11bd0(uint *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  undefined4 *puVar12;
  void *pvVar13;
  uint uVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  long lVar19;
  ulong uVar20;
  uint *puVar21;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar18 = (uint *)(param_2 + -0x10);
  uVar20 = *(ulong *)(param_2 + -8) & 0xfffffffffffffffc;
  puVar17 = (uint *)((long)puVar18 + uVar20);
  if ((*(ulong *)(param_2 + -8) & 1) != 0) goto LAB_00c11cc0;
  uVar15 = *(ulong *)(param_2 + -0x10);
  if ((uVar15 & 1) != 0) {
    puVar12 = (undefined4 *)__errno();
    uVar2 = *puVar12;
    munmap((void *)((long)puVar18 - (uVar15 & 0xfffffffffffffffe)),
           uVar20 + (uVar15 & 0xfffffffffffffffe) + 0x20);
    *puVar12 = uVar2;
    return 0;
  }
  puVar18 = (uint *)((long)puVar18 - uVar15);
  uVar20 = uVar20 + uVar15;
  if (puVar18 == *(uint **)(param_1 + 6)) {
    uVar9 = *(ulong *)(puVar17 + 2);
    if ((uVar9 & 3) == 3) {
      *(ulong *)(param_1 + 2) = uVar20;
      *(ulong *)(puVar17 + 2) = uVar9 & 0xfffffffffffffffe;
      *(ulong *)(puVar18 + 2) = uVar20 | 1;
      *(ulong *)((long)puVar18 + uVar20) = uVar20;
      return 0;
    }
LAB_00c11c44:
    uVar6 = (uint)uVar9;
  }
  else if (uVar15 >> 3 < 0x20) {
    lVar19 = *(long *)(puVar18 + 4);
    lVar8 = *(long *)(puVar18 + 6);
    if (lVar19 != lVar8) {
      *(long *)(lVar19 + 0x18) = lVar8;
      *(long *)(lVar8 + 0x10) = lVar19;
      uVar9 = *(ulong *)(puVar17 + 2);
      goto LAB_00c11c44;
    }
    uVar9 = *(ulong *)(puVar17 + 2);
    *param_1 = *param_1 & (1 << (ulong)((uint)(uVar15 >> 3) & 0x1f) ^ 0xffffffffU);
    uVar6 = (uint)uVar9;
  }
  else {
    puVar16 = *(uint **)(puVar18 + 6);
    lVar8 = *(long *)(puVar18 + 0xc);
    if (puVar18 == puVar16) {
      puVar11 = *(uint **)(puVar18 + 10);
      puVar4 = puVar18 + 10;
      if (*(uint **)(puVar18 + 10) == (uint *)0x0) {
        puVar16 = *(uint **)(puVar18 + 8);
        puVar11 = puVar16;
        puVar4 = puVar18 + 8;
        if (puVar16 == (uint *)0x0) goto LAB_00c11efc;
      }
      do {
        do {
          puVar21 = puVar4;
          puVar16 = puVar11;
          puVar11 = *(uint **)(puVar16 + 10);
          puVar4 = puVar16 + 10;
        } while (*(uint **)(puVar16 + 10) != (uint *)0x0);
        puVar11 = *(uint **)(puVar16 + 8);
        puVar4 = puVar16 + 8;
      } while (*(uint **)(puVar16 + 8) != (uint *)0x0);
      puVar21[0] = 0;
      puVar21[1] = 0;
    }
    else {
      lVar19 = *(long *)(puVar18 + 4);
      *(uint **)(lVar19 + 0x18) = puVar16;
      *(long *)(puVar16 + 4) = lVar19;
    }
LAB_00c11efc:
    if (lVar8 != 0) {
      lVar19 = *(long *)(puVar18 + 0xe);
      if (puVar18 == *(uint **)(param_1 + lVar19 * 2 + 0x92)) {
        *(uint **)(param_1 + lVar19 * 2 + 0x92) = puVar16;
        if (puVar16 == (uint *)0x0) {
          uVar9 = *(ulong *)(puVar17 + 2);
          param_1[1] = param_1[1] & (1 << (ulong)((uint)lVar19 & 0x1f) ^ 0xffffffffU);
          uVar6 = (uint)uVar9;
          goto joined_r0x00c11c44;
        }
      }
      else {
        if (puVar18 == *(uint **)(lVar8 + 0x20)) {
          *(uint **)(lVar8 + 0x20) = puVar16;
        }
        else {
          *(uint **)(lVar8 + 0x28) = puVar16;
        }
        if (puVar16 == (uint *)0x0) goto LAB_00c11cc0;
      }
      lVar19 = *(long *)(puVar18 + 8);
      *(long *)(puVar16 + 0xc) = lVar8;
      if (lVar19 != 0) {
        *(long *)(puVar16 + 8) = lVar19;
        *(uint **)(lVar19 + 0x30) = puVar16;
      }
      lVar8 = *(long *)(puVar18 + 10);
      if (lVar8 != 0) {
        *(long *)(puVar16 + 10) = lVar8;
        *(uint **)(lVar8 + 0x30) = puVar16;
        uVar9 = *(ulong *)(puVar17 + 2);
        uVar6 = (uint)uVar9;
        goto joined_r0x00c11c44;
      }
    }
LAB_00c11cc0:
    uVar9 = *(ulong *)(puVar17 + 2);
    uVar6 = (uint)uVar9;
  }
joined_r0x00c11c44:
  if ((uVar6 >> 1 & 1) != 0) {
    *(ulong *)(puVar17 + 2) = uVar9 & 0xfffffffffffffffe;
    *(ulong *)((long)puVar18 + 8) = uVar20 | 1;
    *(ulong *)((long)puVar18 + uVar20) = uVar20;
    goto LAB_00c11cdc;
  }
  if (*(uint **)(param_1 + 8) == puVar17) {
    puVar17 = *(uint **)(param_1 + 6);
    uVar20 = uVar20 + *(long *)(param_1 + 4);
    *(uint **)(param_1 + 8) = puVar18;
    *(ulong *)(param_1 + 4) = uVar20;
    *(ulong *)((long)puVar18 + 8) = uVar20 | 1;
    if (puVar17 == puVar18) {
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    if (uVar20 <= *(ulong *)(param_1 + 10)) {
      return 0;
    }
    if (0x40 < uVar20) {
      puVar17 = param_1 + 0xd2;
      uVar20 = (uVar20 + 0x1ffbf & 0xfffffffffffe0000) - 0x20000;
      puVar16 = puVar17;
      do {
        puVar11 = *(uint **)puVar16;
        if (puVar11 <= puVar18) {
          uVar15 = *(ulong *)(puVar16 + 2);
          if (puVar18 < (uint *)((long)puVar11 + uVar15)) {
            if (uVar20 <= uVar15) goto LAB_00c12188;
            break;
          }
        }
        puVar16 = *(uint **)(puVar16 + 4);
        if (puVar16 == (uint *)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1000,0xc12020);
          (*pcVar5)();
        }
      } while( true );
    }
    goto LAB_00c121f0;
  }
  puVar16 = *(uint **)(param_1 + 6);
  if (puVar16 == puVar17) {
    *(uint **)(param_1 + 6) = puVar18;
    uVar20 = uVar20 + *(long *)(param_1 + 2);
    *(ulong *)(param_1 + 2) = uVar20;
    *(ulong *)((long)puVar18 + 8) = uVar20 | 1;
    *(ulong *)((long)puVar18 + uVar20) = uVar20;
    return 0;
  }
  uVar20 = uVar20 + (uVar9 & 0xfffffffffffffffc);
  if (uVar9 >> 3 < 0x20) {
    lVar19 = *(long *)(puVar17 + 4);
    lVar8 = *(long *)(puVar17 + 6);
    if (lVar19 == lVar8) {
      *param_1 = *param_1 & (1 << (ulong)((uint)(uVar9 >> 3) & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(long *)(lVar19 + 0x18) = lVar8;
      *(long *)(lVar8 + 0x10) = lVar19;
    }
  }
  else {
    puVar11 = *(uint **)(puVar17 + 6);
    lVar8 = *(long *)(puVar17 + 0xc);
    if (puVar17 == puVar11) {
      puVar16 = *(uint **)(puVar17 + 10);
      puVar4 = puVar17 + 10;
      if (*(uint **)(puVar17 + 10) == (uint *)0x0) {
        puVar11 = *(uint **)(puVar17 + 8);
        puVar16 = puVar11;
        puVar4 = puVar17 + 8;
        if (puVar11 == (uint *)0x0) goto LAB_00c11e88;
      }
      do {
        do {
          puVar21 = puVar4;
          puVar11 = puVar16;
          puVar16 = *(uint **)(puVar11 + 10);
          puVar4 = puVar11 + 10;
        } while (*(uint **)(puVar11 + 10) != (uint *)0x0);
        puVar16 = *(uint **)(puVar11 + 8);
        puVar4 = puVar11 + 8;
      } while (*(uint **)(puVar11 + 8) != (uint *)0x0);
      puVar21[0] = 0;
      puVar21[1] = 0;
    }
    else {
      lVar19 = *(long *)(puVar17 + 4);
      *(uint **)(lVar19 + 0x18) = puVar11;
      *(long *)(puVar11 + 4) = lVar19;
    }
LAB_00c11e88:
    if (lVar8 != 0) {
      lVar19 = *(long *)(puVar17 + 0xe);
      if (puVar17 == *(uint **)(param_1 + lVar19 * 2 + 0x92)) {
        *(uint **)(param_1 + lVar19 * 2 + 0x92) = puVar11;
        if (puVar11 == (uint *)0x0) {
          puVar16 = *(uint **)(param_1 + 6);
          param_1[1] = param_1[1] & (1 << (ulong)((uint)lVar19 & 0x1f) ^ 0xffffffffU);
          goto LAB_00c11c8c;
        }
      }
      else {
        if (puVar17 == *(uint **)(lVar8 + 0x20)) {
          *(uint **)(lVar8 + 0x20) = puVar11;
        }
        else {
          *(uint **)(lVar8 + 0x28) = puVar11;
        }
        if (puVar11 == (uint *)0x0) goto LAB_00c12020;
      }
      lVar19 = *(long *)(puVar17 + 8);
      *(long *)(puVar11 + 0xc) = lVar8;
      if (lVar19 != 0) {
        *(long *)(puVar11 + 8) = lVar19;
        *(uint **)(lVar19 + 0x30) = puVar11;
      }
      lVar8 = *(long *)(puVar17 + 10);
      if (lVar8 != 0) {
        *(long *)(puVar11 + 10) = lVar8;
        puVar16 = *(uint **)(param_1 + 6);
        *(uint **)(lVar8 + 0x30) = puVar11;
        goto LAB_00c11c8c;
      }
    }
LAB_00c12020:
    puVar16 = *(uint **)(param_1 + 6);
  }
LAB_00c11c8c:
  *(ulong *)((long)puVar18 + 8) = uVar20 | 1;
  *(ulong *)((long)puVar18 + uVar20) = uVar20;
  if (puVar18 == puVar16) {
    *(ulong *)(param_1 + 2) = uVar20;
    return 0;
  }
LAB_00c11cdc:
  uVar15 = uVar20 >> 3;
  if (uVar15 < 0x20) {
    uVar6 = 1 << (ulong)((uint)uVar15 & 0x1f);
    if ((uVar6 & *param_1) == 0) {
      *param_1 = uVar6 | *param_1;
      puVar17 = param_1 + uVar15 * 4 + 0xe;
    }
    else {
      puVar17 = *(uint **)(param_1 + uVar15 * 4 + 0x12);
    }
    *(uint **)(param_1 + uVar15 * 4 + 0x12) = puVar18;
    *(uint **)(puVar17 + 6) = puVar18;
    *(uint **)((long)puVar18 + 0x18) = param_1 + uVar15 * 4 + 0xe;
    *(uint **)((long)puVar18 + 0x10) = puVar17;
    return 0;
  }
  uVar6 = (uint)(uVar20 >> 8);
  if (uVar6 == 0) {
    uVar6 = param_1[1];
    uVar14 = 1;
    uVar15 = 0;
    ((uint *)((long)puVar18 + 0x28U))[0] = 0;
    ((uint *)((long)puVar18 + 0x28U))[1] = 0;
    ((uint *)((long)puVar18 + 0x38U))[0] = 0;
    ((uint *)((long)puVar18 + 0x38U))[1] = 0;
    uVar3 = uVar6 & 1;
    ((uint *)((long)puVar18 + 0x20U))[0] = 0;
    ((uint *)((long)puVar18 + 0x20U))[1] = 0;
  }
  else {
    if (uVar6 < 0x10000) {
      uVar6 = (uint)LZCOUNT(uVar6) ^ 0x1f;
      uVar15 = (uVar20 >> ((ulong)(uVar6 + 7) & 0x3f) & 1) + (ulong)uVar6 * 2;
      uVar14 = 1 << (ulong)((uint)uVar15 & 0x1f);
    }
    else {
      uVar14 = 0x80000000;
      uVar15 = 0x1f;
    }
    uVar6 = param_1[1];
    *(ulong *)((long)puVar18 + 0x38) = uVar15;
    ((uint *)((long)puVar18 + 0x28U))[0] = 0;
    ((uint *)((long)puVar18 + 0x28U))[1] = 0;
    uVar3 = uVar14 & uVar6;
    ((uint *)((long)puVar18 + 0x20U))[0] = 0;
    ((uint *)((long)puVar18 + 0x20U))[1] = 0;
  }
  if (uVar3 == 0) {
    param_1[1] = uVar14 | uVar6;
    *(uint **)(param_1 + (uVar15 + 0x48) * 2 + 2) = puVar18;
    *(uint **)((long)puVar18 + 0x18) = puVar18;
    *(uint **)((long)puVar18 + 0x30) = param_1 + (uVar15 + 0x48) * 2 + 2;
    *(uint **)((long)puVar18 + 0x10) = puVar18;
  }
  else {
    if (uVar15 == 0x1f) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0x39 - (uVar15 >> 1);
    }
    lVar19 = uVar20 << (uVar9 & 0x3f);
    lVar8 = *(long *)(param_1 + uVar15 * 2 + 0x92);
    do {
      lVar10 = lVar8;
      if ((*(ulong *)(lVar10 + 8) & 0xfffffffffffffffc) == uVar20) {
        lVar8 = *(long *)(lVar10 + 0x10);
        *(uint **)(lVar8 + 0x18) = puVar18;
        *(uint **)(lVar10 + 0x10) = puVar18;
        *(long *)((long)puVar18 + 0x10) = lVar8;
        *(long *)((long)puVar18 + 0x18) = lVar10;
        ((uint *)((long)puVar18 + 0x30U))[0] = 0;
        ((uint *)((long)puVar18 + 0x30U))[1] = 0;
        goto LAB_00c11da4;
      }
      lVar1 = lVar19 >> 0x3f;
      lVar19 = lVar19 << 1;
      lVar1 = 4 - lVar1;
      lVar8 = *(long *)(lVar10 + lVar1 * 8);
    } while (lVar8 != 0);
    *(uint **)(lVar10 + lVar1 * 8) = puVar18;
    *(long *)((long)puVar18 + 0x30) = lVar10;
    *(uint **)((long)puVar18 + 0x18) = puVar18;
    *(uint **)((long)puVar18 + 0x10) = puVar18;
  }
LAB_00c11da4:
  lVar8 = *(long *)(param_1 + 0xc);
  *(long *)(param_1 + 0xc) = lVar8 + -1;
  if (lVar8 + -1 == 0) {
    FUN_00c107a8(param_1);
    return 0;
  }
  return 0;
  while (puVar17 = *(uint **)(puVar17 + 4), puVar17 != (uint *)0x0) {
LAB_00c12188:
    if ((puVar11 <= puVar17) && (puVar17 < (uint *)((long)puVar11 + uVar15))) goto LAB_00c121f0;
  }
  puVar12 = (undefined4 *)__errno();
  uVar2 = *puVar12;
  pvVar13 = mremap(puVar11,uVar15,uVar15 - uVar20,0);
  *puVar12 = uVar2;
  if (pvVar13 == (void *)0xffffffffffffffff) {
    uVar2 = *puVar12;
    iVar7 = munmap((void *)(*(long *)puVar16 + (uVar15 - uVar20)),uVar20);
    *puVar12 = uVar2;
    if (iVar7 == 0) goto LAB_00c1222c;
  }
  else {
LAB_00c1222c:
    if (uVar20 != 0) {
      lVar8 = *(long *)(param_1 + 8);
      uVar9 = 0;
      uVar15 = lVar8 + 0x10;
      lVar19 = *(long *)(param_1 + 4);
      *(ulong *)(puVar16 + 2) = *(long *)(puVar16 + 2) - uVar20;
      if ((uVar15 & 7) != 0) {
        uVar9 = -uVar15 & 7;
      }
      lVar8 = lVar8 + uVar9;
      uVar9 = (lVar19 - uVar20) - uVar9;
      *(long *)(param_1 + 8) = lVar8;
      *(ulong *)(param_1 + 4) = uVar9;
      *(ulong *)(lVar8 + 8) = uVar9 | 1;
      *(undefined8 *)(lVar8 + uVar9 + 8) = 0x40;
      param_1[10] = 0x200000;
      param_1[0xb] = 0;
      goto LAB_00c121f4;
    }
  }
LAB_00c121f0:
  uVar20 = 0;
LAB_00c121f4:
  lVar8 = FUN_00c107a8(param_1);
  if (lVar8 + uVar20 != 0) {
    return 0;
  }
  if (*(ulong *)(param_1 + 10) < *(ulong *)(param_1 + 4)) {
    param_1[10] = 0xffffffff;
    param_1[0xb] = 0xffffffff;
    return 0;
  }
  return 0;
}

