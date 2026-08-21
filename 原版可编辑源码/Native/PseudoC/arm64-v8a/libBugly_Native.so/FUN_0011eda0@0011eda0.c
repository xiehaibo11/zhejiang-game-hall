
void FUN_0011eda0(undefined *param_1,long param_2)

{
  if (*(int *)(param_2 + 0x30) - 1U < 2) {
                    /* WARNING: Could not recover jumptable at 0x0011edb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))();
    return;
  }
  if ((*(int *)(param_2 + 0x30) == 0) && (_Uaarch64_local_addr_space != param_1)) {
    FUN_0012390c();
    return;
  }
  return;
}

