
/* WARNING: Type propagation algorithm not settling */

int ssl_build_cert_chain(long param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  X509_STORE_CTX *ctx;
  X509 *pXVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  X509_STORE *ctx_00;
  stack_st_X509 *psVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  puVar11 = (undefined8 *)(param_1 + 0x148);
  if (param_1 == 0) {
    puVar11 = (undefined8 *)(param_2 + 0x120);
  }
  puVar11 = (undefined8 *)*puVar11;
  plVar10 = (long *)*puVar11;
  if (*plVar10 == 0) {
    ERR_put_error(0x14,0x14c,0xb3,"ssl/ssl_cert.c",0x36e);
    ctx_00 = (X509_STORE *)0x0;
    ctx = (X509_STORE_CTX *)0x0;
joined_r0x00ad1d34:
    iVar1 = 0;
joined_r0x00ad1d6c:
    if ((param_3 & 4) == 0) goto LAB_00ad1c28;
  }
  else {
    if ((param_3 >> 2 & 1) == 0) {
      ctx_00 = (X509_STORE *)puVar11[0x31];
      if (ctx_00 == (X509_STORE *)0x0) {
        lVar8 = param_2;
        if (param_1 != 0) {
          lVar8 = *(long *)(param_1 + 0x1b8);
        }
        ctx_00 = *(X509_STORE **)(lVar8 + 0x18);
      }
      if ((param_3 & 1) == 0) {
LAB_00ad1b70:
        psVar9 = (stack_st_X509 *)0x0;
      }
      else {
        psVar9 = (stack_st_X509 *)plVar10[2];
      }
LAB_00ad1b7c:
      ctx = X509_STORE_CTX_new();
      if (ctx == (X509_STORE_CTX *)0x0) {
        iVar1 = 0x41;
        iVar2 = 0x396;
LAB_00ad1c14:
        ERR_put_error(0x14,0x14c,iVar1,"ssl/ssl_cert.c",iVar2);
        goto joined_r0x00ad1d34;
      }
      iVar1 = X509_STORE_CTX_init(ctx,ctx_00,(X509 *)*plVar10,psVar9);
      if (iVar1 == 0) {
        iVar1 = 0xb;
        iVar2 = 0x39a;
        goto LAB_00ad1c14;
      }
      X509_STORE_CTX_set_flags(ctx,(ulong)*(uint *)((long)puVar11 + 0x1c) & 0x30000);
      iVar1 = X509_verify_cert(ctx);
      if (((param_3 >> 3 & 1) == 0) || (0 < iVar1)) {
        if (iVar1 < 1) {
          ERR_put_error(0x14,0x14c,0x86,"ssl/ssl_cert.c",0x3ab);
          iVar1 = X509_STORE_CTX_get_error(ctx);
          pcVar7 = X509_verify_cert_error_string((long)iVar1);
          ERR_add_error_data(2,"Verify error:",pcVar7);
          goto joined_r0x00ad1d34;
        }
        iVar1 = 0;
      }
      else {
        if ((param_3 >> 4 & 1) != 0) {
          ERR_clear_error();
        }
        iVar1 = 2;
      }
      psVar9 = X509_STORE_CTX_get1_chain(ctx);
      pXVar5 = (X509 *)OPENSSL_sk_shift();
      X509_free(pXVar5);
      if (((param_3 >> 1 & 1) != 0) && (iVar2 = OPENSSL_sk_num(psVar9), 0 < iVar2)) {
        iVar2 = OPENSSL_sk_num(psVar9);
        OPENSSL_sk_value(psVar9,iVar2 + -1);
        uVar3 = X509_get_extension_flags();
        if ((uVar3 >> 0xd & 1) != 0) {
          pXVar5 = (X509 *)OPENSSL_sk_pop(psVar9);
          X509_free(pXVar5);
        }
      }
      iVar2 = OPENSSL_sk_num(psVar9);
      if (0 < iVar2) {
        iVar1 = 0;
        do {
          uVar6 = OPENSSL_sk_value(psVar9,iVar1);
          iVar2 = ssl_security_cert(param_1,param_2,uVar6,0,0);
          if (iVar2 != 1) {
            ERR_put_error(0x14,0x14c,iVar2,"ssl/ssl_cert.c",0x3c7);
            OPENSSL_sk_pop_free(psVar9,X509_free);
            iVar1 = 0;
            goto joined_r0x00ad1d6c;
          }
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(psVar9);
        } while (iVar1 < iVar2);
        iVar1 = 1;
      }
      OPENSSL_sk_pop_free(plVar10[2],X509_free);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      plVar10[2] = (long)psVar9;
      goto joined_r0x00ad1d6c;
    }
    ctx_00 = X509_STORE_new();
    if (ctx_00 != (X509_STORE *)0x0) {
      iVar1 = OPENSSL_sk_num(plVar10[2]);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          pXVar5 = (X509 *)OPENSSL_sk_value(plVar10[2],iVar1);
          iVar2 = X509_STORE_add_cert(ctx_00,pXVar5);
          if (iVar2 == 0) {
            uVar4 = ERR_peek_last_error();
            if ((uVar4 & 0xff000fff) != 0xb000065) goto LAB_00ad1d2c;
            ERR_clear_error();
          }
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(plVar10[2]);
        } while (iVar1 < iVar2);
      }
      iVar1 = X509_STORE_add_cert(ctx_00,(X509 *)*plVar10);
      if (iVar1 != 0) goto LAB_00ad1b70;
      uVar4 = ERR_peek_last_error();
      if ((uVar4 & 0xff000fff) == 0xb000065) {
        ERR_clear_error();
        psVar9 = (stack_st_X509 *)0x0;
        goto LAB_00ad1b7c;
      }
LAB_00ad1d2c:
      ctx = (X509_STORE_CTX *)0x0;
      goto joined_r0x00ad1d34;
    }
    iVar1 = 0;
    ctx = (X509_STORE_CTX *)0x0;
  }
  X509_STORE_free(ctx_00);
LAB_00ad1c28:
  X509_STORE_CTX_free(ctx);
  return iVar1;
}

