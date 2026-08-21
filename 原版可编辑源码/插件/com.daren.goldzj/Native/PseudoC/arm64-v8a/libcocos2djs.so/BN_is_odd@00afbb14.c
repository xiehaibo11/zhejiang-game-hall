
uint BN_is_odd(undefined8 *param_1)

{
  if (0 < *(int *)(param_1 + 1)) {
    return *(uint *)*param_1 & 1;
  }
  return 0;
}

