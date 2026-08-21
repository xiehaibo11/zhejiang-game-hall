
int X509_TRUST_get_by_id(int id)

{
  int iVar1;
  uint uVar2;
  int local_38 [10];
  
  uVar2 = id - 1;
  if (7 < uVar2) {
    if (DAT_01d3b210 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      local_38[0] = id;
      iVar1 = OPENSSL_sk_find(DAT_01d3b210,local_38);
      uVar2 = iVar1 + 8;
      if (iVar1 == -1) {
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}

