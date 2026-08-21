
void FUN_00fce7c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
                    /* try { // try from 00fce7d0 to 010ce7d3 has its CatchHandler @ 00fce7f0 */
  puVar1 = (void *)param_1[2];
  while (puVar1 != (void *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fce7d0 with catch @ 00fce7f0
                        */
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 7) & 1) != 0) {
      operator_delete((void *)puVar1[9]);
    }
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
                    /* try { // try from 00fce838 to 010ce83b has its CatchHandler @ 00fce850 */
  return;
}

