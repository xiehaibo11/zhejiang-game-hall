
void ec_GFp_mont_group_clear_finish(long param_1)

{
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  BN_clear_free(*(BIGNUM **)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  ec_GFp_simple_group_clear_finish(param_1);
  return;
}

