
ulong FUN_0010af58(ulong *param_1,ulong *param_2)

{
  if (*param_2 <= *param_1) {
    return (ulong)(param_2[1] <= *param_1 - *param_2);
  }
  return 0xffffffff;
}

