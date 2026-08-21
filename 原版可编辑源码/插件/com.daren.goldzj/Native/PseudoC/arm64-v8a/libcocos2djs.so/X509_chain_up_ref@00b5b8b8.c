
undefined8 X509_chain_up_ref(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = OPENSSL_sk_dup();
  iVar1 = OPENSSL_sk_num();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      OPENSSL_sk_value(uVar3,iVar1);
      X509_up_ref();
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(uVar3);
    } while (iVar1 < iVar2);
  }
  return uVar3;
}

