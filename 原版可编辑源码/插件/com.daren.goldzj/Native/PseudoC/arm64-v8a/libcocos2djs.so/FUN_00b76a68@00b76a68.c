
undefined8 FUN_00b76a68(long *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  
  if (((param_2[1] == 0x16) && (lVar4 = *(long *)(param_2 + 2), lVar4 != 0)) && (*param_2 != 0)) {
    lVar2 = *param_1;
    if (lVar2 == 0) {
      lVar2 = OPENSSL_sk_new(&LAB_00b77658);
      *param_1 = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
      lVar4 = *(long *)(param_2 + 2);
    }
    iVar1 = OPENSSL_sk_find(lVar2,lVar4);
    if ((iVar1 == -1) &&
       ((pcVar3 = CRYPTO_strdup(*(char **)(param_2 + 2),"crypto/x509v3/v3_utl.c",0x1d6),
        pcVar3 == (char *)0x0 || (iVar1 = OPENSSL_sk_push(*param_1,pcVar3), iVar1 == 0)))) {
      OPENSSL_sk_pop_free(*param_1,&LAB_00b76ba0);
      *param_1 = 0;
      return 0;
    }
  }
  return 1;
}

