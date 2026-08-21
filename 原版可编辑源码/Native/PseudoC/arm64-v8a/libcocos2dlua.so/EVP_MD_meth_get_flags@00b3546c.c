
long EVP_MD_meth_get_flags(long param_1)

{
  return (long)*(int *)(param_1 + 0x40);
}

