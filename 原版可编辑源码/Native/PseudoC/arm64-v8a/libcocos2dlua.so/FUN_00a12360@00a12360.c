
undefined8 FUN_00a12360(undefined8 param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*param_3;
  if (((char)*param_3 < '\0') &&
     (uVar1 = (uint)*(ushort *)(&DAT_012fe674 + (long)(int)(uVar1 - 0x80) * 2), uVar1 == 0xfffd)) {
    return 0xffffffff;
  }
  *param_2 = uVar1;
  return 1;
}

