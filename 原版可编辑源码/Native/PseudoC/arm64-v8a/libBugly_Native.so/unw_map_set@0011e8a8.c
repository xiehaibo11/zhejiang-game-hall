
void unw_map_set(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x32a98) = *param_2;
    return;
  }
  *(undefined8 *)(param_1 + 0x32a98) = 0;
  return;
}

