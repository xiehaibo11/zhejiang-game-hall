
void FUN_00a72ec8(void *param_1)

{
  long *plVar1;
  code *pcVar2;
  
                    /* try { // try from 00a72ed0 to 00b72f23 has its CatchHandler @ 00a72ed0
                       catch() { ... } // from try @ 00a72ed0 with catch @ 00a72ed0
                       catch() { ... } // from try @ 00a730bc with catch @ 00a72ed0 */
  plVar1 = *(long **)((long)param_1 + 0x30);
  if ((long *)((long)param_1 + 0x10) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00a72f04;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00a72f04:
  operator_delete(param_1);
  return;
}

