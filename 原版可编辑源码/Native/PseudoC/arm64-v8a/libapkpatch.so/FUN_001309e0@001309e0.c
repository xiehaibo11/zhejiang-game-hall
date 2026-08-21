
uint FUN_001309e0(long *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong __n;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 <= param_3) {
    param_3 = uVar1;
  }
  if (param_3 == 0) {
    return 0;
  }
  __n = (ulong)param_3;
  *(uint *)(param_1 + 1) = uVar1 - param_3;
  memcpy(param_2,(void *)*param_1,__n);
  if (*(int *)(param_1[7] + 0x30) == 2) {
    lVar2 = FUN_0012e2ac(param_1[0xc],param_2,param_3);
  }
  else {
    if (*(int *)(param_1[7] + 0x30) != 1) goto LAB_00130a64;
    lVar2 = FUN_00132b28(param_1[0xc],param_2,param_3);
  }
  param_1[0xc] = lVar2;
LAB_00130a64:
  *param_1 = *param_1 + __n;
  param_1[2] = param_1[2] + __n;
  return param_3;
}

