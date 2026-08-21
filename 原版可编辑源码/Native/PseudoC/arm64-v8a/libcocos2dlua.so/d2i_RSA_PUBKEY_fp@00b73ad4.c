
RSA * d2i_RSA_PUBKEY_fp(FILE *fp,RSA **rsa)

{
  RSA *pRVar1;
  
                    /* try { // try from 00b73ad4 to 00c73adf has its CatchHandler @ 00b73b80 */
                    /* try { // try from 00b73aec to 00c73af7 has its CatchHandler @ 00b73b68 */
                    /* try { // try from 00b73af8 to 00c73bd7 has its CatchHandler @ 00b738f8 */
  pRVar1 = ASN1_d2i_fp(RSA_new,d2i_RSA_PUBKEY,fp,rsa);
  return pRVar1;
}

