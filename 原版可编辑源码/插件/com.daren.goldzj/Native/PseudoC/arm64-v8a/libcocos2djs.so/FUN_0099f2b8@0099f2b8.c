
void FUN_0099f2b8(void *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
                    /* try { // try from 0099f2cc to 00a9f2e3 has its CatchHandler @ 0099f54c */
  if ((long *)((long)param_1 + 0x10) == plVar1) {
                    /* try { // try from 0099f2ec to 00a9f2f7 has its CatchHandler @ 0099f548 */
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0099f2f4;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_0099f2f4:
                    /* try { // try from 0099f2f8 to 00a9f303 has its CatchHandler @ 0099f544 */
  operator_delete(param_1);
  return;
}

