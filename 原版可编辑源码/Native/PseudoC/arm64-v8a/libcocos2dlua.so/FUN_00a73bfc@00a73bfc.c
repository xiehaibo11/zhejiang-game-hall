
void FUN_00a73bfc(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* try { // try from 00a73c10 to 00b73cc3 has its CatchHandler @ 00a73b00 */
  return;
}

