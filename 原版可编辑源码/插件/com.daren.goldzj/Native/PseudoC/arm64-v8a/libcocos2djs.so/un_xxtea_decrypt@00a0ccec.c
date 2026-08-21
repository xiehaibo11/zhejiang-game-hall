
/* un_xxtea_decrypt(unsigned char*, unsigned int, unsigned char*, unsigned int, unsigned int*) */

undefined8 un_xxtea_decrypt(uchar *param_1,uint param_2,uchar *param_3,uint param_4,uint *param_5)

{
  void *__dest;
  undefined8 uVar1;
  
  *param_5 = 0;
  if (param_4 < 0x10) {
    __dest = malloc(0x10);
    memcpy(__dest,param_3,(ulong)param_4);
                    /* try { // try from 00a0cd4c to 00b0cd7f has its CatchHandler @ 00a0cc54 */
    memset((void *)((long)__dest + (ulong)param_4),0,(ulong)(0x10 - param_4));
                    /* catch() { ... } // from try @ 00a0ccd8 with catch @ 00a0cd64 */
    uVar1 = FUN_00a0cdb8(param_1,param_2,__dest,param_5);
    free(__dest);
    return uVar1;
  }
  uVar1 = FUN_00a0cdb8(param_1,param_2,param_3,param_5);
  return uVar1;
}

