
void FUN_00b09d28(long param_1)

{
  EC_KEY_get0_group(*(EC_KEY **)(param_1 + 0x20));
  EC_GROUP_order_bits();
  return;
}

