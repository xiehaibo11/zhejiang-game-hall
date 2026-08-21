
void FUN_0107733c(undefined8 param_1,long param_2,uint param_3,long param_4)

{
  ulong uVar1;
  
  uVar1 = (ulong)(param_3 & 0xffff);
  *(long *)(*(long *)(param_2 + 0x18) + uVar1 * 0x10) =
       *(long *)(*(long *)(param_2 + 0x18) + uVar1 * 0x10) + param_4;
  *(byte *)(*(long *)(param_2 + 0x28) + uVar1) = *(byte *)(*(long *)(param_2 + 0x28) + uVar1) | 8;
  return;
}

