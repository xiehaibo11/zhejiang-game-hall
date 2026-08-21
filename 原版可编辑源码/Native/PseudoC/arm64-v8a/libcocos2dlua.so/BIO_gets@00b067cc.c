
int BIO_gets(BIO *bp,char *buf,int size)

{
  int iVar1;
  long lVar2;
  int line;
  _func_603 *p_Var3;
  
  if (((bp == (BIO *)0x0) || (bp->method == (BIO_METHOD *)0x0)) ||
     (bp->method->bgets == (_func_598 *)0x0)) {
    iVar1 = 0x79;
    line = 0x114;
  }
  else {
    p_Var3 = bp->callback;
    if (p_Var3 != (_func_603 *)0x0) {
      lVar2 = (*p_Var3)(bp,5,buf,size,0,1);
      if ((int)lVar2 < 1) {
        return (int)lVar2;
      }
    }
    if (bp->init != 0) {
      iVar1 = (*bp->method->bgets)(bp,buf,size);
      if (p_Var3 == (_func_603 *)0x0) {
        return iVar1;
      }
      lVar2 = (*p_Var3)(bp,0x85,buf,size,0,(long)iVar1);
      return (int)lVar2;
    }
    iVar1 = 0x78;
    line = 0x11e;
  }
  ERR_put_error(0x20,0x68,iVar1,"crypto/bio/bio_lib.c",line);
  return -2;
}

