
void FUN_00fd65f4(undefined8 *param_1)

{
  void *pvVar1;
  
                    /* catch() { ... } // from try @ 00fd6564 with catch @ 00fd65f8 */
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

