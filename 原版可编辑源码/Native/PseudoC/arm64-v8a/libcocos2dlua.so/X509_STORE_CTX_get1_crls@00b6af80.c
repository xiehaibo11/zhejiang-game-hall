
long X509_STORE_CTX_get1_crls(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *ptr;
  long lVar5;
  X509_CRL *a;
  int local_34;
  
  lVar4 = OPENSSL_sk_new_null();
  ptr = (int *)CRYPTO_zalloc(0x10,"crypto/x509/x509_lu.c",0x19b);
  if (ptr == (int *)0x0) {
    ERR_put_error(0xb,0x96,0x41,"crypto/x509/x509_lu.c",0x19e);
  }
  else {
    *ptr = 0;
    if (lVar4 != 0) {
      iVar1 = X509_STORE_CTX_get_by_subject(param_1,2,param_2,ptr);
      iVar2 = *ptr;
      if (iVar1 != 0) {
        if (iVar2 == 2) {
          X509_CRL_free(*(X509_CRL **)(ptr + 2));
        }
        else if (iVar2 == 1) {
          X509_free(*(X509 **)(ptr + 2));
        }
        CRYPTO_free(ptr);
        CRYPTO_THREAD_write_lock(*(undefined8 *)(*param_1 + 0x90));
        iVar2 = FUN_00b6acb8(*(undefined8 *)(*param_1 + 8),2,param_2,&local_34);
        if (-1 < iVar2) {
          lVar5 = *param_1;
          if (0 < local_34) {
            iVar1 = 0;
            do {
              lVar5 = OPENSSL_sk_value(*(undefined8 *)(lVar5 + 8),iVar2 + iVar1);
              a = *(X509_CRL **)(lVar5 + 8);
              X509_CRL_up_ref(a);
              iVar3 = OPENSSL_sk_push(lVar4,a);
              if (iVar3 == 0) {
                CRYPTO_THREAD_unlock(*(undefined8 *)(*param_1 + 0x90));
                X509_CRL_free(a);
                OPENSSL_sk_pop_free(lVar4,X509_CRL_free);
                return 0;
              }
              lVar5 = *param_1;
              iVar1 = iVar1 + 1;
            } while (iVar1 < local_34);
          }
          CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x90));
          return lVar4;
        }
        CRYPTO_THREAD_unlock(*(undefined8 *)(*param_1 + 0x90));
        goto LAB_00b6b108;
      }
      if (iVar2 == 2) {
        X509_CRL_free(*(X509_CRL **)(ptr + 2));
      }
      else if (iVar2 == 1) {
        X509_free(*(X509 **)(ptr + 2));
      }
    }
    CRYPTO_free(ptr);
  }
LAB_00b6b108:
  OPENSSL_sk_free(lVar4);
  return 0;
}

