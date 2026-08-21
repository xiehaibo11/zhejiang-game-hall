
int i2d_RSAPrivateKey_fp(FILE *fp,RSA *rsa)

{
  int iVar1;
  
                    /* try { // try from 00b73aa0 to 00c73aa7 has its CatchHandler @ 00b73ba4 */
                    /* try { // try from 00b73aac to 00c73abf has its CatchHandler @ 00b73bb4 */
  iVar1 = ASN1_item_i2d_fp((ASN1_ITEM *)RSAPrivateKey_it,fp,rsa);
  return iVar1;
}

