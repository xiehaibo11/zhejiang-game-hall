
undefined8 FUN_00e4c0ec(long *param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(*param_1 + 0xf8);
  uVar2 = (uint)*(byte *)(lVar1 + 0x74);
  *(uint *)(param_1 + 3) = uVar2;
  *(uint *)((long)param_1 + 0x1c) = (1 - uVar2) + (uint)*(byte *)(lVar1 + 0x75);
  return 0;
}

