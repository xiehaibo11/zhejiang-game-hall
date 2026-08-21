
void FUN_00a01444(undefined8 *param_1)

{
  void *pvVar1;
  
                    /* catch() { ... } // from try @ 00a01150 with catch @ 00a01448 */
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* catch() { ... } // from try @ 00a0113c with catch @ 00a01458 */
  return;
}

