
void FUN_00d9e4f0(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = (long *)param_1[6];
  *param_1 = &PTR_FUN_016d7d20;
  if (param_1 + 2 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00d9e538;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00d9e538:
                    /* try { // try from 00d9e538 to 00e9e547 has its CatchHandler @ 00d9f300 */
  operator_delete(param_1);
  return;
}

