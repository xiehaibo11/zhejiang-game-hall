
undefined1  [16] FUN_00a2e828(void)

{
  int iVar1;
  undefined1 auVar2 [16];
  timespec local_30;
  timeval local_20;
  
  iVar1 = clock_gettime(1,&local_30);
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 00a2e7a4 with catch @ 00a2e864
                       catch() { ... } // from try @ 00a2e848 with catch @ 00a2e864 */
                    /* catch() { ... } // from try @ 00a2e788 with catch @ 00a2e868
                       catch() { ... } // from try @ 00a2e7f8 with catch @ 00a2e868 */
    local_20.tv_usec = local_30.tv_nsec / 1000;
    local_20.tv_sec = local_30.tv_sec;
  }
  else {
                    /* try { // try from 00a2e848 to 00b2e84f has its CatchHandler @ 00a2e864 */
    gettimeofday(&local_20,(__timezone_ptr_t)0x0);
                    /* try { // try from 00a2e850 to 00b2e883 has its CatchHandler @ 00a2e738 */
  }
  auVar2._8_8_ = local_20.tv_usec;
  auVar2._0_8_ = local_20.tv_sec;
  return auVar2;
}

