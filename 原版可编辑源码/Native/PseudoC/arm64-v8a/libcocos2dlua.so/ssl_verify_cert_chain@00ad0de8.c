
int ssl_verify_cert_chain(void *param_1,stack_st_X509 *param_2)

{
  char *name;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  X509_STORE_CTX *ctx;
  X509 *x509;
  X509_VERIFY_PARAM *to;
  long lVar4;
  stack_st_X509 *psVar5;
  code *pcVar6;
  X509_STORE *store;
  
  if ((param_2 == (stack_st_X509 *)0x0) || (iVar1 = OPENSSL_sk_num(param_2), iVar1 == 0)) {
    return 0;
  }
  store = *(X509_STORE **)(*(long *)((long)param_1 + 0x148) + 400);
  if (store == (X509_STORE *)0x0) {
    store = *(X509_STORE **)(*(long *)((long)param_1 + 0x1b8) + 0x18);
  }
  ctx = X509_STORE_CTX_new();
  if (ctx == (X509_STORE_CTX *)0x0) {
    ERR_put_error(0x14,0xcf,0x41,"ssl/ssl_cert.c",0x189);
    return 0;
  }
  x509 = (X509 *)OPENSSL_sk_value(param_2,0);
  iVar1 = X509_STORE_CTX_init(ctx,store,x509,param_2);
  if (iVar1 == 0) {
    ERR_put_error(0x14,0xcf,0xb,"ssl/ssl_cert.c",399);
  }
  else {
    to = X509_STORE_CTX_get0_param(ctx);
    uVar2 = SSL_get_security_level(param_1);
    X509_VERIFY_PARAM_set_auth_level(to,uVar2);
    X509_STORE_CTX_set_flags
              (ctx,(ulong)*(uint *)(*(long *)((long)param_1 + 0x148) + 0x1c) & 0x30000);
    iVar3 = CRYPTO_THREAD_run_once(&DAT_01782c20,FUN_00acfff8);
    iVar1 = -1;
    if ((iVar3 != 0) && (DAT_01782c24 != 0)) {
      iVar1 = DAT_0176c400;
    }
    iVar1 = X509_STORE_CTX_set_ex_data(ctx,iVar1,param_1);
    if (iVar1 != 0) {
      iVar1 = OPENSSL_sk_num(*(undefined8 *)((long)param_1 + 200));
      if (0 < iVar1) {
        X509_STORE_CTX_set0_dane(ctx,(long)param_1 + 0xc0);
      }
      name = "ssl_client";
      if (*(int *)((long)param_1 + 0x38) == 0) {
        name = "ssl_server";
      }
      X509_STORE_CTX_set_default(ctx,name);
      X509_VERIFY_PARAM_set1(to,*(X509_VERIFY_PARAM **)((long)param_1 + 0xb8));
      if (*(verify_cb **)((long)param_1 + 400) != (verify_cb *)0x0) {
        X509_STORE_CTX_set_verify_cb(ctx,*(verify_cb **)((long)param_1 + 400));
      }
      pcVar6 = *(code **)(*(long *)((long)param_1 + 0x1b8) + 0x98);
      if (pcVar6 == (code *)0x0) {
        iVar1 = X509_verify_cert(ctx);
      }
      else {
        iVar1 = (*pcVar6)(ctx,*(undefined8 *)(*(long *)((long)param_1 + 0x1b8) + 0xa0));
      }
      iVar3 = X509_STORE_CTX_get_error(ctx);
      *(long *)((long)param_1 + 0x1c8) = (long)iVar3;
      OPENSSL_sk_pop_free(*(undefined8 *)((long)param_1 + 0x1c0),X509_free);
      *(undefined8 *)((long)param_1 + 0x1c0) = 0;
      lVar4 = X509_STORE_CTX_get0_chain(ctx);
      if (lVar4 != 0) {
        psVar5 = X509_STORE_CTX_get1_chain(ctx);
        *(stack_st_X509 **)((long)param_1 + 0x1c0) = psVar5;
        if (psVar5 == (stack_st_X509 *)0x0) {
          ERR_put_error(0x14,0xcf,0x41,"ssl/ssl_cert.c",0x1bf);
          iVar1 = 0;
        }
      }
      X509_VERIFY_PARAM_move_peername(*(undefined8 *)((long)param_1 + 0xb8),to);
      goto LAB_00ad100c;
    }
  }
  iVar1 = 0;
LAB_00ad100c:
  X509_STORE_CTX_free(ctx);
  return iVar1;
}

