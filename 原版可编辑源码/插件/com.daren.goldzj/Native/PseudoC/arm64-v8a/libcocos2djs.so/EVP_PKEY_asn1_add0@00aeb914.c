
int EVP_PKEY_asn1_add0(EVP_PKEY_ASN1_METHOD *ameth)

{
  int iVar1;
  
  if ((DAT_01d39048 == 0) && (DAT_01d39048 = OPENSSL_sk_new(&DAT_00aeb970), DAT_01d39048 == 0)) {
    return 0;
  }
  iVar1 = OPENSSL_sk_push(DAT_01d39048,ameth);
  if (iVar1 != 0) {
    OPENSSL_sk_sort(DAT_01d39048);
  }
                    /* try { // try from 00aeb96c to 00beb973 has its CatchHandler @ 00aeba48 */
  return (uint)(iVar1 != 0);
}

