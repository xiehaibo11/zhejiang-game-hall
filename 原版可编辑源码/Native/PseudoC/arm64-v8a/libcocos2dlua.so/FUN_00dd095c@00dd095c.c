
void FUN_00dd095c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  void *pvVar3;
  code *pcVar4;
  
  puVar1 = (void *)param_1[2];
  do {
    if (puVar1 == (void *)0x0) {
      pvVar3 = (void *)*param_1;
      *param_1 = 0;
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
        return;
      }
      return;
    }
    plVar2 = (long *)puVar1[0xc];
    pvVar3 = (void *)*puVar1;
    if (puVar1 + 8 == plVar2) {
                    /* try { // try from 00dd09b4 to 00ed09f3 has its CatchHandler @ 00dd0f44 */
      pcVar4 = *(code **)(*plVar2 + 0x20);
LAB_00dd09b8:
      (*pcVar4)();
    }
    else if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x28);
                    /* try { // try from 00dd09ac to 00ed09b3 has its CatchHandler @ 00dd0ee0 */
      goto LAB_00dd09b8;
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar3;
  } while( true );
}

