
void FUN_0088dccc(undefined8 *param_1)

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
LAB_0088dd20:
        (*pcVar2)();
      }
      else if (plVar1 != (long *)0x0) {
        pcVar2 = *(code **)(*plVar1 + 0x28);
        goto LAB_0088dd20;
      }
    } while (plVar3 != plVar4);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
  operator_delete(plVar1);
  return;
}

