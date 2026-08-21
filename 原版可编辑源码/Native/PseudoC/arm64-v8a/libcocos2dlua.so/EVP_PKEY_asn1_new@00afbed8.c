
EVP_PKEY_ASN1_METHOD * EVP_PKEY_asn1_new(int id,int flags,char *pem_str,char *info)

{
  EVP_PKEY_ASN1_METHOD *ptr;
  char *pcVar1;
  
  ptr = (EVP_PKEY_ASN1_METHOD *)CRYPTO_zalloc(0xd8,"crypto/asn1/ameth_lib.c",0xe8);
  if (ptr == (EVP_PKEY_ASN1_METHOD *)0x0) {
    return (EVP_PKEY_ASN1_METHOD *)0x0;
  }
  *(int *)ptr = id;
  *(int *)(ptr + 4) = id;
  *(long *)(ptr + 8) = (long)(int)(flags | 2);
  if (info != (char *)0x0) {
    pcVar1 = CRYPTO_strdup(info,"crypto/asn1/ameth_lib.c",0xf2);
    *(char **)(ptr + 0x18) = pcVar1;
    if (pcVar1 == (char *)0x0) goto LAB_00afbf68;
  }
  if (pem_str == (char *)0x0) {
    return ptr;
  }
  pcVar1 = CRYPTO_strdup(pem_str,"crypto/asn1/ameth_lib.c",0xf8);
  *(char **)(ptr + 0x10) = pcVar1;
  if (pcVar1 != (char *)0x0) {
    return ptr;
  }
LAB_00afbf68:
  if (((byte)ptr[8] >> 1 & 1) != 0) {
    CRYPTO_free(*(void **)(ptr + 0x10));
    CRYPTO_free(*(void **)(ptr + 0x18));
    CRYPTO_free(ptr);
  }
  return (EVP_PKEY_ASN1_METHOD *)0x0;
}

