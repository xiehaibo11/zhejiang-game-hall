
undefined2 FUN_00e3b76c(long param_1,uint param_2)

{
  if (param_2 < 0x100) {
    return *(undefined2 *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 2);
  }
  return 0;
}

