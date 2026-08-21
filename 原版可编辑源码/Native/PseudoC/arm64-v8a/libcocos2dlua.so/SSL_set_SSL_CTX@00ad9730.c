
SSL_CTX * SSL_set_SSL_CTX(SSL *ssl,SSL_CTX *ctx)

{
  undefined8 *__s1;
  uint uVar1;
  int iVar2;
  _func_3151 *p_Var3;
  ulong uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined1 auStack_24 [4];
  
  if ((SSL_CTX *)ssl->mode != ctx) {
    if (ctx == (SSL_CTX *)0x0) {
      ctx = (SSL_CTX *)ssl[1].bbio;
    }
                    /* catch() { ... } // from try @ 00ad9610 with catch @ 00ad975c */
    p_Var3 = (_func_3151 *)ssl_cert_dup(ctx->mode);
    if (p_Var3 == (_func_3151 *)0x0) {
      ctx = (SSL_CTX *)0x0;
    }
    else {
      ssl_cert_free(ssl->verify_callback);
      uVar1 = *(uint *)&ssl->info_callback;
      ssl->verify_callback = p_Var3;
      if (0x20 < uVar1) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ssl->sid_ctx_length <= sizeof(ssl->sid_ctx)","ssl/ssl_lib.c",
                    0xd43);
      }
      uVar4 = ssl->mode;
                    /* try { // try from 00ad9788 to 00bd97d3 has its CatchHandler @ 00ad9788
                       catch() { ... } // from try @ 00ad9788 with catch @ 00ad9788
                       catch() { ... } // from try @ 00ad982c with catch @ 00ad9788 */
      if ((uVar4 != 0) && (uVar1 == *(uint *)(uVar4 + 0x144))) {
        __s1 = (undefined8 *)((long)&ssl->info_callback + 4);
        iVar2 = memcmp(__s1,(void *)(uVar4 + 0x148),(ulong)uVar1);
        if (iVar2 == 0) {
          *(undefined4 *)&ssl->info_callback = *(undefined4 *)((long)&ctx->msg_callback + 4);
          uVar5 = *(undefined8 *)ctx->sid_ctx;
          *(undefined8 *)((long)&ssl->psk_client_callback + 4) = *(undefined8 *)(ctx->sid_ctx + 8);
          *(undefined8 *)((long)&ssl->kssl_ctx + 4) = uVar5;
          pvVar6 = ctx->msg_callback_arg;
          *(undefined8 *)&ssl->error_code = *(undefined8 *)&ctx->verify_mode;
          *__s1 = pvVar6;
        }
      }
                    /* try { // try from 00ad97d4 to 00bd97eb has its CatchHandler @ 00ad98c0 */
      CRYPTO_atomic_add(&ctx->references,1,auStack_24,ctx[1].comp_methods);
      SSL_CTX_free((SSL_CTX *)ssl->mode);
      ssl->mode = (ulong)ctx;
    }
  }
                    /* try { // try from 00ad97f8 to 00bd9807 has its CatchHandler @ 00ad98bc */
  return ctx;
}

