
void FUN_009ed7a4(long param_1)

{
  long *plVar1;
  
  if ((**(byte **)(param_1 + 0x10) & 1) == 0) {
    plVar1 = (long *)(*(undefined8 **)(param_1 + 8))[0x17];
                    /* WARNING: Could not recover jumptable at 0x009ed7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,**(undefined8 **)(param_1 + 8));
    return;
  }
  return;
}

