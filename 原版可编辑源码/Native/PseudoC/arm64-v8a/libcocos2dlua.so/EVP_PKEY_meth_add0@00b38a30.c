
int EVP_PKEY_meth_add0(EVP_PKEY_METHOD *pmeth)

{
  int iVar1;
  
  if ((DAT_01784810 == 0) && (DAT_01784810 = OPENSSL_sk_new(&LAB_00b38a8c), DAT_01784810 == 0)) {
    return 0;
  }
  iVar1 = OPENSSL_sk_push(DAT_01784810,pmeth);
  if (iVar1 != 0) {
    OPENSSL_sk_sort(DAT_01784810);
  }
  return (uint)(iVar1 != 0);
}

