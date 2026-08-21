
undefined8 FUN_00a1763c(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  size_t sVar3;
  char *__s;
  undefined8 *puVar4;
  
  if (((param_2 != 0) && (*(long *)(param_1 + 0x60) != 0)) &&
     (plVar2 = (long *)FUN_00a15528(*(long *)(param_1 + 0x60)), plVar2 != (long *)0x0)) {
    for (puVar4 = (undefined8 *)*plVar2; puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)puVar4[2]) {
      __s = (char *)*puVar4;
      sVar3 = strlen(__s);
      iVar1 = FUN_00a33838(__s,param_2,sVar3);
      if (iVar1 != 0) {
        FUN_00a22d58(param_1,"Server %s is blacklisted\n",param_2);
        return 1;
      }
    }
  }
  return 0;
}

