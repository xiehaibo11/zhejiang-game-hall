
void FUN_0097e534(void *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = *(long **)((long)param_1 + 0x50);
  if ((long *)((long)param_1 + 0x30) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0097e570;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_0097e570:
  if ((*(byte *)((long)param_1 + 0x10) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x20));
  }
  operator_delete(param_1);
  return;
}

