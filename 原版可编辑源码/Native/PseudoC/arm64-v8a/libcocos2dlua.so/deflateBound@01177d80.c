
long deflateBound(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  
  lVar1 = param_2 + (param_2 + 7 >> 3) + (param_2 + 0x3f >> 6);
  if ((param_1 == 0) || (lVar4 = *(long *)(param_1 + 0x38), lVar4 == 0)) {
    return lVar1 + 0xb;
  }
  iVar2 = *(int *)(lVar4 + 0x2c);
  if (iVar2 == 0) {
    lVar6 = 0;
  }
  else if (iVar2 == 2) {
    lVar5 = *(long *)(lVar4 + 0x30);
    if (lVar5 == 0) {
      lVar6 = 0x12;
    }
    else {
      if (*(long *)(lVar5 + 0x18) == 0) {
        lVar6 = 0x12;
        pcVar7 = *(char **)(lVar5 + 0x28);
      }
      else {
        lVar6 = (ulong)(*(int *)(lVar5 + 0x20) + 2) + 0x12;
        pcVar7 = *(char **)(lVar5 + 0x28);
      }
      if (pcVar7 != (char *)0x0) {
        do {
          cVar3 = *pcVar7;
          lVar6 = lVar6 + 1;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
      }
      pcVar7 = *(char **)(lVar5 + 0x38);
      if (*(char **)(lVar5 + 0x38) != (char *)0x0) {
        do {
          cVar3 = *pcVar7;
          lVar6 = lVar6 + 1;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
      }
      if (*(int *)(lVar5 + 0x44) != 0) {
        lVar6 = lVar6 + 2;
      }
    }
  }
  else if (iVar2 == 1) {
    lVar6 = 10;
    if (*(int *)(lVar4 + 0x9c) == 0) {
      lVar6 = 6;
    }
  }
  else {
    lVar6 = 6;
  }
  if ((*(int *)(lVar4 + 0x48) == 0xf) && (*(int *)(lVar4 + 0x78) == 0xf)) {
    return param_2 + 7 + (param_2 >> 0xc) + (param_2 >> 0xe) + (param_2 >> 0x19) + lVar6;
  }
  return lVar1 + 5 + lVar6;
}

