
void FUN_00f7a03c(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = (long *)param_1[0xe];
  *param_1 = &PTR_FUN_01721708;
  if (param_1 + 10 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00f7a084;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00f7a084:
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[6]);
  return;
}

