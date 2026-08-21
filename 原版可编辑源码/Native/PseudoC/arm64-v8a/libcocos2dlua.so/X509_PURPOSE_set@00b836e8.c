
int X509_PURPOSE_set(int *p,int purpose)

{
  int iVar1;
  int local_50 [12];
  
  if ((8 < purpose - 1U) &&
     (((local_50[0] = purpose, DAT_01784fa8 == 0 ||
       (iVar1 = OPENSSL_sk_find(DAT_01784fa8,local_50), iVar1 == -1)) || (iVar1 == -10)))) {
    ERR_put_error(0x22,0x8d,0x92,"crypto/x509v3/v3_purp.c",99);
    return 0;
  }
  *p = purpose;
  return 1;
}

