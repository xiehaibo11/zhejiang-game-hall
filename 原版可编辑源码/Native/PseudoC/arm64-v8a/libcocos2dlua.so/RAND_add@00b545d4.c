
void RAND_add(void *buf,int num,double entropy)

{
  int iVar1;
  ENGINE *e;
  _func_3915 *UNRECOVERED_JUMPTABLE;
  
  if (DAT_01784a48 == (RAND_METHOD *)0x0) {
    e = ENGINE_get_default_RAND();
    iVar1 = 0;
    if (e != (ENGINE *)0x0) {
      DAT_01784a48 = ENGINE_get_RAND(e);
      if (DAT_01784a48 != (RAND_METHOD *)0x0) {
        UNRECOVERED_JUMPTABLE = DAT_01784a48->add;
        DAT_01784a40 = e;
        goto joined_r0x00b54658;
      }
      iVar1 = ENGINE_finish(e);
    }
    DAT_01784a48 = (RAND_METHOD *)RAND_OpenSSL(iVar1);
    if (DAT_01784a48 == (RAND_METHOD *)0x0) {
      return;
    }
  }
  UNRECOVERED_JUMPTABLE = DAT_01784a48->add;
joined_r0x00b54658:
  if (UNRECOVERED_JUMPTABLE == (_func_3915 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b54628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(buf,num,entropy);
  return;
}

