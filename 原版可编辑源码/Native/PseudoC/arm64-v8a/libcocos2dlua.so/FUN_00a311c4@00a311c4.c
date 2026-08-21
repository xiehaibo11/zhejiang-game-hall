
undefined8 FUN_00a311c4(ulong param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
                    /* try { // try from 00a311e0 to 00b311f3 has its CatchHandler @ 00a31234 */
  if ((long)param_1 < 100000) {
    pcVar1 = "%5ld";
                    /* try { // try from 00a311f4 to 00b3124f has its CatchHandler @ 00a31104 */
  }
  else if ((long)param_1 < 0x9c4000) {
    param_1 = param_1 >> 10;
    pcVar1 = "%4ldk";
  }
  else {
    if ((long)param_1 < 0x6400000) {
      uVar2 = param_1 >> 0x14;
                    /* catch() { ... } // from try @ 00a31154 with catch @ 00a31234
                       catch() { ... } // from try @ 00a311e0 with catch @ 00a31234 */
      uVar3 = (param_1 & 0xfffff) / 0x19999;
      pcVar1 = "%2ld.%0ldM";
LAB_00a312b0:
      FUN_00a241ac(param_2,6,pcVar1,uVar2,uVar3);
      return param_2;
    }
    if ((long)param_1 < 0x271000000) {
      param_1 = param_1 >> 0x14;
      pcVar1 = "%4ldM";
    }
    else {
      if ((long)param_1 < 0x1900000000) {
        uVar2 = param_1 >> 0x1e;
        uVar3 = (param_1 >> 1 & 0x1fffffff) / 0x3333333;
        pcVar1 = "%2ld.%0ldG";
        goto LAB_00a312b0;
      }
      if ((long)param_1 < 0x9c400000000) {
        param_1 = param_1 >> 0x1e;
        pcVar1 = "%4ldG";
      }
      else if ((long)param_1 < 0x27100000000000) {
        param_1 = param_1 >> 0x28;
        pcVar1 = "%4ldT";
      }
      else {
        param_1 = param_1 >> 0x32;
        pcVar1 = "%4ldP";
      }
    }
  }
  FUN_00a241ac(param_2,6,pcVar1,param_1);
  return param_2;
}

