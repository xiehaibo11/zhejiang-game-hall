
void EVP_PKEY_CTX_set_app_data(EVP_PKEY_CTX *ctx,void *data)

{
  *(void **)(ctx + 0x30) = data;
  return;
}

