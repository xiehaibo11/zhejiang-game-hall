
RSA * d2i_RSA_PUBKEY_fp(FILE *fp,RSA **rsa)

{
  RSA *pRVar1;
  
                    /* try { // try from 00b6466c to 00c6467b has its CatchHandler @ 00b64698 */
  pRVar1 = ASN1_d2i_fp(RSA_new,d2i_RSA_PUBKEY,fp,rsa);
  return pRVar1;
}

