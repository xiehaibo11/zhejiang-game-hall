
undefined8 FUN_00a148cc(undefined8 param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*param_3;
  if ((char)*param_3 < '\0') {
    if (uVar1 < 0xc0) {
      uVar1 = (uint)*(ushort *)(&DAT_0130252e + (long)(int)(uVar1 - 0x80) * 2);
    }
    else {
      uVar1 = uVar1 + 0x350;
    }
  }
  *param_2 = uVar1;
  return 1;
}

