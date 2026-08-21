
void FUN_00df8570(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = (long *)param_1[0x12];
  *param_1 = &PTR_FUN_016e7bb0;
  if (param_1 + 0xe == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00df85b4:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_00df85b4;
  }
  plVar1 = (long *)param_1[0xc];
  if (param_1 + 8 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00df85e0:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_00df85e0;
  }
  plVar1 = (long *)param_1[6];
  if (param_1 + 2 == plVar1) {
                    /* try { // try from 00df8608 to 00ef860f has its CatchHandler @ 00df9050 */
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00df8610;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00df8610:
                    /* try { // try from 00df8614 to 00ef8627 has its CatchHandler @ 00df904c */
  operator_delete(param_1);
  return;
}

