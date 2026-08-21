
void FUN_00e1d86c(long param_1,long *param_2)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    if (*param_2 != 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    }
    *param_2 = 0;
  }
  *param_2 = 0;
  return;
}

