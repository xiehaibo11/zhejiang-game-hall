
bool FUN_00a3065c(long *param_1,long param_2)

{
  if (*(long *)(param_2 + 8) != 0) {
                    /* try { // try from 00a30674 to 00b30687 has its CatchHandler @ 00a3070c */
    return *param_1 <= param_1[1] - *(long *)(param_2 + 8);
  }
  return false;
}

