
void FUN_00f79c04(void *param_1)

{
  byte bVar1;
  long *plVar2;
  code *pcVar3;
  
  plVar2 = *(long **)((long)param_1 + 0x90);
  if ((long *)((long)param_1 + 0x70) == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_00f79c40;
    pcVar3 = *(code **)(*plVar2 + 0x28);
  }
  (*pcVar3)();
LAB_00f79c40:
  if ((*(byte *)((long)param_1 + 0x50) & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x38);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x60));
    bVar1 = *(byte *)((long)param_1 + 0x38);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x48));
    bVar1 = *(byte *)((long)param_1 + 0x20);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  operator_delete(param_1);
  return;
}

