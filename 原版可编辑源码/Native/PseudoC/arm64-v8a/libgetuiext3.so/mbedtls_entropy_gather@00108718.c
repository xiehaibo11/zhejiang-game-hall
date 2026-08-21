
ulong mbedtls_entropy_gather(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = (*pcRam0000000000000000)(param_1 + 0x400);
  if ((int)uVar3 == 0) {
    uVar1 = FUN_0010877c(param_1);
    iVar2 = (*pcRam0000000000000000)(param_1 + 0x400);
    if (iVar2 != 0) {
      uVar1 = 0xffffffe2;
    }
    uVar3 = (ulong)uVar1;
  }
  return uVar3;
}

