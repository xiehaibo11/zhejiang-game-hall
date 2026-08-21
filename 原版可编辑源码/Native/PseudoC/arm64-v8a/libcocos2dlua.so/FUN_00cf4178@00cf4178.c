
void FUN_00cf4178(long param_1,undefined8 *param_2)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x18);
  plVar1 = (long *)(*(long *)**(undefined8 **)(param_1 + 8) +
                   ((long)*(ulong *)(param_1 + 0x20) >> 1));
  if ((*(ulong *)(param_1 + 0x20) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00cf419c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_2);
  return;
}

