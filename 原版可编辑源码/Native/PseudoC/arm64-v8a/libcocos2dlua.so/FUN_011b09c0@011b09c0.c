
void FUN_011b09c0(long param_1,int param_2)

{
  *(int *)(*(long *)(param_1 + -0x108) + 0x20) = *(int *)(*(long *)(param_1 + -0x108) + 0x20) + -1;
  if (param_2 == -0x7d) {
    *(undefined8 *)(param_1 + -0xf8) = 0xffffffffffffff83;
  }
                    /* WARNING: Could not recover jumptable at 0x011b09ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + -0x100))();
  return;
}

