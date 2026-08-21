
undefined4 tls12_get_sigid(EVP_PKEY *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = EVP_PKEY_id(param_1);
  if (iVar1 < 0x32b) {
    if (iVar1 == 6) {
      lVar2 = 0;
    }
    else if (iVar1 == 0x74) {
      lVar2 = 1;
    }
    else {
      if (iVar1 != 0x198) {
        return 0xffffffff;
      }
      lVar2 = 2;
    }
  }
  else if (iVar1 == 0x32b) {
    lVar2 = 3;
  }
  else if (iVar1 == 0x3d3) {
    lVar2 = 4;
  }
  else {
    if (iVar1 != 0x3d4) {
      return 0xffffffff;
    }
    lVar2 = 5;
  }
  return (&DAT_018a53a0)[lVar2 * 2];
}

