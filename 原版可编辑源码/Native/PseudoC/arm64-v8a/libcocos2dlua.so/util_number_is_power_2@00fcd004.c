
/* util_number_is_power_2(unsigned int) */

bool util_number_is_power_2(uint param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = (param_1 - 1 | param_1) == (param_1 - 1 ^ param_1);
  }
  return bVar1;
}

