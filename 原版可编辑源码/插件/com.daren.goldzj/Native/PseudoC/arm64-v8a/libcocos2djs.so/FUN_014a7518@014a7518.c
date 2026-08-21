
void FUN_014a7518(long param_1,long *param_2)

{
  if (*(int *)(param_1 + 0x18) == 4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014a7554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))
            (param_2,7,0,*(long *)(param_1 + 0x20) - (long)(*(int *)(param_1 + 0x18) * 8 + -8),
             *(long *)(param_1 + 0x20) + 8);
  return;
}

