
void FUN_00a07c2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01c6ca68;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
                    /* try { // try from 00a07c40 to 00b07c73 has its CatchHandler @ 00a07d64 */
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}

