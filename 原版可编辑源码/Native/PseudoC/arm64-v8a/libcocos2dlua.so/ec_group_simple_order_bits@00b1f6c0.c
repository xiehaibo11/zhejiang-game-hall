
int ec_group_simple_order_bits(long param_1)

{
  int iVar1;
  
  if (*(BIGNUM **)(param_1 + 0x10) != (BIGNUM *)0x0) {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10));
    return iVar1;
  }
  return 0;
}

