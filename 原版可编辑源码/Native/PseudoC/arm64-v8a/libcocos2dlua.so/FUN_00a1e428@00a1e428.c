
undefined8 FUN_00a1e428(long param_1,undefined1 *param_2,ulong param_3)

{
  if ((*(uint *)(param_1 + 0x44) & 0xff) == 0) {
                    /* try { // try from 00a1e448 to 00b1e47b has its CatchHandler @ 00a1e3b0 */
    return 0;
  }
                    /* try { // try from 00a1e434 to 00b1e447 has its CatchHandler @ 00a1e4d0 */
  if (param_3 < 2) {
    return 0xfffffffe;
  }
  param_2[1] = (char)*(uint *)(param_1 + 0x44);
  *param_2 = 0x88;
  return 2;
}

