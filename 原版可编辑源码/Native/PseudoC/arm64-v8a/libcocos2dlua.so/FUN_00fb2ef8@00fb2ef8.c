
void FUN_00fb2ef8(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar4 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar4 != plVar3) {
    do {
      plVar1 = (long *)plVar4[-2];
      plVar4 = plVar4 + -6;
      if (plVar4 == plVar1) {
        pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00fb2f30:
        (*pcVar2)();
      }
      else if (plVar1 != (long *)0x0) {
        pcVar2 = *(code **)(*plVar1 + 0x28);
        goto LAB_00fb2f30;
      }
    } while (plVar3 != plVar4);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
  operator_delete(plVar1);
  return;
}

