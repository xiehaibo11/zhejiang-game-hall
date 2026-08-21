
undefined1 FUN_00e53500(long param_1,uint param_2)

{
  if (param_2 < 0x100) {
    return *(undefined1 *)(*(long *)(param_1 + 0x18) + (ulong)(param_2 + 6));
  }
  return 0;
}

