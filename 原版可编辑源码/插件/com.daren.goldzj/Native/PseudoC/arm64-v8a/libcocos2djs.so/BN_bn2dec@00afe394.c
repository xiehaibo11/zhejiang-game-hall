
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
  iVar1 = (iVar2 * 3) / 10 + (iVar2 * 3) / 1000;
                    /* try { // try from 00afe3fc to 00bfe407 has its CatchHandler @ 00afe5e4 */
  iVar2 = (iVar1 + 2) / 0x13 + 1;
  ptr = CRYPTO_malloc(iVar2 * 8,"crypto/bn/bn_print.c",0x49);
  iVar1 = iVar1 + 5;
  ptr_00 = CRYPTO_malloc(iVar1,"crypto/bn/bn_print.c",0x4a);
  if ((ptr == (ulong *)0x0) || (ptr_00 == (char *)0x0)) {
                    /* try { // try from 00afe47c to 00bfe4bb has its CatchHandler @ 00afe5ec */
    ERR_put_error(3,0x68,0x41,"crypto/bn/bn_print.c",0x4c);
  }
  else {
    a_00 = BN_dup(a);
    if (a_00 != (BIGNUM *)0x0) {
      iVar3 = BN_is_zero(a_00);
      if (iVar3 == 0) {
        iVar3 = BN_is_negative(a_00);
                    /* try { // try from 00afe4e8 to 00bfe53f has its CatchHandler @ 00afe5f4 */
        pcVar5 = ptr_00;
        if (iVar3 != 0) {
          pcVar5 = ptr_00 + 1;
          *ptr_00 = '-';
        }
        iVar3 = BN_is_zero(a_00);
        puVar6 = ptr;
        if (iVar3 == 0) {
          do {
            if ((long)iVar2 <= (long)puVar6 - (long)ptr >> 3) {
LAB_00afe5ec:
                    /* catch() { ... } // from try @ 00afe47c with catch @ 00afe5ec
                       catch() { ... } // from try @ 00afe550 with catch @ 00afe5ec */
                    /* catch() { ... } // from try @ 00afe4e8 with catch @ 00afe5f4 */
              CRYPTO_free(ptr);
              goto LAB_00afe4bc;
            }
            uVar4 = BN_div_word(a_00,10000000000000000000);
            *puVar6 = uVar4;
            if (uVar4 == 0xffffffffffffffff) goto LAB_00afe5ec;
                    /* catch() { ... } // from try @ 00afe4c0 with catch @ 00afe5dc */
            puVar6 = puVar6 + 1;
            iVar3 = BN_is_zero(a_00);
                    /* catch() { ... } // from try @ 00afe3fc with catch @ 00afe5e4 */
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
                    /* try { // try from 00afe550 to 00bfe55b has its CatchHandler @ 00afe5ec */
          BIO_snprintf(pcVar5,(size_t)(ptr_00 + ((long)iVar1 - (long)pcVar5)),"%019lu",*puVar6);
          pcVar5 = pcVar5 + -1;
          do {
            pcVar5 = pcVar5 + 1;
                    /* try { // try from 00afe55c to 00bfe65b has its CatchHandler @ 00afe388 */
          } while (*pcVar5 != '\0');
        }
      }
      else {
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
LAB_00afe4bc:
  BN_free(a_00);
                    /* try { // try from 00afe4c0 to 00bfe4cb has its CatchHandler @ 00afe5dc */
  CRYPTO_free(ptr_00);
  return (char *)0x0;
}

