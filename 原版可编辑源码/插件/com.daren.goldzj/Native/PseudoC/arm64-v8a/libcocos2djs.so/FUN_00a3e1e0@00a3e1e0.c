
bool FUN_00a3e1e0(long *param_1)

{
  if (param_1[6] != 0) {
    return false;
  }
  if (*param_1 != 0) {
    return (ulong)param_1[2] < (ulong)param_1[1];
  }
  return false;
}

