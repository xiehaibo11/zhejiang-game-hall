
/* se::NativePtrToObjectMap::find(void*) */

long se::NativePtrToObjectMap::find(void *param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = __nativePtrToObjectMap[1];
  if (uVar3 == 0) {
    return 0;
  }
  uVar5 = (((ulong)param_1 & 0x1fffffff) * 8 + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (uVar5 ^ (ulong)param_1 >> 0x20 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
  uVar5 = uVar3 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  if ((uVar5 & uVar3) == 0) {
    uVar6 = uVar5 & uVar4;
  }
  else {
    uVar6 = uVar4;
    if (uVar3 <= uVar4) {
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar4 / uVar3;
      }
      uVar6 = uVar4 - uVar6 * uVar3;
    }
  }
  plVar2 = *(long **)(*__nativePtrToObjectMap + uVar6 * 8);
  if (plVar2 != (long *)0x0) {
    do {
      while( true ) {
        while( true ) {
          plVar2 = (long *)*plVar2;
          if (plVar2 == (long *)0x0) {
            return 0;
          }
          uVar7 = plVar2[1];
          if (uVar7 != uVar4) break;
          if ((void *)plVar2[2] == param_1) {
            return (long)plVar2;
          }
        }
        if ((uVar5 & uVar3) != 0) break;
        if ((uVar7 & uVar5) != uVar6) {
          return 0;
        }
      }
      if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
    return 0;
  }
  return 0;
}

