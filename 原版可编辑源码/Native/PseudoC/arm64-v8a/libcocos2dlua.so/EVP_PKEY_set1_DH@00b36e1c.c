
int EVP_PKEY_set1_DH(EVP_PKEY *pkey,dh_st *key)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((pkey != (EVP_PKEY *)0x0) &&
     (iVar1 = FUN_00b36974(pkey,0x1c,0,0xffffffff), iVar2 = 0, iVar1 != 0)) {
    (pkey->pkey).dh = key;
    if (key == (dh_st *)0x0) {
      iVar2 = 0;
    }
    else {
      DH_up_ref(key);
      iVar2 = 1;
    }
  }
  return iVar2;
}

