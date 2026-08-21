
int EVP_PKEY_set1_RSA(EVP_PKEY *pkey,rsa_st *key)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((pkey != (EVP_PKEY *)0x0) &&
     (iVar1 = FUN_00b284f4(pkey,6,0,0xffffffff), iVar2 = 0, iVar1 != 0)) {
    (pkey->pkey).rsa = key;
    if (key == (rsa_st *)0x0) {
      iVar2 = 0;
    }
    else {
      RSA_up_ref(key);
      iVar2 = 1;
    }
  }
  return iVar2;
}

