
undefined8 FUN_00a141c8(undefined8 param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*param_3;
                    /* try { // try from 00a141ec to 00b141ef has its CatchHandler @ 00a142b4 */
  if (((char)*param_3 < '\0') &&
     (uVar1 = (uint)*(ushort *)(&DAT_01301c50 + (long)(int)(uVar1 - 0x80) * 2), uVar1 == 0xfffd)) {
                    /* try { // try from 00a141f0 to 00b142ef has its CatchHandler @ 00a141c0 */
    return 0xffffffff;
  }
  *param_2 = uVar1;
  return 1;
}

