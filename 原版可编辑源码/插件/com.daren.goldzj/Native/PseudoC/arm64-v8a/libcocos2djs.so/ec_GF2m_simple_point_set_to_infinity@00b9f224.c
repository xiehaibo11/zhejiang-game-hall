
undefined8 ec_GF2m_simple_point_set_to_infinity(undefined8 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x20) = 0;
  BN_set_word(*(BIGNUM **)(param_2 + 0x18),0);
  return 1;
}

