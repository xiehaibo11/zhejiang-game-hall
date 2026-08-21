
undefined8 FUN_00a144d4(undefined8 param_1,uint *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_3;
  uVar2 = (uint)bVar1;
  if (0x9f < bVar1) {
    uVar2 = (uint)bVar1;
    if ((uVar2 == 0xa1) || (uVar2 == 0xff)) {
      return 0xffffffff;
    }
    uVar2 = (uint)*(ushort *)(&DAT_01302108 + (long)(int)(uVar2 - 0xa0) * 2);
  }
  *param_2 = uVar2;
  return 1;
}

