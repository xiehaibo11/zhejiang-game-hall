
long FUN_01051848(void)

{
  timeval local_20;
  
  gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  return local_20.tv_usec + local_20.tv_sec * 1000000;
}

