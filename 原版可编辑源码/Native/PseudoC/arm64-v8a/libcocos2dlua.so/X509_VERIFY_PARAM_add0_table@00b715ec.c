
int X509_VERIFY_PARAM_add0_table(X509_VERIFY_PARAM *param)

{
  int iVar1;
  X509_VERIFY_PARAM *param_00;
  
  if (DAT_01784f98 == 0) {
    DAT_01784f98 = OPENSSL_sk_new(&LAB_00b7167c);
    if (DAT_01784f98 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = OPENSSL_sk_find(DAT_01784f98,param);
    if (iVar1 != -1) {
      param_00 = (X509_VERIFY_PARAM *)OPENSSL_sk_value(DAT_01784f98,iVar1);
      X509_VERIFY_PARAM_free(param_00);
      OPENSSL_sk_delete(DAT_01784f98,iVar1);
    }
  }
  iVar1 = OPENSSL_sk_push(DAT_01784f98,param);
  return (uint)(iVar1 != 0);
}

