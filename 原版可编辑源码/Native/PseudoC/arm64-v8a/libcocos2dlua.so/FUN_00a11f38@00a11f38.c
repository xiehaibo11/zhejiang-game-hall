
undefined8 FUN_00a11f38(undefined8 param_1,uint *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_3;
  uVar2 = (uint)bVar1;
  if ((bVar1 & 0xe0) == 0xa0) {
    uVar2 = (uint)*(ushort *)(&DAT_012fdd3c + (long)(int)(bVar1 - 0xa0) * 2);
  }
  *param_2 = uVar2;
  return 1;
}

