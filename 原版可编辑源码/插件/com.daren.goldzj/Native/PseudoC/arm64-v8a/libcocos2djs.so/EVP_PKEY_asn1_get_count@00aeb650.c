
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int EVP_PKEY_asn1_get_count(void)

{
  int iVar1;
  
  if (DAT_01d39048 != 0) {
    iVar1 = OPENSSL_sk_num();
    return iVar1 + 0xd;
  }
  return 0xd;
}

