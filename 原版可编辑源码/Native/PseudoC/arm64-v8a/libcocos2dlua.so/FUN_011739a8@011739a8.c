
void FUN_011739a8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  (*(code *)*param_2)();
                    /* WARNING: Could not recover jumptable at 0x011739e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1,param_1,param_2[2],param_2[3]);
  return;
}

