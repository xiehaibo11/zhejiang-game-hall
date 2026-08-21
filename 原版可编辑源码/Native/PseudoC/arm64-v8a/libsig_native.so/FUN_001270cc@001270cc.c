
undefined8 * FUN_001270cc(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  void *pvVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  long local_58;
  
  pcVar6 = (char *)*param_1;
  pcVar7 = (char *)param_1[1];
  if ((pcVar6 == pcVar7) || (*pcVar6 != 'r')) {
    uVar13 = 0;
  }
  else {
    pcVar6 = pcVar6 + 1;
    uVar13 = 4;
    *param_1 = (long)pcVar6;
  }
  if (pcVar6 != pcVar7) {
    if (*pcVar6 == 'V') {
      pcVar6 = pcVar6 + 1;
      uVar13 = uVar13 | 2;
      *param_1 = (long)pcVar6;
    }
    if ((pcVar6 != pcVar7) && (*pcVar6 == 'K')) {
      uVar13 = uVar13 | 1;
      *param_1 = (long)(pcVar6 + 1);
    }
  }
  uVar1 = __strlen_chk(&DAT_0012f559,3);
  pcVar6 = (char *)*param_1;
  if ((ulong)(param_1[1] - (long)pcVar6) < uVar1) {
LAB_00127230:
    uVar1 = __strlen_chk(&DAT_0012f565,3);
    pcVar6 = (char *)*param_1;
    if ((ulong)(param_1[1] - (long)pcVar6) < uVar1) {
LAB_00127318:
      uVar1 = __strlen_chk(&DAT_0012f568,3);
      pcVar6 = (char *)*param_1;
      if ((ulong)(param_1[1] - (long)pcVar6) < uVar1) {
LAB_001273c8:
        puVar14 = (undefined8 *)0x0;
      }
      else {
        if (uVar1 != 0) {
          pcVar7 = "Dw";
          uVar9 = uVar1;
          pcVar10 = pcVar6;
          do {
            if (*pcVar7 != *pcVar10) goto LAB_001273c8;
            pcVar7 = pcVar7 + 1;
            uVar9 = uVar9 - 1;
            pcVar10 = pcVar10 + 1;
          } while (uVar9 != 0);
        }
        pcVar6 = pcVar6 + uVar1;
        *param_1 = (long)pcVar6;
        lVar5 = param_1[2];
        lVar3 = param_1[3];
        if (pcVar6 == (char *)param_1[1]) goto LAB_0012739c;
        while (*pcVar6 != 'E') {
LAB_0012739c:
          do {
            local_58 = FUN_00119448(param_1);
            if (local_58 == 0) {
              return (undefined8 *)0x0;
            }
            FUN_0011b8dc(param_1 + 2,&local_58);
            pcVar6 = (char *)*param_1;
          } while (pcVar6 == (char *)param_1[1]);
        }
        lVar5 = (lVar3 - lVar5 >> 3) * 8;
        *param_1 = (long)(pcVar6 + 1);
        auVar15 = FUN_00122f38(param_1,param_1[2] + lVar5,param_1[3]);
        pvVar11 = (void *)param_1[0x25c];
        param_1[3] = param_1[2] + lVar5;
        lVar5 = *(long *)((long)pvVar11 + 8);
        puVar2 = pvVar11;
        if (0xfef < lVar5 + 0x20U) {
          puVar2 = malloc(0x1000);
          if (puVar2 == (void *)0x0) goto LAB_001276dc;
          lVar5 = 0;
          *puVar2 = pvVar11;
          puVar2[1] = 0;
          param_1[0x25c] = (long)puVar2;
        }
        *(long *)((long)puVar2 + 8) = lVar5 + 0x20;
        puVar14 = (undefined8 *)((long)puVar2 + lVar5 + 0x10);
        *puVar14 = &PTR_FUN_001386e8;
        *(undefined4 *)((long)puVar2 + lVar5 + 0x18) = 0x1010111;
        *(undefined1 (*) [16])((long)puVar2 + lVar5 + 0x20) = auVar15;
      }
    }
    else {
      if (uVar1 != 0) {
        pcVar7 = "DO";
        uVar9 = uVar1;
        pcVar10 = pcVar6;
        do {
          if (*pcVar7 != *pcVar10) goto LAB_00127318;
          pcVar7 = pcVar7 + 1;
          uVar9 = uVar9 - 1;
          pcVar10 = pcVar10 + 1;
        } while (uVar9 != 0);
      }
      *param_1 = (long)(pcVar6 + uVar1);
      lVar5 = FUN_0011d7cc(param_1);
      if (lVar5 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar6 = (char *)*param_1;
      if (pcVar6 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      if (*pcVar6 != 'E') {
        return (undefined8 *)0x0;
      }
      pvVar11 = (void *)param_1[0x25c];
      *param_1 = (long)(pcVar6 + 1);
      lVar3 = *(long *)((long)pvVar11 + 8);
      puVar2 = pvVar11;
      if (0xfef < lVar3 + 0x20U) {
        puVar2 = malloc(0x1000);
        if (puVar2 == (void *)0x0) goto LAB_001276dc;
        lVar3 = 0;
        *puVar2 = pvVar11;
        puVar2[1] = 0;
        param_1[0x25c] = (long)puVar2;
      }
      *(long *)((long)puVar2 + 8) = lVar3 + 0x20;
      puVar14 = (undefined8 *)((long)puVar2 + lVar3 + 0x10);
      *puVar14 = &PTR_FUN_00138678;
      *(undefined4 *)((long)puVar2 + lVar3 + 0x18) = 0x1010110;
      *(long *)((long)puVar2 + lVar3 + 0x20) = lVar5;
    }
  }
  else {
    if (uVar1 != 0) {
      pcVar7 = "Do";
      uVar9 = uVar1;
      pcVar10 = pcVar6;
      do {
        if (*pcVar7 != *pcVar10) goto LAB_00127230;
        pcVar7 = pcVar7 + 1;
        uVar9 = uVar9 - 1;
        pcVar10 = pcVar10 + 1;
      } while (uVar9 != 0);
    }
    pvVar11 = (void *)param_1[0x25c];
    *param_1 = (long)(pcVar6 + uVar1);
    lVar5 = *(long *)((long)pvVar11 + 8);
    puVar2 = pvVar11;
    if (0xfef < lVar5 + 0x20U) {
      puVar2 = malloc(0x1000);
      if (puVar2 == (void *)0x0) {
LAB_001276dc:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = 0;
      *puVar2 = pvVar11;
      puVar2[1] = 0;
      param_1[0x25c] = (long)puVar2;
    }
    *(long *)((long)puVar2 + 8) = lVar5 + 0x20;
    lVar3 = __strlen_chk("noexcept",9);
    puVar14 = (undefined8 *)((long)puVar2 + lVar5 + 0x10);
    *puVar14 = &PTR_FUN_00136fb8;
    *(undefined4 *)((long)puVar2 + lVar5 + 0x18) = 0x1010107;
    *(char **)((long)puVar2 + lVar5 + 0x20) = "noexcept";
    *(char **)((long)puVar2 + lVar5 + 0x28) = "noexcept" + lVar3;
  }
  uVar1 = __strlen_chk(&DAT_0012f56b,3);
  pcVar6 = (char *)*param_1;
  pcVar7 = (char *)param_1[1];
  if (uVar1 <= (ulong)((long)pcVar7 - (long)pcVar6)) {
    if (uVar1 != 0) {
      uVar9 = 0;
      do {
        if ((&DAT_0012f56b)[uVar9] != pcVar6[uVar9]) goto LAB_0012741c;
        uVar9 = uVar9 + 1;
      } while (uVar1 != uVar9);
    }
    pcVar6 = pcVar6 + uVar1;
    *param_1 = (long)pcVar6;
  }
LAB_0012741c:
  if ((pcVar6 == pcVar7) || (*pcVar6 != 'F')) {
    return (undefined8 *)0x0;
  }
  pcVar10 = pcVar6 + 1;
  *param_1 = (long)pcVar10;
  if ((pcVar10 != pcVar7) && (*pcVar10 == 'Y')) {
    *param_1 = (long)(pcVar6 + 2);
  }
  lVar5 = FUN_00119448(param_1);
  if (lVar5 == 0) {
    return (undefined8 *)0x0;
  }
  lVar3 = param_1[2];
  lVar8 = param_1[3];
  do {
    while (pcVar6 = (char *)*param_1, pcVar6 == (char *)param_1[1]) {
LAB_001274b8:
      uVar9 = __strlen_chk(&DAT_0012f56e,3);
      pcVar6 = (char *)*param_1;
      pcVar7 = "RE";
      pcVar10 = pcVar6;
      uVar1 = uVar9;
      if (uVar9 <= (ulong)(param_1[1] - (long)pcVar6)) {
        while( true ) {
          if (uVar1 == 0) {
            pcVar6 = pcVar6 + uVar9;
            uVar12 = 1;
            goto LAB_00127638;
          }
          if (*pcVar7 != *pcVar10) break;
          pcVar7 = pcVar7 + 1;
          pcVar10 = pcVar10 + 1;
          uVar1 = uVar1 - 1;
        }
      }
      uVar9 = __strlen_chk(&DAT_0012f571,3);
      pcVar6 = (char *)*param_1;
      pcVar7 = "OE";
      pcVar10 = pcVar6;
      uVar1 = uVar9;
      if (uVar9 <= (ulong)(param_1[1] - (long)pcVar6)) {
        while( true ) {
          if (uVar1 == 0) {
            pcVar6 = pcVar6 + uVar9;
            uVar12 = 2;
            goto LAB_00127638;
          }
          if (*pcVar7 != *pcVar10) break;
          pcVar7 = pcVar7 + 1;
          pcVar10 = pcVar10 + 1;
          uVar1 = uVar1 - 1;
        }
      }
      local_58 = FUN_00119448(param_1);
      if (local_58 == 0) {
        return (undefined8 *)0x0;
      }
      FUN_0011b8dc(param_1 + 2,&local_58);
    }
    if (*pcVar6 == 'E') {
      uVar12 = 0;
      pcVar6 = pcVar6 + 1;
LAB_00127638:
      lVar3 = (lVar8 - lVar3 >> 3) * 8;
      *param_1 = (long)pcVar6;
      auVar15 = FUN_00122f38(param_1,param_1[2] + lVar3,param_1[3]);
      pvVar11 = (void *)param_1[0x25c];
      param_1[3] = param_1[2] + lVar3;
      lVar3 = *(long *)((long)pvVar11 + 8);
      puVar2 = pvVar11;
      if (0xfef < lVar3 + 0x40U) {
        puVar2 = malloc(0x1000);
        if (puVar2 == (void *)0x0) goto LAB_001276dc;
        lVar3 = 0;
        *puVar2 = pvVar11;
        puVar2[1] = 0;
        param_1[0x25c] = (long)puVar2;
      }
      *(long *)((long)puVar2 + 8) = lVar3 + 0x40;
      puVar4 = (undefined8 *)((long)puVar2 + lVar3 + 0x10);
      *puVar4 = &PTR_FUN_00138758;
      *(undefined4 *)((long)puVar2 + lVar3 + 0x18) = 0x1000f;
      *(long *)((long)puVar2 + lVar3 + 0x20) = lVar5;
      *(undefined1 (*) [16])((long)puVar2 + lVar3 + 0x28) = auVar15;
      *(uint *)((long)puVar2 + lVar3 + 0x38) = uVar13;
      *(undefined1 *)((long)puVar2 + lVar3 + 0x3c) = uVar12;
      *(undefined8 **)((long)puVar2 + lVar3 + 0x40) = puVar14;
      return puVar4;
    }
    if (*pcVar6 != 'v') goto LAB_001274b8;
    *param_1 = (long)(pcVar6 + 1);
  } while( true );
}

