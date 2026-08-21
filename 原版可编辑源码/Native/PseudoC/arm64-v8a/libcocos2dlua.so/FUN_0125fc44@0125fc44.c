
undefined8 * FUN_0125fc44(long *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  uint uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 *puVar13;
  
  puVar1 = (undefined1 *)*param_1;
  uVar3 = param_1[1] - (long)puVar1;
  if ((undefined1 *)param_1[1] == puVar1) goto LAB_01260a60;
  puVar11 = (undefined8 *)0x0;
  switch(*puVar1) {
  case 0x61:
    if (uVar3 < 2) break;
    puVar11 = (undefined8 *)0x0;
    switch(puVar1[1]) {
    case 0x4e:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator&=";
      break;
    default:
      goto switchD_0125fc90_caseD_62;
    case 0x53:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator=";
      uVar5 = 10;
      goto LAB_01260e8c;
    case 0x61:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator&&";
      break;
    case 100:
    case 0x6e:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator&";
      uVar5 = 10;
      goto LAB_01260e8c;
    }
LAB_01260e88:
    uVar5 = 0xb;
LAB_01260e8c:
    lVar6 = __strlen_chk(pcVar10,uVar5);
    *(undefined8 *)(lVar4 + 0x10) = &PTR_FUN_01735958;
    *(undefined4 *)(lVar4 + 0x18) = 0x1010107;
    *(char **)(lVar4 + 0x20) = pcVar10;
    *(char **)(lVar4 + 0x28) = pcVar10 + lVar6;
    return (undefined8 *)(lVar4 + 0x10);
  default:
    goto switchD_0125fc90_caseD_62;
  case 99:
    if (uVar3 < 2) break;
    puVar11 = (undefined8 *)0x0;
    switch(puVar1[1]) {
    case 0x6c:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator()";
      goto LAB_01260e88;
    case 0x6d:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator,";
      uVar5 = 10;
      break;
    default:
      goto switchD_0125fc90_caseD_62;
    case 0x6f:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator~";
      uVar5 = 10;
      break;
    case 0x76:
      cVar2 = *(char *)((long)param_1 + 0x2d1);
      lVar4 = param_1[0x5a];
      *param_1 = (long)(puVar1 + 2);
      *(undefined1 *)(param_1 + 0x5a) = 0;
      *(bool *)((long)param_1 + 0x2d1) = param_2 != (undefined1 *)0x0 || cVar2 != '\0';
      lVar6 = FUN_012557ec(param_1);
      if (lVar6 == 0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
        pvVar12 = (void *)param_1[0x25c];
        lVar7 = *(long *)((long)pvVar12 + 8);
        puVar13 = pvVar12;
        if (0xfef < lVar7 + 0x20U) {
          puVar13 = malloc(0x1000);
          if (puVar13 == (void *)0x0) goto LAB_01260edc;
          lVar7 = 0;
          *puVar13 = pvVar12;
          puVar13[1] = 0;
          param_1[0x25c] = (long)puVar13;
        }
        *(long *)((long)puVar13 + 8) = lVar7 + 0x20;
        puVar11 = (undefined8 *)((long)puVar13 + lVar7 + 0x10);
        *puVar11 = &PTR_FUN_01736218;
        *(undefined4 *)((long)puVar13 + lVar7 + 0x18) = 0x1010104;
        *(long *)((long)puVar13 + lVar7 + 0x20) = lVar6;
      }
      *(char *)((long)param_1 + 0x2d1) = cVar2;
      *(char *)(param_1 + 0x5a) = (char)lVar4;
      goto switchD_0125fc90_caseD_62;
    }
    goto LAB_01260e8c;
  case 100:
    if (1 < uVar3) {
      puVar11 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x56:
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator/=";
        goto LAB_01260e88;
      default:
        goto switchD_0125fc90_caseD_62;
      case 0x61:
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator delete[]";
        uVar5 = 0x12;
        break;
      case 0x65:
switchD_0126011c_caseD_6c:
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) {
LAB_01260edc:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator*";
        uVar5 = 10;
        break;
      case 0x6c:
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator delete";
        uVar5 = 0x10;
        break;
      case 0x76:
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator/";
        uVar5 = 10;
      }
      goto LAB_01260e8c;
    }
    break;
  case 0x65:
    if (1 < uVar3) {
      cVar2 = puVar1[1];
      if (cVar2 == 'O') {
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator^=";
      }
      else {
        if (cVar2 != 'q') {
          if (cVar2 == 'o') {
            pvVar12 = (void *)param_1[0x25c];
            *param_1 = (long)(puVar1 + 2);
            lVar4 = *(long *)((long)pvVar12 + 8);
            puVar11 = pvVar12;
            if (0xfef < lVar4 + 0x20U) {
              puVar11 = malloc(0x1000);
              if (puVar11 == (void *)0x0) goto LAB_01260edc;
              lVar4 = 0;
              *puVar11 = pvVar12;
              puVar11[1] = 0;
              param_1[0x25c] = (long)puVar11;
            }
            *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
            lVar4 = (long)puVar11 + lVar4;
            pcVar10 = "operator^";
            uVar5 = 10;
            goto LAB_01260e8c;
          }
          break;
        }
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator==";
      }
      goto LAB_01260e88;
    }
    break;
  case 0x67:
    if (1 < uVar3) {
      if (puVar1[1] == 't') {
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator>";
        uVar5 = 10;
        goto LAB_01260e8c;
      }
      if (puVar1[1] == 'e') {
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator>=";
        goto LAB_01260e88;
      }
    }
    break;
  case 0x69:
    if ((1 < uVar3) && (puVar1[1] == 'x')) {
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator[]";
      goto LAB_01260e88;
    }
    break;
  case 0x6c:
    if (uVar3 < 2) break;
    puVar11 = (undefined8 *)0x0;
    switch(puVar1[1]) {
    case 0x53:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator<<=";
      uVar5 = 0xc;
      goto LAB_01260e8c;
    default:
      goto switchD_0125fc90_caseD_62;
    case 0x65:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator<=";
      break;
    case 0x69:
      *param_1 = (long)(puVar1 + 2);
      lVar4 = FUN_0125f98c(param_1);
      if (lVar4 != 0) {
        puVar13 = (undefined8 *)param_1[0x25c];
        lVar6 = puVar13[1];
        puVar11 = puVar13;
        if (0xfef < lVar6 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (undefined8 *)0x0) goto LAB_01260edc;
          lVar6 = 0;
          *puVar11 = puVar13;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        lVar7 = (long)puVar11 + lVar6;
        uVar9 = 0x113;
        ppuVar8 = &PTR_FUN_01736288;
        goto LAB_01260a48;
      }
      goto LAB_01260a60;
    case 0x73:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator<<";
      break;
    case 0x74:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator<";
      uVar5 = 10;
      goto LAB_01260e8c;
    }
    goto LAB_01260e88;
  case 0x6d:
    if (1 < uVar3) {
      puVar11 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x49:
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator-=";
        break;
      default:
        goto switchD_0125fc90_caseD_62;
      case 0x4c:
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator*=";
        break;
      case 0x69:
switchD_01260370_caseD_67:
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator-";
        uVar5 = 10;
        goto LAB_01260e8c;
      case 0x6c:
        goto switchD_0126011c_caseD_6c;
      case 0x6d:
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator--";
      }
      goto LAB_01260e88;
    }
    break;
  case 0x6e:
    if (1 < uVar3) {
      puVar11 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x61:
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator new[]";
        uVar5 = 0xf;
        break;
      default:
        goto switchD_0125fc90_caseD_62;
      case 0x65:
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator!=";
        goto LAB_01260e88;
      case 0x67:
        goto switchD_01260370_caseD_67;
      case 0x74:
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator!";
        uVar5 = 10;
        break;
      case 0x77:
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator new";
        uVar5 = 0xd;
      }
      goto LAB_01260e8c;
    }
    break;
  case 0x6f:
    if (1 < uVar3) {
      cVar2 = puVar1[1];
      if (cVar2 == 'R') {
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator|=";
      }
      else {
        if (cVar2 == 'r') {
          pvVar12 = (void *)param_1[0x25c];
          *param_1 = (long)(puVar1 + 2);
          lVar4 = *(long *)((long)pvVar12 + 8);
          puVar11 = pvVar12;
          if (0xfef < lVar4 + 0x20U) {
            puVar11 = malloc(0x1000);
            if (puVar11 == (void *)0x0) goto LAB_01260edc;
            lVar4 = 0;
            *puVar11 = pvVar12;
            puVar11[1] = 0;
            param_1[0x25c] = (long)puVar11;
          }
          *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
          lVar4 = (long)puVar11 + lVar4;
          pcVar10 = "operator|";
          uVar5 = 10;
          goto LAB_01260e8c;
        }
        if (cVar2 != 'o') break;
        pvVar12 = (void *)param_1[0x25c];
        *param_1 = (long)(puVar1 + 2);
        lVar4 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (0xfef < lVar4 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar4 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
        lVar4 = (long)puVar11 + lVar4;
        pcVar10 = "operator||";
      }
      goto LAB_01260e88;
    }
    break;
  case 0x70:
    if (uVar3 < 2) break;
    switch(puVar1[1]) {
    case 0x4c:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator+=";
      break;
    default:
      return (undefined8 *)0x0;
    case 0x6c:
    case 0x73:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator+";
      uVar5 = 10;
      goto LAB_01260e8c;
    case 0x6d:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator->*";
      uVar5 = 0xc;
      goto LAB_01260e8c;
    case 0x70:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator++";
      break;
    case 0x74:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator->";
    }
    goto LAB_01260e88;
  case 0x71:
    if ((1 < uVar3) && (puVar1[1] == 'u')) {
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator?";
      uVar5 = 10;
      goto LAB_01260e8c;
    }
    break;
  case 0x72:
    if (uVar3 < 2) break;
    puVar11 = (undefined8 *)0x0;
    switch(puVar1[1]) {
    case 0x4d:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator%=";
      break;
    default:
      goto switchD_0125fc90_caseD_62;
    case 0x53:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator>>=";
      uVar5 = 0xc;
      goto LAB_01260e8c;
    case 0x6d:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator%";
      uVar5 = 10;
      goto LAB_01260e8c;
    case 0x73:
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator>>";
    }
    goto LAB_01260e88;
  case 0x73:
    if ((1 < uVar3) && (puVar1[1] == 's')) {
      pvVar12 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar1 + 2);
      lVar4 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (0xfef < lVar4 + 0x20U) {
        puVar11 = malloc(0x1000);
        if (puVar11 == (void *)0x0) goto LAB_01260edc;
        lVar4 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x25c] = (long)puVar11;
      }
      *(long *)((long)puVar11 + 8) = lVar4 + 0x20;
      lVar4 = (long)puVar11 + lVar4;
      pcVar10 = "operator<=>";
      uVar5 = 0xc;
      goto LAB_01260e8c;
    }
    break;
  case 0x76:
    if ((1 < uVar3) && ((byte)puVar1[1] - 0x30 < 10)) {
      *param_1 = (long)(puVar1 + 2);
      lVar4 = FUN_0125f98c(param_1);
      if (lVar4 != 0) {
        puVar13 = (undefined8 *)param_1[0x25c];
        lVar6 = puVar13[1];
        puVar11 = puVar13;
        if (0xfef < lVar6 + 0x20U) {
          puVar11 = malloc(0x1000);
          if (puVar11 == (void *)0x0) goto LAB_01260edc;
          lVar6 = 0;
          *puVar11 = puVar13;
          puVar11[1] = 0;
          param_1[0x25c] = (long)puVar11;
        }
        lVar7 = (long)puVar11 + lVar6;
        uVar9 = 0x104;
        ppuVar8 = &PTR_FUN_01736218;
LAB_01260a48:
        puVar11[1] = lVar6 + 0x20;
        *(undefined8 *)(lVar7 + 0x10) = ppuVar8;
        *(uint *)(lVar7 + 0x18) = uVar9 | 0x1010000;
        *(long *)(lVar7 + 0x20) = lVar4;
        return (undefined8 *)(lVar7 + 0x10);
      }
    }
  }
LAB_01260a60:
  puVar11 = (undefined8 *)0x0;
switchD_0125fc90_caseD_62:
  return puVar11;
}

