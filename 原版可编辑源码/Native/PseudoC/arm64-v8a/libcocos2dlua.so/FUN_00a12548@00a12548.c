
undefined8 FUN_00a12548(undefined8 param_1,uint *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_3;
  uVar2 = (uint)bVar1;
  if (((char)bVar1 < '\0') && (uVar2 < 0xa0)) {
    if ((0xdffe5ffdU >> ((ulong)bVar1 & 0x3f) & 1) == 0) {
      return 0xffffffff;
    }
    uVar2 = (uint)*(ushort *)(&DAT_012fe9ec + ((ulong)bVar1 - 0x80) * 2);
  }
  *param_2 = uVar2;
  return 1;
}

