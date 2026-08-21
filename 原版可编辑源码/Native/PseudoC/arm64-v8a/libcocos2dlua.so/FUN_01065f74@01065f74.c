
void FUN_01065f74(long *param_1)

{
                    /* try { // try from 01065f7c to 01165f8f has its CatchHandler @ 01065fd8 */
  if (*param_1 != 0) {
                    /* try { // try from 01065f90 to 01166023 has its CatchHandler @ 01065f34 */
    (**(code **)(param_1[7] + 0x10))();
  }
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

