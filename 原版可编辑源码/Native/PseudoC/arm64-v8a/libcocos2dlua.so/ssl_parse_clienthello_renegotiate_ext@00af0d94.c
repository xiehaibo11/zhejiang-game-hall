
undefined8 ssl_parse_clienthello_renegotiate_ext(long param_1,long *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  byte *__s1;
  ulong __n;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
                    /* try { // try from 00af0dac to 00bf0db3 has its CatchHandler @ 00af0df8 */
  if (param_2[1] != 0) {
                    /* try { // try from 00af0db4 to 00bf0e3f has its CatchHandler @ 00af0c8c */
    uVar4 = param_2[1] - 1;
    __s1 = (byte *)*param_2 + 1;
    bVar1 = *(byte *)*param_2;
    __n = (ulong)bVar1;
    *param_2 = (long)__s1;
    param_2[1] = uVar4;
    if (__n <= uVar4) {
      *param_2 = (long)(__s1 + __n);
      param_2[1] = uVar4 - __n;
      lVar5 = *(long *)(param_1 + 0x90);
                    /* catch() { ... } // from try @ 00af0dac with catch @ 00af0df8 */
      if (bVar1 == *(byte *)(lVar5 + 0x380)) {
        iVar2 = memcmp(__s1,(void *)(lVar5 + 0x340),__n);
        if (iVar2 == 0) {
          *(undefined4 *)(lVar5 + 0x3c4) = 1;
          return 1;
        }
                    /* catch() { ... } // from try @ 00af0ce8 with catch @ 00af0e10 */
                    /* catch() { ... } // from try @ 00af0d3c with catch @ 00af0e24 */
        iVar2 = 0x42;
      }
      else {
        iVar2 = 0x3a;
      }
      ERR_put_error(0x14,300,0x151,"ssl/t1_reneg.c",iVar2);
      uVar3 = 0x28;
      goto LAB_00af0e4c;
    }
  }
  ERR_put_error(0x14,300,0x150,"ssl/t1_reneg.c",0x32);
  uVar3 = 0x2f;
LAB_00af0e4c:
  *param_3 = uVar3;
  return 0;
}

