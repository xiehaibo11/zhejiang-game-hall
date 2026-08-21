
RSA * d2i_RSAPublicKey_bio(BIO *bp,RSA **rsa)

{
  RSA *pRVar1;
  
                    /* catch() { ... } // from try @ 00b73ad4 with catch @ 00b73b80 */
                    /* catch() { ... } // from try @ 00b73ac0 with catch @ 00b73b84 */
  pRVar1 = ASN1_item_d2i_bio((ASN1_ITEM *)RSAPublicKey_it,bp,rsa);
  return pRVar1;
}

