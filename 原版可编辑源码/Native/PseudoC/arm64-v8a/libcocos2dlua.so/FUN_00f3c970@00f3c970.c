
void FUN_00f3c970(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
                    /* catch() { ... } // from try @ 00f3c9ac with catch @ 00f3c980 */
    operator_delete(pvVar1);
    return;
  }
  return;
}

