
void FUN_00fdb3e8(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  void *pvVar3;
  long *plVar4;
  
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 2) == '\0') goto LAB_00fdb464;
  if ((*(char *)((long)pvVar3 + 0x30) != '\0') &&
     (plVar4 = *(long **)((long)pvVar3 + 0x38), plVar4 != (long *)0x0)) {
    plVar1 = (long *)plVar4[4];
    if (plVar4 == plVar1) {
      pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00fdb448:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fdb42c with catch @ 00fdb448
                        */
      (*pcVar2)();
    }
    else if (plVar1 != (long *)0x0) {
                    /* try { // try from 00fdb42c to 010db42f has its CatchHandler @ 00fdb448 */
      pcVar2 = *(code **)(*plVar1 + 0x28);
      goto LAB_00fdb448;
    }
    operator_delete(plVar4);
  }
  if ((*(byte *)((long)pvVar3 + 0x10) & 1) != 0) {
    operator_delete(*(void **)((long)pvVar3 + 0x20));
  }
LAB_00fdb464:
  operator_delete(pvVar3);
  return;
}

