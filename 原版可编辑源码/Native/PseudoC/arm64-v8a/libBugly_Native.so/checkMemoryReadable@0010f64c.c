
bool checkMemoryReadable(long *param_1,ulong param_2)

{
  if (param_1 != (long *)0x0) {
    do {
      if (((ulong)param_1[1] <= param_2) && (param_2 < (ulong)param_1[2])) {
        return (char)param_1[8] != '\0';
      }
      param_1 = (long *)*param_1;
    } while (param_1 != (long *)0x0);
    log2Console(3,"eup","Can not read addr: %p");
  }
  return false;
}

