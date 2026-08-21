
void EVP_MD_do_all(fn *fn,void *arg)

{
  void *local_30;
  fn *pfStack_28;
  
  OPENSSL_init_crypto(8,0);
  local_30 = arg;
  pfStack_28 = fn;
  OBJ_NAME_do_all(1,(fn *)&LAB_00b280ec,&local_30);
  return;
}

