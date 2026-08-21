
undefined8 FUN_00e4fee0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + 0x108);
  FUN_00e16df4();
  param_1[6] = *(long *)(lVar1 + 0x40) << 6;
  param_1[7] = *(long *)(lVar1 + 0x48) * -0x40;
  param_1[9] = (ulong)*(ushort *)(lVar1 + 8) << 6;
  return 0;
}

