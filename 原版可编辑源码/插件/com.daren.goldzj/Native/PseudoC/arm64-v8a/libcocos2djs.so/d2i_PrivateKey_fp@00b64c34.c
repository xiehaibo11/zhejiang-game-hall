
EVP_PKEY * d2i_PrivateKey_fp(FILE *fp,EVP_PKEY **a)

{
  EVP_PKEY *pEVar1;
  
                    /* try { // try from 00b64c48 to 00c64c67 has its CatchHandler @ 00b64ce0 */
  pEVar1 = ASN1_d2i_fp(EVP_PKEY_new,d2i_AutoPrivateKey,fp,a);
  return pEVar1;
}

