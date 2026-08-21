
void FUN_00a68e00(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a68e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))
            (*(long **)(param_1 + 8),param_2 + 0x20,param_2 + 0x38,param_2 + 8);
  return;
}

