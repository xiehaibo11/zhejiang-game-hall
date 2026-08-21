
void FUN_00aa28f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  while (puVar4 != puVar2) {
    while( true ) {
      puVar1 = puVar4 + -3;
      puVar4 = puVar4 + -5;
      puVar1 = (void *)*puVar1;
      while (puVar1 != (void *)0x0) {
        pvVar3 = (void *)*puVar1;
        if ((*(byte *)(puVar1 + 5) & 1) != 0) {
                    /* try { // try from 00aa294c to 00ba2963 has its CatchHandler @ 00aa2b80 */
          operator_delete((void *)puVar1[7]);
        }
        if ((*(byte *)(puVar1 + 2) & 1) != 0) {
          operator_delete((void *)puVar1[4]);
        }
        operator_delete(puVar1);
        puVar1 = pvVar3;
      }
      pvVar3 = (void *)*puVar4;
                    /* try { // try from 00aa2968 to 00ba297f has its CatchHandler @ 00aa2b7c */
      *puVar4 = 0;
      if (pvVar3 == (void *)0x0) break;
      operator_delete(pvVar3);
      if (puVar4 == puVar2) goto LAB_00aa297c;
    }
  }
LAB_00aa297c:
  param_1[1] = puVar2;
                    /* try { // try from 00aa298c to 00ba29b7 has its CatchHandler @ 00aa2b78 */
  return;
}

