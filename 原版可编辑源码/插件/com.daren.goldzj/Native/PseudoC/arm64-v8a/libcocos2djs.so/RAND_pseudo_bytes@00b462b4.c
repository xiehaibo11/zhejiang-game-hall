
int RAND_pseudo_bytes(uchar *buf,int num)

{
  int iVar1;
  ENGINE *e;
  _func_3916 *UNRECOVERED_JUMPTABLE;
  
  if (DAT_01d3acc8 == (RAND_METHOD *)0x0) {
    e = ENGINE_get_default_RAND();
    iVar1 = 0;
    if (e != (ENGINE *)0x0) {
      DAT_01d3acc8 = ENGINE_get_RAND(e);
      if (DAT_01d3acc8 != (RAND_METHOD *)0x0) {
        UNRECOVERED_JUMPTABLE = DAT_01d3acc8->pseudorand;
        DAT_01d3acc0 = e;
        goto joined_r0x00b46328;
      }
      iVar1 = ENGINE_finish(e);
    }
    DAT_01d3acc8 = (RAND_METHOD *)RAND_OpenSSL(iVar1);
    if (DAT_01d3acc8 == (RAND_METHOD *)0x0) {
      return -1;
    }
  }
  UNRECOVERED_JUMPTABLE = DAT_01d3acc8->pseudorand;
joined_r0x00b46328:
  if (UNRECOVERED_JUMPTABLE == (_func_3916 *)0x0) {
    return -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00b462f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)(buf,num);
  return iVar1;
}

