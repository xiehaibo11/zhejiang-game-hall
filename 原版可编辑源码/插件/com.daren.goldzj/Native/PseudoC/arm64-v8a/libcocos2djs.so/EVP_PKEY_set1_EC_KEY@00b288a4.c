
int EVP_PKEY_set1_EC_KEY(EVP_PKEY *pkey,ec_key_st *key)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((pkey != (EVP_PKEY *)0x0) &&
     (iVar1 = FUN_00b284f4(pkey,0x198,0,0xffffffff), iVar2 = 0, iVar1 != 0)) {
    (pkey->pkey).ec = key;
    if (key == (ec_key_st *)0x0) {
      iVar2 = 0;
    }
    else {
      EC_KEY_up_ref(key);
      iVar2 = 1;
    }
  }
  return iVar2;
}

