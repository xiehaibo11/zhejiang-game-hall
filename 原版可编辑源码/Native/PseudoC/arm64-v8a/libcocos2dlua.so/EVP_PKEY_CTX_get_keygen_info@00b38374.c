
int EVP_PKEY_CTX_get_keygen_info(EVP_PKEY_CTX *ctx,int idx)

{
  if (idx == -1) {
    return *(int *)(ctx + 0x48);
  }
  if (-1 < idx) {
    if (*(int *)(ctx + 0x48) < idx) {
      return 0;
    }
    return *(int *)(*(long *)(ctx + 0x40) + (long)idx * 4);
  }
  return 0;
}

