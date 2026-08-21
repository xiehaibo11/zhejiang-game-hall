
int i2d_PUBKEY_fp(FILE *fp,EVP_PKEY *pkey)

{
  int iVar1;
  
                    /* try { // try from 00b64c68 to 00c64cfb has its CatchHandler @ 00b64bc4 */
  iVar1 = ASN1_i2d_fp(i2d_PUBKEY,fp,pkey);
  return iVar1;
}

