
size_t BIO_ctrl_wpending(BIO *b)

{
  size_t sVar1;
  long lVar2;
  _func_599 *UNRECOVERED_JUMPTABLE;
  _func_603 *UNRECOVERED_JUMPTABLE_00;
  
  sVar1 = 0;
  if (b != (BIO *)0x0) {
    if ((b->method == (BIO_METHOD *)0x0) ||
       (UNRECOVERED_JUMPTABLE = b->method->ctrl, UNRECOVERED_JUMPTABLE == (_func_599 *)0x0)) {
      ERR_put_error(0x20,0x67,0x79,"crypto/bio/bio_lib.c",0x150);
      sVar1 = 0xfffffffffffffffe;
    }
    else {
      UNRECOVERED_JUMPTABLE_00 = b->callback;
      if (UNRECOVERED_JUMPTABLE_00 == (_func_603 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00af6a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        sVar1 = (*UNRECOVERED_JUMPTABLE)(b,0xd,0,(void *)0x0);
        return sVar1;
      }
      sVar1 = (*UNRECOVERED_JUMPTABLE_00)(b,6,(char *)0x0,0xd,0,1);
                    /* try { // try from 00af6994 to 00bf6997 has its CatchHandler @ 00af6a4c */
      if (0 < (long)sVar1) {
                    /* try { // try from 00af69ac to 00bf69b7 has its CatchHandler @ 00af6a2c */
        lVar2 = (*b->method->ctrl)(b,0xd,0,(void *)0x0);
                    /* try { // try from 00af69b8 to 00bf6a6f has its CatchHandler @ 00af693c */
                    /* WARNING: Could not recover jumptable at 0x00af69d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        sVar1 = (*UNRECOVERED_JUMPTABLE_00)(b,0x86,(char *)0x0,0xd,0,lVar2);
        return sVar1;
      }
    }
  }
  return sVar1;
}

