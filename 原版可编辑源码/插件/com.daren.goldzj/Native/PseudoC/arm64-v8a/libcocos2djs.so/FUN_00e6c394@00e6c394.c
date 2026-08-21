
void FUN_00e6c394(long param_1,short *param_2)

{
  *(short *)(param_1 + 0xf8) = -(short)*(int *)(param_1 + 0xa8);
  *(long *)(param_1 + 0xf0) = -((long)*(int *)(param_1 + 0xa8) * (long)*param_2);
  return;
}

