
undefined8 * FUN_01849850(long *param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  
  pbVar17 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if (pbVar17 == pbVar1) {
LAB_01849914:
    uVar14 = 0;
  }
  else {
    if (*pbVar17 == 0x55) {
      pbVar15 = pbVar17 + 1;
      *param_1 = (long)pbVar15;
      if (pbVar1 == pbVar15) {
        return (undefined8 *)0x0;
      }
      if (9 < *pbVar15 - 0x30) {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pbVar17 + 2);
      uVar8 = (ulong)pbVar17[1];
      pbVar17 = pbVar17 + 2;
      while ((uVar8 = uVar8 - 0x30, pbVar1 != pbVar17 && (*pbVar17 - 0x30 < 10))) {
        *param_1 = (long)(pbVar17 + 1);
        uVar8 = (ulong)*pbVar17 + uVar8 * 10;
        pbVar17 = pbVar17 + 1;
      }
      if ((ulong)((long)pbVar1 - (long)pbVar17) < uVar8) {
        return (undefined8 *)0x0;
      }
      pbVar15 = pbVar17 + uVar8;
      *param_1 = (long)pbVar15;
      if (pbVar17 == pbVar15) {
        return (undefined8 *)0x0;
      }
      uVar8 = (long)pbVar15 - (long)pbVar17;
      if ((((((uVar8 < 9) || (*pbVar17 != 0x6f)) || (pbVar17[1] != 0x62)) ||
           ((pbVar17[2] != 0x6a || (pbVar17[3] != 99)))) ||
          ((pbVar17[4] != 0x70 || ((pbVar17[5] != 0x72 || (pbVar17[6] != 0x6f)))))) ||
         ((pbVar17[7] != 0x74 || (pbVar17[8] != 0x6f)))) {
        lVar11 = FUN_01849850(param_1);
        if (lVar11 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar13 = (void *)param_1[0x25c];
        plVar7 = (long *)((long)pvVar13 + 8);
        lVar10 = *plVar7;
        puVar6 = pvVar13;
        if (0xfef < lVar10 + 0x30U) {
          puVar6 = malloc(0x1000);
          if (puVar6 == (void *)0x0) goto LAB_01849c70;
          lVar10 = 0;
          *puVar6 = pvVar13;
          plVar7 = puVar6 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar6;
        }
        lVar12 = (long)puVar6 + lVar10;
        uVar14 = 0x102;
        ppuVar9 = &PTR_FUN_01ce1340;
        goto LAB_01849b98;
      }
      lVar11 = 9;
      if (uVar8 < 10) {
        lVar11 = uVar8 - 1;
      }
      pbVar16 = pbVar17 + lVar11;
      *param_1 = (long)pbVar16;
      param_1[1] = (long)pbVar15;
      if ((pbVar15 == pbVar16) || (9 < *pbVar16 - 0x30)) {
LAB_01849bd0:
        pbVar17 = (byte *)0x0;
        pbVar16 = (byte *)0x0;
      }
      else {
        if (pbVar16 == pbVar15) {
          uVar8 = 0xffffffffffffffd0;
          pbVar17 = pbVar15;
        }
        else {
          lVar11 = 0;
          pbVar17 = pbVar16;
          do {
            pbVar16 = pbVar17 + 1;
            *param_1 = (long)pbVar16;
            uVar8 = (lVar11 + (ulong)*pbVar17) - 0x30;
            pbVar17 = pbVar16;
            if ((pbVar15 == pbVar16) || (9 < *pbVar16 - 0x30)) goto LAB_01849bc4;
            lVar11 = uVar8 * 10;
          } while (pbVar15 != pbVar16);
          uVar8 = lVar11 - 0x30;
          pbVar17 = pbVar15;
        }
LAB_01849bc4:
        if ((ulong)((long)pbVar15 - (long)pbVar16) < uVar8) goto LAB_01849bd0;
        pbVar16 = pbVar17 + uVar8;
        *param_1 = (long)pbVar16;
      }
      *param_1 = (long)pbVar15;
      param_1[1] = (long)pbVar1;
      if ((pbVar17 == pbVar16) || (lVar11 = FUN_01849850(param_1), lVar11 == 0)) {
        return (undefined8 *)0x0;
      }
      pvVar13 = (void *)param_1[0x25c];
      plVar7 = (long *)((long)pvVar13 + 8);
      lVar10 = *plVar7;
      puVar6 = pvVar13;
      if (0xfef < lVar10 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01849c70;
        lVar10 = 0;
        *puVar6 = pvVar13;
        plVar7 = puVar6 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      lVar12 = (long)puVar6 + lVar10;
      uVar14 = 0x10a;
      ppuVar9 = &PTR_FUN_01ce12d0;
      pbVar15 = pbVar16;
LAB_01849b98:
      *plVar7 = lVar10 + 0x30;
      *(undefined8 *)(lVar12 + 0x10) = ppuVar9;
      *(uint *)(lVar12 + 0x18) = uVar14 | 0x1010000;
      *(long *)(lVar12 + 0x20) = lVar11;
      *(byte **)(lVar12 + 0x28) = pbVar17;
      *(byte **)(lVar12 + 0x30) = pbVar15;
      return (undefined8 *)(lVar12 + 0x10);
    }
    if (*pbVar17 != 0x72) goto LAB_01849914;
    pbVar17 = pbVar17 + 1;
    uVar14 = 4;
    *param_1 = (long)pbVar17;
  }
  if (pbVar17 != pbVar1) {
    if (*pbVar17 == 0x56) {
      pbVar17 = pbVar17 + 1;
      uVar14 = uVar14 | 2;
      *param_1 = (long)pbVar17;
    }
    if ((pbVar17 != pbVar1) && (*pbVar17 == 0x4b)) {
      uVar14 = uVar14 | 1;
      *param_1 = (long)(pbVar17 + 1);
    }
  }
  puVar4 = (undefined8 *)FUN_01839ba0(param_1);
  puVar6 = puVar4;
  if ((puVar4 != (undefined8 *)0x0) && (uVar14 != 0)) {
    pvVar13 = (void *)param_1[0x25c];
    plVar7 = (long *)((long)pvVar13 + 8);
    lVar11 = *plVar7;
    puVar5 = pvVar13;
    if (0xfef < lVar11 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) {
LAB_01849c70:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar11 = 0;
      *puVar5 = pvVar13;
      plVar7 = puVar5 + 1;
      *plVar7 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    *plVar7 = lVar11 + 0x20;
    uVar3 = *(undefined2 *)((long)puVar4 + 9);
    uVar2 = *(undefined1 *)((long)puVar4 + 0xb);
    puVar6 = (undefined8 *)((long)puVar5 + lVar11 + 0x10);
    *puVar6 = &PTR_FUN_01ce13b0;
    *(undefined8 **)((long)puVar5 + lVar11 + 0x20) = puVar4;
    *(undefined1 *)((long)puVar5 + lVar11 + 0x18) = 3;
    *(uint *)((long)puVar5 + lVar11 + 0x1c) = uVar14;
    *(undefined2 *)((long)puVar5 + lVar11 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar5 + lVar11 + 0x1b) = uVar2;
  }
  return puVar6;
}

