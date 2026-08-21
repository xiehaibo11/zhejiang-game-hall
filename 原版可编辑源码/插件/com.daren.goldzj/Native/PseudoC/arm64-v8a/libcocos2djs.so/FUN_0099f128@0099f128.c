
void FUN_0099f128(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = (long *)param_1[6];
  *param_1 = &PTR_FUN_01c6a6c0;
  if (param_1 + 2 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0099f170;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_0099f170:
  operator_delete(param_1);
  return;
}

