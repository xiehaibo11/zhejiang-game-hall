
long timeout_markstart(long param_1)

{
  timeval local_30;
  
  gettimeofday(&local_30,(__timezone_ptr_t)0x0);
                    /* try { // try from 009187c8 to 00a18813 has its CatchHandler @ 009187c8
                       catch() { ... } // from try @ 009187c8 with catch @ 009187c8
                       catch() { ... } // from try @ 00918818 with catch @ 009187c8 */
  *(double *)(param_1 + 0x10) = (double)local_30.tv_usec / 1000000.0 + (double)local_30.tv_sec;
  return param_1;
}

