
void FUN_00a1a8e4(long param_1,undefined8 param_2)

{
  if (param_1 == 0) {
    FUN_00a3476c(param_2);
    return;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_00a3557c(param_1,3,2);
  }
  FUN_00a3476c(param_2);
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_00a355d4(param_1,3);
    return;
  }
  return;
}

