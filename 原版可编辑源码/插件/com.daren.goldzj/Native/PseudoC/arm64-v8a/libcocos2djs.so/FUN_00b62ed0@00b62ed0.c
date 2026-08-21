
undefined8 FUN_00b62ed0(long param_1,int param_2,char *param_3,size_t param_4)

{
  size_t sVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((param_3 == (char *)0x0) || (param_4 == 0)) {
    if (param_3 == (char *)0x0) {
      sVar1 = 0;
      goto joined_r0x00b62fc4;
    }
    param_4 = strlen(param_3);
  }
  else {
    pvVar3 = memchr(param_3,0,param_4 - (1 < param_4));
    if (pvVar3 != (void *)0x0) {
      return 0;
    }
  }
  sVar1 = param_4;
  if ((param_4 != 0) && (sVar1 = param_4 - 1, param_3[param_4 - 1] != '\0')) {
    sVar1 = param_4;
  }
joined_r0x00b62fc4:
  if (param_2 == 0) {
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x38),&LAB_00b62c20);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  uVar5 = 1;
  if ((param_3 != (char *)0x0) && (uVar5 = 1, sVar1 != 0)) {
    pvVar3 = (void *)CRYPTO_strndup(param_3,sVar1,"crypto/x509/x509_vpm.c",0x3c);
    uVar5 = 0;
    if (pvVar3 != (void *)0x0) {
      plVar6 = (long *)(param_1 + 0x38);
      lVar4 = *plVar6;
      if (lVar4 == 0) {
        lVar4 = OPENSSL_sk_new_null();
        *plVar6 = lVar4;
        if (lVar4 == 0) {
          CRYPTO_free(pvVar3);
          return 0;
        }
      }
      iVar2 = OPENSSL_sk_push(lVar4,pvVar3);
      if (iVar2 == 0) {
        CRYPTO_free(pvVar3);
        iVar2 = OPENSSL_sk_num(*plVar6);
        if (iVar2 == 0) {
          OPENSSL_sk_free(*plVar6);
          uVar5 = 0;
          *plVar6 = 0;
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}

