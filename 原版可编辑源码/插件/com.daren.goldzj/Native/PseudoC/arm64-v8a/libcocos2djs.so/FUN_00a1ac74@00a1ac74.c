
bool FUN_00a1ac74(long *param_1,long param_2)

{
  if (*(long *)(param_2 + 8) != 0) {
    return *param_1 <= param_1[1] - *(long *)(param_2 + 8);
  }
  return false;
}

