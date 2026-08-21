
DSA * d2i_DSA_PUBKEY_bio(BIO *bp,DSA **dsa)

{
  DSA *pDVar1;
  
                    /* catch() { ... } // from try @ 00b647b4 with catch @ 00b6485c */
                    /* catch() { ... } // from try @ 00b64704 with catch @ 00b64860 */
  pDVar1 = ASN1_d2i_bio(DSA_new,d2i_DSA_PUBKEY,bp,dsa);
  return pDVar1;
}

