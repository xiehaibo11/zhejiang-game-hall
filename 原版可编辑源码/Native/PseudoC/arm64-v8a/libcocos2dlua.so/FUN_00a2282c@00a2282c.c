
void FUN_00a2282c(void *param_1,ulong param_2,long *param_3)

{
                    /* try { // try from 00a22838 to 00b228af has its CatchHandler @ 00a22838
                       catch() { ... } // from try @ 00a22838 with catch @ 00a22838
                       catch() { ... } // from try @ 00a228bc with catch @ 00a22838 */
  if ((int)param_3[2] == 0) {
    if ((ulong)param_3[1] < param_2) {
      *(undefined4 *)(param_3 + 2) = 7;
    }
    else {
      memcpy((void *)*param_3,param_1,param_2);
      *param_3 = *param_3 + param_2;
      param_3[1] = param_3[1] - param_2;
    }
  }
  return;
}

