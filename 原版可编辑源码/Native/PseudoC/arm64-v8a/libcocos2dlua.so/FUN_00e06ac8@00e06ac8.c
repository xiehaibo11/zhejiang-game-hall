
void FUN_00e06ac8(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00e06ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))
            (*(long **)(param_1 + 8),param_2 + 0x20,param_2 + 0x38,param_2 + 8);
  return;
}

