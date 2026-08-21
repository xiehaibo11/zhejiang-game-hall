
/* un_xxtea_encrypt(unsigned char*, unsigned int, unsigned char*, unsigned int, unsigned int*) */

undefined8 un_xxtea_encrypt(uchar *param_1,uint param_2,uchar *param_3,uint param_4,uint *param_5)

{
  void *__dest;
  undefined8 uVar1;
  
  *param_5 = 0;
  if (param_4 < 0x10) {
    __dest = malloc(0x10);
    memcpy(__dest,param_3,(ulong)param_4);
    memset((void *)((long)__dest + (ulong)param_4),0,(ulong)(0x10 - param_4));
    uVar1 = FUN_00a0cab8(param_1,param_2,__dest,param_5);
    free(__dest);
    return uVar1;
  }
  uVar1 = FUN_00a0cab8(param_1,param_2,param_3,param_5);
  return uVar1;
}

