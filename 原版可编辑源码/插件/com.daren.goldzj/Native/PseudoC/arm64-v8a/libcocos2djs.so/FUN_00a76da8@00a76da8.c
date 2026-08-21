
void FUN_00a76da8(undefined8 *param_1)

{
                    /* try { // try from 00a76dc0 to 00b76dfb has its CatchHandler @ 00a76ec4 */
  *param_1 = &PTR_FUN_01c6f050;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}

