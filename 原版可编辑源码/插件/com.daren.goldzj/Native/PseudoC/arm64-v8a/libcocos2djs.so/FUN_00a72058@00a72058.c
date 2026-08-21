
void FUN_00a72058(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01c6ece0;
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    operator_delete((void *)param_1[5]);
  }
                    /* try { // try from 00a72088 to 00b7209f has its CatchHandler @ 00a72254 */
  operator_delete(param_1);
  return;
}

