
DH * DHparams_dup(DH *param_1)

{
  int iVar1;
  DH *dh;
  
  dh = DH_new();
  if ((dh != (DH *)0x0) && (iVar1 = FUN_00b14090(dh,param_1,0xffffffff), iVar1 == 0)) {
    DH_free(dh);
    dh = (DH *)0x0;
  }
  return dh;
}

