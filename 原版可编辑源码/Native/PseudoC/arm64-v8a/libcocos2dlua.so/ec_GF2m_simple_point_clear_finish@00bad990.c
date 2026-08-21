
void ec_GF2m_simple_point_clear_finish(long param_1)

{
                    /* try { // try from 00bad9a4 to 00cad9af has its CatchHandler @ 00badc2c */
  BN_clear_free(*(BIGNUM **)(param_1 + 8));
  BN_clear_free(*(BIGNUM **)(param_1 + 0x10));
  BN_clear_free(*(BIGNUM **)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

