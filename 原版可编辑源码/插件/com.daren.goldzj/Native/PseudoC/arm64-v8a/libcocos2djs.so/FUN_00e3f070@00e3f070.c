
undefined2 FUN_00e3f070(uint param_1)

{
  if (param_1 < 0x100) {
    return *(undefined2 *)(&DAT_01976a90 + (ulong)param_1 * 2);
  }
  return 0;
}

