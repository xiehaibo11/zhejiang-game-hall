
void FUN_00a5f374(undefined8 *param_1)

{
  byte bVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 2) == '\0') goto LAB_00a5f3bc;
  if ((*(byte *)((long)pvVar2 + 0x58) & 1) == 0) {
                    /* catch() { ... } // from try @ 00a5f274 with catch @ 00a5f39c */
                    /* catch() { ... } // from try @ 00a5f268 with catch @ 00a5f3a0 */
    if ((*(byte *)((long)pvVar2 + 0x40) & 1) == 0) goto LAB_00a5f3a4;
LAB_00a5f3e8:
    operator_delete(*(void **)((long)pvVar2 + 0x50));
    if ((*(byte *)((long)pvVar2 + 0x28) & 1) != 0) goto LAB_00a5f3f8;
LAB_00a5f3ac:
    bVar1 = *(byte *)((long)pvVar2 + 0x10);
  }
  else {
    operator_delete(*(void **)((long)pvVar2 + 0x68));
    if ((*(byte *)((long)pvVar2 + 0x40) & 1) != 0) goto LAB_00a5f3e8;
LAB_00a5f3a4:
                    /* catch() { ... } // from try @ 00a5f27c with catch @ 00a5f3a8 */
    if ((*(byte *)((long)pvVar2 + 0x28) & 1) == 0) goto LAB_00a5f3ac;
LAB_00a5f3f8:
    operator_delete(*(void **)((long)pvVar2 + 0x38));
    bVar1 = *(byte *)((long)pvVar2 + 0x10);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)((long)pvVar2 + 0x20));
  }
LAB_00a5f3bc:
                    /* try { // try from 00a5f3c4 to 00b5f417 has its CatchHandler @ 00a5f3c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00a5f3c4 with catch @ 00a5f3c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00a5f57c with catch @ 00a5f3c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00a5f630 with catch @ 00a5f3c4
                        */
  operator_delete(pvVar2);
  return;
}

