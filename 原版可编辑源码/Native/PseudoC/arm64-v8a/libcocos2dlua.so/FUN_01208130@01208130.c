
void FUN_01208130(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  
  plVar1 = *(long **)*param_1;
  UNRECOVERED_JUMPTABLE = (code *)plVar1[1];
  if ((plVar1[2] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*plVar1 + (plVar1[2] >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x01208150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

