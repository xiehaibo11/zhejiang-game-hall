
X509_TRUST * X509_TRUST_get0(int idx)

{
  X509_TRUST *pXVar1;
  
  if (idx < 0) {
    return (X509_TRUST *)0x0;
  }
                    /* catch() { ... } // from try @ 00b6be10 with catch @ 00b6be74 */
  if (idx < 8) {
    return (X509_TRUST *)(&DAT_0176ecd8 + (long)idx * 0x28);
  }
                    /* catch() { ... } // from try @ 00b6bd68 with catch @ 00b6bea8 */
  pXVar1 = (X509_TRUST *)OPENSSL_sk_value(DAT_01784f90,idx + -8);
  return pXVar1;
}

