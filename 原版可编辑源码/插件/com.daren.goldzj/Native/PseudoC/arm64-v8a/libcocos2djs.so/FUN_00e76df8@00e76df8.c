
undefined8 FUN_00e76df8(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x22c);
  *(int *)(param_1 + 3) = iVar1;
  *(int *)((long)param_1 + 0x1c) = *(int *)(lVar2 + 0x230) - iVar1;
  param_1[4] = *(long *)(lVar2 + 0x238);
  return 0;
}

