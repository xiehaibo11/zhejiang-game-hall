
X509 * FUN_00b4b2cc(stack_st_X509 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  X509 *pXVar3;
  EVP_MD *type;
  void *__s1;
  uchar auStack_44 [20];
  
  if (*param_2 == 0) {
    pXVar3 = X509_find_by_subject(param_1,*(X509_NAME **)(param_2 + 2));
  }
  else {
    if (**(int **)(param_2 + 2) == 0x14) {
      __s1 = *(void **)(*(int **)(param_2 + 2) + 2);
      iVar1 = OPENSSL_sk_num(param_1);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          pXVar3 = (X509 *)OPENSSL_sk_value(param_1,iVar1);
          type = EVP_sha1();
          X509_pubkey_digest(pXVar3,type,auStack_44,(uint *)0x0);
          iVar2 = memcmp(__s1,auStack_44,0x14);
          if (iVar2 == 0) {
            return pXVar3;
          }
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(param_1);
        } while (iVar1 < iVar2);
      }
    }
    pXVar3 = (X509 *)0x0;
  }
  return pXVar3;
}

