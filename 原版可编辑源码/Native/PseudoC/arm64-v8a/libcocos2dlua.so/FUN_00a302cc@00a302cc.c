
void FUN_00a302cc(long param_1,undefined8 param_2)

{
  if (param_1 == 0) {
    FUN_00a4b154(param_2);
    return;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_00a4bf64(param_1,3,2);
  }
  FUN_00a4b154(param_2);
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_00a4bfbc(param_1,3);
    return;
  }
  return;
}

