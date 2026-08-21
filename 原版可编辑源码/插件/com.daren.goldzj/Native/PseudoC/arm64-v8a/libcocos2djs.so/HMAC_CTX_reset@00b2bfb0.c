
undefined8 HMAC_CTX_reset(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  EVP_MD_CTX_reset(param_1[2]);
  EVP_MD_CTX_reset(param_1[3]);
  EVP_MD_CTX_reset(param_1[1]);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  OPENSSL_cleanse((void *)((long)param_1 + 0x24),0x80);
  if (param_1[2] == 0) {
    lVar1 = EVP_MD_CTX_new();
    param_1[2] = lVar1;
    if (lVar1 != 0) goto LAB_00b2c004;
LAB_00b2c038:
    EVP_MD_CTX_reset(param_1[2]);
    EVP_MD_CTX_reset(param_1[3]);
    EVP_MD_CTX_reset(param_1[1]);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    OPENSSL_cleanse((void *)((long)param_1 + 0x24),0x80);
    uVar2 = 0;
  }
  else {
LAB_00b2c004:
    if (param_1[3] == 0) {
      lVar1 = EVP_MD_CTX_new();
      param_1[3] = lVar1;
      if (lVar1 == 0) goto LAB_00b2c038;
    }
    if (param_1[1] == 0) {
      lVar1 = EVP_MD_CTX_new();
      param_1[1] = lVar1;
      if (lVar1 == 0) goto LAB_00b2c038;
    }
    *param_1 = 0;
    uVar2 = 1;
  }
  return uVar2;
}

