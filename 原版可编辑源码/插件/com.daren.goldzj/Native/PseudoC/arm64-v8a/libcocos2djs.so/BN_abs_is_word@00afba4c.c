
bool BN_abs_is_word(undefined8 *param_1,long param_2)

{
                    /* try { // try from 00afba58 to 00bfba6b has its CatchHandler @ 00afbbc8 */
  if ((*(int *)(param_1 + 1) == 1) && (*(long *)*param_1 == param_2)) {
                    /* try { // try from 00afba6c to 00bfba7f has its CatchHandler @ 00afbba8 */
    return true;
  }
  if (param_2 != 0) {
    return false;
  }
  return *(int *)(param_1 + 1) == 0;
}

