
int X509_STORE_CTX_get1_issuer(X509 **issuer,X509_STORE_CTX *ctx,X509 *x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  X509_NAME *a;
  X509_NAME *b;
  X509 *pXVar5;
  
  piVar4 = (int *)CRYPTO_zalloc(0x10,"crypto/x509/x509_lu.c",0x19b);
  if (piVar4 == (int *)0x0) {
    ERR_put_error(0xb,0x96,0x41,"crypto/x509/x509_lu.c",0x19e);
    iVar1 = -1;
  }
  else {
    *piVar4 = 0;
    *issuer = (X509 *)0x0;
    a = X509_get_issuer_name(x);
    iVar1 = X509_STORE_CTX_get_by_subject(ctx,1,a,piVar4);
    if (iVar1 == 1) {
      iVar1 = (*ctx->get_issuer)((X509 **)ctx,(X509_STORE_CTX *)x,*(X509 **)(piVar4 + 2));
      if ((iVar1 == 0) ||
         (iVar1 = x509_check_cert_time(ctx,*(undefined8 *)(piVar4 + 2),0xffffffff), iVar1 == 0)) {
        if (*piVar4 == 2) {
          X509_CRL_free(*(X509_CRL **)(piVar4 + 2));
        }
        else if (*piVar4 == 1) {
          X509_free(*(X509 **)(piVar4 + 2));
        }
        CRYPTO_free(piVar4);
        CRYPTO_THREAD_write_lock(*(undefined8 *)(ctx->ctx + 1));
        iVar2 = FUN_00b6acb8(ctx->ctx->objs,1,a,0);
        if ((iVar2 == -1) || (iVar1 = OPENSSL_sk_num(ctx->ctx->objs), iVar1 <= iVar2)) {
          iVar1 = 0;
        }
        else {
          iVar1 = 0;
          do {
            piVar4 = (int *)OPENSSL_sk_value(ctx->ctx->objs,iVar2);
            if (*piVar4 != 1) break;
            b = X509_get_subject_name(*(X509 **)(piVar4 + 2));
            iVar3 = X509_NAME_cmp(a,b);
            if (iVar3 != 0) break;
            iVar3 = (*ctx->get_issuer)((X509 **)ctx,(X509_STORE_CTX *)x,*(X509 **)(piVar4 + 2));
            if (iVar3 != 0) {
              pXVar5 = *(X509 **)(piVar4 + 2);
              *issuer = pXVar5;
              iVar3 = x509_check_cert_time(ctx,pXVar5,0xffffffff);
              iVar1 = 1;
              if (iVar3 != 0) break;
            }
            iVar2 = iVar2 + 1;
            iVar3 = OPENSSL_sk_num(ctx->ctx->objs);
          } while (iVar2 < iVar3);
        }
        CRYPTO_THREAD_unlock(*(undefined8 *)(ctx->ctx + 1));
        if (*issuer != (X509 *)0x0) {
          X509_up_ref();
        }
      }
      else {
        *issuer = *(X509 **)(piVar4 + 2);
        X509_up_ref();
        if (*piVar4 == 2) {
          X509_CRL_free(*(X509_CRL **)(piVar4 + 2));
        }
        else if (*piVar4 == 1) {
          X509_free(*(X509 **)(piVar4 + 2));
        }
        CRYPTO_free(piVar4);
        iVar1 = 1;
      }
    }
    else {
      if (*piVar4 == 2) {
        X509_CRL_free(*(X509_CRL **)(piVar4 + 2));
      }
      else if (*piVar4 == 1) {
        X509_free(*(X509 **)(piVar4 + 2));
      }
      CRYPTO_free(piVar4);
      iVar1 = 0;
    }
  }
  return iVar1;
}

