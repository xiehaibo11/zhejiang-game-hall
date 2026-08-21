
undefined8 FUN_00b2baa4(long param_1,EVP_MD_CTX *param_2)

{
  int iVar1;
  HMAC_CTX *ctx;
  
  ctx = *(HMAC_CTX **)(*(long *)(param_1 + 0x28) + 0x20);
  iVar1 = EVP_MD_CTX_test_flags(param_2,-0x101);
  HMAC_CTX_set_flags(ctx,(long)iVar1);
  EVP_MD_CTX_set_flags(param_2,0x100);
  EVP_MD_CTX_set_update_fn(param_2,FUN_00b2bcac);
  return 1;
}

