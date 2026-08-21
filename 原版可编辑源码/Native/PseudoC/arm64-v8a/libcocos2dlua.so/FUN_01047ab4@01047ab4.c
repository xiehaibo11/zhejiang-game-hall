
uint FUN_01047ab4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
                    /* try { // try from 01047ac8 to 01147aeb has its CatchHandler @ 01047c14 */
  if (*(short *)(lVar1 + 0xb5c) == *(short *)(lVar1 + 0xb5e)) {
    return *(uint *)((long)param_1 + 0x2f4) & 1;
  }
  return 0;
}

