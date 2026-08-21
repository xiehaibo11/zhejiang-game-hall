
undefined4 FUN_00a3608c(time_t param_1,tm *param_2)

{
  tm *ptVar1;
  undefined4 uVar2;
  time_t local_18;
  
                    /* try { // try from 00a3609c to 00b360b3 has its CatchHandler @ 00a3644c */
  local_18 = param_1;
  ptVar1 = gmtime_r(&local_18,param_2);
  uVar2 = 0x2b;
  if (ptVar1 != (tm *)0x0) {
    uVar2 = 0;
  }
  return uVar2;
}

