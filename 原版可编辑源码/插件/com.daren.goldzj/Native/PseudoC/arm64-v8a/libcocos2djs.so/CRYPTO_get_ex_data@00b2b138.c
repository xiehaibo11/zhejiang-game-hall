
void * CRYPTO_get_ex_data(CRYPTO_EX_DATA *ad,int idx)

{
  int iVar1;
  void *pvVar2;
  
  if ((ad->sk != (stack_st_void *)0x0) && (iVar1 = OPENSSL_sk_num(), idx < iVar1)) {
    pvVar2 = (void *)OPENSSL_sk_value(ad->sk,idx);
    return pvVar2;
  }
  return (void *)0x0;
}

