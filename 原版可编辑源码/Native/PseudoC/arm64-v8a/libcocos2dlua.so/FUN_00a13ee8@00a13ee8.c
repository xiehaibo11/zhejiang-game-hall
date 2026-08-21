
undefined8 FUN_00a13ee8(undefined8 param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (uint)*param_3;
  if (-1 < (char)*param_3) {
    *param_2 = uVar1;
    return 1;
  }
  uVar2 = 0xffffffff;
  if ((uVar1 != 0xf0) && (uVar1 != 0xf5)) {
    uVar2 = 1;
    *param_2 = (uint)*(ushort *)(&DAT_013015c0 + (long)(int)(uVar1 - 0x80) * 2);
  }
  return uVar2;
}

