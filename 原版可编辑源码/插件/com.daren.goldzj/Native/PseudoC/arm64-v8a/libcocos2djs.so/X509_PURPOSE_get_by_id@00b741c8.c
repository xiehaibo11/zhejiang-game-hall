
int X509_PURPOSE_get_by_id(int id)

{
  int iVar1;
  uint uVar2;
  int local_40 [12];
  
  uVar2 = id - 1;
  if (8 < uVar2) {
    if (DAT_01d3b228 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      local_40[0] = id;
      iVar1 = OPENSSL_sk_find(DAT_01d3b228,local_40);
      uVar2 = iVar1 + 9;
      if (iVar1 == -1) {
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}

