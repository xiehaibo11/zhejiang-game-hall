
undefined8 FUN_00a157ac(undefined8 param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;
  
  if (0x7f < param_3) {
    if (param_3 == 0x203e) {
      uVar1 = 0x7e;
    }
    else {
      if (param_3 != 0xa5) {
        return 0xffffffff;
      }
      uVar1 = 0x24;
    }
    *param_2 = uVar1;
    return 1;
  }
  if ((param_3 != 0x24) && (param_3 != 0x7e)) {
    *param_2 = (char)param_3;
    return 1;
  }
  return 0xffffffff;
}

