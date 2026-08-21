
int FUN_00ba8e70(long param_1,EVP_PKEY *param_2)

{
  int iVar1;
  DSA *key;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    ERR_put_error(10,0x79,0x6b,"crypto/dsa/dsa_pmeth.c",0xe5);
  }
  else {
    key = DSA_new();
    if (key != (DSA *)0x0) {
      EVP_PKEY_assign(param_2,0x74,key);
      iVar1 = EVP_PKEY_copy_parameters(param_2,*(EVP_PKEY **)(param_1 + 0x10));
      if (iVar1 != 0) {
        iVar1 = DSA_generate_key((DSA *)(param_2->pkey).rsa);
        return iVar1;
      }
    }
  }
  return 0;
}

