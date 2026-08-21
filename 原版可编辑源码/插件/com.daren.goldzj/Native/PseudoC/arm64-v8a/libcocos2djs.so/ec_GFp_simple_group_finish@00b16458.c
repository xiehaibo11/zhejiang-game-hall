
void ec_GFp_simple_group_finish(long param_1)

{
  BN_free(*(BIGNUM **)(param_1 + 0x40));
  BN_free(*(BIGNUM **)(param_1 + 0x60));
  BN_free(*(BIGNUM **)(param_1 + 0x68));
  return;
}

