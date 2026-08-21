
void FUN_00b0f600(EVP_PKEY *param_1)

{
  CMAC_CTX *ctx;
  
  ctx = EVP_PKEY_get0(param_1);
  CMAC_CTX_free(ctx);
  return;
}

