
RSA * d2i_RSA_PUBKEY_bio(BIO *bp,RSA **rsa)

{
  RSA *pRVar1;
  
                    /* catch() { ... } // from try @ 00b73aa0 with catch @ 00b73ba4 */
                    /* catch() { ... } // from try @ 00b73aac with catch @ 00b73bb4 */
  pRVar1 = ASN1_d2i_bio(RSA_new,d2i_RSA_PUBKEY,bp,rsa);
  return pRVar1;
}

