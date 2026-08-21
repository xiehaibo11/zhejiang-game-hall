
undefined8 FUN_00a1024c(undefined8 param_1,undefined2 *param_2,uint param_3,ulong param_4)

{
  int iVar1;
  
  if (param_3 >> 0xb == 0x1b) {
                    /* try { // try from 00a10258 to 00b10267 has its CatchHandler @ 00a104e0 */
    return 0xffffffff;
  }
  if (param_3 >> 0x10 == 0) {
                    /* try { // try from 00a1026c to 00b1027b has its CatchHandler @ 00a104c8 */
    if (1 < param_4) {
      *param_2 = (short)param_3;
      return 2;
    }
  }
  else {
                    /* try { // try from 00a10280 to 00b1028f has its CatchHandler @ 00a104a8 */
    if (0x10 < param_3 >> 0x10) {
      return 0xffffffff;
    }
    if (3 < param_4) {
      param_3 = param_3 - 0x10000;
      iVar1 = (param_3 >> 10) + 0xd800;
      *(char *)(param_2 + 1) = (char)param_3;
                    /* try { // try from 00a102a8 to 00b102b7 has its CatchHandler @ 00a10478 */
      *(char *)param_2 = (char)iVar1;
      *(byte *)((long)param_2 + 3) = (byte)(param_3 >> 8) & 3 | 0xdc;
      *(char *)((long)param_2 + 1) = (char)((uint)iVar1 >> 8);
      return 4;
    }
  }
  return 0xfffffffe;
}

