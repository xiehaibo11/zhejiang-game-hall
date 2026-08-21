
void FUN_00f9d390(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (void *)param_1[2];
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
                    /* try { // try from 00f9d3c0 to 0109d3eb has its CatchHandler @ 00f9d3c0
                       catch() { ... } // from try @ 00f9d3c0 with catch @ 00f9d3c0
                       catch() { ... } // from try @ 00f9d44c with catch @ 00f9d3c0 */
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

