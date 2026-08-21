
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
                    /* try { // try from 00b06e5c to 00c06e67 has its CatchHandler @ 00b06e78 */
                    /* try { // try from 00b06e68 to 00c06e8b has its CatchHandler @ 00b06dc0 */
      ERR_put_error(0x20,0x67,0x79,"crypto/bio/bio_lib.c",0x150);
                    /* catch() { ... } // from try @ 00b06e5c with catch @ 00b06e78 */
      sVar1 = 0xfffffffffffffffe;
    }
    else {
      UNRECOVERED_JUMPTABLE_00 = b->callback;
      if (UNRECOVERED_JUMPTABLE_00 == (_func_603 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b06ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        sVar1 = (*UNRECOVERED_JUMPTABLE)(b,0xd,0,(void *)0x0);
        return sVar1;
      }
      sVar1 = (*UNRECOVERED_JUMPTABLE_00)(b,6,(char *)0x0,0xd,0,1);
      if (0 < (long)sVar1) {
        lVar2 = (*b->method->ctrl)(b,0xd,0,(void *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00b06e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        sVar1 = (*UNRECOVERED_JUMPTABLE_00)(b,0x86,(char *)0x0,0xd,0,lVar2);
        return sVar1;
      }
    }
  }
  return sVar1;
}

