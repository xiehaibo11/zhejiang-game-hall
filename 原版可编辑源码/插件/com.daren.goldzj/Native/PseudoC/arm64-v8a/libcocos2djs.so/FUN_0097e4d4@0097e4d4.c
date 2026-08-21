
void FUN_0097e4d4(long param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = *(long **)(param_1 + 0x50);
  if ((long *)(param_1 + 0x30) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0097e510;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_0097e510:
                    /* catch() { ... } // from try @ 0097e6b4 with catch @ 0097e510 */
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x20));
  return;
}

