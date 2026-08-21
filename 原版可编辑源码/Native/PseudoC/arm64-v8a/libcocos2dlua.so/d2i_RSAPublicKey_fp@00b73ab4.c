
RSA * d2i_RSAPublicKey_fp(FILE *fp,RSA **rsa)

{
  RSA *pRVar1;
  
                    /* try { // try from 00b73ac0 to 00c73acb has its CatchHandler @ 00b73b84 */
  pRVar1 = ASN1_item_d2i_fp((ASN1_ITEM *)RSAPublicKey_it,fp,rsa);
  return pRVar1;
}

