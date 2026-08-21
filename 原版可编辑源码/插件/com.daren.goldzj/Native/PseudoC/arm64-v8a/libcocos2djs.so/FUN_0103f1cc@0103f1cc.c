
bool FUN_0103f1cc(long param_1,int param_2)

{
  return (*(uint *)((**(ulong **)(param_1 + 8) & 0xffffffff00000000 |
                    (ulong)*(uint *)(**(ulong **)(param_1 + 8) + 7)) + (long)(param_2 << 2) + 7) & 1
         ) == 0;
}

