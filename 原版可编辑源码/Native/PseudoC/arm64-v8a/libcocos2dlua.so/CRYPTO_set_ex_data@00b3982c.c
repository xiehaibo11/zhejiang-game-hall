
int CRYPTO_set_ex_data(CRYPTO_EX_DATA *ad,int idx,void *val)

{
  int iVar1;
  int iVar2;
  stack_st_void *psVar3;
  
  if (ad->sk == (stack_st_void *)0x0) {
    psVar3 = (stack_st_void *)OPENSSL_sk_new_null();
    ad->sk = psVar3;
    if (psVar3 == (stack_st_void *)0x0) {
      iVar1 = 0x164;
LAB_00b398dc:
      ERR_put_error(0xf,0x66,0x41,"crypto/ex_data.c",iVar1);
      return 0;
    }
  }
  iVar1 = OPENSSL_sk_num();
  psVar3 = ad->sk;
  if (iVar1 <= idx) {
    iVar1 = iVar1 + -1;
    do {
      iVar2 = OPENSSL_sk_push(psVar3,0);
      if (iVar2 == 0) {
        iVar1 = 0x16b;
        goto LAB_00b398dc;
      }
      psVar3 = ad->sk;
      iVar1 = iVar1 + 1;
    } while (iVar1 < idx);
  }
  OPENSSL_sk_set(psVar3,idx,val);
  return 1;
}

