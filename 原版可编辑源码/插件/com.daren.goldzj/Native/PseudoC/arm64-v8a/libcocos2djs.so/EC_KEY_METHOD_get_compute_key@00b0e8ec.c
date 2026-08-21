
void EC_KEY_METHOD_get_compute_key(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x48);
  }
  return;
}

