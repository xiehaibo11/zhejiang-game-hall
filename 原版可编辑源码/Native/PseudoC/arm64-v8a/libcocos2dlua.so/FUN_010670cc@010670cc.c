
void FUN_010670cc(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = (long)(*(int *)(param_1 + 0x28) << 6);
  *param_2 = lVar1;
  param_2[2] = (ulong)(uint)(*(int *)(param_1 + 0x34) << 6) + lVar1;
  lVar1 = (long)(*(int *)(param_1 + 0x2c) << 6);
  param_2[3] = lVar1;
  param_2[1] = lVar1 - (ulong)(uint)(*(int *)(param_1 + 0x30) << 6);
  return;
}

