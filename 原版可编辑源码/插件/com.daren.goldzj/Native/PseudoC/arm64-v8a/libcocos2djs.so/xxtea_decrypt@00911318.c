
undefined8
xxtea_decrypt(undefined8 param_1,undefined4 param_2,void *param_3,uint param_4,undefined4 *param_5)

{
  void *__dest;
  undefined8 uVar1;
  
  *param_5 = 0;
  if (param_4 < 0x10) {
    __dest = malloc(0x10);
    memcpy(__dest,param_3,(ulong)param_4);
    memset((void *)((long)__dest + (ulong)param_4),0,(ulong)(0x10 - param_4));
    uVar1 = FUN_009113e4(param_1,param_2,__dest,param_5);
    free(__dest);
    return uVar1;
  }
  uVar1 = FUN_009113e4(param_1,param_2,param_3,param_5);
  return uVar1;
}

