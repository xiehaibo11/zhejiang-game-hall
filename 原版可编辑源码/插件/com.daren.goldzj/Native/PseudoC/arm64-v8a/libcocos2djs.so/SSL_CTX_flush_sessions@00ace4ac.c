
void SSL_CTX_flush_sessions(SSL_CTX *ctx,long tm)

{
  undefined8 uVar1;
  lhash_st_SSL_SESSION *plVar2;
  SSL_CTX *local_48;
  long local_40;
  lhash_st_SSL_SESSION *local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ace460 with catch @ 00ace4b4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ace42c with catch @ 00ace4b8
                        */
  plVar2 = ctx->sessions;
                    /* try { // try from 00ace4cc to 00bce4cf has its CatchHandler @ 00ace4ec */
                    /* try { // try from 00ace4d0 to 00bce4ef has its CatchHandler @ 00ace264 */
  if (plVar2 != (lhash_st_SSL_SESSION *)0x0) {
    local_48 = ctx;
    local_40 = tm;
    local_38 = plVar2;
    CRYPTO_THREAD_write_lock(ctx[1].comp_methods);
    uVar1 = OPENSSL_LH_get_down_load(ctx->sessions);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ace4cc with catch @ 00ace4ec
                        */
    OPENSSL_LH_set_down_load(ctx->sessions,0);
    OPENSSL_LH_doall_arg(plVar2,FUN_00ace538,&local_48);
    OPENSSL_LH_set_down_load(ctx->sessions,uVar1);
    CRYPTO_THREAD_unlock(ctx[1].comp_methods);
  }
  return;
}

