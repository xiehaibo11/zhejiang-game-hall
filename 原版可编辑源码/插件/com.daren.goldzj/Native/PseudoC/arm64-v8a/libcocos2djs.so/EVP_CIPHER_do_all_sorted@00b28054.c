
void EVP_CIPHER_do_all_sorted(fn *fn,void *arg)

{
  void *local_30;
  fn *pfStack_28;
  
  OPENSSL_init_crypto(4,0);
  local_30 = arg;
  pfStack_28 = fn;
  OBJ_NAME_do_all_sorted(2,(fn *)&LAB_00b28020,&local_30);
  return;
}

