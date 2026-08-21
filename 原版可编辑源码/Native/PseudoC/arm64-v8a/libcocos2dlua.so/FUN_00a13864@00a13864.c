
undefined8 FUN_00a13864(undefined8 param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*param_3;
  if ((char)*param_3 < '\0') {
    if (uVar1 - 0x80 == 0x70) {
      return 0xffffffff;
    }
    uVar1 = (uint)*(ushort *)(&DAT_01300928 + (long)(int)(uVar1 - 0x80) * 2);
  }
  *param_2 = uVar1;
  return 1;
}

