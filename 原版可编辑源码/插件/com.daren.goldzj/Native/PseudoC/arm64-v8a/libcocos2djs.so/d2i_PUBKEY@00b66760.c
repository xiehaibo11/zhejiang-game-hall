
EVP_PKEY * d2i_PUBKEY(EVP_PKEY **a,uchar **pp,long length)

{
  ASN1_VALUE *val;
  EVP_PKEY *pEVar1;
  uchar *local_40;
  EVP_PKEY *local_38;
  
                    /* try { // try from 00b66764 to 00c6676b has its CatchHandler @ 00b669ac */
  local_40 = *pp;
  val = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_40,length,(ASN1_ITEM *)X509_PUBKEY_it);
  if (val != (ASN1_VALUE *)0x0) {
    local_38 = (EVP_PKEY *)0x0;
    if (*(long *)(val + 8) != 0) {
      pEVar1 = *(EVP_PKEY **)(val + 0x10);
      if (pEVar1 != (EVP_PKEY *)0x0) {
        EVP_PKEY_up_ref(pEVar1);
        ASN1_item_free(val,(ASN1_ITEM *)X509_PUBKEY_it);
        *pp = local_40;
        if (a == (EVP_PKEY **)0x0) {
          return pEVar1;
        }
        EVP_PKEY_free(*a);
        *a = pEVar1;
        return pEVar1;
      }
      FUN_00b665e4(&local_38,val);
      pEVar1 = local_38;
      if (local_38 != (EVP_PKEY *)0x0) {
                    /* try { // try from 00b667fc to 00c6680b has its CatchHandler @ 00b669a4 */
        ERR_put_error(0xb,0x77,0x44,"crypto/x509/x_pubkey.c",0xa1);
        EVP_PKEY_free(pEVar1);
      }
    }
    ASN1_item_free(val,(ASN1_ITEM *)X509_PUBKEY_it);
  }
  return (EVP_PKEY *)0x0;
}

