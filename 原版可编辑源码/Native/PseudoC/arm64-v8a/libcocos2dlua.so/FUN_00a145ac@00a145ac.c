
undefined8 FUN_00a145ac(undefined8 param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*param_3;
  if (((char)*param_3 < '\0') && (uVar1 < 0xa0)) {
                    /* try { // try from 00a145cc to 00b145d3 has its CatchHandler @ 00a146c8 */
    uVar2 = (uint)*(ushort *)(&DAT_01302240 + (long)(int)(uVar1 - 0x80) * 2);
  }
  else {
                    /* try { // try from 00a145d4 to 00b145f7 has its CatchHandler @ 00a14564 */
    uVar2 = uVar1 + 0x1010;
    if (0x26 < (uVar1 + 0x40 & 0xff)) {
      uVar2 = uVar1;
    }
  }
  *param_2 = uVar2;
  return 1;
}

