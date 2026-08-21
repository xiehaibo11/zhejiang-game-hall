
ulong * findModuleInMapInfoList(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = (ulong *)0x0;
  puVar3 = param_1;
  puVar1 = (ulong *)param_2;
  if (param_1 != (ulong *)0x0) {
    while (puVar1 != (ulong *)0x0) {
      if ((puVar3[1] <= param_2) && (param_2 < puVar3[2])) {
        while( true ) {
          if ((*(char *)((long)param_1 + 0x42) != '\0') &&
             (((param_1[4] != 0 && (param_1[4] == puVar3[4])) && (param_1[1] < puVar3[1])))) {
            log2Console(3,"eup","Fix: %p");
            puVar3 = param_1;
          }
          param_1 = (ulong *)*param_1;
          if (param_1 == (ulong *)0x0) break;
          if (puVar3 == (ulong *)0x0) {
            return (ulong *)0x0;
          }
        }
        return puVar3;
      }
      puVar2 = (ulong *)*puVar3;
      puVar3 = puVar2;
      puVar1 = puVar2;
    }
  }
  return puVar2;
}

