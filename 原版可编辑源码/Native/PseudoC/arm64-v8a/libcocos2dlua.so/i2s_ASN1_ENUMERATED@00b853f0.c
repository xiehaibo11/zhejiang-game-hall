
char * i2s_ASN1_ENUMERATED(X509V3_EXT_METHOD *meth,ASN1_ENUMERATED *aint)

{
  BIGNUM *a;
  char *pcVar1;
  
  if (aint == (ASN1_ENUMERATED *)0x0) {
                    /* try { // try from 00b85450 to 00c854a3 has its CatchHandler @ 00b853e0 */
    pcVar1 = (char *)0x0;
  }
  else {
    a = ASN1_ENUMERATED_to_BN(aint,(BIGNUM *)0x0);
                    /* try { // try from 00b85420 to 00c8542b has its CatchHandler @ 00b85488 */
    if ((a == (BIGNUM *)0x0) || (pcVar1 = BN_bn2dec(a), pcVar1 == (char *)0x0)) {
                    /* try { // try from 00b8542c to 00c85443 has its CatchHandler @ 00b853e0 */
      ERR_put_error(0x22,0x79,0x41,"crypto/x509v3/v3_utl.c",0x6a);
      pcVar1 = (char *)0x0;
    }
                    /* try { // try from 00b85444 to 00c8544f has its CatchHandler @ 00b85484 */
    BN_free(a);
  }
  return pcVar1;
}

