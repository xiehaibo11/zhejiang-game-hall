
int EVP_PKEY_asn1_add_alias(int to,int from)

{
  int iVar1;
  int *ptr;
  
  ptr = (int *)CRYPTO_zalloc(0xd8,"crypto/asn1/ameth_lib.c",0xe8);
  if (ptr == (int *)0x0) {
    return 0;
  }
  *ptr = from;
  ptr[1] = to;
  ptr[2] = 3;
  ptr[3] = 0;
                    /* try { // try from 00aeb9d0 to 00beb9d7 has its CatchHandler @ 00aeba3c */
                    /* try { // try from 00aeb9d8 to 00bebaeb has its CatchHandler @ 00aeb8a4 */
  if (((DAT_01d39048 != 0) || (DAT_01d39048 = OPENSSL_sk_new(&DAT_00aeb970), DAT_01d39048 != 0)) &&
     (iVar1 = OPENSSL_sk_push(DAT_01d39048,ptr), iVar1 != 0)) {
    OPENSSL_sk_sort(DAT_01d39048);
    return 1;
  }
  if ((*(byte *)(ptr + 2) >> 1 & 1) != 0) {
    CRYPTO_free(*(void **)(ptr + 4));
    CRYPTO_free(*(void **)(ptr + 6));
                    /* catch() { ... } // from try @ 00aeb9d0 with catch @ 00aeba3c */
    CRYPTO_free(ptr);
  }
                    /* catch() { ... } // from try @ 00aeb96c with catch @ 00aeba48 */
  return 0;
}

