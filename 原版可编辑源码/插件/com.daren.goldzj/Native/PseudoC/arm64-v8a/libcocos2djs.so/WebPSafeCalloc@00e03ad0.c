
void * WebPSafeCalloc(ulong param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = 0x10000000000 / param_1;
    }
    if (uVar1 < param_2) {
      return (void *)0x0;
    }
  }
  pvVar2 = calloc(param_1,param_2);
  return pvVar2;
}

