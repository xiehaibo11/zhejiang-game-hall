
void BN_clear(BIGNUM *a)

{
  if (a->d != (ulong *)0x0) {
    OPENSSL_cleanse(a->d,(long)a->dmax << 3);
  }
  a->top = 0;
  a->neg = 0;
  return;
}

