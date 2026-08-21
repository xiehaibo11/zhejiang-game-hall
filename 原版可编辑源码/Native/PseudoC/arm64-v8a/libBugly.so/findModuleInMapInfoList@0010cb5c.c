
long * findModuleInMapInfoList(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if ((param_1 != (long *)0x0) && (plVar1 = param_1, param_2 != 0)) {
    while ((param_2 < (ulong)plVar1[1] || ((ulong)plVar1[2] <= param_2))) {
      plVar1 = (long *)*plVar1;
      if (plVar1 == (long *)0x0) {
        return (long *)0x0;
      }
    }
    do {
      if ((((*(char *)((long)param_1 + 0x42) != '\0') && (param_1[4] != 0)) &&
          (param_1[4] == plVar1[4])) && ((ulong)param_1[1] < (ulong)plVar1[1])) {
        log2Console(3,"CrashReport-Native","Fix: %p");
        plVar1 = param_1;
      }
      param_1 = (long *)*param_1;
    } while (param_1 != (long *)0x0);
    return plVar1;
  }
  return (long *)0x0;
}

