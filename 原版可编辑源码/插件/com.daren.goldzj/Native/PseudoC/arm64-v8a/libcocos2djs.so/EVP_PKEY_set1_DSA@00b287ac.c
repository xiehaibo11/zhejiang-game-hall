
int EVP_PKEY_set1_DSA(EVP_PKEY *pkey,dsa_st *key)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((pkey != (EVP_PKEY *)0x0) &&
     (iVar1 = FUN_00b284f4(pkey,0x74,0,0xffffffff), iVar2 = 0, iVar1 != 0)) {
    (pkey->pkey).dsa = key;
    if (key == (dsa_st *)0x0) {
      iVar2 = 0;
    }
    else {
      DSA_up_ref(key);
      iVar2 = 1;
    }
  }
  return iVar2;
}

