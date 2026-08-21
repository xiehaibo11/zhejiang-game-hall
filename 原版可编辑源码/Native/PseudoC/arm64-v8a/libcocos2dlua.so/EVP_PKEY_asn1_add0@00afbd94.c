
int EVP_PKEY_asn1_add0(EVP_PKEY_ASN1_METHOD *ameth)

{
  int iVar1;
  
  if ((DAT_01782dc8 == 0) && (DAT_01782dc8 = OPENSSL_sk_new(&LAB_00afbdf0), DAT_01782dc8 == 0)) {
    return 0;
  }
  iVar1 = OPENSSL_sk_push(DAT_01782dc8,ameth);
  if (iVar1 != 0) {
    OPENSSL_sk_sort(DAT_01782dc8);
  }
  return (uint)(iVar1 != 0);
}

