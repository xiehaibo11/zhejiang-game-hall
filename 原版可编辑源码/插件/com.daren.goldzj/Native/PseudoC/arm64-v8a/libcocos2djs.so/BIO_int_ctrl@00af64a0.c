
long BIO_int_ctrl(BIO *bp,int cmd,long larg,int iarg)

{
  long lVar1;
  _func_599 *p_Var2;
  _func_603 *p_Var3;
  int local_34;
  
  lVar1 = 0;
  if (bp != (BIO *)0x0) {
    local_34 = iarg;
    if ((bp->method == (BIO_METHOD *)0x0) || (p_Var2 = bp->method->ctrl, p_Var2 == (_func_599 *)0x0)
       ) {
      ERR_put_error(0x20,0x67,0x79,"crypto/bio/bio_lib.c",0x150);
      lVar1 = -2;
    }
    else {
      p_Var3 = bp->callback;
      if (p_Var3 == (_func_603 *)0x0) {
        lVar1 = (*p_Var2)(bp,cmd,larg,&local_34);
      }
      else {
        lVar1 = (*p_Var3)(bp,6,(char *)&local_34,cmd,larg,1);
        if (0 < lVar1) {
          lVar1 = (*bp->method->ctrl)(bp,cmd,larg,&local_34);
          lVar1 = (*p_Var3)(bp,0x86,(char *)&local_34,cmd,larg,lVar1);
        }
      }
    }
  }
  return lVar1;
}

