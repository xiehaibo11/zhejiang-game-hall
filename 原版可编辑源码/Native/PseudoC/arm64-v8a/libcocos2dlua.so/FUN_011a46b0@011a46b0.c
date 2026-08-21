
void FUN_011a46b0(long param_1,int param_2)

{
  *(int *)(*(long *)(param_1 + -8) + 0x20) = *(int *)(*(long *)(param_1 + -8) + 0x20) + -1;
  if (((*(long *)(param_1 + 0x30) != 0) || (*(long *)(param_1 + 0x40) != 0)) ||
     (*(long *)(param_1 + 0x38) != 0)) {
    FUN_0119f27c();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (param_2 == -0x7d) {
    *(undefined4 *)(param_1 + 0x50) = 0xfffff445;
  }
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x011a4728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))
              (param_1 + -0x48,*(undefined4 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48));
    return;
  }
  return;
}

