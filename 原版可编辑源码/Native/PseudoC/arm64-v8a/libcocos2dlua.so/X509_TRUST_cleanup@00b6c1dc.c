
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void X509_TRUST_cleanup(void)

{
                    /* try { // try from 00b6c1e8 to 00c6c27f has its CatchHandler @ 00b6c1e8
                       catch() { ... } // from try @ 00b6c1e8 with catch @ 00b6c1e8
                       catch() { ... } // from try @ 00b6c288 with catch @ 00b6c1e8 */
  OPENSSL_sk_pop_free(DAT_01784f90,&LAB_00b6c20c);
  DAT_01784f90 = 0;
  return;
}

