
undefined8 FUN_00e6f290(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  FUN_00e6f78c(param_2,uVar1 >> 6,uVar2 >> 6);
  *(ulong *)(param_2 + 0x148) = uVar1 << 2;
  *(ulong *)(param_2 + 0x150) = uVar2 << 2;
  return 0;
}

