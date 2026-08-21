
undefined8 X509_STORE_CTX_get1_certs(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *ptr;
  long lVar4;
  X509 *a;
  int *piVar5;
  int iVar6;
  int local_34;
  
  CRYPTO_THREAD_write_lock(*(undefined8 *)(*param_1 + 0x90));
  iVar1 = FUN_00b6acb8(*(undefined8 *)(*param_1 + 8),1,param_2,&local_34);
  if (iVar1 < 0) {
    ptr = (int *)CRYPTO_zalloc(0x10,"crypto/x509/x509_lu.c",0x19b);
    if (ptr == (int *)0x0) {
      ERR_put_error(0xb,0x96,0x41,"crypto/x509/x509_lu.c",0x19e);
      piVar5 = (int *)0x0;
    }
    else {
      *ptr = 0;
      piVar5 = ptr;
    }
    CRYPTO_THREAD_unlock(*(undefined8 *)(*param_1 + 0x90));
    if (piVar5 != (int *)0x0) {
      iVar1 = X509_STORE_CTX_get_by_subject(param_1,1,param_2,piVar5);
      if (*piVar5 == 2) {
        X509_CRL_free(*(X509_CRL **)(piVar5 + 2));
      }
      else if (*piVar5 == 1) {
        X509_free(*(X509 **)(piVar5 + 2));
      }
      CRYPTO_free(ptr);
      if (iVar1 != 0) {
        CRYPTO_THREAD_write_lock(*(undefined8 *)(*param_1 + 0x90));
        iVar1 = FUN_00b6acb8(*(undefined8 *)(*param_1 + 8),1,param_2,&local_34);
        if (-1 < iVar1) goto LAB_00b6adf0;
        CRYPTO_THREAD_unlock(*(undefined8 *)(*param_1 + 0x90));
      }
    }
LAB_00b6af64:
    uVar3 = 0;
  }
  else {
LAB_00b6adf0:
    uVar3 = OPENSSL_sk_new_null();
    lVar4 = *param_1;
    if (0 < local_34) {
      iVar6 = 0;
      do {
        lVar4 = OPENSSL_sk_value(*(undefined8 *)(lVar4 + 8),iVar1 + iVar6);
        a = *(X509 **)(lVar4 + 8);
        X509_up_ref(a);
        iVar2 = OPENSSL_sk_push(uVar3,a);
        if (iVar2 == 0) {
          CRYPTO_THREAD_unlock(*(undefined8 *)(*param_1 + 0x90));
          X509_free(a);
          OPENSSL_sk_pop_free(uVar3,X509_free);
          goto LAB_00b6af64;
        }
        lVar4 = *param_1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_34);
    }
    CRYPTO_THREAD_unlock(*(undefined8 *)(lVar4 + 0x90));
  }
  return uVar3;
}

