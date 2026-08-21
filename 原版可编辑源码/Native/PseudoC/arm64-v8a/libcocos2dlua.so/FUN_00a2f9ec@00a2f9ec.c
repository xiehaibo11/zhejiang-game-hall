
void FUN_00a2f9ec(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  param_1[2] = lVar1 + -1;
  if (lVar1 + -1 != 0) {
                    /* try { // try from 00a2fa10 to 00b2fa67 has its CatchHandler @ 00a2fa10
                       catch() { ... } // from try @ 00a2fa10 with catch @ 00a2fa10
                       catch() { ... } // from try @ 00a2fa6c with catch @ 00a2fa10 */
    return;
  }
  FUN_00a2bcc4(*param_1);
  (*(code *)PTR_free_01769a00)(param_1);
  return;
}

