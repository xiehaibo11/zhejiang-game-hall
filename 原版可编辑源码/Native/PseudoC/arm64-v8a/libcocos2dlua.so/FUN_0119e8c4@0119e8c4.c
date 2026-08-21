
void FUN_0119e8c4(long param_1)

{
  *(int *)(*(long *)(param_1 + -0x18) + 0x20) = *(int *)(*(long *)(param_1 + -0x18) + 0x20) + -1;
  if (*(code **)(param_1 + -8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0119e8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + -8))(param_1 + -0x58);
    return;
  }
  return;
}

