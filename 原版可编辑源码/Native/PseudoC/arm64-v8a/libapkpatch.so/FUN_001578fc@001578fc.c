
void FUN_001578fc(long *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  void *pvVar11;
  long local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  puVar1 = (undefined1 *)*param_1;
  uVar3 = param_1[1] - (long)puVar1;
  if ((undefined1 *)param_1[1] == puVar1) goto LAB_00157f28;
  puVar5 = (undefined8 *)0x0;
  switch(*puVar1) {
  case 0x61:
    if (1 < uVar3) {
      puVar5 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x4e:
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator&=";
        break;
      default:
        goto code_r0x00157f30;
      case 0x53:
        pcVar8 = "operator=";
        *param_1 = (long)(puVar1 + 2);
        goto LAB_0015829c;
      case 0x61:
        pcVar8 = "operator&&";
        *param_1 = (long)(puVar1 + 2);
        break;
      case 100:
      case 0x6e:
        puVar7 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar6 = puVar7[1];
        puVar5 = puVar7;
        if (0xfef < lVar6 + 0x20U) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) goto LAB_00158338;
          lVar6 = 0;
          *puVar5 = puVar7;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        lVar9 = lVar6 + 0x20;
        lVar6 = (long)puVar5 + lVar6;
        pcVar8 = "operator&";
        goto LAB_00157fcc;
      }
      goto LAB_0015832c;
    }
    break;
  default:
    goto code_r0x00157f30;
  case 99:
    if (uVar3 < 2) break;
    puVar5 = (undefined8 *)0x0;
    switch(puVar1[1]) {
    case 0x6c:
      *param_1 = (long)(puVar1 + 2);
      pcVar8 = "operator()";
      goto LAB_0015832c;
    case 0x6d:
      *param_1 = (long)(puVar1 + 2);
      pcVar8 = "operator,";
      break;
    default:
      goto code_r0x00157f30;
    case 0x6f:
      *param_1 = (long)(puVar1 + 2);
      pcVar8 = "operator~";
      break;
    case 0x76:
      cVar2 = *(char *)((long)param_1 + 0x309);
      lVar6 = param_1[0x61];
      *param_1 = (long)(puVar1 + 2);
      *(undefined1 *)(param_1 + 0x61) = 0;
      *(bool *)((long)param_1 + 0x309) = cVar2 != '\0' || param_2 != (undefined1 *)0x0;
      local_50 = FUN_0014a548(param_1);
      puVar5 = (undefined8 *)0x0;
      if (local_50 != 0) {
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
        puVar5 = (undefined8 *)FUN_00158518(param_1,&local_50);
      }
      *(char *)((long)param_1 + 0x309) = cVar2;
      *(char *)(param_1 + 0x61) = (char)lVar6;
      goto code_r0x00157f30;
    }
    goto LAB_0015829c;
  case 100:
    if (uVar3 < 2) break;
    puVar5 = (undefined8 *)0x0;
    switch(puVar1[1]) {
    case 0x56:
      *param_1 = (long)(puVar1 + 2);
      pcVar8 = "operator/=";
      goto LAB_0015832c;
    case 0x61:
      *param_1 = (long)(puVar1 + 2);
      puVar5 = (undefined8 *)FUN_001585a8(param_1,"operator delete[]");
      break;
    case 0x65:
code_r0x00157f60:
      *param_1 = (long)(puVar1 + 2);
      pcVar8 = "operator*";
      goto LAB_0015829c;
    case 0x6c:
      *param_1 = (long)(puVar1 + 2);
      puVar5 = (undefined8 *)FUN_00154c98(param_1,"operator delete");
      break;
    case 0x76:
      *param_1 = (long)(puVar1 + 2);
      pcVar8 = "operator/";
LAB_0015829c:
      puVar5 = (undefined8 *)FUN_0015847c(param_1,pcVar8);
    }
    goto code_r0x00157f30;
  case 0x65:
    if (1 < uVar3) {
      cVar2 = puVar1[1];
      if (cVar2 == 'O') {
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator^=";
      }
      else {
        if (cVar2 != 'q') {
          if (cVar2 == 'o') {
            *param_1 = (long)(puVar1 + 2);
            pcVar8 = "operator^";
            goto LAB_0015829c;
          }
          break;
        }
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator==";
      }
      goto LAB_0015832c;
    }
    break;
  case 0x67:
    if (1 < uVar3) {
      if (puVar1[1] == 't') {
        puVar7 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar6 = puVar7[1];
        puVar5 = puVar7;
        if (0xfef < lVar6 + 0x20U) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) {
LAB_00158338:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar6 = 0;
          *puVar5 = puVar7;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        lVar9 = lVar6 + 0x20;
        lVar6 = (long)puVar5 + lVar6;
        pcVar8 = "operator>";
        goto LAB_00157fcc;
      }
      if (puVar1[1] == 'e') {
        puVar7 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar6 = puVar7[1];
        puVar5 = puVar7;
        if (0xfef < lVar6 + 0x20U) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00158338;
          lVar6 = 0;
          *puVar5 = puVar7;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        lVar9 = (long)puVar5 + lVar6;
        pcVar8 = "operator>=";
        goto LAB_00157d54;
      }
    }
    break;
  case 0x69:
    if ((1 < uVar3) && (puVar1[1] == 'x')) {
      puVar7 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar6 = puVar7[1];
      puVar5 = puVar7;
      if (0xfef < lVar6 + 0x20U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) goto LAB_00158338;
        lVar6 = 0;
        *puVar5 = puVar7;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      lVar9 = (long)puVar5 + lVar6;
      pcVar8 = "operator[]";
LAB_00157d54:
      puVar5[1] = lVar6 + 0x20;
      puVar5 = (undefined8 *)(lVar9 + 0x10);
      *puVar5 = &PTR_FUN_001671f0;
      pcVar10 = pcVar8 + 10;
LAB_00157fd8:
      *(undefined4 *)(puVar5 + 1) = 0x1010107;
      puVar5[2] = pcVar8;
      puVar5[3] = pcVar10;
      goto code_r0x00157f30;
    }
    break;
  case 0x6c:
    if (uVar3 < 2) break;
    puVar5 = (undefined8 *)0x0;
    switch(puVar1[1]) {
    case 0x53:
      pcVar8 = "operator<<=";
      *param_1 = (long)(puVar1 + 2);
LAB_001582f4:
      puVar5 = (undefined8 *)FUN_001586d4(param_1,pcVar8);
      break;
    case 0x65:
      *param_1 = (long)(puVar1 + 2);
      pcVar8 = "operator<=";
      goto LAB_0015832c;
    case 0x69:
      *param_1 = (long)(puVar1 + 2);
      local_50 = FUN_00157570(param_1);
      puVar5 = (undefined8 *)0x0;
      if (local_50 != 0) {
        puVar5 = (undefined8 *)FUN_00158644(param_1,&local_50);
      }
      break;
    case 0x73:
      *param_1 = (long)(puVar1 + 2);
      pcVar8 = "operator<<";
LAB_0015832c:
      puVar5 = (undefined8 *)FUN_001583e0(param_1,pcVar8);
      break;
    case 0x74:
      *param_1 = (long)(puVar1 + 2);
      pcVar8 = "operator<";
      goto LAB_0015829c;
    }
    goto code_r0x00157f30;
  case 0x6d:
    if (1 < uVar3) {
      puVar5 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x49:
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator-=";
        break;
      default:
        goto code_r0x00157f30;
      case 0x4c:
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator*=";
        break;
      case 0x69:
code_r0x00157fe8:
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator-";
        goto LAB_0015829c;
      case 0x6c:
        goto code_r0x00157f60;
      case 0x6d:
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator--";
      }
      goto LAB_0015832c;
    }
    break;
  case 0x6e:
    if (1 < uVar3) {
      puVar5 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x61:
        *param_1 = (long)(puVar1 + 2);
        puVar5 = (undefined8 *)FUN_00158770(param_1,"operator new[]");
        break;
      case 0x65:
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator!=";
        goto LAB_0015832c;
      case 0x67:
        goto code_r0x00157fe8;
      case 0x74:
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator!";
        goto LAB_0015829c;
      case 0x77:
        *param_1 = (long)(puVar1 + 2);
        puVar5 = (undefined8 *)FUN_0015880c(param_1,"operator new");
      }
      goto code_r0x00157f30;
    }
    break;
  case 0x6f:
    if (1 < uVar3) {
      cVar2 = puVar1[1];
      if (cVar2 == 'R') {
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator|=";
      }
      else {
        if (cVar2 == 'r') {
          *param_1 = (long)(puVar1 + 2);
          pcVar8 = "operator|";
          goto LAB_0015829c;
        }
        if (cVar2 != 'o') break;
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator||";
      }
      goto LAB_0015832c;
    }
    break;
  case 0x70:
    if (1 < uVar3) {
      puVar5 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x4c:
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator+=";
        break;
      default:
        goto code_r0x00157f30;
      case 0x6c:
      case 0x73:
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator+";
        goto LAB_0015829c;
      case 0x6d:
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator->*";
        goto LAB_001582f4;
      case 0x70:
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator++";
        break;
      case 0x74:
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator->";
      }
      goto LAB_0015832c;
    }
    break;
  case 0x71:
    if ((1 < uVar3) && (puVar1[1] == 'u')) {
      puVar7 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar6 = puVar7[1];
      puVar5 = puVar7;
      if (0xfef < lVar6 + 0x20U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (undefined8 *)0x0) goto LAB_00158338;
        lVar6 = 0;
        *puVar5 = puVar7;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      lVar9 = lVar6 + 0x20;
      lVar6 = (long)puVar5 + lVar6;
      pcVar8 = "operator?";
LAB_00157fcc:
      puVar5[1] = lVar9;
      puVar5 = (undefined8 *)(lVar6 + 0x10);
      *puVar5 = &PTR_FUN_001671f0;
      pcVar10 = pcVar8 + 9;
      goto LAB_00157fd8;
    }
    break;
  case 0x72:
    if (1 < uVar3) {
      puVar5 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x4d:
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator%=";
        break;
      default:
        goto code_r0x00157f30;
      case 0x53:
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator>>=";
        goto LAB_001582f4;
      case 0x6d:
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator%";
        goto LAB_0015829c;
      case 0x73:
        *param_1 = (long)(puVar1 + 2);
        pcVar8 = "operator>>";
      }
      goto LAB_0015832c;
    }
    break;
  case 0x73:
    if ((1 < uVar3) && (puVar1[1] == 's')) {
      pvVar11 = (void *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar6 = *(long *)((long)pvVar11 + 8);
      puVar5 = pvVar11;
      if (0xfef < lVar6 + 0x20U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) goto LAB_00158338;
        lVar6 = 0;
        *puVar5 = pvVar11;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      pcVar8 = "operator<=>";
      *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
      puVar5 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
      *puVar5 = &PTR_FUN_001671f0;
      pcVar10 = "";
      goto LAB_00157fd8;
    }
    break;
  case 0x76:
    if ((1 < uVar3) && ((byte)puVar1[1] - 0x30 < 10)) {
      *param_1 = (long)(puVar1 + 2);
      lVar6 = FUN_00157570(param_1);
      puVar5 = (undefined8 *)0x0;
      if (lVar6 != 0) {
        pvVar11 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar11 + 8);
        puVar7 = pvVar11;
        if (0xfef < lVar9 + 0x20U) {
          puVar7 = malloc(0x1000);
          if (puVar7 == (void *)0x0) goto LAB_00158338;
          lVar9 = 0;
          *puVar7 = pvVar11;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
        puVar5 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
        *puVar5 = &PTR_FUN_00167ea0;
        *(undefined4 *)((long)puVar7 + lVar9 + 0x18) = 0x1010104;
        *(long *)((long)puVar7 + lVar9 + 0x20) = lVar6;
      }
      goto code_r0x00157f30;
    }
  }
LAB_00157f28:
  puVar5 = (undefined8 *)0x0;
code_r0x00157f30:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}

