
ulong * FUN_0011bbe4(ulong *param_1,ulong param_2)

{
  if (param_1 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  while ((param_2 < *param_1 || (param_1[1] <= param_2))) {
    param_1 = (ulong *)param_1[0xf];
    if (param_1 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
  }
  return param_1;
}

