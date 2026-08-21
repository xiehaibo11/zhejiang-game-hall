
undefined8 FUN_00a58f64(long param_1)

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
  lVar1 = (*(code *)PTR_malloc_017699f8)(0x9000);
  *(long *)(param_1 + 0x640) = lVar1;
  if (lVar1 == 0) {
LAB_00a5904c:
    uVar3 = 0x1b;
  }
  else {
    FUN_00a26ce8(param_1,0);
    __s = *(char **)(param_1 + 0x218);
    pcVar2 = strchr(__s,0x2f);
    if ((pcVar2 == (char *)0x0) && (pcVar2 = strchr(__s,0x5c), pcVar2 == (char *)0x0)) {
      *(char **)(param_1 + 0x620) = __s;
      lVar1 = (*(code *)PTR_strdup_01769a10)(*(undefined8 *)(param_1 + 0xc0));
      *(long *)(param_1 + 0x628) = lVar1;
      if (lVar1 == 0) goto LAB_00a5904c;
    }
    else {
      *(char **)(param_1 + 0x620) = pcVar2 + 1;
      lVar1 = (*(code *)PTR_strdup_01769a10)(__s);
      *(long *)(param_1 + 0x628) = lVar1;
      if (lVar1 == 0) goto LAB_00a5904c;
                    /* try { // try from 00a59018 to 00b5907b has its CatchHandler @ 00a59018
                       catch() { ... } // from try @ 00a59018 with catch @ 00a59018
                       catch() { ... } // from try @ 00a5908c with catch @ 00a59018
                       catch() { ... } // from try @ 00a591a8 with catch @ 00a59018
                       catch() { ... } // from try @ 00a591fc with catch @ 00a59018
                       catch() { ... } // from try @ 00a59230 with catch @ 00a59018 */
      pcVar2[lVar1 - *(long *)(param_1 + 0x218)] = '\0';
    }
    uVar3 = 0;
  }
  return uVar3;
}

