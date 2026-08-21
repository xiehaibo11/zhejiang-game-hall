
void FUN_00c07ef0(long param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  if (*(int *)(param_1 + 0x28) != param_3) {
    FUN_00c07d88();
    return;
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x28);
  FUN_00c07bd8(param_1,param_1 + 0x30,param_2,param_4,param_3);
  return;
}

