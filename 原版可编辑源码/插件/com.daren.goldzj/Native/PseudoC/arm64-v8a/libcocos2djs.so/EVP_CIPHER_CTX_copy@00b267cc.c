
int EVP_CIPHER_CTX_copy(EVP_CIPHER_CTX *out,EVP_CIPHER_CTX *in)

{
  int iVar1;
  void *__dest;
  int line;
  _func_1091 *p_Var2;
  
  if ((in == (EVP_CIPHER_CTX *)0x0) || (in->cipher == (EVP_CIPHER *)0x0)) {
    iVar1 = 0x6f;
    line = 0x25c;
    goto LAB_00b26858;
  }
  if ((in->engine != (ENGINE *)0x0) && (iVar1 = ENGINE_init(in->engine), iVar1 == 0)) {
    iVar1 = 0x26;
    line = 0x262;
    goto LAB_00b26858;
  }
  if (out != (EVP_CIPHER_CTX *)0x0) {
    if (out->cipher != (EVP_CIPHER *)0x0) {
      p_Var2 = out->cipher->cleanup;
      if ((p_Var2 != (_func_1091 *)0x0) && (iVar1 = (*p_Var2)(out), iVar1 == 0)) goto LAB_00b268bc;
      if ((out->cipher_data != (void *)0x0) && (iVar1 = out->cipher->ctx_size, iVar1 != 0)) {
        OPENSSL_cleanse(out->cipher_data,(long)iVar1);
      }
    }
    CRYPTO_free(out->cipher_data);
    ENGINE_finish(out->engine);
    memset(out,0,0xa8);
  }
LAB_00b268bc:
  memcpy(out,in,0xa8);
  if ((in->cipher_data != (void *)0x0) && (iVar1 = in->cipher->ctx_size, iVar1 != 0)) {
    __dest = CRYPTO_malloc(iVar1,"crypto/evp/evp_enc.c",0x26b);
    out->cipher_data = __dest;
    if (__dest == (void *)0x0) {
      iVar1 = 0x41;
      line = 0x26d;
LAB_00b26858:
      ERR_put_error(6,0xa3,iVar1,"crypto/evp/evp_enc.c",line);
      return 0;
    }
    memcpy(__dest,in->cipher_data,(long)in->cipher->ctx_size);
  }
  if ((*(byte *)((long)&in->cipher->flags + 1) >> 2 & 1) == 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00b2693c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*in->cipher->ctrl)(in,8,0,out);
  return iVar1;
}

