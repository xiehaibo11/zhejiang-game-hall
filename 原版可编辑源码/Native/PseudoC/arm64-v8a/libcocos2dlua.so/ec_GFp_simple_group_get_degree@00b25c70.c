
int ec_GFp_simple_group_get_degree(long param_1)

{
  int iVar1;
  
  iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x40));
  return iVar1;
}

