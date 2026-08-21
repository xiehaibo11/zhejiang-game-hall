
stack_st_X509_NAME * SSL_dup_CA_list(stack_st_X509_NAME *sk)

{
  int iVar1;
  int iVar2;
  stack_st_X509_NAME *psVar3;
  X509_NAME *pXVar4;
  
  psVar3 = (stack_st_X509_NAME *)OPENSSL_sk_new_null();
  if (psVar3 == (stack_st_X509_NAME *)0x0) {
    ERR_put_error(0x14,0x198,0x41,"ssl/ssl_cert.c",0x1db);
  }
  else {
    iVar1 = OPENSSL_sk_num(sk);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        pXVar4 = (X509_NAME *)OPENSSL_sk_value(sk,iVar1);
        pXVar4 = X509_NAME_dup(pXVar4);
        if ((pXVar4 == (X509_NAME *)0x0) || (iVar2 = OPENSSL_sk_push(psVar3,pXVar4), iVar2 == 0)) {
          OPENSSL_sk_pop_free(psVar3,X509_NAME_free);
          X509_NAME_free(pXVar4);
          return (stack_st_X509_NAME *)0x0;
        }
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(sk);
      } while (iVar1 < iVar2);
    }
  }
  return psVar3;
}

