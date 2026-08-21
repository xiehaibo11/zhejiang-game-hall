
undefined8 FUN_00a15258(undefined8 param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  
                    /* try { // try from 00a1525c to 00b15273 has its CatchHandler @ 00a15338 */
  uVar1 = (uint)*param_3;
  if ((char)*param_3 < '\0') {
                    /* try { // try from 00a1527c to 00b153df has its CatchHandler @ 00a14d78 */
    if (0x3e < (uVar1 + 0x5f & 0xff)) {
      return 0xffffffff;
    }
    uVar1 = uVar1 + 0xfec0;
  }
  else if (uVar1 == 0x5c) {
    uVar1 = 0xa5;
  }
  else if (uVar1 == 0x7e) {
                    /* try { // try from 00a15274 to 00b1527b has its CatchHandler @ 00a1533c */
    uVar1 = 0x203e;
  }
  *param_2 = uVar1;
  return 1;
}

