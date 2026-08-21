
void FUN_01077384(undefined8 param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(param_3 & 0xffff);
  lVar1 = *(long *)(param_2 + 0x18) + uVar2 * 0x10;
  *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + param_4;
  *(byte *)(*(long *)(param_2 + 0x28) + uVar2) = *(byte *)(*(long *)(param_2 + 0x28) + uVar2) | 0x10
  ;
  return;
}

