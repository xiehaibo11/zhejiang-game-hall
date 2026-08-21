
void FUN_00914314(undefined8 *param_1)

{
  void *pvVar1;
  
                    /* catch() { ... } // from try @ 009141ec with catch @ 00914314
                       catch() { ... } // from try @ 0091428c with catch @ 00914314 */
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

