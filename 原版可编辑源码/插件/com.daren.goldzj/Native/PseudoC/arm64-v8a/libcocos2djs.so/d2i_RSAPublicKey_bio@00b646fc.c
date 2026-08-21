
RSA * d2i_RSAPublicKey_bio(BIO *bp,RSA **rsa)

{
  RSA *pRVar1;
  
                    /* try { // try from 00b64704 to 00c6470b has its CatchHandler @ 00b64860 */
                    /* try { // try from 00b6470c to 00c647b3 has its CatchHandler @ 00b646b4 */
  pRVar1 = ASN1_item_d2i_bio((ASN1_ITEM *)RSAPublicKey_it,bp,rsa);
  return pRVar1;
}

