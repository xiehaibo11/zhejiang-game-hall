
void FUN_00a07c4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01c6ca68;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
                    /* try { // try from 00a07c7c to 00b07c8b has its CatchHandler @ 00a07d60 */
  operator_delete(param_1);
  return;
}

