
int i2d_RSAPublicKey_fp(FILE *fp,RSA *rsa)

{
  int iVar1;
  
                    /* try { // try from 00b6467c to 00c646b3 has its CatchHandler @ 00b6463c */
                    /* catch() { ... } // from try @ 00b6466c with catch @ 00b64698 */
  iVar1 = ASN1_item_i2d_fp((ASN1_ITEM *)RSAPublicKey_it,fp,rsa);
  return iVar1;
}

