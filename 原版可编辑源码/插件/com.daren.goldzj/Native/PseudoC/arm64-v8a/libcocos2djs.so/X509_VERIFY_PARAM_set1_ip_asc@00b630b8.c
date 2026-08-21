
undefined4 X509_VERIFY_PARAM_set1_ip_asc(long param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  uchar auStack_40 [16];
  
  iVar1 = a2i_ipadd(auStack_40,param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar4 = (ulong)iVar1;
    uVar2 = 0;
                    /* try { // try from 00b630f0 to 00c63103 has its CatchHandler @ 00b634a0 */
    if (((uVar4 < 0x11) && ((1L << (uVar4 & 0x3f) & 0x10011U) != 0)) &&
       (lVar3 = CRYPTO_memdup(auStack_40,uVar4,"crypto/x509/x509_vpm.c",0x10a), uVar2 = 0,
       lVar3 != 0)) {
      CRYPTO_free(*(void **)(param_1 + 0x60));
      uVar2 = 1;
      *(long *)(param_1 + 0x60) = lVar3;
      *(ulong *)(param_1 + 0x68) = uVar4;
    }
  }
                    /* try { // try from 00b63148 to 00c6314b has its CatchHandler @ 00b6349c */
  return uVar2;
}

