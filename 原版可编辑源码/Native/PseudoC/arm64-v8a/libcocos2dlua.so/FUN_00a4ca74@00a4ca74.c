
undefined4 FUN_00a4ca74(time_t param_1,tm *param_2)

{
  tm *ptVar1;
  undefined4 uVar2;
  time_t local_18;
  
  local_18 = param_1;
  ptVar1 = gmtime_r(&local_18,param_2);
  uVar2 = 0x2b;
  if (ptVar1 != (tm *)0x0) {
    uVar2 = 0;
  }
                    /* try { // try from 00a4caa0 to 00b4cb3b has its CatchHandler @ 00a4c8f0 */
  return uVar2;
}

