
double * timeout_getretry(double *param_1)

{
  uint uVar1;
  timeval local_40;
  
  if (0.0 <= *param_1) {
    uVar1 = gettimeofday(&local_40,(__timezone_ptr_t)0x0);
    param_1 = (double *)(ulong)uVar1;
                    /* catch() { ... } // from try @ 00918668 with catch @ 00918700 */
                    /* catch() { ... } // from try @ 00918680 with catch @ 00918704 */
  }
  else if (0.0 <= param_1[1]) {
                    /* catch() { ... } // from try @ 00918634 with catch @ 00918734 */
    uVar1 = gettimeofday(&local_40,(__timezone_ptr_t)0x0);
    param_1 = (double *)(ulong)uVar1;
  }
  return param_1;
}

