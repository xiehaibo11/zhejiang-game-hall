
undefined8 FUN_00b43c88(undefined8 *param_1,int *param_2,void *param_3,EVP_PKEY *param_4)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  uchar *out;
  int line;
  undefined8 uVar2;
  int local_38 [2];
  
  ctx = EVP_PKEY_CTX_new(param_4,(ENGINE *)0x0);
  if (ctx == (EVP_PKEY_CTX *)0x0) {
    return 0xffffffff;
  }
  iVar1 = EVP_PKEY_decrypt_init(ctx);
  if (0 < iVar1) {
    iVar1 = EVP_PKEY_CTX_ctrl(ctx,-1,0x200,4,0,param_3);
    if (iVar1 < 1) {
      iVar1 = 0x98;
      line = 0x9d;
    }
    else {
      iVar1 = EVP_PKEY_decrypt(ctx,(uchar *)0x0,(size_t *)local_38,
                               *(uchar **)(*(int **)((long)param_3 + 0x18) + 2),
                               (long)**(int **)((long)param_3 + 0x18));
      if (iVar1 < 1) goto LAB_00b43dc0;
      out = CRYPTO_malloc(local_38[0],"crypto/pkcs7/pk7_doit.c",0xa5);
      if (out != (uchar *)0x0) {
        iVar1 = EVP_PKEY_decrypt(ctx,out,(size_t *)local_38,
                                 *(uchar **)(*(int **)((long)param_3 + 0x18) + 2),
                                 (long)**(int **)((long)param_3 + 0x18));
        if (iVar1 < 1) {
          ERR_put_error(0x21,0x85,6,"crypto/pkcs7/pk7_doit.c",0xaf);
          EVP_PKEY_CTX_free(ctx);
          CRYPTO_free(out);
          return 0;
        }
        CRYPTO_clear_free(*param_1,(long)*param_2,"crypto/pkcs7/pk7_doit.c",0xb5);
        *param_1 = out;
        *param_2 = local_38[0];
        uVar2 = 1;
        goto LAB_00b43dc4;
      }
      iVar1 = 0x41;
      line = 0xa8;
    }
    ERR_put_error(0x21,0x85,iVar1,"crypto/pkcs7/pk7_doit.c",line);
  }
LAB_00b43dc0:
  uVar2 = 0xffffffff;
LAB_00b43dc4:
  EVP_PKEY_CTX_free(ctx);
  return uVar2;
}

