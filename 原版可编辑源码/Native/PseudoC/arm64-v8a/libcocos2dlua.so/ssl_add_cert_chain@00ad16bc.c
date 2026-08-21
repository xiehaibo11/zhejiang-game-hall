
undefined8 ssl_add_cert_chain(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  X509_STORE_CTX *ctx;
  undefined8 uVar5;
  BUF_MEM *str;
  long lVar6;
  X509 *x509;
  X509_STORE *store;
  
  str = *(BUF_MEM **)(param_1 + 0x78);
  iVar1 = BUF_MEM_grow_clean(str,10);
  if (iVar1 == 0) {
    iVar1 = 7;
    iVar2 = 0x30c;
LAB_00ad17bc:
    ERR_put_error(0x14,0x13c,iVar1,"ssl/ssl_cert.c",iVar2);
LAB_00ad17c0:
    uVar4 = 0;
  }
  else {
    if ((param_2 != (undefined8 *)0x0) && (x509 = (X509 *)*param_2, x509 != (X509 *)0x0)) {
      lVar6 = param_2[2];
      if (lVar6 == 0) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x1b8) + 0xe8);
        if ((lVar6 == 0) && ((*(uint *)(param_1 + 0x1e8) >> 3 & 1) == 0)) {
          store = *(X509_STORE **)(*(long *)(param_1 + 0x148) + 0x188);
          if ((store != (X509_STORE *)0x0) ||
             (store = *(X509_STORE **)(*(long *)(param_1 + 0x1b8) + 0x18),
             store != (X509_STORE *)0x0)) {
            ctx = X509_STORE_CTX_new();
            if (ctx == (X509_STORE_CTX *)0x0) {
              iVar1 = 0x41;
              iVar2 = 0x328;
            }
            else {
              iVar1 = X509_STORE_CTX_init(ctx,store,x509,(stack_st_X509 *)0x0);
              if (iVar1 == 0) {
                X509_STORE_CTX_free(ctx);
                iVar1 = 0xb;
                iVar2 = 0x32d;
              }
              else {
                X509_verify_cert(ctx);
                ERR_clear_error();
                uVar4 = X509_STORE_CTX_get0_chain(ctx);
                iVar1 = ssl_security_cert_chain(param_1,uVar4,0,0);
                if (iVar1 == 1) {
                  iVar1 = OPENSSL_sk_num(uVar4);
                  if (0 < iVar1) {
                    iVar2 = 0;
                    do {
                      uVar5 = OPENSSL_sk_value(uVar4,iVar2);
                      iVar3 = FUN_00ad1928(str,param_3,uVar5);
                      if (iVar3 == 0) {
                        X509_STORE_CTX_free(ctx);
                        goto LAB_00ad17c0;
                      }
                      iVar2 = iVar2 + 1;
                    } while (iVar2 < iVar1);
                  }
                  X509_STORE_CTX_free(ctx);
                  goto LAB_00ad1898;
                }
                X509_STORE_CTX_free(ctx);
                iVar2 = 0x343;
              }
            }
            goto LAB_00ad17bc;
          }
          lVar6 = 0;
        }
      }
      iVar1 = ssl_security_cert_chain(param_1,lVar6,x509,0);
      if (iVar1 != 1) {
        iVar2 = 0x353;
        goto LAB_00ad17bc;
      }
      uVar4 = FUN_00ad1928(str,param_3,x509);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      iVar1 = OPENSSL_sk_num(lVar6);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          uVar4 = OPENSSL_sk_value(lVar6,iVar1);
          uVar4 = FUN_00ad1928(str,param_3,uVar4);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(lVar6);
        } while (iVar1 < iVar2);
        return 1;
      }
    }
LAB_00ad1898:
    uVar4 = 1;
  }
  return uVar4;
}

