
undefined8 FUN_00a13444(undefined8 param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*param_3;
  if ((char)*param_3 < '\0') {
    if (uVar1 < 0xb0) {
      uVar1 = uVar1 + 0x390;
    }
    else {
      uVar1 = (uint)*(ushort *)(&DAT_013001b0 + (long)(int)(uVar1 - 0xb0) * 2);
    }
  }
  *param_2 = uVar1;
  return 1;
}

