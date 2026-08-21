
EVP_PKEY * d2i_PUBKEY_bio(BIO *bp,EVP_PKEY **a)

{
  EVP_PKEY *pEVar1;
  
                    /* try { // try from 00b64da4 to 00c64dbf has its CatchHandler @ 00b64e50 */
  pEVar1 = ASN1_d2i_bio(EVP_PKEY_new,d2i_PUBKEY,bp,a);
  return pEVar1;
}

