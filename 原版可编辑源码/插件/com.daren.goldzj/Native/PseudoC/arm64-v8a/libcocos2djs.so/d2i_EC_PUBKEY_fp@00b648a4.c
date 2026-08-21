
EC_KEY * d2i_EC_PUBKEY_fp(FILE *fp,EC_KEY **eckey)

{
  EC_KEY *pEVar1;
  
                    /* try { // try from 00b648bc to 00c64a97 has its CatchHandler @ 00b648bc
                       catch() { ... } // from try @ 00b648bc with catch @ 00b648bc
                       catch() { ... } // from try @ 00b64aa0 with catch @ 00b648bc */
  pEVar1 = ASN1_d2i_fp(EC_KEY_new,d2i_EC_PUBKEY,fp,eckey);
  return pEVar1;
}

