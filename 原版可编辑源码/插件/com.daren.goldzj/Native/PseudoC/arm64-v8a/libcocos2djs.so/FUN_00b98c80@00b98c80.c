
int FUN_00b98c80(undefined8 *param_1,EVP_PKEY *param_2)

{
  int iVar1;
  DH *key;
  
  if (param_1[2] == 0) {
    ERR_put_error(5,0x71,0x6b,"crypto/dh/dh_pmeth.c",0x16c);
  }
  else {
    key = DH_new();
    if (key != (DH *)0x0) {
      EVP_PKEY_assign(param_2,*(int *)*param_1,key);
      iVar1 = EVP_PKEY_copy_parameters(param_2,(EVP_PKEY *)param_1[2]);
      if (iVar1 != 0) {
        iVar1 = DH_generate_key((DH *)(param_2->pkey).rsa);
        return iVar1;
      }
    }
  }
  return 0;
}

