
undefined8 FUN_00a14118(undefined8 param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  
                    /* try { // try from 00a1411c to 00b1419b has its CatchHandler @ 00a141a4 */
  uVar1 = (uint)*param_3;
  if (((char)*param_3 < '\0') &&
     (uVar1 = (uint)*(ushort *)(&DAT_01301a20 + (long)(int)(uVar1 - 0x80) * 2), uVar1 == 0xfffd)) {
    return 0xffffffff;
  }
  *param_2 = uVar1;
  return 1;
}

