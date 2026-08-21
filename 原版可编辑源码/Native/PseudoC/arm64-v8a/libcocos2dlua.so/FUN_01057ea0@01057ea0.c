
void FUN_01057ea0(long param_1)

{
  *(long *)(param_1 + 0x168) = (long)*(int *)(param_1 + 0x2d0);
  uv_close(param_1 + 0x168,FUN_01057ebc);
  return;
}

