
/* v8::internal::PerfJitLogger::GetTimestamp() */

long v8::internal::PerfJitLogger::GetTimestamp(void)

{
  timespec local_20;
  
  clock_gettime(1,&local_20);
  return local_20.tv_nsec + local_20.tv_sec * 1000000000;
}

