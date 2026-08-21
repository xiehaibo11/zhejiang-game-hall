
int X509_TRUST_set(int *t,int trust)

{
  int iVar1;
  int local_48 [10];
  
  if ((7 < trust - 1U) &&
     (((local_48[0] = trust, DAT_01d3b210 == 0 ||
       (iVar1 = OPENSSL_sk_find(DAT_01d3b210,local_48), iVar1 == -1)) || (iVar1 == -9)))) {
    ERR_put_error(0xb,0x8d,0x7b,"crypto/x509/x509_trs.c",0x73);
    return 0;
  }
  *t = trust;
  return 1;
}

