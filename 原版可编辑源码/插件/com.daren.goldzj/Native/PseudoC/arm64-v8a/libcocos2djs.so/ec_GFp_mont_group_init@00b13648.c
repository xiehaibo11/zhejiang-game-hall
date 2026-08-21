
void ec_GFp_mont_group_init(long param_1)

{
  ec_GFp_simple_group_init();
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}

