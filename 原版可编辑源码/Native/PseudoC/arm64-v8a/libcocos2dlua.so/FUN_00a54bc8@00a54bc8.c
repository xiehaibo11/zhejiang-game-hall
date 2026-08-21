
bool FUN_00a54bc8(long *param_1)

{
                    /* try { // try from 00a54bcc to 00b54c6f has its CatchHandler @ 00a54b40 */
  if (param_1[6] != 0) {
    return false;
  }
  if (*param_1 != 0) {
    return (ulong)param_1[2] < (ulong)param_1[1];
  }
  return false;
}

