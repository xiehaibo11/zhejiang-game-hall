
undefined8 * FUN_0015bc28(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  void *pvVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  
  pbVar10 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if (pbVar10 == pbVar1) {
LAB_0015bcc0:
    uVar14 = 0;
  }
  else {
    if (*pbVar10 != 0x72) {
      if (*pbVar10 != 0x55) goto LAB_0015bcc0;
      pbVar17 = pbVar10 + 1;
      *param_1 = (long)pbVar17;
      if (pbVar1 == pbVar17) {
        return (undefined8 *)0x0;
      }
      if (9 < *pbVar17 - 0x30) {
        return (undefined8 *)0x0;
      }
      uVar11 = 0;
      pbVar10 = pbVar10 + 2;
      do {
        *param_1 = (long)pbVar10;
        uVar11 = ((ulong)pbVar10[-1] + uVar11 * 10) - 0x30;
        pbVar17 = pbVar1;
        if (pbVar10 == pbVar1) break;
        bVar2 = *pbVar10;
        pbVar17 = pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar2 - 0x30 < 10);
      if ((ulong)((long)pbVar1 - (long)pbVar17) < uVar11) {
        return (undefined8 *)0x0;
      }
      pbVar10 = pbVar17 + uVar11;
      *param_1 = (long)pbVar10;
      if (pbVar17 == pbVar10) {
        return (undefined8 *)0x0;
      }
      if (((((((ulong)((long)pbVar10 - (long)pbVar17) < 9) || (*pbVar17 != 0x6f)) ||
            (pbVar17[1] != 0x62)) || ((pbVar17[2] != 0x6a || (pbVar17[3] != 99)))) ||
          ((pbVar17[4] != 0x70 || ((pbVar17[5] != 0x72 || (pbVar17[6] != 0x6f)))))) ||
         ((pbVar17[7] != 0x74 || (pbVar17[8] != 0x6f)))) {
        lVar6 = FUN_0015bc28(param_1);
        if (lVar6 == 0) {
          return (undefined8 *)0x0;
        }
        puVar18 = (undefined8 *)param_1[0x266];
        lVar9 = puVar18[1];
        puVar7 = puVar18;
        if (0xfef < lVar9 + 0x30U) {
          puVar7 = malloc(0x1000);
          if (puVar7 == (void *)0x0) goto LAB_0015bfdc;
          lVar9 = 0;
          *puVar7 = puVar18;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        lVar13 = (long)puVar7 + lVar9;
        uVar14 = 0x102;
        ppuVar8 = &PTR_FUN_00168d80;
        goto LAB_0015bf1c;
      }
      pbVar16 = pbVar17 + 9;
      *param_1 = (long)pbVar16;
      param_1[1] = (long)pbVar10;
      if ((pbVar16 == pbVar10) || (9 < *pbVar16 - 0x30)) {
LAB_0015bf48:
        pbVar16 = (byte *)0x0;
        pbVar17 = (byte *)0x0;
      }
      else {
        uVar11 = 0;
        pbVar16 = pbVar17 + 10;
        do {
          pbVar12 = pbVar16;
          *param_1 = (long)pbVar12;
          uVar11 = ((ulong)pbVar12[-1] + uVar11 * 10) - 0x30;
          pbVar17 = pbVar10;
          if (pbVar12 == pbVar10) break;
          pbVar16 = pbVar12 + 1;
          pbVar17 = pbVar12;
        } while (*pbVar12 - 0x30 < 10);
        if ((ulong)((long)pbVar10 - (long)pbVar17) < uVar11) goto LAB_0015bf48;
        pbVar16 = pbVar17 + uVar11;
      }
      *param_1 = (long)pbVar10;
      param_1[1] = (long)pbVar1;
      if ((pbVar17 == pbVar16) || (lVar6 = FUN_0015bc28(param_1), lVar6 == 0)) {
        return (undefined8 *)0x0;
      }
      puVar18 = (undefined8 *)param_1[0x266];
      lVar9 = puVar18[1];
      puVar7 = puVar18;
      if (0xfef < lVar9 + 0x30U) {
        puVar7 = malloc(0x1000);
        if (puVar7 == (undefined8 *)0x0) goto LAB_0015bfdc;
        lVar9 = 0;
        *puVar7 = puVar18;
        puVar7[1] = 0;
        param_1[0x266] = (long)puVar7;
      }
      lVar13 = (long)puVar7 + lVar9;
      uVar14 = 0x10a;
      ppuVar8 = &PTR_FUN_00168d10;
      pbVar10 = pbVar16;
LAB_0015bf1c:
      *(undefined8 *)(lVar13 + 0x10) = ppuVar8;
      puVar7[1] = lVar9 + 0x30;
      *(uint *)(lVar13 + 0x18) = uVar14 | 0x1010000;
      *(long *)(lVar13 + 0x20) = lVar6;
      *(byte **)(lVar13 + 0x28) = pbVar17;
      *(byte **)(lVar13 + 0x30) = pbVar10;
      return (undefined8 *)(lVar13 + 0x10);
    }
    pbVar10 = pbVar10 + 1;
    uVar14 = 4;
    *param_1 = (long)pbVar10;
  }
  if (pbVar10 != pbVar1) {
    if (*pbVar10 == 0x56) {
      pbVar10 = pbVar10 + 1;
      uVar14 = uVar14 | 2;
      *param_1 = (long)pbVar10;
    }
    if ((pbVar10 != pbVar1) && (*pbVar10 == 0x4b)) {
      uVar14 = uVar14 | 1;
      *param_1 = (long)(pbVar10 + 1);
    }
  }
  puVar18 = (undefined8 *)FUN_0014a548(param_1);
  puVar7 = puVar18;
  if ((puVar18 != (undefined8 *)0x0) && (uVar14 != 0)) {
    pvVar15 = (void *)param_1[0x266];
    lVar6 = *(long *)((long)pvVar15 + 8);
    puVar5 = pvVar15;
    if (0xfef < lVar6 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) {
LAB_0015bfdc:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar6 = 0;
      *puVar5 = pvVar15;
      puVar5[1] = 0;
      param_1[0x266] = (long)puVar5;
    }
    *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
    uVar3 = *(undefined1 *)((long)puVar18 + 0xb);
    uVar4 = *(undefined2 *)((long)puVar18 + 9);
    puVar7 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
    *puVar7 = &PTR_FUN_00168df0;
    *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar18;
    *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 3;
    *(uint *)((long)puVar5 + lVar6 + 0x1c) = uVar14;
    *(undefined1 *)((long)puVar5 + lVar6 + 0x1b) = uVar3;
    *(undefined2 *)((long)puVar5 + lVar6 + 0x19) = uVar4;
  }
  return puVar7;
}

