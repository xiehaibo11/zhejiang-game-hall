
double * timeout_get(double *param_1)

{
  uint uVar1;
  timeval local_30;
  
                    /* try { // try from 00918594 to 00a18633 has its CatchHandler @ 00918594
                       catch() { ... } // from try @ 00918594 with catch @ 00918594
                       catch() { ... } // from try @ 009186b4 with catch @ 00918594 */
  if (0.0 <= *param_1) {
    if (0.0 <= param_1[1]) {
      uVar1 = gettimeofday(&local_30,(__timezone_ptr_t)0x0);
      param_1 = (double *)(ulong)uVar1;
    }
  }
  else if (0.0 <= param_1[1]) {
    uVar1 = gettimeofday(&local_30,(__timezone_ptr_t)0x0);
    param_1 = (double *)(ulong)uVar1;
                    /* try { // try from 00918634 to 00a18667 has its CatchHandler @ 00918734 */
  }
                    /* try { // try from 00918668 to 00a1867b has its CatchHandler @ 00918700 */
  return param_1;
}

