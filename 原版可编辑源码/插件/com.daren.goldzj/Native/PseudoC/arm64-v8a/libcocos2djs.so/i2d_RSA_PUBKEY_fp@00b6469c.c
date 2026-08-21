
int i2d_RSA_PUBKEY_fp(FILE *fp,RSA *rsa)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 00b6470c with catch @ 00b646b4
                       catch() { ... } // from try @ 00b647bc with catch @ 00b646b4 */
  iVar1 = ASN1_i2d_fp(i2d_RSA_PUBKEY,fp,rsa);
  return iVar1;
}

