
void FUN_00a0a244(undefined8 *param_1)

{
                    /* catch() { ... } // from try @ 00a0a160 with catch @ 00a0a248 */
  *param_1 = &PTR_FUN_01c6cdc8;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}

