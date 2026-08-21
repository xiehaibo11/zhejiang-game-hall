
undefined8 FUN_00a10bfc(undefined8 param_1,uint *param_2,ushort *param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_4 < 2) {
    return 0xfffffffe;
  }
  uVar1 = *param_3 & 0xff00ff;
  if (uVar1 >> 3 == 0x1b) {
    return 0xffffffff;
  }
                    /* try { // try from 00a10c2c to 00b10c37 has its CatchHandler @ 00a10fe0 */
  *param_2 = (uint)(*param_3 >> 8) | uVar1 << 8;
  return 2;
}

