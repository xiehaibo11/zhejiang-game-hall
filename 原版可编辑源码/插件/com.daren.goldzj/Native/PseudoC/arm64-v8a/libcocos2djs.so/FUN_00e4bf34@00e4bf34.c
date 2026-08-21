
undefined8 FUN_00e4bf34(long *param_1)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*param_1 + 0xf8);
  FUN_00e16df4(*param_1,0);
  uVar1 = *(ushort *)(lVar2 + 0x5c);
  param_1[6] = (ulong)uVar1 << 6;
  param_1[7] = (long)(int)(((uint)uVar1 - (uint)*(ushort *)(lVar2 + 0x6c)) * 0x40);
  param_1[9] = (ulong)*(ushort *)(lVar2 + 0x72) << 6;
  return 0;
}

