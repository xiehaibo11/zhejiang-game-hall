
void RAND_seed(void *buf,int num)

{
  int iVar1;
  ENGINE *e;
  _func_3912 *UNRECOVERED_JUMPTABLE;
  
  if (DAT_01d3acc8 == (RAND_METHOD *)0x0) {
    e = ENGINE_get_default_RAND();
    iVar1 = 0;
    if (e != (ENGINE *)0x0) {
      DAT_01d3acc8 = ENGINE_get_RAND(e);
      if (DAT_01d3acc8 != (RAND_METHOD *)0x0) {
        UNRECOVERED_JUMPTABLE = DAT_01d3acc8->seed;
        DAT_01d3acc0 = e;
        goto joined_r0x00b46124;
      }
      iVar1 = ENGINE_finish(e);
    }
    DAT_01d3acc8 = (RAND_METHOD *)RAND_OpenSSL(iVar1);
    if (DAT_01d3acc8 == (RAND_METHOD *)0x0) {
      return;
    }
  }
  UNRECOVERED_JUMPTABLE = DAT_01d3acc8->seed;
joined_r0x00b46124:
  if (UNRECOVERED_JUMPTABLE == (_func_3912 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b460f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(buf,num);
  return;
}

