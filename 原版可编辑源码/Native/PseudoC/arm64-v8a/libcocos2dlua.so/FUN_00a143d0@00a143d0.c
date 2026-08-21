
undefined8 FUN_00a143d0(undefined8 param_1,uint *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_3;
  if ((char)bVar1 < '\0') {
    if (((ulong)bVar1 - 0x80 | 1) == 0x7f) {
                    /* try { // try from 00a143f4 to 00b143ff has its CatchHandler @ 00a14554 */
      return 0xffffffff;
    }
                    /* try { // try from 00a14400 to 00b14513 has its CatchHandler @ 00a1432c */
    uVar2 = (uint)*(ushort *)(&DAT_01301f08 + ((ulong)bVar1 - 0x80) * 2);
  }
  else {
    uVar2 = (uint)bVar1;
  }
  *param_2 = uVar2;
  return 1;
}

