
bool FUN_00b55f04(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = BN_cmp(*(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x20),
                 *(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x20));
  if (iVar2 == 0) {
    iVar2 = BN_cmp(*(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x28),
                   *(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x28));
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

