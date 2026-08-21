
void FUN_00e3e770(long param_1)

{
  if (*(long *)(param_1 + 0x380) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00e3e77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x380) + 0x58))();
    return;
  }
  return;
}

