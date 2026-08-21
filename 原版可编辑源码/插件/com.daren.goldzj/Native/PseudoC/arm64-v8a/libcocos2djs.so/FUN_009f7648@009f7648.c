
void FUN_009f7648(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = (long *)param_1[8];
                    /* try { // try from 009f765c to 00af76ab has its CatchHandler @ 009f7844 */
  *param_1 = &PTR_FUN_01c6c478;
  if (param_1 + 4 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_009f7690;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_009f7690:
  operator_delete(param_1);
  return;
}

