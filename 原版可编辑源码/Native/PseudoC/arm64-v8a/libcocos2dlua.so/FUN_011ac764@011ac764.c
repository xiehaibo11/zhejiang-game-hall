
long FUN_011ac764(int param_1)

{
  int iVar1;
  clockid_t __clock_id;
  timespec local_30;
  
  if ((param_1 == 1) && (DAT_01781880 == -1)) {
    iVar1 = clock_getres(6,&local_30);
    if (iVar1 == 0) {
      DAT_01781880 = 6;
      if (1000000 < local_30.tv_nsec) {
        DAT_01781880 = 1;
      }
    }
    else {
      DAT_01781880 = 1;
    }
  }
  __clock_id = (clockid_t)DAT_01781880;
  if (param_1 != 1) {
    __clock_id = 1;
  }
  iVar1 = clock_gettime(__clock_id,&local_30);
  if (iVar1 == 0) {
    return local_30.tv_nsec + local_30.tv_sec * 1000000000;
  }
  return 0;
}

