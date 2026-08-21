
void FUN_00fd2730(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
                    /* try { // try from 00fd273c to 010d273f has its CatchHandler @ 00fd2750 */
  puVar1 = (void *)param_1[2];
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd273c with catch @ 00fd2750
                        */
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    return;
  }
                    /* try { // try from 00fd2798 to 010d279b has its CatchHandler @ 00fd27b4 */
  return;
}

