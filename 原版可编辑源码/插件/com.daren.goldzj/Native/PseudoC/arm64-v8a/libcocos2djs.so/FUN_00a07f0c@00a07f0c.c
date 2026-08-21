
long FUN_00a07f0c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
                    /* try { // try from 00a07f1c to 00b07f33 has its CatchHandler @ 00a07fd8 */
  if (*(char **)(param_2 + 8) != "ZN8universe12DownloadTask10onProgressElE3$_0") {
    param_1 = 0;
  }
  return param_1;
}

