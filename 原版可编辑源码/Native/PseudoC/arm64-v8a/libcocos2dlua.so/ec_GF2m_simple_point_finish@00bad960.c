
void ec_GF2m_simple_point_finish(long param_1)

{
                    /* try { // try from 00bad968 to 00cad973 has its CatchHandler @ 00badc24 */
  BN_free(*(BIGNUM **)(param_1 + 8));
                    /* try { // try from 00bad97c to 00cad987 has its CatchHandler @ 00badc4c */
  BN_free(*(BIGNUM **)(param_1 + 0x10));
                    /* try { // try from 00bad98c to 00cad997 has its CatchHandler @ 00badc48 */
  BN_free(*(BIGNUM **)(param_1 + 0x18));
  return;
}

