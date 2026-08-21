
undefined8 FUN_00a151f8(undefined8 param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;
  
  if (0x7f < param_3) {
                    /* try { // try from 00a15208 to 00b15217 has its CatchHandler @ 00a1533c */
    if (param_3 == 0x203e) {
      uVar1 = 0x7e;
    }
    else {
      if (param_3 != 0xa5) {
        return 0xffffffff;
      }
      uVar1 = 0x5c;
    }
    *param_2 = uVar1;
    return 1;
  }
                    /* try { // try from 00a1522c to 00b15243 has its CatchHandler @ 00a1530c */
  if ((param_3 != 0x5c) && (param_3 != 0x7e)) {
    *param_2 = (char)param_3;
    return 1;
  }
  return 0xffffffff;
}

