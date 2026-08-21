
bool FUN_00b07218(long param_1,long param_2)

{
  int iVar1;
  
                    /* try { // try from 00b07220 to 00c07227 has its CatchHandler @ 00b0731c */
  iVar1 = BN_cmp(*(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x28),
                 *(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x28));
  return iVar1 == 0;
}

