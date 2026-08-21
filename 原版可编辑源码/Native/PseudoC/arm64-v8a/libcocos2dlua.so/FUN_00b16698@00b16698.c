
bool FUN_00b16698(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = BN_cmp(*(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x28),
                 *(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x28));
  return iVar1 == 0;
}

