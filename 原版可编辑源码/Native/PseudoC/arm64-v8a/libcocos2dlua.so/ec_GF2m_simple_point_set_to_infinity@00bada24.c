
undefined8 ec_GF2m_simple_point_set_to_infinity(undefined8 param_1,long param_2)

{
                    /* try { // try from 00bada24 to 00cada2f has its CatchHandler @ 00badc20 */
  *(undefined4 *)(param_2 + 0x20) = 0;
  BN_set_word(*(BIGNUM **)(param_2 + 0x18),0);
                    /* try { // try from 00bada3c to 00cada47 has its CatchHandler @ 00badc10 */
  return 1;
}

