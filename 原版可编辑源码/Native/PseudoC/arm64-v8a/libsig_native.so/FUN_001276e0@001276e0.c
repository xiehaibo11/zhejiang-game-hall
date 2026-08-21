
undefined8 * FUN_001276e0(long *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  byte *pbVar7;
  long lVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  void *pvVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  
  pbVar16 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  if (pbVar16 == pbVar15) {
LAB_001277a4:
    uVar13 = 0;
  }
  else {
    if (*pbVar16 == 0x55) {
      pbVar7 = pbVar16 + 1;
      *param_1 = (long)pbVar7;
      if (pbVar15 == pbVar7) {
        return (undefined8 *)0x0;
      }
      if (9 < *pbVar7 - 0x30) {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pbVar16 + 2);
      uVar10 = (ulong)pbVar16[1];
      pbVar16 = pbVar16 + 2;
      while ((uVar10 = uVar10 - 0x30, pbVar15 != pbVar16 && (*pbVar16 - 0x30 < 10))) {
        *param_1 = (long)(pbVar16 + 1);
        uVar10 = (ulong)*pbVar16 + uVar10 * 10;
        pbVar16 = pbVar16 + 1;
      }
      if ((ulong)((long)pbVar15 - (long)pbVar16) < uVar10) {
        return (undefined8 *)0x0;
      }
      pbVar15 = pbVar16 + uVar10;
      *param_1 = (long)pbVar15;
      if (pbVar16 == pbVar15) {
        return (undefined8 *)0x0;
      }
      uVar10 = __strlen_chk("objcproto",10);
      uVar12 = (long)pbVar15 - (long)pbVar16;
      if (uVar12 < uVar10) {
LAB_00127968:
        lVar4 = FUN_001276e0(param_1);
        if (lVar4 == 0) {
          return (undefined8 *)0x0;
        }
        puVar17 = (undefined8 *)param_1[0x25c];
        lVar8 = puVar17[1];
        puVar5 = puVar17;
        if (0xfef < lVar8 + 0x30U) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) goto LAB_00127a9c;
          lVar8 = 0;
          *puVar5 = puVar17;
          puVar5[1] = 0;
          param_1[0x25c] = (long)puVar5;
        }
        lVar11 = (long)puVar5 + lVar8;
        uVar13 = 0x102;
        ppuVar9 = &PTR_FUN_00138838;
        goto LAB_00127a58;
      }
      if (uVar10 != 0) {
        pcVar6 = "objcproto";
        pbVar7 = pbVar16;
        do {
          if (*pcVar6 != *pbVar7) goto LAB_00127968;
          pcVar6 = pcVar6 + 1;
          uVar10 = uVar10 - 1;
          pbVar7 = pbVar7 + 1;
        } while (uVar10 != 0);
      }
      uVar10 = __strlen_chk("objcproto",10);
      lVar8 = param_1[1];
      lVar4 = *param_1;
      if (uVar12 <= uVar10) {
        uVar10 = uVar12;
      }
      pbVar7 = pbVar16 + uVar10;
      *param_1 = (long)pbVar7;
      param_1[1] = (long)pbVar15;
      if ((pbVar15 == pbVar7) || (9 < *pbVar7 - 0x30)) {
LAB_001279f0:
        pbVar15 = (byte *)0x0;
        pbVar16 = (byte *)0x0;
      }
      else {
        if (pbVar7 == pbVar15) {
          uVar10 = 0xffffffffffffffd0;
          pbVar16 = pbVar15;
        }
        else {
          lVar11 = 0;
          pbVar16 = pbVar7;
          do {
            pbVar7 = pbVar16 + 1;
            *param_1 = (long)pbVar7;
            uVar10 = (lVar11 + (ulong)*pbVar16) - 0x30;
            pbVar16 = pbVar7;
            if ((pbVar15 == pbVar7) || (9 < *pbVar7 - 0x30)) goto LAB_001279e4;
            lVar11 = uVar10 * 10;
          } while (pbVar15 != pbVar7);
          uVar10 = lVar11 - 0x30;
          pbVar16 = pbVar15;
        }
LAB_001279e4:
        if ((ulong)((long)pbVar15 - (long)pbVar7) < uVar10) goto LAB_001279f0;
        pbVar15 = pbVar16 + uVar10;
        *param_1 = (long)pbVar15;
      }
      param_1[1] = lVar8;
      *param_1 = lVar4;
      if ((pbVar16 == pbVar15) || (lVar4 = FUN_001276e0(param_1), lVar4 == 0)) {
        return (undefined8 *)0x0;
      }
      puVar17 = (undefined8 *)param_1[0x25c];
      lVar8 = puVar17[1];
      puVar5 = puVar17;
      if (0xfef < lVar8 + 0x30U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (undefined8 *)0x0) goto LAB_00127a9c;
        lVar8 = 0;
        *puVar5 = puVar17;
        puVar5[1] = 0;
        param_1[0x25c] = (long)puVar5;
      }
      lVar11 = (long)puVar5 + lVar8;
      uVar13 = 0x10a;
      ppuVar9 = &PTR_FUN_001387c8;
LAB_00127a58:
      puVar5[1] = lVar8 + 0x30;
      *(undefined8 *)(lVar11 + 0x10) = ppuVar9;
      *(uint *)(lVar11 + 0x18) = uVar13 | 0x1010000;
      *(long *)(lVar11 + 0x20) = lVar4;
      *(byte **)(lVar11 + 0x28) = pbVar16;
      *(byte **)(lVar11 + 0x30) = pbVar15;
      return (undefined8 *)(lVar11 + 0x10);
    }
    if (*pbVar16 != 0x72) goto LAB_001277a4;
    pbVar16 = pbVar16 + 1;
    uVar13 = 4;
    *param_1 = (long)pbVar16;
  }
  if (pbVar16 != pbVar15) {
    if (*pbVar16 == 0x56) {
      pbVar16 = pbVar16 + 1;
      uVar13 = uVar13 | 2;
      *param_1 = (long)pbVar16;
    }
    if ((pbVar16 != pbVar15) && (*pbVar16 == 0x4b)) {
      uVar13 = uVar13 | 1;
      *param_1 = (long)(pbVar16 + 1);
    }
  }
  puVar17 = (undefined8 *)FUN_00119448(param_1);
  puVar5 = puVar17;
  if ((puVar17 != (undefined8 *)0x0) && (uVar13 != 0)) {
    pvVar14 = (void *)param_1[0x25c];
    lVar4 = *(long *)((long)pvVar14 + 8);
    puVar3 = pvVar14;
    if (0xfef < lVar4 + 0x20U) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) {
LAB_00127a9c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = 0;
      *puVar3 = pvVar14;
      puVar3[1] = 0;
      param_1[0x25c] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar4 + 0x20;
    uVar2 = *(undefined2 *)((long)puVar17 + 9);
    uVar1 = *(undefined1 *)((long)puVar17 + 0xb);
    puVar5 = (undefined8 *)((long)puVar3 + lVar4 + 0x10);
    *puVar5 = &PTR_FUN_001388a8;
    *(undefined8 **)((long)puVar3 + lVar4 + 0x20) = puVar17;
    *(undefined1 *)((long)puVar3 + lVar4 + 0x18) = 3;
    *(uint *)((long)puVar3 + lVar4 + 0x1c) = uVar13;
    *(undefined2 *)((long)puVar3 + lVar4 + 0x19) = uVar2;
    *(undefined1 *)((long)puVar3 + lVar4 + 0x1b) = uVar1;
  }
  return puVar5;
}

