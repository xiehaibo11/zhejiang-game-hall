
void FUN_00ea189c(long param_1)

{
  if ((**(byte **)(param_1 + 0x10) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00ea18b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0xb8) + 0x20))();
    return;
  }
  return;
}

