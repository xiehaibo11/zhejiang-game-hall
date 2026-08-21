
EC_KEY * d2i_EC_PUBKEY_fp(FILE *fp,EC_KEY **eckey)

{
  EC_KEY *pEVar1;
  
                    /* try { // try from 00b73d3c to 00c73eab has its CatchHandler @ 00b73d3c
                       catch() { ... } // from try @ 00b73d3c with catch @ 00b73d3c
                       catch() { ... } // from try @ 00b73eb0 with catch @ 00b73d3c
                       catch() { ... } // from try @ 00b73f64 with catch @ 00b73d3c */
  pEVar1 = ASN1_d2i_fp(EC_KEY_new,d2i_EC_PUBKEY,fp,eckey);
  return pEVar1;
}

