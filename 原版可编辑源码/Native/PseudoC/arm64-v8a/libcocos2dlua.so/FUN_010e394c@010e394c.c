
void FUN_010e394c(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x1f0) + 0x18) = 0;
  (**(code **)(*(long *)(param_1 + 0x210) + 8))();
                    /* WARNING: Could not recover jumptable at 0x010e3984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x210) + 0x10))(param_1);
  return;
}

