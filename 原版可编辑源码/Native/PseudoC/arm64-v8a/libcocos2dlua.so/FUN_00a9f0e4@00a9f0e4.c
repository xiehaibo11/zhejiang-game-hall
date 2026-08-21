
void FUN_00a9f0e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (void *)param_1[2];
                    /* catch() { ... } // from try @ 00a9f08c with catch @ 00a9f0f8 */
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = (void *)*param_1;
                    /* try { // try from 00a9f130 to 00b9f19b has its CatchHandler @ 00a9f130
                       catch() { ... } // from try @ 00a9f130 with catch @ 00a9f130
                       catch() { ... } // from try @ 00a9f1b0 with catch @ 00a9f130 */
  *param_1 = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    return;
  }
  return;
}

