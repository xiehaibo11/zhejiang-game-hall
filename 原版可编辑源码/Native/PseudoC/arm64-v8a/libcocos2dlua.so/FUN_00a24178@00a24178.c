
ulong FUN_00a24178(byte param_1,long *param_2)

{
  if ((ulong)param_2[1] < (ulong)param_2[2]) {
    *(byte *)*param_2 = param_1;
    *param_2 = *param_2 + 1;
    param_2[1] = param_2[1] + 1;
    return (ulong)param_1;
  }
  return 0xffffffff;
}

