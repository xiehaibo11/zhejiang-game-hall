
undefined8 FUN_00e547b0(long param_1,ulong *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  param_2[1] = 10;
  *param_2 = (ulong)*(byte *)(lVar1 + 8) << 0x18 | (ulong)*(byte *)(lVar1 + 9) << 0x10 |
             (ulong)*(byte *)(lVar1 + 10) << 8 | (ulong)*(byte *)(lVar1 + 0xb);
  return 0;
}

