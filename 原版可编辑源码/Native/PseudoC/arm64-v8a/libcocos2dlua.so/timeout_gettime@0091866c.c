
int timeout_gettime(void)

{
  int iVar1;
  timeval local_20;
  
                    /* try { // try from 00918680 to 00a186b3 has its CatchHandler @ 00918704 */
  iVar1 = gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  return iVar1;
}

