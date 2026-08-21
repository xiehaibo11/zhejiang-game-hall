
undefined8 FUN_00a2d024(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  size_t sVar3;
  char *__s;
  undefined8 *puVar4;
  
                    /* try { // try from 00a2d038 to 00b2d06b has its CatchHandler @ 00a2d0bc */
  if (((param_2 != 0) && (*(long *)(param_1 + 0x60) != 0)) &&
     (plVar2 = (long *)FUN_00a2af10(*(long *)(param_1 + 0x60)), plVar2 != (long *)0x0)) {
    for (puVar4 = (undefined8 *)*plVar2; puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)puVar4[2]) {
      __s = (char *)*puVar4;
      sVar3 = strlen(__s);
                    /* try { // try from 00a2d06c to 00b2d107 has its CatchHandler @ 00a2cf38 */
      iVar1 = FUN_00a4a220(__s,param_2,sVar3);
      if (iVar1 != 0) {
        FUN_00a38740(param_1,"Server %s is blacklisted\n",param_2);
        return 1;
      }
    }
  }
  return 0;
}

