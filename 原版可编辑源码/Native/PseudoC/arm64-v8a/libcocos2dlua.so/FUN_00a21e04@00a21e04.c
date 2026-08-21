
void FUN_00a21e04(void *param_1,ulong param_2,long *param_3)

{
  if ((int)param_3[2] == 0) {
    if ((ulong)param_3[1] < param_2) {
      *(undefined4 *)(param_3 + 2) = 7;
    }
    else {
      memcpy((void *)*param_3,param_1,param_2);
                    /* try { // try from 00a21e48 to 00b21e4f has its CatchHandler @ 00a21ef8 */
                    /* try { // try from 00a21e50 to 00b21e8f has its CatchHandler @ 00a21d9c */
      *param_3 = *param_3 + param_2;
      param_3[1] = param_3[1] - param_2;
    }
  }
  return;
}

