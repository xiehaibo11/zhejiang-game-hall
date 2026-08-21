
undefined1  [16] FUN_00a18e40(void)

{
  int iVar1;
  undefined1 auVar2 [16];
  timespec local_30;
  timeval local_20;
  
  iVar1 = clock_gettime(1,&local_30);
  if (iVar1 == 0) {
    local_20.tv_usec = local_30.tv_nsec / 1000;
    local_20.tv_sec = local_30.tv_sec;
  }
  else {
    gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  }
  auVar2._8_8_ = local_20.tv_usec;
  auVar2._0_8_ = local_20.tv_sec;
  return auVar2;
}

