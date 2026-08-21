
DH * ssl_get_auto_dh(long param_1)

{
  int iVar1;
  DH *pDVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  long lVar3;
  
  if (*(int *)(*(long *)(param_1 + 0x148) + 0x18) != 2) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x228);
    if ((*(byte *)(lVar3 + 0x18) & 0x14) == 0) {
      lVar3 = ssl_get_server_send_pkey();
      iVar1 = EVP_PKEY_security_bits(*(undefined8 *)(lVar3 + 8));
      if (iVar1 < 0x80) {
        if (0x6f < iVar1) {
                    /* catch() { ... } // from try @ 00af03cc with catch @ 00af03e8 */
          pDVar2 = (DH *)DH_get_2048_224();
          return pDVar2;
        }
        goto LAB_00af03f8;
      }
    }
    else {
      if (*(int *)(lVar3 + 0x3c) != 0x100) goto LAB_00af03f8;
      iVar1 = 0x80;
    }
    pDVar2 = DH_new();
    if (pDVar2 != (DH *)0x0) {
      a = BN_new();
                    /* try { // try from 00af0398 to 00bf03cb has its CatchHandler @ 00af0398
                       catch() { ... } // from try @ 00af0398 with catch @ 00af0398
                       catch() { ... } // from try @ 00af03d0 with catch @ 00af0398 */
      if (a != (BIGNUM *)0x0) {
        BN_set_word(a,2);
      }
      if (iVar1 < 0xc0) {
        a_00 = (BIGNUM *)BN_get_rfc3526_prime_3072(0);
      }
      else {
        a_00 = (BIGNUM *)BN_get_rfc3526_prime_8192(0);
      }
                    /* try { // try from 00af03cc to 00bf03cf has its CatchHandler @ 00af03e8 */
                    /* try { // try from 00af03d0 to 00bf03fb has its CatchHandler @ 00af0398 */
      if (((a == (BIGNUM *)0x0) || (a_00 == (BIGNUM *)0x0)) ||
         (iVar1 = DH_set0_pqg(pDVar2,a_00,0,a), iVar1 == 0)) {
        DH_free(pDVar2);
        BN_free(a_00);
        BN_free(a);
        pDVar2 = (DH *)0x0;
      }
    }
    return pDVar2;
  }
LAB_00af03f8:
  pDVar2 = (DH *)DH_get_1024_160();
  return pDVar2;
}

