
__time_t lws_now_secs(void)

{
  timeval local_20;
  
  gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  return local_20.tv_sec;
}

