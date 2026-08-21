
void FUN_010ae320(undefined8 param_1,ulong *param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined4 param_6)

{
  uint uVar1;
  
  uVar1 = *(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 7);
  if ((uint)param_4 < uVar1) {
    return;
  }
  FUN_010842c0(param_2,param_3,param_4 - (ulong)uVar1,param_5,param_6);
  return;
}

