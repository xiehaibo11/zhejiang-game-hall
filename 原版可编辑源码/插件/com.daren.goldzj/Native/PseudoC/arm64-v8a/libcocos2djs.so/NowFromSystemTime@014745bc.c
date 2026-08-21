
/* v8::base::Time::NowFromSystemTime() */

long v8::base::Time::NowFromSystemTime(void)

{
  long lVar1;
  timeval local_20;
  
  gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  if (local_20.tv_usec == 0 && local_20.tv_sec == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = 0x7fffffffffffffff;
    if ((local_20.tv_sec != 0x7fffffffffffffff) || (local_20.tv_usec != 999999)) {
      lVar1 = local_20.tv_usec + local_20.tv_sec * 1000000;
    }
  }
  return lVar1;
}

