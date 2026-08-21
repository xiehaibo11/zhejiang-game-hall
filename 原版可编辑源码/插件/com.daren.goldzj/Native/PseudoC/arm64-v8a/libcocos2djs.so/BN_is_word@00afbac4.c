
bool BN_is_word(undefined8 *param_1,long param_2)

{
  if ((*(int *)(param_1 + 1) == 1) && (*(long *)*param_1 == param_2)) {
    if (param_2 != 0) {
      return *(int *)(param_1 + 2) == 0;
    }
    return true;
  }
  if (param_2 != 0) {
                    /* try { // try from 00afbaf8 to 00bfbafb has its CatchHandler @ 00afbb64 */
                    /* try { // try from 00afbafc to 00bfbbf3 has its CatchHandler @ 00afb9f8 */
    return false;
  }
  return *(int *)(param_1 + 1) == 0;
}

