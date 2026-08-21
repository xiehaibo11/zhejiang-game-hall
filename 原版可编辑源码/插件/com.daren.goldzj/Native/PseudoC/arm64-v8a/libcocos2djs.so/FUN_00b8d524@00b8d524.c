
bool FUN_00b8d524(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  CMAC_CTX *out;
  
  out = CMAC_CTX_new();
  *(CMAC_CTX **)(param_1 + 0x28) = out;
  bVar1 = false;
  if (out != (CMAC_CTX *)0x0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    iVar2 = CMAC_CTX_copy(out,*(CMAC_CTX **)(param_2 + 0x28));
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}

