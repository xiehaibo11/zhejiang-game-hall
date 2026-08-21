
long FUN_00bd6fa4(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = DAT_01785118;
  if ((DAT_01785118 == 0) &&
     ((((lVar2 = EVP_CIPHER_meth_new(5,1,5), lVar2 == 0 ||
        (iVar1 = EVP_CIPHER_meth_set_iv_length(lVar2,0), iVar1 == 0)) ||
       (iVar1 = EVP_CIPHER_meth_set_flags(lVar2,8), iVar1 == 0)) ||
      (((iVar1 = EVP_CIPHER_meth_set_init(lVar2,&LAB_00bd7050), iVar1 == 0 ||
        (iVar1 = EVP_CIPHER_meth_set_do_cipher(lVar2,&LAB_00bd70f0), iVar1 == 0)) ||
       (iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(lVar2,0x112), iVar1 == 0)))))) {
    EVP_CIPHER_meth_free(lVar2);
    lVar2 = 0;
  }
  DAT_01785118 = lVar2;
  return DAT_01785118;
}

