
void FUN_00d3f018(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
                    /* try { // try from 00d3f020 to 00e3f027 has its CatchHandler @ 00d3f090 */
  puVar1 = (void *)param_1[2];
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
    operator_delete(pvVar2);
    return;
  }
  return;
}

