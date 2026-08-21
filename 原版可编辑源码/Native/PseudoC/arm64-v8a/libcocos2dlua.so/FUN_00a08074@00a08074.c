
void FUN_00a08074(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
                    /* catch() { ... } // from try @ 00a07fd8 with catch @ 00a08078 */
                    /* catch() { ... } // from try @ 00a07fbc with catch @ 00a0807c
                       catch() { ... } // from try @ 00a08024 with catch @ 00a0807c */
  puVar1 = (void *)param_1[2];
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

