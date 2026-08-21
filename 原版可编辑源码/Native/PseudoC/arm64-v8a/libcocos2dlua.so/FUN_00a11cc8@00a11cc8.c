
undefined8 FUN_00a11cc8(undefined8 param_1,uint *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_3;
  uVar2 = (uint)bVar1;
  if (0x9f < bVar1) {
    uVar2 = (uint)*(ushort *)(&DAT_012fd854 + (long)(int)(bVar1 - 0xa0) * 2);
  }
  *param_2 = uVar2;
  return 1;
}

