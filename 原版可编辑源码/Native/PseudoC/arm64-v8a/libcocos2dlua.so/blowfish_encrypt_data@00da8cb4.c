
void * blowfish_encrypt_data(void *param_1,uint param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  void *__s;
  void *pvVar2;
  ulong uVar3;
  
  __s = param_1;
  if ((param_2 & 7) != 0) {
    uVar1 = param_2 + 8 & 0xfffffff8;
    __s = malloc((ulong)uVar1);
    memset(__s,0,(ulong)uVar1);
    memcpy(__s,param_1,(ulong)param_2);
    param_2 = uVar1;
  }
  pvVar2 = malloc((ulong)param_2);
  if (param_2 != 0) {
    uVar3 = 0;
    do {
      blowfish_encrypt((long)__s + uVar3,(long)pvVar2 + uVar3,param_4);
      uVar3 = uVar3 + 8;
    } while (uVar3 < param_2);
  }
  if (__s != param_1) {
    free(__s);
  }
  *param_3 = param_2;
  return pvVar2;
}

