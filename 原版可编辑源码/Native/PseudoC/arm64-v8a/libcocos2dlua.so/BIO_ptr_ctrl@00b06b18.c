
char * BIO_ptr_ctrl(BIO *bp,int cmd,long larg)

{
  char *pcVar1;
  long lVar2;
  _func_599 *p_Var3;
  _func_603 *p_Var4;
  char *local_38;
  
                    /* try { // try from 00b06b18 to 00c06b97 has its CatchHandler @ 00b06adc */
  local_38 = (char *)0x0;
  lVar2 = 0;
  if (bp != (BIO *)0x0) {
    if ((bp->method == (BIO_METHOD *)0x0) || (p_Var3 = bp->method->ctrl, p_Var3 == (_func_599 *)0x0)
       ) {
      ERR_put_error(0x20,0x67,0x79,"crypto/bio/bio_lib.c",0x150);
      lVar2 = -2;
    }
    else {
                    /* catch() { ... } // from try @ 00b06b0c with catch @ 00b06b50 */
      p_Var4 = bp->callback;
      if (p_Var4 == (_func_603 *)0x0) {
        lVar2 = (*p_Var3)(bp,cmd,larg,&local_38);
      }
      else {
        lVar2 = (*p_Var4)(bp,6,(char *)&local_38,cmd,larg,1);
        if (0 < lVar2) {
                    /* catch() { ... } // from try @ 00b06b00 with catch @ 00b06b80 */
          lVar2 = (*bp->method->ctrl)(bp,cmd,larg,&local_38);
          lVar2 = (*p_Var4)(bp,0x86,(char *)&local_38,cmd,larg,lVar2);
        }
      }
    }
  }
  pcVar1 = (char *)0x0;
  if (0 < lVar2) {
    pcVar1 = local_38;
  }
  return pcVar1;
}

