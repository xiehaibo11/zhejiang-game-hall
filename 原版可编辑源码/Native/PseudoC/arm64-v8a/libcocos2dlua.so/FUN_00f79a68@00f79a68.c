
void FUN_00f79a68(undefined8 *param_1)

{
  byte bVar1;
  long *plVar2;
  code *pcVar3;
  
  plVar2 = (long *)param_1[0x12];
  *param_1 = &PTR_FUN_01721590;
  if (param_1 + 0xe == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_00f79ab0;
    pcVar3 = *(code **)(*plVar2 + 0x28);
  }
  (*pcVar3)();
LAB_00f79ab0:
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 7);
  }
  else {
    operator_delete((void *)param_1[0xc]);
    bVar1 = *(byte *)(param_1 + 7);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  operator_delete(param_1);
  return;
}

