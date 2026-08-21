
void FUN_00efc9a4(undefined8 *param_1)

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
  if (pvVar2 == (void *)0x0) {
                    /* try { // try from 00efc9e8 to 00ffc9ef has its CatchHandler @ 00efcbdc */
    return;
  }
  operator_delete(pvVar2);
  return;
}

