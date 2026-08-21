
int EVP_PKEY_assign(EVP_PKEY *pkey,int type,void *key)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((pkey != (EVP_PKEY *)0x0) &&
     (iVar1 = FUN_00b284f4(pkey,type,0,0xffffffff), uVar2 = 0, iVar1 != 0)) {
    uVar2 = (uint)(key != (void *)0x0);
    (pkey->pkey).ptr = key;
  }
  return uVar2;
}

