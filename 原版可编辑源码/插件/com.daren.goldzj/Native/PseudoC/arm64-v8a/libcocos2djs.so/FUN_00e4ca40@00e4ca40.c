
undefined8 FUN_00e4ca40(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_00e16df4(lVar1);
  param_1[6] = *(long *)(lVar1 + 0x180) << 6;
  param_1[7] = *(long *)(lVar1 + 0x188) * -0x40;
  param_1[9] = (long)*(short *)(lVar1 + 0x1b4) << 6;
  return 0;
}

