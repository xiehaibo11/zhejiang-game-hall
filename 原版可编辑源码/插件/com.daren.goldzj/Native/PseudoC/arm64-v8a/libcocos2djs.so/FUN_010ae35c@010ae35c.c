
void FUN_010ae35c(undefined8 param_1,ulong *param_2,long param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 7);
  if ((uint)param_3 < uVar1) {
    return;
  }
  FUN_010a424c(param_2,param_3 - (ulong)uVar1);
  return;
}

