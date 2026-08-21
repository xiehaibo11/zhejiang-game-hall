
void FUN_00df84bc(undefined8 *param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = (long *)param_1[0x12];
  *param_1 = &PTR_FUN_016e7bb0;
  if (param_1 + 0xe == plVar1) {
                    /* try { // try from 00df84fc to 00ef8503 has its CatchHandler @ 00df9024 */
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x20);
LAB_00df8500:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (plVar1 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x28);
    goto LAB_00df8500;
  }
                    /* try { // try from 00df8504 to 00ef850b has its CatchHandler @ 00df9050 */
  plVar1 = (long *)param_1[0xc];
                    /* try { // try from 00df850c to 00ef8517 has its CatchHandler @ 00df9040 */
  if (param_1 + 8 == plVar1) {
                    /* try { // try from 00df8528 to 00ef852f has its CatchHandler @ 00df9044 */
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00df8530;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x28);
  }
  (*UNRECOVERED_JUMPTABLE)();
LAB_00df8530:
  plVar1 = (long *)param_1[6];
  if (param_1 + 2 == plVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00df8560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

