
ulong FUN_015872b8(long param_1,int *param_2)

{
  return **(ulong **)(param_1 + 8) & 0xffffffff00000000 |
         (ulong)*(uint *)(**(ulong **)(param_1 + 8) + (long)(*param_2 << 2) + 7);
}

