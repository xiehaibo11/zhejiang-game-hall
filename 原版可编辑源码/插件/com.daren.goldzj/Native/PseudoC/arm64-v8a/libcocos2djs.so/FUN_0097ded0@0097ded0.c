
void FUN_0097ded0(void *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  if ((long *)((long)param_1 + 0x10) == plVar1) {
                    /* try { // try from 0097df04 to 00a7df0b has its CatchHandler @ 0097dff4 */
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0097df0c;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_0097df0c:
  operator_delete(param_1);
  return;
}

