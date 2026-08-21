
void FUN_00f9d3dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
                    /* try { // try from 00f9d3ec to 0109d3ef has its CatchHandler @ 00f9d48c */
  puVar1 = (void *)param_1[2];
                    /* try { // try from 00f9d3f0 to 0109d3f7 has its CatchHandler @ 00f9d47c */
  while (puVar1 != (void *)0x0) {
                    /* try { // try from 00f9d410 to 0109d44b has its CatchHandler @ 00f9d44c */
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
    operator_delete(pvVar2);
    return;
  }
                    /* catch() { ... } // from try @ 00f9d410 with catch @ 00f9d44c
                       try { // try from 00f9d44c to 0109d49f has its CatchHandler @ 00f9d3c0 */
  return;
}

