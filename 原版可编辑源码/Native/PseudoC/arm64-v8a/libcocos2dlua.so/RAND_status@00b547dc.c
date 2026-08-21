
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int RAND_status(void)

{
  int iVar1;
  _func_3917 *UNRECOVERED_JUMPTABLE;
  ENGINE *e;
  
  if (DAT_01784a48 == (RAND_METHOD *)0x0) {
    e = ENGINE_get_default_RAND();
    iVar1 = 0;
    if (e != (ENGINE *)0x0) {
      DAT_01784a48 = ENGINE_get_RAND(e);
      if (DAT_01784a48 != (RAND_METHOD *)0x0) {
        UNRECOVERED_JUMPTABLE = DAT_01784a48->status;
        DAT_01784a40 = e;
        goto joined_r0x00b54834;
      }
      iVar1 = ENGINE_finish(e);
    }
    DAT_01784a48 = (RAND_METHOD *)RAND_OpenSSL(iVar1);
    if (DAT_01784a48 == (RAND_METHOD *)0x0) {
      return 0;
    }
  }
  UNRECOVERED_JUMPTABLE = DAT_01784a48->status;
joined_r0x00b54834:
  if (UNRECOVERED_JUMPTABLE == (_func_3917 *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00b54808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  return iVar1;
}

