
void FUN_00f7a1a0(long param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = *(long **)(param_1 + 0x70);
  if ((long *)(param_1 + 0x50) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00f7a1dc;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00f7a1dc:
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x30));
  return;
}

