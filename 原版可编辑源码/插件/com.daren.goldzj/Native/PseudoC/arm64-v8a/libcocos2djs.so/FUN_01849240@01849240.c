
undefined8 * FUN_01849240(long *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  void *pvVar11;
  size_t sVar12;
  long lVar13;
  undefined1 uVar14;
  long *plVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined1 auVar19 [16];
  
  pcVar8 = (char *)*param_1;
  pcVar1 = (char *)param_1[1];
  if ((pcVar8 == pcVar1) || (*pcVar8 != 'r')) {
    uVar16 = 0;
  }
  else {
    pcVar8 = pcVar8 + 1;
    uVar16 = 4;
    *param_1 = (long)pcVar8;
  }
  pcVar10 = pcVar1;
  if (pcVar8 != pcVar1) {
    if (*pcVar8 == 'V') {
      pcVar8 = pcVar8 + 1;
      uVar16 = uVar16 | 2;
      *param_1 = (long)pcVar8;
    }
    if ((pcVar8 != pcVar1) && (pcVar10 = pcVar8, *pcVar8 == 'K')) {
      uVar16 = uVar16 | 1;
      *param_1 = (long)(pcVar8 + 1);
      pcVar10 = pcVar8 + 1;
    }
  }
  if (((ulong)((long)pcVar1 - (long)pcVar10) < 2) || (*pcVar10 != 'D')) {
LAB_01849530:
    puVar17 = (undefined8 *)0x0;
  }
  else {
    if (pcVar10[1] == 'o') {
      pvVar11 = (void *)param_1[0x25c];
      *param_1 = (long)(pcVar10 + 2);
      plVar7 = (long *)((long)pvVar11 + 8);
      lVar9 = *plVar7;
      puVar3 = pvVar11;
      if (0xfef < lVar9 + 0x20U) {
        puVar3 = malloc(0x1000);
        if (puVar3 == (void *)0x0) goto LAB_0184984c;
        lVar9 = 0;
        *puVar3 = pvVar11;
        plVar7 = puVar3 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar3;
      }
      *plVar7 = lVar9 + 0x20;
      puVar17 = (undefined8 *)((long)puVar3 + lVar9 + 0x10);
      *puVar17 = &PTR_FUN_01cdfb30;
      *(undefined4 *)((long)puVar3 + lVar9 + 0x18) = 0x1010107;
      *(char **)((long)puVar3 + lVar9 + 0x28) = "";
      *(char **)((long)puVar3 + lVar9 + 0x20) = "noexcept";
    }
    else {
      if (*pcVar10 != 'D') goto LAB_01849530;
      if (pcVar10[1] == 'O') {
        *param_1 = (long)(pcVar10 + 2);
        lVar9 = FUN_0183e610(param_1);
        if (lVar9 == 0) {
          return (undefined8 *)0x0;
        }
        pcVar8 = (char *)*param_1;
        if (pcVar8 == (char *)param_1[1]) {
          return (undefined8 *)0x0;
        }
        if (*pcVar8 != 'E') {
          return (undefined8 *)0x0;
        }
        pvVar11 = (void *)param_1[0x25c];
        *param_1 = (long)(pcVar8 + 1);
        plVar7 = (long *)((long)pvVar11 + 8);
        lVar13 = *plVar7;
        puVar3 = pvVar11;
        if (0xfef < lVar13 + 0x20U) {
          puVar3 = malloc(0x1000);
          if (puVar3 == (void *)0x0) {
LAB_0184984c:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar13 = 0;
          *puVar3 = pvVar11;
          plVar7 = puVar3 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar3;
        }
        *plVar7 = lVar13 + 0x20;
        puVar17 = (undefined8 *)((long)puVar3 + lVar13 + 0x10);
        *puVar17 = &PTR_FUN_01ce1180;
        *(undefined4 *)((long)puVar3 + lVar13 + 0x18) = 0x1010110;
        *(long *)((long)puVar3 + lVar13 + 0x20) = lVar9;
      }
      else {
        if ((*pcVar10 != 'D') || (pcVar10[1] != 'w')) goto LAB_01849530;
        lVar9 = param_1[2];
        lVar13 = param_1[3];
        pcVar10 = pcVar10 + 2;
        *param_1 = (long)pcVar10;
        if (pcVar10 == pcVar1) goto LAB_018494a8;
        while (*pcVar10 != 'E') {
LAB_018494a8:
          do {
            lVar4 = FUN_01839ba0(param_1);
            if (lVar4 == 0) {
              return (undefined8 *)0x0;
            }
            plVar7 = (long *)param_1[3];
            if (plVar7 == (long *)param_1[4]) {
              plVar15 = (long *)param_1[2];
              sVar12 = (long)plVar7 - (long)plVar15;
              if (param_1 + 5 == plVar15) {
                pvVar11 = malloc(sVar12 * 2);
                if (pvVar11 == (void *)0x0) goto LAB_0184984c;
                if (sVar12 != 0) {
                  memmove(pvVar11,plVar15,sVar12);
                }
                param_1[2] = (long)pvVar11;
              }
              else {
                pvVar11 = realloc(plVar15,sVar12 * 2);
                param_1[2] = (long)pvVar11;
                if (pvVar11 == (void *)0x0) goto LAB_0184984c;
              }
              plVar7 = (long *)((long)pvVar11 + ((long)sVar12 >> 3) * 8);
              param_1[3] = (long)plVar7;
              param_1[4] = (long)((long)pvVar11 + ((long)sVar12 >> 2) * 8);
            }
            param_1[3] = (long)(plVar7 + 1);
            *plVar7 = lVar4;
            pcVar10 = (char *)*param_1;
          } while (pcVar10 == (char *)param_1[1]);
        }
        lVar9 = (lVar13 - lVar9 >> 3) * 8;
        *param_1 = (long)(pcVar10 + 1);
        auVar19 = FUN_01844294(param_1,param_1[2] + lVar9,param_1[3]);
        pvVar11 = (void *)param_1[0x25c];
        param_1[3] = param_1[2] + lVar9;
        plVar7 = (long *)((long)pvVar11 + 8);
        lVar9 = *plVar7;
        puVar3 = pvVar11;
        if (0xfef < lVar9 + 0x20U) {
          puVar3 = malloc(0x1000);
          if (puVar3 == (void *)0x0) goto LAB_0184984c;
          lVar9 = 0;
          *puVar3 = pvVar11;
          plVar7 = puVar3 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar3;
        }
        *plVar7 = lVar9 + 0x20;
        puVar17 = (undefined8 *)((long)puVar3 + lVar9 + 0x10);
        *puVar17 = &PTR_FUN_01ce11f0;
        *(undefined4 *)((long)puVar3 + lVar9 + 0x18) = 0x1010111;
        *(undefined1 (*) [16])((long)puVar3 + lVar9 + 0x20) = auVar19;
      }
    }
    if (puVar17 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  pcVar8 = (char *)*param_1;
  pcVar1 = (char *)param_1[1];
  if (((1 < (ulong)((long)pcVar1 - (long)pcVar8)) && (*pcVar8 == 'D')) && (pcVar8[1] == 'x')) {
    pcVar8 = pcVar8 + 2;
    *param_1 = (long)pcVar8;
  }
  if ((pcVar8 == pcVar1) || (*pcVar8 != 'F')) {
    return (undefined8 *)0x0;
  }
  pcVar10 = pcVar8 + 1;
  *param_1 = (long)pcVar10;
  if ((pcVar10 != pcVar1) && (*pcVar10 == 'Y')) {
    *param_1 = (long)(pcVar8 + 2);
  }
  lVar9 = FUN_01839ba0(param_1);
  if (lVar9 == 0) {
    return (undefined8 *)0x0;
  }
  lVar13 = param_1[2];
  lVar4 = param_1[3];
  lVar18 = 1;
  do {
    while( true ) {
      pcVar8 = (char *)*param_1;
      if (pcVar8 != (char *)param_1[1]) break;
LAB_01849604:
      if (1 < (ulong)(param_1[1] - (long)pcVar8)) {
        cVar2 = *pcVar8;
        if (cVar2 == 'R') {
          if (pcVar8[1] == 'E') {
            uVar14 = 1;
            lVar18 = 2;
            goto LAB_018496e4;
          }
          cVar2 = *pcVar8;
        }
        if ((cVar2 == 'O') && (pcVar8[1] == 'E')) {
          lVar18 = 2;
          uVar14 = 2;
          goto LAB_018496e4;
        }
      }
      lVar5 = FUN_01839ba0(param_1);
      if (lVar5 == 0) {
        return (undefined8 *)0x0;
      }
      plVar7 = (long *)param_1[3];
      if (plVar7 == (long *)param_1[4]) {
        plVar15 = (long *)param_1[2];
        sVar12 = (long)plVar7 - (long)plVar15;
        if (param_1 + 5 == plVar15) {
          pvVar11 = malloc(sVar12 * 2);
          if (pvVar11 == (void *)0x0) goto LAB_0184984c;
          if (sVar12 != 0) {
            memmove(pvVar11,plVar15,sVar12);
          }
          param_1[2] = (long)pvVar11;
        }
        else {
          pvVar11 = realloc(plVar15,sVar12 * 2);
          param_1[2] = (long)pvVar11;
          if (pvVar11 == (void *)0x0) goto LAB_0184984c;
        }
        plVar7 = (long *)((long)pvVar11 + ((long)sVar12 >> 3) * 8);
        param_1[3] = (long)plVar7;
        param_1[4] = (long)((long)pvVar11 + ((long)sVar12 >> 2) * 8);
      }
      param_1[3] = (long)(plVar7 + 1);
      *plVar7 = lVar5;
    }
    if (*pcVar8 == 'E') break;
    if (*pcVar8 != 'v') goto LAB_01849604;
    *param_1 = (long)(pcVar8 + 1);
  } while( true );
  uVar14 = 0;
LAB_018496e4:
  *param_1 = (long)(pcVar8 + lVar18);
  lVar13 = (lVar4 - lVar13 >> 3) * 8;
  auVar19 = FUN_01844294(param_1,param_1[2] + lVar13,param_1[3]);
  pvVar11 = (void *)param_1[0x25c];
  param_1[3] = param_1[2] + lVar13;
  plVar7 = (long *)((long)pvVar11 + 8);
  lVar13 = *plVar7;
  puVar3 = pvVar11;
  if (0xfef < lVar13 + 0x40U) {
    puVar3 = malloc(0x1000);
    if (puVar3 == (void *)0x0) goto LAB_0184984c;
    lVar13 = 0;
    *puVar3 = pvVar11;
    plVar7 = puVar3 + 1;
    *plVar7 = 0;
    param_1[0x25c] = (long)puVar3;
  }
  *plVar7 = lVar13 + 0x40;
  puVar6 = (undefined8 *)((long)puVar3 + lVar13 + 0x10);
  *puVar6 = &PTR_FUN_01ce1260;
  *(undefined4 *)((long)puVar3 + lVar13 + 0x18) = 0x1000f;
  *(long *)((long)puVar3 + lVar13 + 0x20) = lVar9;
  *(undefined1 (*) [16])((long)puVar3 + lVar13 + 0x28) = auVar19;
  *(uint *)((long)puVar3 + lVar13 + 0x38) = uVar16;
  *(undefined1 *)((long)puVar3 + lVar13 + 0x3c) = uVar14;
  *(undefined8 **)((long)puVar3 + lVar13 + 0x40) = puVar17;
  return puVar6;
}

