
undefined8 FUN_00a11d44(undefined8 param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*param_3;
  if (0xa0 < *param_3) {
    if ((uVar1 - 0xdb < 0x25) && ((1L << ((ulong)(uVar1 - 0xdb) & 0x3f) & 0x1e0000000fU) != 0)) {
      return 0xffffffff;
    }
    uVar1 = uVar1 + 0xd60;
  }
  *param_2 = uVar1;
  return 1;
}

