
undefined8 FUN_00a174b4(long *param_1,long *param_2)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *__s;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  
  lVar7 = *param_2;
  if (param_1 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_00a33f88(FUN_00a17600);
    if (lVar3 == 0) {
      return 3;
    }
    lVar4 = *param_1;
    while (lVar4 != 0) {
      param_1 = param_1 + 1;
      __s = (char *)(*(code *)PTR_strdup_01d1b758)();
      if (__s == (char *)0x0) goto LAB_00a175d8;
      pcVar5 = (char *)(*(code *)PTR_malloc_01d1b740)(0x10);
      if (pcVar5 == (char *)0x0) {
LAB_00a175d4:
        (*(code *)PTR_free_01d1b748)(__s);
LAB_00a175d8:
        FUN_00a34128(lVar3,0);
        return 3;
      }
      pcVar6 = strchr(__s,0x3a);
      if (pcVar6 == (char *)0x0) {
        uVar1 = 0x50;
      }
      else {
        *pcVar6 = '\0';
        lVar4 = strtol(pcVar6 + 1,(char **)0x0,10);
        uVar1 = (undefined2)lVar4;
      }
      *(undefined2 *)(pcVar5 + 8) = uVar1;
      *(char **)pcVar5 = __s;
      iVar2 = FUN_00a33fc4(lVar3,*(undefined8 *)(lVar3 + 8),pcVar5);
      if (iVar2 == 0) {
        (*(code *)PTR_free_01d1b748)(*(undefined8 *)pcVar5);
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5[4] = '\0';
        pcVar5[5] = '\0';
        pcVar5[6] = '\0';
        pcVar5[7] = '\0';
        __s = pcVar5;
        goto LAB_00a175d4;
      }
      lVar4 = *param_1;
    }
  }
  if (lVar7 != 0) {
    FUN_00a34128(lVar7,0);
  }
  *param_2 = lVar3;
  return 0;
}

