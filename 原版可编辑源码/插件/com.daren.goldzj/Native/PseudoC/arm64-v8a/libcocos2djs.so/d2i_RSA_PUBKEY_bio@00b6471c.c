
RSA * d2i_RSA_PUBKEY_bio(BIO *bp,RSA **rsa)

{
  RSA *pRVar1;
  
  pRVar1 = ASN1_d2i_bio(RSA_new,d2i_RSA_PUBKEY,bp,rsa);
  return pRVar1;
}

