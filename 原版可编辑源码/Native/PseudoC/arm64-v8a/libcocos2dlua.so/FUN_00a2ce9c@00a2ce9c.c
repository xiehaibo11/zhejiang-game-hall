
undefined8 FUN_00a2ce9c(long *param_1,long *param_2)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *__s;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  
                    /* try { // try from 00a2cea0 to 00b2ceeb has its CatchHandler @ 00a2cea0
                       catch() { ... } // from try @ 00a2cea0 with catch @ 00a2cea0
                       catch() { ... } // from try @ 00a2cef0 with catch @ 00a2cea0 */
  lVar7 = *param_2;
  if (param_1 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_00a4a970(FUN_00a2cfe8);
    if (lVar3 == 0) {
      return 3;
    }
    lVar4 = *param_1;
    while (lVar4 != 0) {
                    /* try { // try from 00a2cef0 to 00b2cf37 has its CatchHandler @ 00a2cea0 */
      param_1 = param_1 + 1;
      __s = (char *)(*(code *)PTR_strdup_01769a10)();
      if (__s == (char *)0x0) goto LAB_00a2cfc0;
      pcVar5 = (char *)(*(code *)PTR_malloc_017699f8)(0x10);
      if (pcVar5 == (char *)0x0) {
LAB_00a2cfbc:
        (*(code *)PTR_free_01769a00)(__s);
LAB_00a2cfc0:
        FUN_00a4ab10(lVar3,0);
        return 3;
      }
      pcVar6 = strchr(__s,0x3a);
                    /* catch() { ... } // from try @ 00a2ceec with catch @ 00a2cf24 */
      if (pcVar6 == (char *)0x0) {
        uVar1 = 0x50;
      }
      else {
        *pcVar6 = '\0';
        lVar4 = strtol(pcVar6 + 1,(char **)0x0,10);
        uVar1 = (undefined2)lVar4;
                    /* try { // try from 00a2cf38 to 00b2cfeb has its CatchHandler @ 00a2cf38
                       catch() { ... } // from try @ 00a2cf38 with catch @ 00a2cf38
                       catch() { ... } // from try @ 00a2d06c with catch @ 00a2cf38 */
      }
      *(undefined2 *)(pcVar5 + 8) = uVar1;
      *(char **)pcVar5 = __s;
      iVar2 = FUN_00a4a9ac(lVar3,*(undefined8 *)(lVar3 + 8),pcVar5);
      if (iVar2 == 0) {
        (*(code *)PTR_free_01769a00)(*(undefined8 *)pcVar5);
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5[4] = '\0';
        pcVar5[5] = '\0';
        pcVar5[6] = '\0';
        pcVar5[7] = '\0';
        __s = pcVar5;
        goto LAB_00a2cfbc;
      }
      lVar4 = *param_1;
    }
  }
  if (lVar7 != 0) {
    FUN_00a4ab10(lVar7,0);
  }
  *param_2 = lVar3;
  return 0;
}

