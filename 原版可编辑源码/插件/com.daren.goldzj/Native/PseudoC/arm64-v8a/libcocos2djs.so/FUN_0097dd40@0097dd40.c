
void FUN_0097dd40(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = (long *)param_1[6];
  *param_1 = &PTR_FUN_01c69fd8;
  if (param_1 + 2 == plVar1) {
                    /* try { // try from 0097dd80 to 00a7dd83 has its CatchHandler @ 0097de84 */
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0097dd88;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
                    /* try { // try from 0097dd84 to 00a7ddef has its CatchHandler @ 0097dd20 */
  (*pcVar2)();
LAB_0097dd88:
  operator_delete(param_1);
  return;
}

