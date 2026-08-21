
void FUN_00e6e130(void *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  if ((*(byte *)((long)param_1 + 0x50) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x60));
  }
  plVar1 = *(long **)((long)param_1 + 0x40);
  if ((long *)((long)param_1 + 0x20) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00e6e17c;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00e6e17c:
  operator_delete(param_1);
  return;
}

