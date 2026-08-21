
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_getrusage(__time_t *param_1)

{
  int iVar1;
  int *piVar2;
  rusage local_98;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = getrusage(RUSAGE_SELF,&local_98);
  if (iVar1 == 0) {
    *param_1 = local_98.ru_utime.tv_sec;
    param_1[1] = local_98.ru_utime.tv_usec;
    param_1[2] = local_98.ru_stime.tv_sec;
    param_1[3] = local_98.ru_stime.tv_usec;
    param_1[4] = local_98.ru_maxrss;
    param_1[5] = local_98.ru_ixrss;
    param_1[6] = local_98.ru_idrss;
    param_1[7] = local_98.ru_isrss;
    param_1[8] = local_98.ru_minflt;
    param_1[9] = local_98.ru_majflt;
    param_1[10] = local_98.ru_nswap;
    param_1[0xb] = local_98.ru_inblock;
    param_1[0xc] = local_98.ru_oublock;
    param_1[0xd] = local_98.ru_msgsnd;
    param_1[0xe] = local_98.ru_msgrcv;
    param_1[0xf] = local_98.ru_nsignals;
    param_1[0x10] = local_98.ru_nvcsw;
    param_1[0x11] = local_98.ru_nivcsw;
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)__errno();
    iVar1 = -*piVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

