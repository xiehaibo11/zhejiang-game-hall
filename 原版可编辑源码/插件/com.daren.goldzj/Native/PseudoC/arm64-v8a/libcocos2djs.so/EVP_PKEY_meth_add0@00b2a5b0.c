
int EVP_PKEY_meth_add0(EVP_PKEY_METHOD *pmeth)

{
  int iVar1;
  
  if ((DAT_01d3aa90 == 0) && (DAT_01d3aa90 = OPENSSL_sk_new(&LAB_00b2a60c), DAT_01d3aa90 == 0)) {
    return 0;
  }
  iVar1 = OPENSSL_sk_push(DAT_01d3aa90,pmeth);
  if (iVar1 != 0) {
    OPENSSL_sk_sort(DAT_01d3aa90);
  }
  return (uint)(iVar1 != 0);
}

