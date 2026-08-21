
/* xxtea_encrypt(unsigned char*, unsigned int, unsigned char*, unsigned int, unsigned int*) */

undefined8 xxtea_encrypt(uchar *param_1,uint param_2,uchar *param_3,uint param_4,uint *param_5)

{
  void *__ptr;
  undefined8 uVar1;
  
  *param_5 = 0;
  if (param_4 < 0x10) {
    __ptr = malloc(0x10);
    __memcpy_chk(__ptr,param_3,(ulong)param_4,0x10);
    memset((void *)((long)__ptr + (ulong)param_4),0,(ulong)(0x10 - param_4));
    uVar1 = FUN_008cd750(param_1,param_2,__ptr,param_5);
    free(__ptr);
    return uVar1;
  }
  uVar1 = FUN_008cd750(param_1,param_2,param_3,param_5);
  return uVar1;
}

