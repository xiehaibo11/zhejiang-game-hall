
X509_TRUST * X509_TRUST_get0(int idx)

{
  X509_TRUST *pXVar1;
  
  if (idx < 0) {
    return (X509_TRUST *)0x0;
  }
  if (idx < 8) {
    return (X509_TRUST *)(&DAT_01d20a88 + (long)idx * 0x28);
  }
  pXVar1 = (X509_TRUST *)OPENSSL_sk_value(DAT_01d3b210,idx + -8);
  return pXVar1;
}

