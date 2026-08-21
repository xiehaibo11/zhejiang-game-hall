
undefined8 FUN_00a19e68(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (uint)*param_3;
  if (-1 < (char)*param_3) {
    *param_2 = uVar1;
    return 1;
  }
  uVar2 = 0xffffffff;
  if ((uVar1 != 0x80) && (uVar1 != 0xff)) {
    if (1 < param_4) {
      uVar2 = FUN_00a20158();
      return uVar2;
    }
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

