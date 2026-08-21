
undefined8 FUN_00a14a98(undefined8 param_1,uint *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_3;
  uVar2 = (uint)bVar1;
                    /* try { // try from 00a14aa0 to 00b14aaf has its CatchHandler @ 00a14b28 */
  if ((0x9f < bVar1) &&
     (uVar2 = (uint)*(ushort *)(&DAT_013028ee + (long)(int)(bVar1 - 0xa0) * 2),
     *(ushort *)(&DAT_013028ee + (long)(int)(bVar1 - 0xa0) * 2) == 0xfffd)) {
    return 0xffffffff;
  }
                    /* try { // try from 00a14acc to 00b14acf has its CatchHandler @ 00a14b0c */
  *param_2 = uVar2;
                    /* try { // try from 00a14ad0 to 00b14b47 has its CatchHandler @ 00a149c8 */
  return 1;
}

