
long BIO_ctrl(BIO *bp,int cmd,long larg,void *parg)

{
  long lVar1;
  _func_599 *UNRECOVERED_JUMPTABLE;
  _func_603 *UNRECOVERED_JUMPTABLE_00;
  
  lVar1 = 0;
  if (bp != (BIO *)0x0) {
    if ((bp->method == (BIO_METHOD *)0x0) ||
       (UNRECOVERED_JUMPTABLE = bp->method->ctrl, UNRECOVERED_JUMPTABLE == (_func_599 *)0x0)) {
      ERR_put_error(0x20,0x67,0x79,"crypto/bio/bio_lib.c",0x150);
      lVar1 = -2;
    }
    else {
      UNRECOVERED_JUMPTABLE_00 = bp->callback;
      if (UNRECOVERED_JUMPTABLE_00 == (_func_603 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00af6694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (*UNRECOVERED_JUMPTABLE)(bp,cmd,larg,parg);
        return lVar1;
      }
      lVar1 = (*UNRECOVERED_JUMPTABLE_00)(bp,6,parg,cmd,larg,1);
      if (0 < lVar1) {
        lVar1 = (*bp->method->ctrl)(bp,cmd,larg,parg);
                    /* WARNING: Could not recover jumptable at 0x00af663c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (*UNRECOVERED_JUMPTABLE_00)(bp,0x86,parg,cmd,larg,lVar1);
        return lVar1;
      }
    }
  }
  return lVar1;
}

