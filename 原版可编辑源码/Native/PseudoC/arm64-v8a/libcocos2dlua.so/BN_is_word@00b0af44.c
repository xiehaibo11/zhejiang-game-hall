
bool BN_is_word(undefined8 *param_1,long param_2)

{
  if ((*(int *)(param_1 + 1) == 1) && (*(long *)*param_1 == param_2)) {
    if (param_2 != 0) {
      return *(int *)(param_1 + 2) == 0;
    }
    return true;
  }
  if (param_2 != 0) {
    return false;
  }
                    /* try { // try from 00b0af84 to 00c0afb7 has its CatchHandler @ 00b0aff4 */
  return *(int *)(param_1 + 1) == 0;
}

