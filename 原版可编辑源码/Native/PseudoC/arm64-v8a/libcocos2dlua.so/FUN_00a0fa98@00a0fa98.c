
undefined4 FUN_00a0fa98(undefined8 param_1,undefined1 *param_2,uint param_3,ulong param_4)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_3 < 0x80) {
    uVar2 = 1;
    if (param_4 != 0) goto LAB_00a0fac8;
  }
  else if (param_3 < 0x800) {
    uVar2 = 2;
    if (1 < param_4) goto LAB_00a0fac8;
  }
  else if (param_3 >> 0x10 == 0) {
    if (param_3 >> 0xb == 0x1b) {
      return 0xffffffff;
    }
    uVar2 = 3;
                    /* try { // try from 00a0fb48 to 00b0fbff has its CatchHandler @ 00a0fb48
                       catch() { ... } // from try @ 00a0fb48 with catch @ 00a0fb48
                       catch() { ... } // from try @ 00a0fc0c with catch @ 00a0fb48 */
    if (2 < param_4) {
LAB_00a0fac8:
      switch(uVar2) {
      case 4:
        bVar1 = (byte)param_3;
        param_3 = param_3 >> 6 | 0x10000;
        param_2[3] = bVar1 & 0x3f | 0x80;
      case 3:
        bVar1 = (byte)param_3;
        param_3 = param_3 >> 6 | 0x800;
        param_2[2] = bVar1 & 0x3f | 0x80;
      case 2:
        bVar1 = (byte)param_3;
        param_3 = param_3 >> 6 | 0xc0;
        param_2[1] = bVar1 & 0x3f | 0x80;
      case 1:
        *param_2 = (char)param_3;
        return uVar2;
      default:
        return uVar2;
      }
    }
  }
  else {
    if (0x10 < param_3 >> 0x10) {
      return 0xffffffff;
    }
    uVar2 = 4;
    if (3 < param_4) goto LAB_00a0fac8;
  }
  return 0xfffffffe;
}

