
void FUN_00f04960(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (void *)param_1[2];
                    /* try { // try from 00f04974 to 0100497b has its CatchHandler @ 00f049b8 */
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 != (void *)0x0) {
                    /* catch() { ... } // from try @ 00f04974 with catch @ 00f049b8 */
                    /* try { // try from 00f049c0 to 010049ff has its CatchHandler @ 00f049c0
                       catch() { ... } // from try @ 00f049c0 with catch @ 00f049c0
                       catch() { ... } // from try @ 00f04b3c with catch @ 00f049c0
                       catch() { ... } // from try @ 00f04e48 with catch @ 00f049c0 */
    operator_delete(pvVar2);
    return;
  }
  return;
}

