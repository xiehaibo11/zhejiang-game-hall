
undefined8 FUN_00a14c34(undefined8 param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*param_3;
  if ((char)*param_3 < '\0') {
    if (0x5a < (uVar1 + 0x5f & 0xff)) {
      return 0xffffffff;
    }
    if ((uVar1 + 0x25 & 0xff) < 4) {
      return 0xffffffff;
    }
                    /* try { // try from 00a14c64 to 00b14c6f has its CatchHandler @ 00a14cfc */
    uVar1 = uVar1 + 0xd60;
  }
  *param_2 = uVar1;
                    /* try { // try from 00a14c70 to 00b14d17 has its CatchHandler @ 00a14b68 */
  return 1;
}

