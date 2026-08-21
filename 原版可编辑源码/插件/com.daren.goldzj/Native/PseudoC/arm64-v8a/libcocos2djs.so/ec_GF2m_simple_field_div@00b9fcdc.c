
void ec_GF2m_simple_field_div(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BN_GF2m_mod_div(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x40));
  return;
}

