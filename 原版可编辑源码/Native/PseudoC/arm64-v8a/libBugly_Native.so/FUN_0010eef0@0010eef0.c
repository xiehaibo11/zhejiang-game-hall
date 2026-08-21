
ulong FUN_0010eef0(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    return 0xffffffff;
  }
  return (ulong)(param_2[1] <= *param_1 - *param_2);
}

