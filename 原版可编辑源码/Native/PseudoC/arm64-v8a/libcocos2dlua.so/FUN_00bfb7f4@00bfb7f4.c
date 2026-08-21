
void * FUN_00bfb7f4(void *param_1,byte *param_2,uint param_3,uint param_4)

{
  void *__s1;
  byte bVar1;
  int iVar2;
  void *pvVar3;
  
  if (param_4 <= param_3) {
    if (param_4 == 0) {
      return param_1;
    }
    param_3 = param_3 - (param_4 - 1);
    bVar1 = *param_2;
    if (param_3 != 0) {
      do {
        pvVar3 = memchr(param_1,(uint)bVar1,(ulong)param_3);
        __s1 = (void *)((long)pvVar3 + 1);
        if (pvVar3 == (void *)0x0) {
          return (void *)0x0;
        }
        iVar2 = memcmp(__s1,param_2 + 1,(ulong)(param_4 - 1));
        param_3 = param_3 - ((int)__s1 - (int)param_1);
        if (iVar2 == 0) {
          return pvVar3;
        }
        param_1 = __s1;
      } while (param_3 != 0);
    }
  }
  return (void *)0x0;
}

