
void FUN_00e14c58(long param_1,int param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
      (**(code **)(param_1 + 0x30))(param_1);
    }
    if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00e14cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x10))(lVar1,param_1);
      return;
    }
  }
  return;
}

