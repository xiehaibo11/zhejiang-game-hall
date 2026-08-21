
bool BN_is_one(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) != 1) {
                    /* try { // try from 00afbab8 to 00bfbabf has its CatchHandler @ 00afbb68 */
    return false;
  }
  if (*(long *)*param_1 == 1) {
    return *(int *)(param_1 + 2) == 0;
  }
  return false;
}

