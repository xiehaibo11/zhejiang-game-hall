
void FUN_00a75ab0(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  *param_1 = &PTR_FUN_01c6ef50;
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    operator_delete((void *)param_1[0xc]);
  }
  plVar1 = (long *)param_1[8];
  if (param_1 + 4 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00a75b08;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00a75b08:
  operator_delete(param_1);
  return;
}

