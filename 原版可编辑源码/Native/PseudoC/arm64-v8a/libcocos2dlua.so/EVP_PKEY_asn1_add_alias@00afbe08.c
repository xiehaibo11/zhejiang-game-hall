
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
  if (((DAT_01782dc8 != 0) || (DAT_01782dc8 = OPENSSL_sk_new(&LAB_00afbdf0), DAT_01782dc8 != 0)) &&
     (iVar1 = OPENSSL_sk_push(DAT_01782dc8,ptr), iVar1 != 0)) {
    OPENSSL_sk_sort(DAT_01782dc8);
    return 1;
  }
  if ((*(byte *)(ptr + 2) >> 1 & 1) != 0) {
    CRYPTO_free(*(void **)(ptr + 4));
    CRYPTO_free(*(void **)(ptr + 6));
    CRYPTO_free(ptr);
  }
  return 0;
}

