
long BIO_callback_ctrl(BIO *b,int cmd,fp *fp)

{
  long lVar1;
  _func_602 *p_Var2;
  _func_603 *p_Var3;
  fp *local_28;
  
  lVar1 = 0;
  if (b != (BIO *)0x0) {
    local_28 = fp;
    if ((b->method == (BIO_METHOD *)0x0) ||
       (p_Var2 = b->method->callback_ctrl, p_Var2 == (_func_602 *)0x0)) {
                    /* catch() { ... } // from try @ 00af67ec with catch @ 00af683c */
      ERR_put_error(0x20,0x83,0x79,"crypto/bio/bio_lib.c",0x16c);
      lVar1 = -2;
    }
    else {
      p_Var3 = b->callback;
      if (p_Var3 == (_func_603 *)0x0) {
        lVar1 = (*p_Var2)(b,cmd,fp);
      }
      else {
        lVar1 = (*p_Var3)(b,6,(char *)&local_28,cmd,0,1);
        if (0 < lVar1) {
                    /* try { // try from 00af67ec to 00bf67f7 has its CatchHandler @ 00af683c */
                    /* try { // try from 00af67f8 to 00bf684f has its CatchHandler @ 00af6734 */
          lVar1 = (*b->method->callback_ctrl)(b,cmd,local_28);
          lVar1 = (*p_Var3)(b,0x86,(char *)&local_28,cmd,0,lVar1);
        }
      }
    }
  }
  return lVar1;
}

