
undefined8 FUN_00a11c38(undefined8 param_1,uint *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_3;
  uVar2 = (uint)bVar1;
  if (0xcf < bVar1) {
    uVar2 = (uint)*(ushort *)(&DAT_012fd7ac + (long)(int)(bVar1 - 0xd0) * 2);
  }
  *param_2 = uVar2;
  return 1;
}

