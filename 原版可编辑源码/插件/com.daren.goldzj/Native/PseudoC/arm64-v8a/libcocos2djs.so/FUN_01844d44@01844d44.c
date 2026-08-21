
undefined8 * FUN_01844d44(long *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  uint uVar12;
  char *pcVar13;
  void *pvVar14;
  
  puVar1 = (undefined1 *)*param_1;
  uVar3 = param_1[1] - (long)puVar1;
  if ((undefined1 *)param_1[1] == puVar1) goto LAB_01845614;
  puVar4 = (undefined8 *)0x0;
  switch(*puVar1) {
  case 0x61:
    if (uVar3 < 2) break;
    switch(puVar1[1]) {
    case 0x4e:
      pvVar14 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      plVar7 = (long *)((long)pvVar14 + 8);
      lVar5 = *plVar7;
      puVar4 = pvVar14;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_018463f8;
        lVar5 = 0;
        *puVar4 = pvVar14;
        plVar7 = puVar4 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar4;
      }
      lVar9 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar13 = "operator&=";
      break;
    default:
      return (undefined8 *)0x0;
    case 0x53:
      pvVar14 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      plVar7 = (long *)((long)pvVar14 + 8);
      lVar5 = *plVar7;
      puVar4 = pvVar14;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_018463f8;
        lVar5 = 0;
        *puVar4 = pvVar14;
        plVar7 = puVar4 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar4;
      }
      lVar9 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar13 = "operator=";
      goto LAB_0184618c;
    case 0x61:
      pvVar14 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      plVar7 = (long *)((long)pvVar14 + 8);
      lVar5 = *plVar7;
      puVar4 = pvVar14;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_018463f8;
        lVar5 = 0;
        *puVar4 = pvVar14;
        plVar7 = puVar4 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar4;
      }
      lVar9 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar13 = "operator&&";
      break;
    case 100:
    case 0x6e:
      pvVar14 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      plVar7 = (long *)((long)pvVar14 + 8);
      lVar5 = *plVar7;
      puVar4 = pvVar14;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_018463f8;
        lVar5 = 0;
        *puVar4 = pvVar14;
        plVar7 = puVar4 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar4;
      }
      lVar9 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar13 = "operator&";
LAB_0184618c:
      *plVar7 = lVar9;
      puVar4 = (undefined8 *)(lVar5 + 0x10);
      *puVar4 = &PTR_FUN_01cdfb30;
      pcVar8 = pcVar13 + 9;
      goto LAB_018463c4;
    }
LAB_018463b8:
    *plVar7 = lVar9;
    puVar4 = (undefined8 *)(lVar5 + 0x10);
    *puVar4 = &PTR_FUN_01cdfb30;
    pcVar8 = pcVar13 + 10;
LAB_018463c4:
    *(undefined4 *)(puVar4 + 1) = 0x1010107;
    puVar4[3] = pcVar8;
    puVar4[2] = pcVar13;
    return puVar4;
  default:
    goto switchD_01844d90_caseD_62;
  case 99:
    if (uVar3 < 2) break;
    puVar4 = (undefined8 *)0x0;
    switch(puVar1[1]) {
    case 0x6c:
      pvVar14 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      plVar7 = (long *)((long)pvVar14 + 8);
      lVar5 = *plVar7;
      puVar4 = pvVar14;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_018463f8;
        lVar5 = 0;
        *puVar4 = pvVar14;
        plVar7 = puVar4 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar4;
      }
      lVar9 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar13 = "operator()";
      goto LAB_018463b8;
    case 0x6d:
      pvVar14 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      plVar7 = (long *)((long)pvVar14 + 8);
      lVar5 = *plVar7;
      puVar4 = pvVar14;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_018463f8;
        lVar5 = 0;
        *puVar4 = pvVar14;
        plVar7 = puVar4 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar4;
      }
      lVar9 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar13 = "operator,";
      break;
    default:
      goto switchD_01844d90_caseD_62;
    case 0x6f:
      pvVar14 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      plVar7 = (long *)((long)pvVar14 + 8);
      lVar5 = *plVar7;
      puVar4 = pvVar14;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_018463f8;
        lVar5 = 0;
        *puVar4 = pvVar14;
        plVar7 = puVar4 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar4;
      }
      lVar9 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar13 = "operator~";
      break;
    case 0x76:
      cVar2 = *(char *)((long)param_1 + 0x2d1);
      lVar5 = param_1[0x5a];
      *param_1 = (long)(puVar1 + 2);
      *(undefined1 *)(param_1 + 0x5a) = 0;
      *(bool *)((long)param_1 + 0x2d1) = param_2 != (undefined1 *)0x0 || cVar2 != '\0';
      lVar9 = FUN_01839ba0(param_1);
      if (lVar9 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
        pvVar14 = (void *)param_1[0x25c];
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar10 = *plVar7;
        puVar6 = pvVar14;
        if (0xfef < lVar10 + 0x20U) {
          puVar6 = malloc(0x1000);
          if (puVar6 == (void *)0x0) goto LAB_018463f8;
          lVar10 = 0;
          *puVar6 = pvVar14;
          plVar7 = puVar6 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar6;
        }
        *plVar7 = lVar10 + 0x20;
        puVar4 = (undefined8 *)((long)puVar6 + lVar10 + 0x10);
        *puVar4 = &PTR_FUN_01ce03f0;
        *(undefined4 *)((long)puVar6 + lVar10 + 0x18) = 0x1010104;
        *(long *)((long)puVar6 + lVar10 + 0x20) = lVar9;
      }
      *(char *)((long)param_1 + 0x2d1) = cVar2;
      *(char *)(param_1 + 0x5a) = (char)lVar5;
      goto switchD_01844d90_caseD_62;
    }
    goto LAB_0184618c;
  case 100:
    if (uVar3 < 2) break;
    puVar4 = (undefined8 *)0x0;
    switch(puVar1[1]) {
    case 0x56:
      pvVar14 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      plVar7 = (long *)((long)pvVar14 + 8);
      lVar5 = *plVar7;
      puVar4 = pvVar14;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_018463f8;
        lVar5 = 0;
        *puVar4 = pvVar14;
        plVar7 = puVar4 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar4;
      }
      lVar9 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar13 = "operator/=";
      goto LAB_018463b8;
    default:
      goto switchD_01844d90_caseD_62;
    case 0x61:
      pvVar14 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      plVar7 = (long *)((long)pvVar14 + 8);
      lVar5 = *plVar7;
      puVar4 = pvVar14;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_018463f8;
        lVar5 = 0;
        *puVar4 = pvVar14;
        plVar7 = puVar4 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar4;
      }
      pcVar13 = "operator delete[]";
      *plVar7 = lVar5 + 0x20;
      puVar4 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
      *puVar4 = &PTR_FUN_01cdfb30;
      pcVar8 = "";
      goto LAB_018463c4;
    case 0x65:
switchD_018452e0_caseD_6c:
      pvVar14 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      plVar7 = (long *)((long)pvVar14 + 8);
      lVar5 = *plVar7;
      puVar4 = pvVar14;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) {
LAB_018463f8:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar5 = 0;
        *puVar4 = pvVar14;
        plVar7 = puVar4 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar4;
      }
      lVar9 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar13 = "operator*";
      break;
    case 0x6c:
      pvVar14 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      plVar7 = (long *)((long)pvVar14 + 8);
      lVar5 = *plVar7;
      puVar4 = pvVar14;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_018463f8;
        lVar5 = 0;
        *puVar4 = pvVar14;
        plVar7 = puVar4 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar4;
      }
      pcVar13 = "operator delete";
      *plVar7 = lVar5 + 0x20;
      puVar4 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
      *puVar4 = &PTR_FUN_01cdfb30;
      pcVar8 = "";
      goto LAB_018463c4;
    case 0x76:
      pvVar14 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      plVar7 = (long *)((long)pvVar14 + 8);
      lVar5 = *plVar7;
      puVar4 = pvVar14;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_018463f8;
        lVar5 = 0;
        *puVar4 = pvVar14;
        plVar7 = puVar4 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar4;
      }
      lVar9 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar13 = "operator/";
    }
    goto LAB_0184618c;
  case 0x65:
    if (1 < uVar3) {
      cVar2 = puVar1[1];
      if (cVar2 == 'O') {
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator^=";
      }
      else {
        if (cVar2 != 'q') {
          if (cVar2 == 'o') {
            pvVar14 = (void *)param_1[0x25c];
            *param_1 = (long)(puVar1 + 2);
            plVar7 = (long *)((long)pvVar14 + 8);
            lVar5 = *plVar7;
            puVar4 = pvVar14;
            if (0xfef < lVar5 + 0x20U) {
              puVar4 = malloc(0x1000);
              if (puVar4 == (void *)0x0) goto LAB_018463f8;
              lVar5 = 0;
              *puVar4 = pvVar14;
              plVar7 = puVar4 + 1;
              *plVar7 = 0;
              param_1[0x25c] = (long)puVar4;
            }
            lVar9 = lVar5 + 0x20;
            lVar5 = (long)puVar4 + lVar5;
            pcVar13 = "operator^";
            goto LAB_0184618c;
          }
          break;
        }
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator==";
      }
      goto LAB_018463b8;
    }
    break;
  case 0x67:
    if (1 < uVar3) {
      if (puVar1[1] == 't') {
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator>";
        goto LAB_0184618c;
      }
      if (puVar1[1] == 'e') {
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator>=";
        goto LAB_018463b8;
      }
    }
    break;
  case 0x69:
    if ((1 < uVar3) && (puVar1[1] == 'x')) {
      pvVar14 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      plVar7 = (long *)((long)pvVar14 + 8);
      lVar5 = *plVar7;
      puVar4 = pvVar14;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_018463f8;
        lVar5 = 0;
        *puVar4 = pvVar14;
        plVar7 = puVar4 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar4;
      }
      lVar9 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar13 = "operator[]";
      goto LAB_018463b8;
    }
    break;
  case 0x6c:
    if (1 < uVar3) {
      puVar4 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x53:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator<<=";
        goto LAB_01846344;
      default:
        goto switchD_01844d90_caseD_62;
      case 0x65:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator<=";
        break;
      case 0x69:
        *param_1 = (long)(puVar1 + 2);
        lVar5 = FUN_01844a14(param_1);
        if (lVar5 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar14 = (void *)param_1[0x25c];
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar9 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar9 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar9 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar10 = (long)puVar4 + lVar9;
        uVar12 = 0x113;
        ppuVar11 = &PTR_FUN_01ce0460;
        goto LAB_01845e38;
      case 0x73:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator<<";
        break;
      case 0x74:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator<";
        goto LAB_0184618c;
      }
      goto LAB_018463b8;
    }
    break;
  case 0x6d:
    if (1 < uVar3) {
      puVar4 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x49:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator-=";
        break;
      default:
        goto switchD_01844d90_caseD_62;
      case 0x4c:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator*=";
        break;
      case 0x69:
switchD_0184559c_caseD_67:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator-";
        goto LAB_0184618c;
      case 0x6c:
        goto switchD_018452e0_caseD_6c;
      case 0x6d:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator--";
      }
      goto LAB_018463b8;
    }
    break;
  case 0x6e:
    if (1 < uVar3) {
      puVar4 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x61:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        pcVar13 = "operator new[]";
        *plVar7 = lVar5 + 0x20;
        puVar4 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
        *puVar4 = &PTR_FUN_01cdfb30;
        pcVar8 = "";
        break;
      default:
        goto switchD_01844d90_caseD_62;
      case 0x65:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator!=";
        goto LAB_018463b8;
      case 0x67:
        goto switchD_0184559c_caseD_67;
      case 0x74:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator!";
        goto LAB_0184618c;
      case 0x77:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        pcVar13 = "operator new";
        *plVar7 = lVar5 + 0x20;
        puVar4 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
        *puVar4 = &PTR_FUN_01cdfb30;
        pcVar8 = "";
      }
      goto LAB_018463c4;
    }
    break;
  case 0x6f:
    if (1 < uVar3) {
      cVar2 = puVar1[1];
      if (cVar2 == 'R') {
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator|=";
      }
      else {
        if (cVar2 == 'r') {
          pvVar14 = (void *)param_1[0x25c];
          *param_1 = (long)(puVar1 + 2);
          plVar7 = (long *)((long)pvVar14 + 8);
          lVar5 = *plVar7;
          puVar4 = pvVar14;
          if (0xfef < lVar5 + 0x20U) {
            puVar4 = malloc(0x1000);
            if (puVar4 == (void *)0x0) goto LAB_018463f8;
            lVar5 = 0;
            *puVar4 = pvVar14;
            plVar7 = puVar4 + 1;
            *plVar7 = 0;
            param_1[0x25c] = (long)puVar4;
          }
          lVar9 = lVar5 + 0x20;
          lVar5 = (long)puVar4 + lVar5;
          pcVar13 = "operator|";
          goto LAB_0184618c;
        }
        if (cVar2 != 'o') break;
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator||";
      }
      goto LAB_018463b8;
    }
    break;
  case 0x70:
    if (1 < uVar3) {
      puVar4 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x4c:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator+=";
        break;
      default:
        goto switchD_01844d90_caseD_62;
      case 0x6c:
      case 0x73:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator+";
        goto LAB_0184618c;
      case 0x6d:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator->*";
        goto LAB_01846344;
      case 0x70:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator++";
        break;
      case 0x74:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator->";
      }
      goto LAB_018463b8;
    }
    break;
  case 0x71:
    if ((1 < uVar3) && (puVar1[1] == 'u')) {
      pvVar14 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      plVar7 = (long *)((long)pvVar14 + 8);
      lVar5 = *plVar7;
      puVar4 = pvVar14;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_018463f8;
        lVar5 = 0;
        *puVar4 = pvVar14;
        plVar7 = puVar4 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar4;
      }
      lVar9 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar13 = "operator?";
      goto LAB_0184618c;
    }
    break;
  case 0x72:
    if (1 < uVar3) {
      puVar4 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x4d:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator%=";
        break;
      default:
        goto switchD_01844d90_caseD_62;
      case 0x53:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator>>=";
        goto LAB_01846344;
      case 0x6d:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator%";
        goto LAB_0184618c;
      case 0x73:
        pvVar14 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        plVar7 = (long *)((long)pvVar14 + 8);
        lVar5 = *plVar7;
        puVar4 = pvVar14;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_018463f8;
          lVar5 = 0;
          *puVar4 = pvVar14;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        lVar9 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar13 = "operator>>";
      }
      goto LAB_018463b8;
    }
    break;
  case 0x73:
    if ((1 < uVar3) && (puVar1[1] == 's')) {
      pvVar14 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      plVar7 = (long *)((long)pvVar14 + 8);
      lVar5 = *plVar7;
      puVar4 = pvVar14;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_018463f8;
        lVar5 = 0;
        *puVar4 = pvVar14;
        plVar7 = puVar4 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar4;
      }
      lVar9 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar13 = "operator<=>";
LAB_01846344:
      *plVar7 = lVar9;
      puVar4 = (undefined8 *)(lVar5 + 0x10);
      *puVar4 = &PTR_FUN_01cdfb30;
      pcVar8 = pcVar13 + 0xb;
      goto LAB_018463c4;
    }
    break;
  case 0x76:
    if ((1 < uVar3) && ((byte)puVar1[1] - 0x30 < 10)) {
      *param_1 = (long)(puVar1 + 2);
      lVar5 = FUN_01844a14(param_1);
      if (lVar5 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar14 = (void *)param_1[0x25c];
      plVar7 = (long *)((long)pvVar14 + 8);
      lVar9 = *plVar7;
      puVar4 = pvVar14;
      if (0xfef < lVar9 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_018463f8;
        lVar9 = 0;
        *puVar4 = pvVar14;
        plVar7 = puVar4 + 1;
        *plVar7 = 0;
        param_1[0x25c] = (long)puVar4;
      }
      lVar10 = (long)puVar4 + lVar9;
      uVar12 = 0x104;
      ppuVar11 = &PTR_FUN_01ce03f0;
LAB_01845e38:
      *plVar7 = lVar9 + 0x20;
      *(undefined8 *)(lVar10 + 0x10) = ppuVar11;
      *(uint *)(lVar10 + 0x18) = uVar12 | 0x1010000;
      *(long *)(lVar10 + 0x20) = lVar5;
      return (undefined8 *)(lVar10 + 0x10);
    }
  }
LAB_01845614:
  puVar4 = (undefined8 *)0x0;
switchD_01844d90_caseD_62:
  return puVar4;
}

