
ulong FUN_00a0e790(byte param_1,long *param_2)

{
  if ((ulong)param_2[1] < (ulong)param_2[2]) {
    *(byte *)*param_2 = param_1;
    *param_2 = *param_2 + 1;
    param_2[1] = param_2[1] + 1;
    return (ulong)param_1;
  }
                    /* try { // try from 00a0e7bc to 00b0e7f7 has its CatchHandler @ 00a0eb3c */
  return 0xffffffff;
}

