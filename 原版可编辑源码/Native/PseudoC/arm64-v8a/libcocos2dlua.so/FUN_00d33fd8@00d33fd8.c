
void FUN_00d33fd8(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (void *)param_1[2];
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
                    /* try { // try from 00d33ffc to 00e33fff has its CatchHandler @ 00d340b8 */
    operator_delete(puVar1);
                    /* try { // try from 00d34000 to 00e340ef has its CatchHandler @ 00d33ec4 */
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

