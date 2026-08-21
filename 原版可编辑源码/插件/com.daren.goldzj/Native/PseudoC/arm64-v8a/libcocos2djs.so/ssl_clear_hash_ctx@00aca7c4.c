
void ssl_clear_hash_ctx(long *param_1)

{
  if (*param_1 != 0) {
    EVP_MD_CTX_free();
  }
  *param_1 = 0;
  return;
}

