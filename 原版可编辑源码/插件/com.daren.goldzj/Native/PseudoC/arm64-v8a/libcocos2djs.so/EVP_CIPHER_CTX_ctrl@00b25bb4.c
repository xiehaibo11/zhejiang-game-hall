
int EVP_CIPHER_CTX_ctrl(EVP_CIPHER_CTX *ctx,int type,int arg,void *ptr)

{
  int iVar1;
  int line;
  _func_1094 *p_Var2;
  
  if (ctx->cipher == (EVP_CIPHER *)0x0) {
    iVar1 = 0x83;
    line = 0x23e;
  }
  else {
    p_Var2 = ctx->cipher->ctrl;
    if (p_Var2 == (_func_1094 *)0x0) {
      iVar1 = 0x84;
      line = 0x243;
    }
    else {
      iVar1 = (*p_Var2)(ctx,type,arg,ptr);
      if (iVar1 != -1) {
        return iVar1;
      }
      iVar1 = 0x85;
      line = 0x24a;
    }
  }
  ERR_put_error(6,0x7c,iVar1,"crypto/evp/evp_enc.c",line);
  return 0;
}

