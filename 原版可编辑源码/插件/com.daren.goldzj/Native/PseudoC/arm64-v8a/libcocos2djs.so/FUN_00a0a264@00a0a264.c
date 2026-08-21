
void FUN_00a0a264(undefined8 *param_1)

{
                    /* catch() { ... } // from try @ 00a0a128 with catch @ 00a0a270 */
                    /* catch() { ... } // from try @ 00a0a1b0 with catch @ 00a0a280 */
  *param_1 = &PTR_FUN_01c6cdc8;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}

