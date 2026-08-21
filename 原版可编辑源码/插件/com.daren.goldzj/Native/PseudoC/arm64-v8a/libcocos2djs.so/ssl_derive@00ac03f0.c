
undefined4 ssl_derive(long param_1,EVP_PKEY *param_2,EVP_PKEY *param_3)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  uchar *key;
  long lVar3;
  size_t local_38;
  
  local_38 = 0;
  if (param_2 == (EVP_PKEY *)0x0) {
    return 0;
  }
  if (param_3 == (EVP_PKEY *)0x0) {
    return 0;
  }
  ctx = EVP_PKEY_CTX_new(param_2,(ENGINE *)0x0);
  iVar1 = EVP_PKEY_derive_init(ctx);
  if (((iVar1 < 1) || (iVar1 = EVP_PKEY_derive_set_peer(ctx,param_3), iVar1 < 1)) ||
     (iVar1 = EVP_PKEY_derive(ctx,(uchar *)0x0,&local_38), iVar1 < 1)) {
    uVar2 = 0;
  }
  else {
    key = CRYPTO_malloc((int)local_38,"ssl/s3_lib.c",0xff3);
    if ((key == (uchar *)0x0) || (iVar1 = EVP_PKEY_derive(ctx,key,&local_38), iVar1 < 1)) {
      uVar2 = 0;
      goto LAB_00ac04c4;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      lVar3 = *(long *)(param_1 + 0x90);
      uVar2 = 1;
      *(uchar **)(lVar3 + 0x2a0) = key;
      *(size_t *)(lVar3 + 0x2a8) = local_38;
    }
    else {
      uVar2 = ssl_generate_master_secret(param_1,key,local_38,1);
    }
  }
  key = (uchar *)0x0;
LAB_00ac04c4:
  CRYPTO_clear_free(key,local_38,"ssl/s3_lib.c",0x1007);
  EVP_PKEY_CTX_free(ctx);
  return uVar2;
}

