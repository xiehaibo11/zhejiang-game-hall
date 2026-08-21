
X509_PURPOSE * X509_PURPOSE_get0(int idx)

{
  X509_PURPOSE *pXVar1;
  
  if (idx < 0) {
    return (X509_PURPOSE *)0x0;
  }
  if (idx < 9) {
    return (X509_PURPOSE *)(&DAT_0176f000 + (long)idx * 0x30);
  }
  pXVar1 = (X509_PURPOSE *)OPENSSL_sk_value(DAT_01784fa8,idx + -9);
  return pXVar1;
}

