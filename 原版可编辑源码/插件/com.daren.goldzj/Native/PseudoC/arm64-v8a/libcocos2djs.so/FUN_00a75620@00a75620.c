
void FUN_00a75620(undefined8 *param_1)

{
                    /* try { // try from 00a75638 to 00b75653 has its CatchHandler @ 00a75834 */
  *param_1 = &PTR_FUN_01c6eed0;
  FUN_00a757a4(param_1 + 1);
  operator_delete(param_1);
  return;
}

