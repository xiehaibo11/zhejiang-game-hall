
undefined8 FUN_009188c8(undefined8 param_1)

{
  timeval local_30;
  
  gettimeofday(&local_30,(__timezone_ptr_t)0x0);
  lua_pushnumber((double)local_30.tv_usec / 1000000.0 + (double)local_30.tv_sec,param_1);
                    /* try { // try from 00918918 to 00a1894b has its CatchHandler @ 00918a18 */
  return 1;
}

