
undefined8 FUN_00a151bc(undefined8 param_1,uint *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_3;
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
    if (bVar1 == 0x5c) {
      uVar2 = 0xa5;
    }
    else if (bVar1 == 0x7e) {
      uVar2 = 0x203e;
    }
    *param_2 = uVar2;
    return 1;
  }
  return 0xffffffff;
}

