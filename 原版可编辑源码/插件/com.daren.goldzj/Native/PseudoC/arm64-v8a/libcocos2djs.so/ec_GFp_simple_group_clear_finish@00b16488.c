
void ec_GFp_simple_group_clear_finish(long param_1)

{
  BN_clear_free(*(BIGNUM **)(param_1 + 0x40));
  BN_clear_free(*(BIGNUM **)(param_1 + 0x60));
  BN_clear_free(*(BIGNUM **)(param_1 + 0x68));
  return;
}

