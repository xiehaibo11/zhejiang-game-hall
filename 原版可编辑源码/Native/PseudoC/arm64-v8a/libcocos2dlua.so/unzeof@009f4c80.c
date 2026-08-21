
ulong unzeof(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x120) != 0)) {
    return (ulong)(*(long *)(*(long *)(param_1 + 0x120) + 0xb8) == 0);
  }
  return 0xffffff9a;
}

