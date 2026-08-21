
undefined8 FUN_00e53ad0(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint local_14;
  
  if ((param_2 & 0xffff0000) != 0) {
    return 0;
  }
  local_14 = param_2;
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar1 = FUN_00e5e770(param_1,&local_14,0);
    return uVar1;
  }
  uVar1 = FUN_00e5e40c(param_1,&local_14,0);
  return uVar1;
}

