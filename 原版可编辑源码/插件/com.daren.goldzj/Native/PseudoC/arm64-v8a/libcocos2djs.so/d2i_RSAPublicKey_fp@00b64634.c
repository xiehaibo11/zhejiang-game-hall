
RSA * d2i_RSAPublicKey_fp(FILE *fp,RSA **rsa)

{
  RSA *pRVar1;
  
                    /* catch() { ... } // from try @ 00b6467c with catch @ 00b6463c */
  pRVar1 = ASN1_item_d2i_fp((ASN1_ITEM *)RSAPublicKey_it,fp,rsa);
  return pRVar1;
}

