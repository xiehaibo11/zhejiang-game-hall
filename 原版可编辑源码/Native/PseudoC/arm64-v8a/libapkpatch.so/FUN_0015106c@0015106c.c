
undefined8 * FUN_0015106c(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  void *pvVar14;
  
  pcVar2 = (char *)*param_1;
  pcVar3 = (char *)param_1[1];
  if ((pcVar2 == pcVar3) || (*pcVar2 != 'f')) {
    return (undefined8 *)0x0;
  }
  pcVar1 = pcVar2 + 1;
  *param_1 = (long)pcVar1;
  if (pcVar3 == pcVar1) {
    return (undefined8 *)0x0;
  }
  cVar4 = *pcVar1;
  puVar7 = (undefined8 *)0x0;
  bVar6 = true;
  switch(cVar4) {
  default:
    goto code_r0x0015110c;
  case 'R':
  case 'r':
    bVar6 = false;
  case 'L':
  case 'l':
    pcVar1 = pcVar2 + 2;
    *param_1 = (long)pcVar1;
    if ((ulong)((long)pcVar3 - (long)pcVar1) < 2) {
      return (undefined8 *)0x0;
    }
  }
  puVar7 = (undefined8 *)0x0;
  switch(*pcVar1) {
  case 'a':
    puVar7 = (undefined8 *)0x0;
    puVar12 = &DAT_0011a235;
    puVar13 = &UNK_0011a237;
    switch(pcVar2[3]) {
    case 'N':
      puVar12 = &UNK_001171c8;
      goto LAB_00151494;
    default:
      goto code_r0x0015110c;
    case 'S':
      puVar12 = &DAT_00118345;
      puVar13 = &DAT_00118346;
      break;
    case 'a':
      break;
    case 'n':
      puVar12 = &DAT_0011a495;
      puVar13 = &DAT_0011a496;
    }
    break;
  default:
    goto code_r0x0015110c;
  case 'c':
    if (pcVar2[3] != 'm') {
      return (undefined8 *)0x0;
    }
    puVar12 = &DAT_00116e2b;
    puVar13 = &DAT_00116e2c;
    break;
  case 'd':
    cVar5 = pcVar2[3];
    if (cVar5 == 'V') {
      puVar12 = &UNK_00115bff;
    }
    else {
      if (cVar5 != 's') {
        if (cVar5 != 'v') {
          return (undefined8 *)0x0;
        }
        puVar12 = &DAT_00115092;
        puVar13 = &DAT_00115093;
        break;
      }
      puVar12 = &DAT_00117e2d;
    }
    goto LAB_00151494;
  case 'e':
    cVar5 = pcVar2[3];
    if (cVar5 == 'O') {
      puVar12 = &UNK_00117b5a;
    }
    else {
      if (cVar5 == 'o') {
        puVar12 = &DAT_001187dc;
        puVar13 = &DAT_001187dd;
        break;
      }
      if (cVar5 != 'q') {
        return (undefined8 *)0x0;
      }
      puVar12 = &UNK_00117b5d;
    }
    goto LAB_00151494;
  case 'g':
    if (pcVar2[3] == 'e') {
      puVar12 = &UNK_00114c6b;
      goto LAB_00151494;
    }
    if (pcVar2[3] != 't') {
      return (undefined8 *)0x0;
    }
    puVar12 = &DAT_00117b60;
    puVar13 = &DAT_00117b61;
    break;
  case 'l':
    puVar7 = (undefined8 *)0x0;
    puVar12 = &UNK_00119c2a;
    puVar13 = &UNK_00119c2c;
    switch(pcVar2[3]) {
    case 'S':
      puVar12 = &UNK_00118a45;
      puVar13 = &UNK_00118a48;
      break;
    default:
      goto code_r0x0015110c;
    case 'e':
      break;
    case 's':
      puVar12 = &UNK_00119311;
      goto LAB_00151494;
    case 't':
      puVar12 = &DAT_00114889;
      puVar13 = &DAT_0011488a;
    }
    break;
  case 'm':
    puVar7 = (undefined8 *)0x0;
    puVar12 = &DAT_00115fb6;
    puVar13 = &DAT_00115fb7;
    switch(pcVar2[3]) {
    case 'I':
      puVar12 = &UNK_00115c02;
      goto LAB_00151494;
    default:
      goto code_r0x0015110c;
    case 'L':
      puVar12 = &UNK_00116e2d;
      goto LAB_00151494;
    case 'i':
      break;
    case 'l':
      puVar12 = &DAT_0011693c;
      puVar13 = &DAT_0011693d;
    }
    break;
  case 'n':
    if (pcVar2[3] != 'e') {
      return (undefined8 *)0x0;
    }
    puVar12 = &UNK_00119a08;
    goto LAB_00151494;
  case 'o':
    cVar5 = pcVar2[3];
    if (cVar5 == 'R') {
      puVar12 = &UNK_001187de;
    }
    else {
      if (cVar5 != 'o') {
        if (cVar5 != 'r') {
          return (undefined8 *)0x0;
        }
        puVar12 = &DAT_0011a238;
        puVar13 = &DAT_0011a239;
        break;
      }
      puVar12 = &UNK_00118347;
    }
LAB_00151494:
    puVar13 = puVar12 + 2;
    break;
  case 'p':
    if (pcVar2[3] == 'L') {
      puVar12 = &UNK_00117fa4;
      goto LAB_00151494;
    }
    if (pcVar2[3] != 'l') {
      return (undefined8 *)0x0;
    }
    puVar12 = &DAT_001187e1;
    puVar13 = &DAT_001187e2;
    break;
  case 'r':
    puVar7 = (undefined8 *)0x0;
    puVar12 = &DAT_0011b710;
    puVar13 = &DAT_0011b711;
    switch(pcVar2[3]) {
    case 'M':
      puVar12 = &UNK_00119c2d;
      goto LAB_00151494;
    default:
      goto code_r0x0015110c;
    case 'S':
      puVar12 = &DAT_00117fa7;
      puVar13 = &DAT_00117faa;
      break;
    case 'm':
      break;
    case 's':
      puVar12 = &DAT_00115335;
      goto LAB_00151494;
    }
  }
  *param_1 = (long)(pcVar2 + 4);
  lVar8 = FUN_0014e504(param_1);
  puVar7 = (undefined8 *)0x0;
  if (lVar8 != 0) {
    if ((cVar4 == 'R') || (cVar4 == 'L')) {
      lVar9 = FUN_0014e504(param_1);
      if (lVar9 == 0) {
        return (undefined8 *)0x0;
      }
      lVar11 = lVar9;
      if (!bVar6) {
        lVar11 = lVar8;
        lVar8 = lVar9;
      }
    }
    else {
      lVar11 = lVar8;
      lVar8 = 0;
    }
    pvVar14 = (void *)param_1[0x266];
    lVar9 = *(long *)((long)pvVar14 + 8);
    puVar10 = pvVar14;
    if (0xfef < lVar9 + 0x40U) {
      puVar10 = malloc(0x1000);
      if (puVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar9 = 0;
      *puVar10 = pvVar14;
      puVar10[1] = 0;
      param_1[0x266] = (long)puVar10;
    }
    puVar7 = (undefined8 *)((long)puVar10 + lVar9 + 0x10);
    *puVar7 = &PTR_FUN_00167a40;
    *(long *)((long)puVar10 + 8) = lVar9 + 0x40;
    *(undefined4 *)((long)puVar10 + lVar9 + 0x18) = 0x101013e;
    *(long *)((long)puVar10 + lVar9 + 0x20) = lVar11;
    *(long *)((long)puVar10 + lVar9 + 0x28) = lVar8;
    *(undefined **)((long)puVar10 + lVar9 + 0x30) = puVar12;
    *(undefined **)((long)puVar10 + lVar9 + 0x38) = puVar13;
    *(bool *)((long)puVar10 + lVar9 + 0x40) = bVar6;
  }
code_r0x0015110c:
  return puVar7;
}

