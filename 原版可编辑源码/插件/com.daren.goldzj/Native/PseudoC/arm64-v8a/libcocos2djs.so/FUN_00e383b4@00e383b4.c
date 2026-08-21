
undefined8 FUN_00e383b4(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  long *plVar16;
  uint *puVar17;
  ulong uVar18;
  long local_e0 [16];
  
  puVar17 = *(uint **)(param_1 + 0x350);
  if (puVar17 == (uint *)0x0) {
    return 6;
  }
  uVar7 = puVar17[1];
  uVar3 = uVar7;
  if (param_2 <= uVar7) {
    uVar3 = param_2;
  }
  if (uVar7 != 0) {
    uVar18 = 0;
LAB_00e38404:
    do {
      plVar4 = *(long **)(puVar17 + uVar18 * 6 + 0x2c);
      plVar5 = *(long **)(puVar17 + uVar18 * 6 + 0x2e);
      puVar2 = puVar17 + uVar18 * 6 + 0x2a;
      if (uVar3 <= uVar18) {
        uVar13 = (ulong)(byte)*puVar2;
        lVar11 = plVar4[uVar13 - 1] - *plVar4;
        if (lVar11 < 0) {
          lVar11 = lVar11 + 1;
        }
        lVar11 = lVar11 >> 1;
        if ((byte)*puVar2 != 0) goto LAB_00e3844c;
        goto LAB_00e38490;
      }
      lVar11 = *(long *)(param_3 + uVar18 * 8);
      uVar13 = (ulong)(byte)*puVar2;
      if ((byte)*puVar2 == 0) goto LAB_00e38490;
LAB_00e3844c:
      plVar14 = plVar5;
      plVar16 = plVar4;
      uVar15 = 0xffffffff;
      do {
        bVar12 = (byte)uVar13;
        if (lVar11 == *plVar16) {
          local_e0[uVar18] = *plVar14;
          uVar18 = uVar18 + 1;
          if (uVar7 <= uVar18) goto LAB_00e38528;
          goto LAB_00e38404;
        }
        if (lVar11 < *plVar16) {
          uVar13 = (ulong)(uVar15 + 1);
          if ((int)uVar15 < 0) goto LAB_00e38490;
          goto LAB_00e384cc;
        }
        bVar12 = (byte)*puVar2;
        uVar13 = (ulong)bVar12;
        uVar9 = uVar15 + 1;
        uVar1 = uVar15 + 2;
        plVar14 = plVar14 + 1;
        plVar16 = plVar16 + 1;
        uVar15 = uVar9;
      } while (uVar1 < bVar12);
      uVar13 = 0xffffffff;
      if (-1 < (int)uVar9) {
LAB_00e384cc:
        if ((int)uVar13 < 0) {
          local_e0[uVar18] = plVar5[(ulong)bVar12 - 1];
          uVar18 = uVar18 + 1;
          if (uVar7 <= uVar18) goto LAB_00e38528;
        }
        else {
          uVar8 = -(ulong)(uVar15 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar15 << 3;
          uVar13 = -(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3;
          lVar10 = *(long *)((long)plVar4 + uVar8);
          lVar11 = FT_MulDiv(lVar11 - lVar10,
                             *(long *)((long)plVar5 + uVar13) - *(long *)((long)plVar5 + uVar8),
                             *(long *)((long)plVar4 + uVar13) - lVar10);
          uVar7 = puVar17[1];
          local_e0[uVar18] = lVar11;
          uVar18 = uVar18 + 1;
          if (uVar7 <= uVar18) goto LAB_00e38528;
        }
        goto LAB_00e38404;
      }
LAB_00e38490:
      local_e0[uVar18] = *plVar5;
      uVar18 = uVar18 + 1;
      if (uVar7 <= uVar18) goto LAB_00e38528;
    } while( true );
  }
LAB_00e38530:
  if (*puVar17 != 0) {
    uVar9 = puVar17[1];
    uVar18 = 0;
    bVar6 = false;
    uVar15 = uVar9;
    if (uVar7 <= uVar9) {
      uVar15 = uVar7;
    }
    uVar7 = uVar9;
    do {
      if (uVar7 == 0) {
        lVar11 = 0x10000;
        lVar10 = *(long *)(puVar17 + 0x42);
        if (*(long *)(lVar10 + uVar18 * 8) != 0x10000) goto LAB_00e38608;
      }
      else {
        uVar13 = 0;
        lVar11 = 0x10000;
        do {
          while (uVar15 <= uVar13) {
            lVar11 = lVar11 >> 1;
            uVar13 = uVar13 + 1;
            uVar7 = uVar9;
            if (uVar9 <= uVar13) goto LAB_00e385f8;
          }
          lVar10 = 0x10000 - local_e0[uVar13];
          if ((1 << (ulong)((uint)uVar13 & 0x1f) & (uint)uVar18) != 0) {
            lVar10 = local_e0[uVar13];
          }
          if (lVar10 < 1) {
            lVar11 = 0;
            lVar10 = *(long *)(puVar17 + 0x42);
            if (*(long *)(lVar10 + uVar18 * 8) == 0) goto LAB_00e38610;
            goto LAB_00e38608;
          }
          if (lVar10 < 0x10000) {
            lVar11 = FT_MulFix();
            uVar9 = puVar17[1];
          }
          uVar13 = uVar13 + 1;
          uVar7 = uVar9;
        } while (uVar13 < uVar9);
LAB_00e385f8:
        lVar10 = *(long *)(puVar17 + 0x42);
        uVar7 = uVar9;
        if (*(long *)(lVar10 + uVar18 * 8) != lVar11) {
LAB_00e38608:
          bVar6 = true;
          *(long *)(lVar10 + uVar18 * 8) = lVar11;
        }
      }
LAB_00e38610:
      uVar18 = uVar18 + 1;
    } while (uVar18 < *puVar17);
    if (bVar6) {
      uVar18 = *(ulong *)(param_1 + 0x10) & 0xffffffffffff7fff;
      if (uVar3 != 0) {
        uVar18 = *(ulong *)(param_1 + 0x10) | 0x8000;
      }
      *(ulong *)(param_1 + 0x10) = uVar18;
      return 0;
    }
  }
  return 0xffffffff;
LAB_00e38528:
  puVar17 = *(uint **)(param_1 + 0x350);
  if (puVar17 == (uint *)0x0) {
    return 6;
  }
  goto LAB_00e38530;
}

