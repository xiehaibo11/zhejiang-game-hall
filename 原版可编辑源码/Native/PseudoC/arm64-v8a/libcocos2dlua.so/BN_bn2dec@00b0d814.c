
char * BN_bn2dec(BIGNUM *a)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong *ptr;
  char *ptr_00;
  BIGNUM *a_00;
  ulong uVar4;
  char *pcVar5;
  ulong *puVar6;
  
  iVar2 = BN_num_bits(a);
                    /* try { // try from 00b0d864 to 00c0d8e7 has its CatchHandler @ 00b0da30 */
  iVar1 = (iVar2 * 3) / 10 + (iVar2 * 3) / 1000;
  iVar2 = (iVar1 + 2) / 0x13 + 1;
  ptr = CRYPTO_malloc(iVar2 * 8,"crypto/bn/bn_print.c",0x49);
  iVar1 = iVar1 + 5;
  ptr_00 = CRYPTO_malloc(iVar1,"crypto/bn/bn_print.c",0x4a);
  if ((ptr == (ulong *)0x0) || (ptr_00 == (char *)0x0)) {
    ERR_put_error(3,0x68,0x41,"crypto/bn/bn_print.c",0x4c);
  }
  else {
    a_00 = BN_dup(a);
    if (a_00 != (BIGNUM *)0x0) {
      iVar3 = BN_is_zero(a_00);
      if (iVar3 == 0) {
        iVar3 = BN_is_negative(a_00);
        pcVar5 = ptr_00;
        if (iVar3 != 0) {
          pcVar5 = ptr_00 + 1;
          *ptr_00 = '-';
        }
        iVar3 = BN_is_zero(a_00);
        puVar6 = ptr;
        if (iVar3 == 0) {
          do {
                    /* catch() { ... } // from try @ 00b0d74c with catch @ 00b0da2c */
                    /* catch() { ... } // from try @ 00b0d864 with catch @ 00b0da30
                       catch() { ... } // from try @ 00b0d954 with catch @ 00b0da30 */
                    /* catch() { ... } // from try @ 00b0d7b4 with catch @ 00b0da34 */
            if ((long)iVar2 <= (long)puVar6 - (long)ptr >> 3) {
LAB_00b0da6c:
              CRYPTO_free(ptr);
              goto LAB_00b0d93c;
            }
            uVar4 = BN_div_word(a_00,10000000000000000000);
            *puVar6 = uVar4;
            if (uVar4 == 0xffffffffffffffff) goto LAB_00b0da6c;
            puVar6 = puVar6 + 1;
                    /* catch() { ... } // from try @ 00b0db3c with catch @ 00b0da60 */
            iVar3 = BN_is_zero(a_00);
          } while (iVar3 == 0);
        }
        puVar6 = puVar6 + -1;
        BIO_snprintf(pcVar5,(size_t)(ptr_00 + ((long)iVar1 - (long)pcVar5)),"%lu",*puVar6);
        pcVar5 = pcVar5 + -1;
        do {
          pcVar5 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        while (puVar6 != ptr) {
          puVar6 = puVar6 + -1;
          BIO_snprintf(pcVar5,(size_t)(ptr_00 + ((long)iVar1 - (long)pcVar5)),"%019lu",*puVar6);
          pcVar5 = pcVar5 + -1;
          do {
            pcVar5 = pcVar5 + 1;
          } while (*pcVar5 != '\0');
        }
      }
      else {
                    /* try { // try from 00b0d8e8 to 00c0d953 has its CatchHandler @ 00b0d6fc */
        ptr_00[0] = '0';
        ptr_00[1] = '\0';
      }
      CRYPTO_free(ptr);
      BN_free(a_00);
      return ptr_00;
    }
  }
  CRYPTO_free(ptr);
  a_00 = (BIGNUM *)0x0;
LAB_00b0d93c:
  BN_free(a_00);
  CRYPTO_free(ptr_00);
  return (char *)0x0;
                    /* try { // try from 00b0d954 to 00c0d9bb has its CatchHandler @ 00b0da30 */
}

