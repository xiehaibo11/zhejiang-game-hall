
void SSL_CTX_flush_sessions(SSL_CTX *ctx,long tm)

{
  undefined8 uVar1;
  lhash_st_SSL_SESSION *plVar2;
  SSL_CTX *local_48;
  long local_40;
  lhash_st_SSL_SESSION *local_38;
  
  plVar2 = ctx->sessions;
  if (plVar2 != (lhash_st_SSL_SESSION *)0x0) {
    local_48 = ctx;
    local_40 = tm;
    local_38 = plVar2;
    CRYPTO_THREAD_write_lock(ctx[1].comp_methods);
    uVar1 = OPENSSL_LH_get_down_load(ctx->sessions);
    OPENSSL_LH_set_down_load(ctx->sessions,0);
    OPENSSL_LH_doall_arg(plVar2,FUN_00add3ec,&local_48);
    OPENSSL_LH_set_down_load(ctx->sessions,uVar1);
    CRYPTO_THREAD_unlock(ctx[1].comp_methods);
  }
  return;
}

