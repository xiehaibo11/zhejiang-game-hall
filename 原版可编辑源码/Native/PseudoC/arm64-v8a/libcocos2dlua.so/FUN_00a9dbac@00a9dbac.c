
void FUN_00a9dbac(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  void *pvVar3;
  code *pcVar4;
  
                    /* try { // try from 00a9dbb0 to 00b9dc23 has its CatchHandler @ 00a9dbb0
                       catch() { ... } // from try @ 00a9dbb0 with catch @ 00a9dbb0
                       catch() { ... } // from try @ 00a9dc28 with catch @ 00a9dbb0 */
  puVar1 = (void *)param_1[2];
  do {
    if (puVar1 == (void *)0x0) {
      pvVar3 = (void *)*param_1;
                    /* try { // try from 00a9dc24 to 00b9dc27 has its CatchHandler @ 00a9dc78 */
      *param_1 = 0;
                    /* try { // try from 00a9dc28 to 00b9dc93 has its CatchHandler @ 00a9dbb0 */
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
        return;
      }
      return;
    }
    plVar2 = (long *)puVar1[10];
    pvVar3 = (void *)*puVar1;
    if (puVar1 + 6 == plVar2) {
      pcVar4 = *(code **)(*plVar2 + 0x20);
LAB_00a9dc08:
      (*pcVar4)();
    }
    else if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x28);
      goto LAB_00a9dc08;
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar3;
  } while( true );
}

