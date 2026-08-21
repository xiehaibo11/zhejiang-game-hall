
bool dtls1_is_timer_expired(long param_1)

{
  long lVar1;
  long lVar2;
  timeval local_30;
  
  if ((*(long *)(*(long *)(param_1 + 0x98) + 0x1e8) == 0) &&
     (*(long *)(*(long *)(param_1 + 0x98) + 0x1f0) == 0)) {
    return false;
  }
  gettimeofday(&local_30,(__timezone_ptr_t)0x0);
  lVar1 = *(long *)(param_1 + 0x98);
  if ((local_30.tv_sec <= *(long *)(lVar1 + 0x1e8)) &&
     ((*(long *)(lVar1 + 0x1e8) != local_30.tv_sec || (local_30.tv_usec < *(long *)(lVar1 + 0x1f0)))
     )) {
    lVar2 = *(long *)(lVar1 + 0x1e8) - local_30.tv_sec;
                    /* try { // try from 00af2488 to 00bf248f has its CatchHandler @ 00af24d4 */
    lVar1 = *(long *)(lVar1 + 0x1f0) - local_30.tv_usec;
                    /* try { // try from 00af2490 to 00bf251b has its CatchHandler @ 00af234c */
    if (lVar1 < 0) {
      lVar2 = lVar2 + -1;
      lVar1 = lVar1 + 1000000;
    }
    if ((14999 < lVar1) || (lVar2 != 0)) {
      if (0 < lVar2) {
        return false;
      }
      goto LAB_00af24c0;
    }
  }
  lVar1 = 0;
LAB_00af24c0:
  return lVar1 < 1;
}

