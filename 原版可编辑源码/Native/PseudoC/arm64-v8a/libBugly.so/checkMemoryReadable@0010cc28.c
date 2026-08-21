
undefined1 checkMemoryReadable(long *param_1,ulong param_2)

{
  if (param_1 == (long *)0x0) {
    return 0;
  }
  while ((param_2 < (ulong)param_1[1] || ((ulong)param_1[2] <= param_2))) {
    param_1 = (long *)*param_1;
    if (param_1 == (long *)0x0) {
      log2Console(3,"CrashReport-Native","Can not read addr: %p");
      return 0;
    }
  }
  return (char)param_1[8];
}

