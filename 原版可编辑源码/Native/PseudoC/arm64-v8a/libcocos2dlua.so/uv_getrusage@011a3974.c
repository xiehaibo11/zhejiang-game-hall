
int uv_getrusage(__time_t *param_1)

{
  int iVar1;
  int *piVar2;
  rusage local_b0;
  
  iVar1 = getrusage(RUSAGE_SELF,&local_b0);
  if (iVar1 != 0) {
    piVar2 = (int *)__errno();
    return -*piVar2;
  }
  param_1[1] = local_b0.ru_utime.tv_usec;
  *param_1 = local_b0.ru_utime.tv_sec;
  param_1[3] = local_b0.ru_stime.tv_usec;
  param_1[2] = local_b0.ru_stime.tv_sec;
  param_1[5] = local_b0.ru_ixrss;
  param_1[4] = local_b0.ru_maxrss;
  param_1[7] = local_b0.ru_isrss;
  param_1[6] = local_b0.ru_idrss;
  param_1[9] = local_b0.ru_majflt;
  param_1[8] = local_b0.ru_minflt;
  param_1[0xb] = local_b0.ru_inblock;
  param_1[10] = local_b0.ru_nswap;
  param_1[0xd] = local_b0.ru_msgsnd;
  param_1[0xc] = local_b0.ru_oublock;
  param_1[0xf] = local_b0.ru_nsignals;
  param_1[0xe] = local_b0.ru_msgrcv;
  param_1[0x11] = local_b0.ru_nivcsw;
  param_1[0x10] = local_b0.ru_nvcsw;
  return 0;
}

