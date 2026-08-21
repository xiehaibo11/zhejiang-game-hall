
int X509_CRL_sign_ctx(X509_CRL *x,EVP_MD_CTX *ctx)

{
  int iVar1;
  
  x->sha1_hash[8] = '\x01';
  x->sha1_hash[9] = '\0';
  x->sha1_hash[10] = '\0';
  x->sha1_hash[0xb] = '\0';
  iVar1 = ASN1_item_sign_ctx((ASN1_ITEM *)X509_CRL_INFO_it,(X509_ALGOR *)&x->sig_alg,
                             (X509_ALGOR *)(x->sha1_hash + 0x10),(ASN1_BIT_STRING *)&x->meth,x,ctx);
  return iVar1;
}

