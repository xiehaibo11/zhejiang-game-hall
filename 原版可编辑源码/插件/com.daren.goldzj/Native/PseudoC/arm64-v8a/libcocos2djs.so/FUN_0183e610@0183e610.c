
undefined8 * FUN_0183e610(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined **ppuVar13;
  uint uVar14;
  char *pcVar15;
  undefined1 uVar16;
  size_t sVar17;
  void *pvVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  pcVar15 = (char *)*param_1;
  pcVar9 = (char *)param_1[1];
  if ((ulong)((long)pcVar9 - (long)pcVar15) < 2) {
    return (undefined8 *)0x0;
  }
  cVar1 = *pcVar15;
  if (cVar1 == 'g') {
    if (pcVar15[1] == 's') {
      pcVar15 = pcVar15 + 2;
      *param_1 = (long)pcVar15;
      if ((ulong)((long)pcVar9 - (long)pcVar15) < 2) {
        return (undefined8 *)0x0;
      }
      uVar16 = 1;
    }
    else {
      uVar16 = 0;
    }
    cVar1 = *pcVar15;
  }
  else {
    uVar16 = 0;
  }
  switch(cVar1) {
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
switchD_0183e6cc_caseD_31:
    puVar6 = (undefined8 *)FUN_01841980(param_1);
    return puVar6;
  default:
    goto switchD_0183e6cc_caseD_3a;
  case 'L':
    puVar6 = (undefined8 *)FUN_01840864(param_1);
    return puVar6;
  case 'T':
    puVar6 = (undefined8 *)FUN_0183d478(param_1);
    return puVar6;
  case 'a':
    switch(pcVar15[1]) {
    case 'N':
      pcVar9 = "&=";
      break;
    default:
      goto switchD_0183e6cc_caseD_3a;
    case 'S':
      pcVar9 = "=";
      goto LAB_01840100;
    case 'a':
      pcVar9 = "&&";
      break;
    case 'd':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar4 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar4 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar4 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      lVar5 = lVar4 + 0x30;
      lVar4 = (long)puVar6 + lVar4;
      pcVar15 = "&";
      goto LAB_0183ff0c;
    case 'n':
      pcVar9 = "&";
LAB_01840100:
      pcVar10 = pcVar9 + 1;
      goto LAB_01840108;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_01839ba0(param_1);
      goto joined_r0x0183fa10;
    case 'z':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
joined_r0x0183fa10:
      if (lVar3 != 0) {
        pvVar18 = (void *)param_1[0x25c];
        plVar12 = (long *)((long)pvVar18 + 8);
        lVar4 = *plVar12;
        puVar6 = pvVar18;
        if (0xfef < lVar4 + 0x40U) {
          puVar6 = malloc(0x1000);
          if (puVar6 == (void *)0x0) {
LAB_01840858:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar4 = 0;
          *puVar6 = pvVar18;
          plVar12 = puVar6 + 1;
          *plVar12 = 0;
          param_1[0x25c] = (long)puVar6;
        }
        *plVar12 = lVar4 + 0x40;
        pcVar15 = "alignof (";
        puVar6 = (undefined8 *)((long)puVar6 + lVar4 + 0x10);
        *puVar6 = &PTR_FUN_01ce0850;
        pcVar9 = "";
LAB_0183fba4:
        puVar6[3] = pcVar9;
        puVar6[2] = pcVar15;
        *(undefined4 *)(puVar6 + 1) = 0x101012f;
        puVar6[4] = lVar3;
LAB_0183fbc8:
        puVar6[6] = "";
        puVar6[5] = ")";
        return puVar6;
      }
switchD_0183e6cc_caseD_3a:
      return (undefined8 *)0x0;
    }
    break;
  case 'c':
    switch(pcVar15[1]) {
    case 'c':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_01839ba0(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      lVar4 = FUN_0183e610(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar5 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar5 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar5 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      pcVar15 = "const_cast";
      *plVar12 = lVar5 + 0x30;
      puVar6 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
      *puVar6 = &PTR_FUN_01ce0150;
      pcVar9 = "";
LAB_0183fe80:
      *(undefined4 *)(puVar6 + 1) = 0x1010130;
      puVar6[3] = pcVar9;
      puVar6[2] = pcVar15;
      puVar6[4] = lVar3;
      puVar6[5] = lVar4;
      return puVar6;
    default:
      return (undefined8 *)0x0;
    case 'l':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      lVar4 = param_1[2];
      lVar5 = param_1[3];
      while ((pcVar15 = (char *)*param_1, pcVar15 == (char *)param_1[1] || (*pcVar15 != 'E'))) {
        lVar7 = FUN_0183e610(param_1);
        if (lVar7 == 0) {
          return (undefined8 *)0x0;
        }
        plVar12 = (long *)param_1[3];
        if (plVar12 == (long *)param_1[4]) {
          plVar19 = (long *)param_1[2];
          sVar17 = (long)plVar12 - (long)plVar19;
          if (param_1 + 5 == plVar19) {
            pvVar18 = malloc(sVar17 * 2);
            if (pvVar18 == (void *)0x0) goto LAB_01840858;
            if (sVar17 != 0) {
              memmove(pvVar18,plVar19,sVar17);
            }
            param_1[2] = (long)pvVar18;
          }
          else {
            pvVar18 = realloc(plVar19,sVar17 * 2);
            param_1[2] = (long)pvVar18;
            if (pvVar18 == (void *)0x0) goto LAB_01840858;
          }
          plVar12 = (long *)((long)pvVar18 + ((long)sVar17 >> 3) * 8);
          param_1[3] = (long)plVar12;
          param_1[4] = (long)((long)pvVar18 + ((long)sVar17 >> 2) * 8);
        }
        param_1[3] = (long)(plVar12 + 1);
        *plVar12 = lVar7;
      }
      lVar4 = (lVar5 - lVar4 >> 3) * 8;
      *param_1 = (long)(pcVar15 + 1);
      auVar20 = FUN_01844294(param_1,param_1[2] + lVar4,param_1[3]);
      pvVar18 = (void *)param_1[0x25c];
      param_1[3] = param_1[2] + lVar4;
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar4 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar4 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar4 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      uVar14 = 0x132;
      lVar5 = lVar4 + 0x30;
      lVar4 = (long)puVar6 + lVar4;
      ppuVar13 = &PTR_FUN_01ce01c0;
      break;
    case 'm':
      pcVar9 = ",";
      goto LAB_01840100;
    case 'o':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar4 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar4 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar4 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      lVar5 = lVar4 + 0x30;
      lVar4 = (long)puVar6 + lVar4;
      pcVar15 = "~";
      goto LAB_0183ff0c;
    case 'v':
      if ((ulong)((long)pcVar9 - (long)pcVar15) < 2) {
        return (undefined8 *)0x0;
      }
      lVar4 = param_1[0x5a];
      *param_1 = (long)(pcVar15 + 2);
      *(undefined1 *)(param_1 + 0x5a) = 0;
      lVar3 = FUN_01839ba0(param_1);
      *(char *)(param_1 + 0x5a) = (char)lVar4;
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar15 = (char *)*param_1;
      if ((pcVar15 == (char *)param_1[1]) || (*pcVar15 != '_')) {
        lVar4 = FUN_0183e610(param_1);
        if (lVar4 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar18 = (void *)param_1[0x25c];
        plVar12 = (long *)((long)pvVar18 + 8);
        lVar5 = *plVar12;
        puVar6 = pvVar18;
        if (0xfef < lVar5 + 0x10U) {
          puVar6 = malloc(0x1000);
          if (puVar6 == (void *)0x0) goto LAB_01840858;
          lVar5 = 0;
          *puVar6 = pvVar18;
          plVar12 = puVar6 + 1;
          *plVar12 = 0;
          param_1[0x25c] = (long)puVar6;
        }
        *plVar12 = lVar5 + 0x10;
        plVar19 = (long *)((long)puVar6 + lVar5 + 0x10);
        *plVar19 = lVar4;
        pvVar18 = (void *)param_1[0x25c];
        plVar12 = (long *)((long)pvVar18 + 8);
        lVar4 = *plVar12;
        puVar6 = pvVar18;
        if (0xfef < lVar4 + 0x30U) {
          puVar6 = malloc(0x1000);
          if (puVar6 == (void *)0x0) goto LAB_01840858;
          lVar4 = 0;
          *puVar6 = pvVar18;
          plVar12 = puVar6 + 1;
          *plVar12 = 0;
          param_1[0x25c] = (long)puVar6;
        }
        *plVar12 = lVar4 + 0x30;
        puVar11 = (undefined8 *)((long)puVar6 + lVar4 + 0x10);
        *puVar11 = &PTR_FUN_01ce0230;
        *(undefined4 *)((long)puVar6 + lVar4 + 0x18) = 0x1010137;
        *(long *)((long)puVar6 + lVar4 + 0x20) = lVar3;
        *(long **)((long)puVar6 + lVar4 + 0x28) = plVar19;
        *(undefined8 *)((long)puVar6 + lVar4 + 0x30) = 1;
        return puVar11;
      }
      lVar4 = param_1[2];
      lVar5 = param_1[3];
      pcVar15 = pcVar15 + 1;
      *param_1 = (long)pcVar15;
      if (pcVar15 == (char *)param_1[1]) goto LAB_0183f370;
      while (*pcVar15 != 'E') {
LAB_0183f370:
        do {
          lVar7 = FUN_0183e610(param_1);
          if (lVar7 == 0) {
            return (undefined8 *)0x0;
          }
          plVar12 = (long *)param_1[3];
          if (plVar12 == (long *)param_1[4]) {
            plVar19 = (long *)param_1[2];
            sVar17 = (long)plVar12 - (long)plVar19;
            if (param_1 + 5 == plVar19) {
              pvVar18 = malloc(sVar17 * 2);
              if (pvVar18 == (void *)0x0) goto LAB_01840858;
              if (sVar17 != 0) {
                memmove(pvVar18,plVar19,sVar17);
              }
              param_1[2] = (long)pvVar18;
            }
            else {
              pvVar18 = realloc(plVar19,sVar17 * 2);
              param_1[2] = (long)pvVar18;
              if (pvVar18 == (void *)0x0) goto LAB_01840858;
            }
            plVar12 = (long *)((long)pvVar18 + ((long)sVar17 >> 3) * 8);
            param_1[3] = (long)plVar12;
            param_1[4] = (long)((long)pvVar18 + ((long)sVar17 >> 2) * 8);
          }
          param_1[3] = (long)(plVar12 + 1);
          *plVar12 = lVar7;
          pcVar15 = (char *)*param_1;
        } while (pcVar15 == (char *)param_1[1]);
      }
      lVar4 = (lVar5 - lVar4 >> 3) * 8;
      *param_1 = (long)(pcVar15 + 1);
      auVar20 = FUN_01844294(param_1,param_1[2] + lVar4,param_1[3]);
      pvVar18 = (void *)param_1[0x25c];
      param_1[3] = param_1[2] + lVar4;
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar4 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar4 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar4 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      uVar14 = 0x137;
      lVar5 = lVar4 + 0x30;
      lVar4 = (long)puVar6 + lVar4;
      ppuVar13 = &PTR_FUN_01ce0230;
    }
LAB_018403e8:
    *plVar12 = lVar5;
    *(undefined8 *)(lVar4 + 0x10) = ppuVar13;
    *(uint *)(lVar4 + 0x18) = uVar14 | 0x1010000;
    *(long *)(lVar4 + 0x20) = lVar3;
    *(undefined1 (*) [16])(lVar4 + 0x28) = auVar20;
    return (undefined8 *)(lVar4 + 0x10);
  case 'd':
    switch(pcVar15[1]) {
    case 'V':
      pcVar9 = "/=";
      break;
    default:
      return (undefined8 *)0x0;
    case 'a':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar4 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar4 + 0x20U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar4 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      *plVar12 = lVar4 + 0x20;
      puVar11 = (undefined8 *)((long)puVar6 + lVar4 + 0x10);
      *puVar11 = &PTR_FUN_01ce02a0;
      *(undefined4 *)((long)puVar6 + lVar4 + 0x18) = 0x1010134;
      *(long *)((long)puVar6 + lVar4 + 0x20) = lVar3;
      *(undefined1 *)((long)puVar6 + lVar4 + 0x28) = uVar16;
      *(undefined1 *)((long)puVar6 + lVar4 + 0x29) = 1;
      return puVar11;
    case 'c':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_01839ba0(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      lVar4 = FUN_0183e610(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar5 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar5 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar5 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      pcVar15 = "dynamic_cast";
      *plVar12 = lVar5 + 0x30;
      puVar6 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
      *puVar6 = &PTR_FUN_01ce0150;
      pcVar9 = "";
      goto LAB_0183fe80;
    case 'e':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar4 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar4 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar4 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      lVar5 = lVar4 + 0x30;
      lVar4 = (long)puVar6 + lVar4;
      pcVar15 = "*";
      goto LAB_0183ff0c;
    case 'l':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar4 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar4 + 0x20U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar4 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      *plVar12 = lVar4 + 0x20;
      puVar11 = (undefined8 *)((long)puVar6 + lVar4 + 0x10);
      *puVar11 = &PTR_FUN_01ce02a0;
      *(undefined4 *)((long)puVar6 + lVar4 + 0x18) = 0x1010134;
      *(long *)((long)puVar6 + lVar4 + 0x20) = lVar3;
      *(undefined1 *)((long)puVar6 + lVar4 + 0x28) = uVar16;
      *(undefined1 *)((long)puVar6 + lVar4 + 0x29) = 0;
      return puVar11;
    case 'n':
      goto switchD_0183e6cc_caseD_31;
    case 's':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      lVar4 = FUN_0183e610(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar5 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar5 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar5 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      lVar7 = (long)puVar6 + lVar5;
      pcVar15 = ".*";
LAB_0184003c:
      *plVar12 = lVar5 + 0x30;
      puVar6 = (undefined8 *)(lVar7 + 0x10);
      *puVar6 = &PTR_FUN_01ce0540;
      pcVar9 = pcVar15 + 2;
LAB_018400dc:
      *(undefined4 *)(puVar6 + 1) = 0x101012e;
      puVar6[2] = lVar3;
      puVar6[4] = pcVar9;
      puVar6[3] = pcVar15;
      puVar6[5] = lVar4;
      return puVar6;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      lVar4 = FUN_0183e610(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar5 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar5 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar5 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      pcVar15 = ".";
      *plVar12 = lVar5 + 0x30;
      puVar6 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
      *puVar6 = &PTR_FUN_01ce0540;
      pcVar9 = "";
      goto LAB_018400dc;
    case 'v':
      pcVar9 = "/";
      goto LAB_01840100;
    }
    break;
  case 'e':
    cVar1 = pcVar15[1];
    if (cVar1 == 'O') {
      pcVar9 = "^=";
    }
    else {
      if (cVar1 != 'q') {
        if (cVar1 != 'o') {
          return (undefined8 *)0x0;
        }
        pcVar9 = "^";
        goto LAB_01840100;
      }
      pcVar9 = "==";
    }
    break;
  case 'f':
    if ((1 < (ulong)((long)pcVar9 - (long)pcVar15)) &&
       ((pcVar15[1] == 'p' ||
        (((2 < (ulong)((long)pcVar9 - (long)pcVar15) && (pcVar15[1] == 'L')) &&
         ((byte)pcVar15[2] - 0x30 < 10)))))) {
      puVar6 = (undefined8 *)FUN_01840fac(param_1);
      return puVar6;
    }
    puVar6 = (undefined8 *)FUN_018412cc(param_1);
    return puVar6;
  case 'g':
    if (pcVar15[1] == 't') {
      pcVar9 = ">";
      goto LAB_01840100;
    }
    if (pcVar15[1] != 'e') {
      return (undefined8 *)0x0;
    }
    pcVar9 = ">=";
    break;
  case 'i':
    if (pcVar15[1] == 'l') {
      lVar3 = param_1[2];
      lVar4 = param_1[3];
      pcVar15 = pcVar15 + 2;
      *param_1 = (long)pcVar15;
      if (pcVar15 == pcVar9) goto LAB_0183ee44;
      while (*pcVar15 != 'E') {
LAB_0183ee44:
        do {
          lVar5 = FUN_01842054(param_1);
          if (lVar5 == 0) {
            return (undefined8 *)0x0;
          }
          plVar12 = (long *)param_1[3];
          if (plVar12 == (long *)param_1[4]) {
            plVar19 = (long *)param_1[2];
            sVar17 = (long)plVar12 - (long)plVar19;
            if (param_1 + 5 == plVar19) {
              pvVar18 = malloc(sVar17 * 2);
              if (pvVar18 == (void *)0x0) goto LAB_01840858;
              if (sVar17 != 0) {
                memmove(pvVar18,plVar19,sVar17);
              }
              param_1[2] = (long)pvVar18;
            }
            else {
              pvVar18 = realloc(plVar19,sVar17 * 2);
              param_1[2] = (long)pvVar18;
              if (pvVar18 == (void *)0x0) goto LAB_01840858;
            }
            plVar12 = (long *)((long)pvVar18 + ((long)sVar17 >> 3) * 8);
            param_1[3] = (long)plVar12;
            param_1[4] = (long)((long)pvVar18 + ((long)sVar17 >> 2) * 8);
          }
          param_1[3] = (long)(plVar12 + 1);
          *plVar12 = lVar5;
          pcVar15 = (char *)*param_1;
        } while (pcVar15 == (char *)param_1[1]);
      }
      lVar3 = (lVar4 - lVar3 >> 3) * 8;
      *param_1 = (long)(pcVar15 + 1);
      auVar20 = FUN_01844294(param_1,param_1[2] + lVar3,param_1[3]);
      pvVar18 = (void *)param_1[0x25c];
      param_1[3] = param_1[2] + lVar3;
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar3 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar3 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar3 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      *plVar12 = lVar3 + 0x30;
      puVar11 = (undefined8 *)((long)puVar6 + lVar3 + 0x10);
      *puVar11 = &PTR_FUN_01ce0700;
      *(undefined4 *)((long)puVar6 + lVar3 + 0x18) = 0x1010138;
      *(undefined8 *)((long)puVar6 + lVar3 + 0x20) = 0;
      *(undefined1 (*) [16])((long)puVar6 + lVar3 + 0x28) = auVar20;
      return puVar11;
    }
    if (pcVar15[1] != 'x') {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)(pcVar15 + 2);
    lVar3 = FUN_0183e610(param_1);
    if (lVar3 == 0) {
      return (undefined8 *)0x0;
    }
    lVar4 = FUN_0183e610(param_1);
    if (lVar4 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar18 = (void *)param_1[0x25c];
    plVar12 = (long *)((long)pvVar18 + 8);
    lVar5 = *plVar12;
    puVar6 = pvVar18;
    if (0xfef < lVar5 + 0x20U) {
      puVar6 = malloc(0x1000);
      if (puVar6 == (void *)0x0) goto LAB_01840858;
      lVar5 = 0;
      *puVar6 = pvVar18;
      plVar12 = puVar6 + 1;
      *plVar12 = 0;
      param_1[0x25c] = (long)puVar6;
    }
    *plVar12 = lVar5 + 0x20;
    puVar11 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
    *puVar11 = &PTR_FUN_01ce05b0;
    *(undefined4 *)((long)puVar6 + lVar5 + 0x18) = 0x101012b;
    *(long *)((long)puVar6 + lVar5 + 0x20) = lVar3;
    *(long *)((long)puVar6 + lVar5 + 0x28) = lVar4;
    return puVar11;
  case 'l':
    switch(pcVar15[1]) {
    case 'S':
      pcVar9 = "<<=";
LAB_0183f6fc:
      pcVar10 = pcVar9 + 3;
      goto LAB_01840108;
    default:
      goto switchD_0183e6cc_caseD_3a;
    case 'e':
      pcVar9 = "<=";
      break;
    case 's':
      pcVar9 = "<<";
      break;
    case 't':
      pcVar9 = "<";
      goto LAB_01840100;
    }
    break;
  case 'm':
    switch(pcVar15[1]) {
    case 'I':
      pcVar9 = "-=";
      break;
    default:
      goto switchD_0183e6cc_caseD_3a;
    case 'L':
      pcVar9 = "*=";
      break;
    case 'i':
      pcVar9 = "-";
      goto LAB_01840100;
    case 'l':
      pcVar9 = "*";
      goto LAB_01840100;
    case 'm':
      pcVar10 = pcVar15 + 2;
      *param_1 = (long)pcVar10;
      if ((pcVar10 == pcVar9) || (*pcVar10 != '_')) {
        lVar3 = FUN_0183e610(param_1);
        if (lVar3 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar18 = (void *)param_1[0x25c];
        plVar12 = (long *)((long)pvVar18 + 8);
        lVar4 = *plVar12;
        puVar6 = pvVar18;
        if (0xfef < lVar4 + 0x30U) {
          puVar6 = malloc(0x1000);
          if (puVar6 == (void *)0x0) goto LAB_01840858;
          lVar4 = 0;
          *puVar6 = pvVar18;
          plVar12 = puVar6 + 1;
          *plVar12 = 0;
          param_1[0x25c] = (long)puVar6;
        }
        lVar5 = (long)puVar6 + lVar4;
        pcVar15 = "--";
LAB_01840198:
        *plVar12 = lVar4 + 0x30;
        *(undefined8 *)(lVar5 + 0x10) = &PTR_FUN_01ce0770;
        *(undefined4 *)(lVar5 + 0x18) = 0x101012c;
        *(long *)(lVar5 + 0x20) = lVar3;
        *(char **)(lVar5 + 0x30) = pcVar15 + 2;
        *(char **)(lVar5 + 0x28) = pcVar15;
        return (undefined8 *)(lVar5 + 0x10);
      }
      *param_1 = (long)(pcVar15 + 3);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar4 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar4 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar4 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      lVar5 = (long)puVar6 + lVar4;
      pcVar15 = "--";
LAB_0183f82c:
      *plVar12 = lVar4 + 0x30;
      puVar6 = (undefined8 *)(lVar5 + 0x10);
      *puVar6 = &PTR_FUN_01ce00e0;
      pcVar9 = pcVar15 + 2;
      goto LAB_0183ff18;
    }
    break;
  case 'n':
    cVar1 = pcVar15[1];
    switch(cVar1) {
    case 'a':
    case 'w':
      if ((ulong)((long)pcVar9 - (long)pcVar15) < 2) {
        return (undefined8 *)0x0;
      }
      if ((cVar1 != 'w') && (cVar1 != 'a')) {
        return (undefined8 *)0x0;
      }
      lVar3 = param_1[2];
      lVar4 = param_1[3];
      bVar2 = 1 < (ulong)((long)pcVar9 - (long)pcVar15) && cVar1 == 'a';
      pcVar15 = pcVar15 + 2;
      *param_1 = (long)pcVar15;
      if (pcVar15 == pcVar9) goto LAB_0183e8b8;
      while (*pcVar15 != '_') {
LAB_0183e8b8:
        do {
          lVar5 = FUN_0183e610(param_1);
          if (lVar5 == 0) {
            return (undefined8 *)0x0;
          }
          plVar12 = (long *)param_1[3];
          if (plVar12 == (long *)param_1[4]) {
            plVar19 = (long *)param_1[2];
            sVar17 = (long)plVar12 - (long)plVar19;
            if (param_1 + 5 == plVar19) {
              pvVar18 = malloc(sVar17 * 2);
              if (pvVar18 == (void *)0x0) goto LAB_01840858;
              if (sVar17 != 0) {
                memmove(pvVar18,plVar19,sVar17);
              }
              param_1[2] = (long)pvVar18;
            }
            else {
              pvVar18 = realloc(plVar19,sVar17 * 2);
              param_1[2] = (long)pvVar18;
              if (pvVar18 == (void *)0x0) goto LAB_01840858;
            }
            plVar12 = (long *)((long)pvVar18 + ((long)sVar17 >> 3) * 8);
            param_1[3] = (long)plVar12;
            param_1[4] = (long)((long)pvVar18 + ((long)sVar17 >> 2) * 8);
          }
          param_1[3] = (long)(plVar12 + 1);
          *plVar12 = lVar5;
          pcVar15 = (char *)*param_1;
        } while (pcVar15 == (char *)param_1[1]);
      }
      lVar3 = (lVar4 - lVar3 >> 3) * 8;
      *param_1 = (long)(pcVar15 + 1);
      auVar20 = FUN_01844294(param_1,param_1[2] + lVar3,param_1[3]);
      param_1[3] = param_1[2] + lVar3;
      lVar3 = FUN_01839ba0(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar15 = (char *)*param_1;
      pcVar9 = (char *)param_1[1];
      if (((1 < (ulong)((long)pcVar9 - (long)pcVar15)) && (*pcVar15 == 'p')) && (pcVar15[1] == 'i'))
      {
        lVar4 = param_1[2];
        lVar5 = param_1[3];
        pcVar15 = pcVar15 + 2;
        *param_1 = (long)pcVar15;
        if (pcVar15 == pcVar9) goto LAB_018404b4;
        while (*pcVar15 != 'E') {
LAB_018404b4:
          do {
            lVar7 = FUN_0183e610(param_1);
            if (lVar7 == 0) {
              return (undefined8 *)0x0;
            }
            plVar12 = (long *)param_1[3];
            if (plVar12 == (long *)param_1[4]) {
              plVar19 = (long *)param_1[2];
              sVar17 = (long)plVar12 - (long)plVar19;
              if (param_1 + 5 == plVar19) {
                pvVar18 = malloc(sVar17 * 2);
                if (pvVar18 == (void *)0x0) goto LAB_01840858;
                if (sVar17 != 0) {
                  memmove(pvVar18,plVar19,sVar17);
                }
                param_1[2] = (long)pvVar18;
              }
              else {
                pvVar18 = realloc(plVar19,sVar17 * 2);
                param_1[2] = (long)pvVar18;
                if (pvVar18 == (void *)0x0) goto LAB_01840858;
              }
              plVar12 = (long *)((long)pvVar18 + ((long)sVar17 >> 3) * 8);
              param_1[3] = (long)plVar12;
              param_1[4] = (long)((long)pvVar18 + ((long)sVar17 >> 2) * 8);
            }
            param_1[3] = (long)(plVar12 + 1);
            *plVar12 = lVar7;
            pcVar15 = (char *)*param_1;
          } while (pcVar15 == (char *)param_1[1]);
        }
        lVar4 = (lVar5 - lVar4 >> 3) * 8;
        *param_1 = (long)(pcVar15 + 1);
        auVar21 = FUN_01844294(param_1,param_1[2] + lVar4,param_1[3]);
        pvVar18 = (void *)param_1[0x25c];
        param_1[3] = param_1[2] + lVar4;
        plVar12 = (long *)((long)pvVar18 + 8);
        lVar4 = *plVar12;
        puVar6 = pvVar18;
        if (0xfef < lVar4 + 0x40U) {
          puVar6 = malloc(0x1000);
          if (puVar6 == (void *)0x0) goto LAB_01840858;
          lVar4 = 0;
          *puVar6 = pvVar18;
          plVar12 = puVar6 + 1;
          *plVar12 = 0;
          param_1[0x25c] = (long)puVar6;
        }
        *plVar12 = lVar4 + 0x40;
        puVar11 = (undefined8 *)((long)puVar6 + lVar4 + 0x10);
        *puVar11 = &PTR_FUN_01ce07e0;
        *(undefined1 (*) [16])((long)puVar6 + lVar4 + 0x20) = auVar20;
        *(undefined4 *)((long)puVar6 + lVar4 + 0x18) = 0x1010133;
        *(long *)((long)puVar6 + lVar4 + 0x30) = lVar3;
        *(undefined1 (*) [16])((long)puVar6 + lVar4 + 0x38) = auVar21;
        *(undefined1 *)((long)puVar6 + lVar4 + 0x48) = 0;
        *(bool *)((long)puVar6 + lVar4 + 0x49) = bVar2;
        return puVar11;
      }
      if (pcVar15 == pcVar9) {
        return (undefined8 *)0x0;
      }
      if (*pcVar15 != 'E') {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      *param_1 = (long)(pcVar15 + 1);
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar4 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar4 + 0x40U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar4 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      *plVar12 = lVar4 + 0x40;
      puVar11 = (undefined8 *)((long)puVar6 + lVar4 + 0x10);
      *puVar11 = &PTR_FUN_01ce07e0;
      *(undefined4 *)((long)puVar6 + lVar4 + 0x18) = 0x1010133;
      *(undefined1 (*) [16])((long)puVar6 + lVar4 + 0x20) = auVar20;
      *(undefined8 *)((long)puVar6 + lVar4 + 0x38) = 0;
      *(undefined8 *)((long)puVar6 + lVar4 + 0x40) = 0;
      *(long *)((long)puVar6 + lVar4 + 0x30) = lVar3;
      *(undefined1 *)((long)puVar6 + lVar4 + 0x48) = 0;
      *(bool *)((long)puVar6 + lVar4 + 0x49) = bVar2;
      return puVar11;
    default:
      goto switchD_0183e6cc_caseD_3a;
    case 'e':
      pcVar9 = "!=";
      goto LAB_0183f968;
    case 'g':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar4 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar4 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar4 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      lVar5 = lVar4 + 0x30;
      lVar4 = (long)puVar6 + lVar4;
      pcVar15 = "-";
      break;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar4 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar4 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar4 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      lVar5 = lVar4 + 0x30;
      lVar4 = (long)puVar6 + lVar4;
      pcVar15 = "!";
      break;
    case 'x':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar4 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar4 + 0x40U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar4 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      *plVar12 = lVar4 + 0x40;
      pcVar15 = "noexcept (";
      puVar6 = (undefined8 *)((long)puVar6 + lVar4 + 0x10);
      *puVar6 = &PTR_FUN_01ce0850;
      pcVar9 = "";
      goto LAB_0183fba4;
    }
LAB_0183ff0c:
    *plVar12 = lVar5;
    puVar6 = (undefined8 *)(lVar4 + 0x10);
    *puVar6 = &PTR_FUN_01ce00e0;
    pcVar9 = pcVar15 + 1;
LAB_0183ff18:
    *(undefined4 *)(puVar6 + 1) = 0x1010135;
    puVar6[3] = pcVar9;
    puVar6[2] = pcVar15;
    puVar6[4] = lVar3;
    return puVar6;
  case 'o':
    switch(pcVar15[1]) {
    case 'R':
      pcVar9 = "|=";
      break;
    default:
      goto switchD_0183e6cc_caseD_3a;
    case 'n':
      goto switchD_0183e6cc_caseD_31;
    case 'o':
      pcVar9 = "||";
      break;
    case 'r':
      pcVar9 = "|";
      goto LAB_01840100;
    }
    break;
  case 'p':
    switch(pcVar15[1]) {
    case 'L':
      pcVar9 = "+=";
      break;
    default:
      goto switchD_0183e6cc_caseD_3a;
    case 'l':
      pcVar9 = "+";
      goto LAB_01840100;
    case 'm':
      pcVar9 = "->*";
      goto LAB_0183f6fc;
    case 'p':
      pcVar10 = pcVar15 + 2;
      *param_1 = (long)pcVar10;
      if ((pcVar10 == pcVar9) || (*pcVar10 != '_')) {
        lVar3 = FUN_0183e610(param_1);
        if (lVar3 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar18 = (void *)param_1[0x25c];
        plVar12 = (long *)((long)pvVar18 + 8);
        lVar4 = *plVar12;
        puVar6 = pvVar18;
        if (0xfef < lVar4 + 0x30U) {
          puVar6 = malloc(0x1000);
          if (puVar6 == (void *)0x0) goto LAB_01840858;
          lVar4 = 0;
          *puVar6 = pvVar18;
          plVar12 = puVar6 + 1;
          *plVar12 = 0;
          param_1[0x25c] = (long)puVar6;
        }
        lVar5 = (long)puVar6 + lVar4;
        pcVar15 = "++";
        goto LAB_01840198;
      }
      *param_1 = (long)(pcVar15 + 3);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar4 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar4 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar4 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      lVar5 = (long)puVar6 + lVar4;
      pcVar15 = "++";
      goto LAB_0183f82c;
    case 's':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar4 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar4 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar4 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      lVar5 = lVar4 + 0x30;
      lVar4 = (long)puVar6 + lVar4;
      pcVar15 = "+";
      goto LAB_0183ff0c;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      lVar4 = FUN_0183e610(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar5 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar5 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar5 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      lVar7 = (long)puVar6 + lVar5;
      pcVar15 = "->";
      goto LAB_0184003c;
    }
    break;
  case 'q':
    if (pcVar15[1] != 'u') {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)(pcVar15 + 2);
    lVar3 = FUN_0183e610(param_1);
    if (lVar3 == 0) {
      return (undefined8 *)0x0;
    }
    lVar4 = FUN_0183e610(param_1);
    if (lVar4 == 0) {
      return (undefined8 *)0x0;
    }
    lVar5 = FUN_0183e610(param_1);
    auVar20._8_8_ = lVar5;
    auVar20._0_8_ = lVar4;
    if (lVar5 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar18 = (void *)param_1[0x25c];
    plVar12 = (long *)((long)pvVar18 + 8);
    lVar4 = *plVar12;
    puVar6 = pvVar18;
    if (0xfef < lVar4 + 0x30U) {
      puVar6 = malloc(0x1000);
      if (puVar6 == (void *)0x0) goto LAB_01840858;
      lVar4 = 0;
      *puVar6 = pvVar18;
      plVar12 = puVar6 + 1;
      *plVar12 = 0;
      param_1[0x25c] = (long)puVar6;
    }
    uVar14 = 0x12d;
    lVar5 = lVar4 + 0x30;
    lVar4 = (long)puVar6 + lVar4;
    ppuVar13 = &PTR_FUN_01ce08c0;
    goto LAB_018403e8;
  case 'r':
    switch(pcVar15[1]) {
    case 'M':
      pcVar9 = "%=";
      break;
    default:
      goto switchD_0183e6cc_caseD_3a;
    case 'S':
      pcVar9 = ">>=";
      goto LAB_0183f6fc;
    case 'c':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_01839ba0(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      lVar4 = FUN_0183e610(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar5 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar5 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar5 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      pcVar15 = "reinterpret_cast";
      *plVar12 = lVar5 + 0x30;
      puVar6 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
      *puVar6 = &PTR_FUN_01ce0150;
      pcVar9 = "";
      goto LAB_0183fe80;
    case 'm':
      pcVar9 = "%";
      goto LAB_01840100;
    case 's':
      pcVar9 = ">>";
    }
    break;
  case 's':
    switch(pcVar15[1]) {
    case 'P':
      lVar3 = param_1[2];
      lVar4 = param_1[3];
      pcVar15 = pcVar15 + 2;
      *param_1 = (long)pcVar15;
      if (pcVar15 == pcVar9) goto LAB_0183ec08;
      while (*pcVar15 != 'E') {
LAB_0183ec08:
        do {
          lVar5 = FUN_0183c2cc(param_1);
          if (lVar5 == 0) {
            return (undefined8 *)0x0;
          }
          plVar12 = (long *)param_1[3];
          if (plVar12 == (long *)param_1[4]) {
            plVar19 = (long *)param_1[2];
            sVar17 = (long)plVar12 - (long)plVar19;
            if (param_1 + 5 == plVar19) {
              pvVar18 = malloc(sVar17 * 2);
              if (pvVar18 == (void *)0x0) goto LAB_01840858;
              if (sVar17 != 0) {
                memmove(pvVar18,plVar19,sVar17);
              }
              param_1[2] = (long)pvVar18;
            }
            else {
              pvVar18 = realloc(plVar19,sVar17 * 2);
              param_1[2] = (long)pvVar18;
              if (pvVar18 == (void *)0x0) goto LAB_01840858;
            }
            plVar12 = (long *)((long)pvVar18 + ((long)sVar17 >> 3) * 8);
            param_1[3] = (long)plVar12;
            param_1[4] = (long)((long)pvVar18 + ((long)sVar17 >> 2) * 8);
          }
          param_1[3] = (long)(plVar12 + 1);
          *plVar12 = lVar5;
          pcVar15 = (char *)*param_1;
        } while (pcVar15 == (char *)param_1[1]);
      }
      lVar3 = (lVar4 - lVar3 >> 3) * 8;
      *param_1 = (long)(pcVar15 + 1);
      auVar20 = FUN_01844294(param_1,param_1[2] + lVar3,param_1[3]);
      pvVar18 = (void *)param_1[0x25c];
      param_1[3] = param_1[2] + lVar3;
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar3 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar3 + 0x20U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar3 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      *plVar12 = lVar3 + 0x20;
      puVar11 = (undefined8 *)((long)puVar6 + lVar3 + 0x10);
      *puVar11 = &PTR_FUN_01ce09a0;
      *(undefined4 *)((long)puVar6 + lVar3 + 0x18) = 0x1010100;
      *(undefined1 (*) [16])((long)puVar6 + lVar3 + 0x20) = auVar20;
      if (puVar11 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar3 = *plVar12;
      puVar8 = pvVar18;
      if (0xfef < lVar3 + 0x40U) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) goto LAB_01840858;
        lVar3 = 0;
        *puVar8 = pvVar18;
        plVar12 = puVar8 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar8;
      }
      *plVar12 = lVar3 + 0x40;
      puVar6 = (undefined8 *)((long)puVar8 + lVar3 + 0x10);
      *puVar6 = &PTR_FUN_01ce0850;
      *(char **)((long)puVar8 + lVar3 + 0x28) = "";
      *(char **)((long)puVar8 + lVar3 + 0x20) = "sizeof... (";
      *(undefined4 *)((long)puVar8 + lVar3 + 0x18) = 0x101012f;
      *(undefined8 **)((long)puVar8 + lVar3 + 0x30) = puVar11;
      goto LAB_0183fbc8;
    default:
      return (undefined8 *)0x0;
    case 'Z':
      pcVar15 = pcVar15 + 2;
      *param_1 = (long)pcVar15;
      if (pcVar9 == pcVar15) {
        return (undefined8 *)0x0;
      }
      if (*pcVar15 != 'f') {
        if (*pcVar15 != 'T') {
          return (undefined8 *)0x0;
        }
        lVar3 = FUN_0183d478(param_1);
        if (lVar3 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar18 = (void *)param_1[0x25c];
        plVar12 = (long *)((long)pvVar18 + 8);
        lVar4 = *plVar12;
        puVar6 = pvVar18;
        if (0xfef < lVar4 + 0x20U) {
          puVar6 = malloc(0x1000);
          if (puVar6 == (void *)0x0) goto LAB_01840858;
          lVar4 = 0;
          *puVar6 = pvVar18;
          plVar12 = puVar6 + 1;
          *plVar12 = 0;
          param_1[0x25c] = (long)puVar6;
        }
        uVar14 = 0x131;
        lVar5 = lVar4 + 0x20;
        lVar4 = (long)puVar6 + lVar4;
        ppuVar13 = &PTR_FUN_01ce0930;
        goto LAB_0183fcdc;
      }
      lVar3 = FUN_01840fac(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar4 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar4 + 0x40U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar4 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      *plVar12 = lVar4 + 0x40;
      pcVar15 = "sizeof... (";
      puVar6 = (undefined8 *)((long)puVar6 + lVar4 + 0x10);
      *puVar6 = &PTR_FUN_01ce0850;
      pcVar9 = "";
      goto LAB_0183fba4;
    case 'c':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_01839ba0(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      lVar4 = FUN_0183e610(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar5 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar5 + 0x30U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar5 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      pcVar15 = "static_cast";
      *plVar12 = lVar5 + 0x30;
      puVar6 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
      *puVar6 = &PTR_FUN_01ce0150;
      pcVar9 = "";
      goto LAB_0183fe80;
    case 'p':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar4 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar4 + 0x20U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar4 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      uVar14 = 0x11d;
      lVar5 = lVar4 + 0x20;
      lVar4 = (long)puVar6 + lVar4;
      ppuVar13 = &PTR_FUN_01ce0000;
LAB_0183fcdc:
      *plVar12 = lVar5;
      *(undefined8 *)(lVar4 + 0x10) = ppuVar13;
      *(uint *)(lVar4 + 0x18) = uVar14 | 0x1010000;
      *(long *)(lVar4 + 0x20) = lVar3;
      return (undefined8 *)(lVar4 + 0x10);
    case 'r':
      goto switchD_0183e6cc_caseD_31;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_01839ba0(param_1);
      break;
    case 'z':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
    }
    if (lVar3 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar18 = (void *)param_1[0x25c];
    plVar12 = (long *)((long)pvVar18 + 8);
    lVar4 = *plVar12;
    puVar6 = pvVar18;
    if (0xfef < lVar4 + 0x40U) {
      puVar6 = malloc(0x1000);
      if (puVar6 == (void *)0x0) goto LAB_01840858;
      lVar4 = 0;
      *puVar6 = pvVar18;
      plVar12 = puVar6 + 1;
      *plVar12 = 0;
      param_1[0x25c] = (long)puVar6;
    }
    *plVar12 = lVar4 + 0x40;
    lVar4 = (long)puVar6 + lVar4;
    pcVar15 = "sizeof (";
    goto LAB_0183fb9c;
  case 't':
    switch(pcVar15[1]) {
    case 'e':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
      goto joined_r0x0183ef50;
    case 'i':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_01839ba0(param_1);
joined_r0x0183ef50:
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar18 = (void *)param_1[0x25c];
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar4 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar4 + 0x40U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar4 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      *plVar12 = lVar4 + 0x40;
      lVar4 = (long)puVar6 + lVar4;
      pcVar15 = "typeid (";
LAB_0183fb9c:
      puVar6 = (undefined8 *)(lVar4 + 0x10);
      *puVar6 = &PTR_FUN_01ce0850;
      pcVar9 = pcVar15 + 8;
      goto LAB_0183fba4;
    case 'l':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_01839ba0(param_1);
      if (lVar3 != 0) {
        lVar4 = param_1[2];
        lVar5 = param_1[3];
        while( true ) {
          pcVar15 = (char *)*param_1;
          if ((pcVar15 != (char *)param_1[1]) && (*pcVar15 == 'E')) {
            lVar4 = (lVar5 - lVar4 >> 3) * 8;
            *param_1 = (long)(pcVar15 + 1);
            auVar20 = FUN_01844294(param_1,param_1[2] + lVar4,param_1[3]);
            pvVar18 = (void *)param_1[0x25c];
            param_1[3] = param_1[2] + lVar4;
            plVar12 = (long *)((long)pvVar18 + 8);
            lVar4 = *plVar12;
            puVar6 = pvVar18;
            if (0xfef < lVar4 + 0x30U) {
              puVar6 = malloc(0x1000);
              if (puVar6 == (void *)0x0) goto LAB_01840858;
              lVar4 = 0;
              *puVar6 = pvVar18;
              plVar12 = puVar6 + 1;
              *plVar12 = 0;
              param_1[0x25c] = (long)puVar6;
            }
            uVar14 = 0x138;
            lVar5 = lVar4 + 0x30;
            lVar4 = (long)puVar6 + lVar4;
            ppuVar13 = &PTR_FUN_01ce0700;
            goto LAB_018403e8;
          }
          lVar7 = FUN_01842054(param_1);
          if (lVar7 == 0) break;
          plVar12 = (long *)param_1[3];
          if (plVar12 == (long *)param_1[4]) {
            plVar19 = (long *)param_1[2];
            sVar17 = (long)plVar12 - (long)plVar19;
            if (param_1 + 5 == plVar19) {
              pvVar18 = malloc(sVar17 * 2);
              if (pvVar18 == (void *)0x0) goto LAB_01840858;
              if (sVar17 != 0) {
                memmove(pvVar18,plVar19,sVar17);
              }
              param_1[2] = (long)pvVar18;
            }
            else {
              pvVar18 = realloc(plVar19,sVar17 * 2);
              param_1[2] = (long)pvVar18;
              if (pvVar18 == (void *)0x0) goto LAB_01840858;
            }
            plVar12 = (long *)((long)pvVar18 + ((long)sVar17 >> 3) * 8);
            param_1[3] = (long)plVar12;
            param_1[4] = (long)((long)pvVar18 + ((long)sVar17 >> 2) * 8);
          }
          param_1[3] = (long)(plVar12 + 1);
          *plVar12 = lVar7;
        }
      }
      break;
    case 'r':
      pvVar18 = (void *)param_1[0x25c];
      *param_1 = (long)(pcVar15 + 2);
      plVar12 = (long *)((long)pvVar18 + 8);
      lVar3 = *plVar12;
      puVar6 = pvVar18;
      if (0xfef < lVar3 + 0x20U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_01840858;
        lVar3 = 0;
        *puVar6 = pvVar18;
        plVar12 = puVar6 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar6;
      }
      *plVar12 = lVar3 + 0x20;
      puVar11 = (undefined8 *)((long)puVar6 + lVar3 + 0x10);
      *puVar11 = &PTR_FUN_01cdfb30;
      *(undefined4 *)((long)puVar6 + lVar3 + 0x18) = 0x1010107;
      *(char **)((long)puVar6 + lVar3 + 0x28) = "";
      *(char **)((long)puVar6 + lVar3 + 0x20) = "throw";
      return puVar11;
    case 'w':
      *param_1 = (long)(pcVar15 + 2);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 != 0) {
        pvVar18 = (void *)param_1[0x25c];
        plVar12 = (long *)((long)pvVar18 + 8);
        lVar4 = *plVar12;
        puVar6 = pvVar18;
        if (0xfef < lVar4 + 0x20U) {
          puVar6 = malloc(0x1000);
          if (puVar6 == (void *)0x0) goto LAB_01840858;
          lVar4 = 0;
          *puVar6 = pvVar18;
          plVar12 = puVar6 + 1;
          *plVar12 = 0;
          param_1[0x25c] = (long)puVar6;
        }
        uVar14 = 0x13a;
        lVar5 = lVar4 + 0x20;
        lVar4 = (long)puVar6 + lVar4;
        ppuVar13 = &PTR_FUN_01ce0a10;
        goto LAB_0183fcdc;
      }
    }
    goto switchD_0183e6cc_caseD_3a;
  }
LAB_0183f968:
  pcVar10 = pcVar9 + 2;
LAB_01840108:
  *param_1 = (long)(pcVar15 + 2);
  puVar6 = (undefined8 *)FUN_018418c4(param_1,pcVar9,pcVar10);
  return puVar6;
}

