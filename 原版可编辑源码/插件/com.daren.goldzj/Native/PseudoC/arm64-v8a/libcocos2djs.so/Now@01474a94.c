
/* v8::base::ThreadTicks::Now() */

long v8::base::ThreadTicks::Now(void)

{
  int iVar1;
  timespec local_20;
  
  iVar1 = clock_gettime(3,&local_20);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if (local_20.tv_sec < 0x8637bd05af5) {
    return local_20.tv_nsec / 1000 + local_20.tv_sec * 1000000;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kSecondsLimit > ts.tv_sec");
}

