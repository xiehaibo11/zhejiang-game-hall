
bool BN_abs_is_word(undefined8 *param_1,long param_2)

{
  if ((*(int *)(param_1 + 1) == 1) && (*(long *)*param_1 == param_2)) {
    return true;
  }
  if (param_2 != 0) {
    return false;
  }
  return *(int *)(param_1 + 1) == 0;
}

