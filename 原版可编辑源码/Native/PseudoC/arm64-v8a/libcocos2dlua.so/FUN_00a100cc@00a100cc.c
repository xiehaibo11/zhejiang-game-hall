
undefined8 FUN_00a100cc(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  
  if (param_4 < 2) {
    return 0xfffffffe;
  }
  bVar1 = *param_3 & 0xfc;
  if (bVar1 != 0xdc) {
    uVar2 = (uint)CONCAT11(*param_3,param_3[1]);
    if (bVar1 != 0xd8) {
      *param_2 = uVar2;
      return 2;
    }
    if (param_4 < 4) {
      return 0xfffffffe;
    }
    if ((param_3[2] & 0xfc) == 0xdc) {
      *param_2 = (uint)CONCAT11(param_3[2],param_3[3]) + uVar2 * 0x400 + 0xfca02400;
      return 4;
    }
  }
  return 0xffffffff;
}

