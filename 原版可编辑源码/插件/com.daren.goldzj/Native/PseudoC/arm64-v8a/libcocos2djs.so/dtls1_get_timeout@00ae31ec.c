
long * dtls1_get_timeout(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  timeval local_30;
  
  if ((*(long *)(*(long *)(param_1 + 0x98) + 0x1e8) == 0) &&
     (*(long *)(*(long *)(param_1 + 0x98) + 0x1f0) == 0)) {
    param_2 = (long *)0x0;
  }
  else {
    gettimeofday(&local_30,(__timezone_ptr_t)0x0);
    lVar1 = *(long *)(param_1 + 0x98);
    if ((local_30.tv_sec <= *(long *)(lVar1 + 0x1e8)) &&
       ((*(long *)(lVar1 + 0x1e8) != local_30.tv_sec ||
        (local_30.tv_usec < *(long *)(lVar1 + 0x1f0))))) {
      lVar2 = *(long *)(lVar1 + 0x1e8);
      param_2[1] = *(long *)(lVar1 + 0x1f0);
      *param_2 = lVar2;
      lVar2 = *param_2 - local_30.tv_sec;
      lVar1 = param_2[1] - local_30.tv_usec;
      *param_2 = lVar2;
      param_2[1] = lVar1;
      if (lVar1 < 0) {
        lVar2 = lVar2 + -1;
        lVar1 = lVar1 + 1000000;
        *param_2 = lVar2;
        param_2[1] = lVar1;
      }
      if (lVar2 != 0) {
        return param_2;
      }
      if (14999 < lVar1) {
        return param_2;
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}

