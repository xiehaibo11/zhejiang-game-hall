
ulong FUN_0103f1f8(long param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)(param_1 + 8) & 0xffffffff00000000;
  return uVar1 | *(uint *)((uVar1 | *(uint *)(**(ulong **)(param_1 + 8) + 7)) + (long)(param_2 << 2)
                          + 7);
}

