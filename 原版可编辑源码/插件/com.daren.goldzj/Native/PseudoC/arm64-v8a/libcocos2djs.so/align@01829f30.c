
/* std::__ndk1::align(unsigned long, unsigned long, void*&, unsigned long&) */

void * std::__ndk1::align(ulong param_1,ulong param_2,void **param_3,ulong *param_4)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  
  uVar2 = *param_4;
  if (uVar2 < param_2) {
    return (void *)0x0;
  }
  pvVar3 = (void *)((long)*param_3 + (param_1 - 1) & -param_1);
  uVar4 = (long)pvVar3 - (long)*param_3;
  pvVar1 = (void *)0x0;
  if (uVar4 <= uVar2 - param_2) {
    *param_3 = pvVar3;
    *param_4 = uVar2 - uVar4;
    pvVar1 = pvVar3;
  }
  return pvVar1;
}

