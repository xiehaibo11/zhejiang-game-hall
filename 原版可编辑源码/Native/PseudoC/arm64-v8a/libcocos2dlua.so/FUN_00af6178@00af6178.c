
bool FUN_00af6178(undefined8 param_1,void *param_2,int param_3,void *param_4,int param_5,
                 void *param_6,int param_7,void *param_8,int param_9,void *param_10,int param_11,
                 uchar *param_12,int param_13)

{
  int iVar1;
  void *p2;
  EVP_PKEY_CTX *ctx;
  bool bVar2;
  size_t local_58;
  
                    /* catch() { ... } // from try @ 00af612c with catch @ 00af6188 */
  p2 = (void *)ssl_prf_md();
  local_58 = (size_t)param_13;
                    /* try { // try from 00af61c0 to 00bf6203 has its CatchHandler @ 00af61c0
                       catch() { ... } // from try @ 00af61c0 with catch @ 00af61c0
                       catch() { ... } // from try @ 00af6208 with catch @ 00af61c0 */
  if (p2 == (void *)0x0) {
    ERR_put_error(0x14,0x11c,0x44,"ssl/t1_enc.c",0x3e);
    bVar2 = false;
  }
  else {
    ctx = EVP_PKEY_CTX_new_id(0x3fd,(ENGINE *)0x0);
                    /* try { // try from 00af6204 to 00bf6207 has its CatchHandler @ 00af621c */
                    /* try { // try from 00af6208 to 00bf6233 has its CatchHandler @ 00af61c0 */
                    /* catch() { ... } // from try @ 00af6204 with catch @ 00af621c */
    if ((((((ctx == (EVP_PKEY_CTX *)0x0) || (iVar1 = EVP_PKEY_derive_init(ctx), iVar1 < 1)) ||
          (iVar1 = EVP_PKEY_CTX_ctrl(ctx,-1,0x400,0x1000,0,p2), iVar1 < 1)) ||
         ((iVar1 = EVP_PKEY_CTX_ctrl(ctx,-1,0x400,0x1001,param_11,param_10), iVar1 < 1 ||
          (iVar1 = EVP_PKEY_CTX_ctrl(ctx,-1,0x400,0x1002,param_3,param_2), iVar1 < 1)))) ||
        ((iVar1 = EVP_PKEY_CTX_ctrl(ctx,-1,0x400,0x1002,param_5,param_4), iVar1 < 1 ||
         ((iVar1 = EVP_PKEY_CTX_ctrl(ctx,-1,0x400,0x1002,param_7,param_6), iVar1 < 1 ||
          (iVar1 = EVP_PKEY_CTX_ctrl(ctx,-1,0x400,0x1002,param_9,param_8), iVar1 < 1)))))) ||
       (iVar1 = EVP_PKEY_CTX_ctrl(ctx,-1,0x400,0x1002,0,(void *)0x0), iVar1 < 1)) {
      bVar2 = false;
    }
    else {
      iVar1 = EVP_PKEY_derive(ctx,param_12,&local_58);
      bVar2 = 0 < iVar1;
    }
    EVP_PKEY_CTX_free(ctx);
  }
  return bVar2;
}

