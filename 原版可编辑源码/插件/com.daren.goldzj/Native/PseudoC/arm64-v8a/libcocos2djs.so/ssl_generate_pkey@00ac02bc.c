
EVP_PKEY * ssl_generate_pkey(EVP_PKEY *param_1)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pEVar2;
  EVP_PKEY *local_18;
  
                    /* catch() { ... } // from try @ 00ac0268 with catch @ 00ac02c4 */
  local_18 = (EVP_PKEY *)0x0;
  pEVar2 = (EVP_PKEY *)0x0;
  if (param_1 != (EVP_PKEY *)0x0) {
    ctx = EVP_PKEY_CTX_new(param_1,(ENGINE *)0x0);
                    /* catch() { ... } // from try @ 00ac0254 with catch @ 00ac02d8 */
                    /* catch() { ... } // from try @ 00ac0244 with catch @ 00ac02e8 */
                    /* catch() { ... } // from try @ 00ac0238 with catch @ 00ac02f8 */
    if (((ctx != (EVP_PKEY_CTX *)0x0) && (iVar1 = EVP_PKEY_keygen_init(ctx), 0 < iVar1)) &&
       (iVar1 = EVP_PKEY_keygen(ctx,&local_18), iVar1 < 1)) {
                    /* catch() { ... } // from try @ 00ac0220 with catch @ 00ac0308 */
      EVP_PKEY_free(local_18);
      local_18 = (EVP_PKEY *)0x0;
    }
    EVP_PKEY_CTX_free(ctx);
    pEVar2 = local_18;
  }
  return pEVar2;
}

