
undefined8 FUN_00a4257c(long param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *__s;
  
  if (*(char *)(param_1 + 0x3c0) == '\0') {
    return 0x43;
  }
  memset((void *)(param_1 + 0x618),0,0x50);
  *(undefined4 *)(param_1 + 0x618) = 1;
  lVar1 = (*(code *)PTR_malloc_01d1b740)(0x9000);
  *(long *)(param_1 + 0x640) = lVar1;
  if (lVar1 == 0) {
LAB_00a42664:
    uVar3 = 0x1b;
  }
  else {
    FUN_00a11300(param_1,0);
    __s = *(char **)(param_1 + 0x218);
    pcVar2 = strchr(__s,0x2f);
    if ((pcVar2 == (char *)0x0) && (pcVar2 = strchr(__s,0x5c), pcVar2 == (char *)0x0)) {
      *(char **)(param_1 + 0x620) = __s;
      lVar1 = (*(code *)PTR_strdup_01d1b758)(*(undefined8 *)(param_1 + 0xc0));
      *(long *)(param_1 + 0x628) = lVar1;
      if (lVar1 == 0) goto LAB_00a42664;
    }
    else {
      *(char **)(param_1 + 0x620) = pcVar2 + 1;
      lVar1 = (*(code *)PTR_strdup_01d1b758)(__s);
      *(long *)(param_1 + 0x628) = lVar1;
      if (lVar1 == 0) goto LAB_00a42664;
      pcVar2[lVar1 - *(long *)(param_1 + 0x218)] = '\0';
    }
    uVar3 = 0;
  }
  return uVar3;
}

