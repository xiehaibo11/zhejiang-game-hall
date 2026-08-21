
int BIO_puts(BIO *bp,char *buf)

{
  int iVar1;
  long lVar2;
  int line;
  _func_603 *p_Var3;
  
  if (((bp == (BIO *)0x0) || (bp->method == (BIO_METHOD *)0x0)) ||
     (bp->method->bputs == (_func_597 *)0x0)) {
    iVar1 = 0x79;
    line = 0xf6;
  }
  else {
    p_Var3 = bp->callback;
    if (p_Var3 != (_func_603 *)0x0) {
      lVar2 = (*p_Var3)(bp,4,buf,0,0,1);
      if ((int)lVar2 < 1) {
        return (int)lVar2;
      }
    }
    if (bp->init != 0) {
      iVar1 = (*bp->method->bputs)(bp,buf);
      if (0 < iVar1) {
        bp->num_write = bp->num_write + (long)iVar1;
      }
      if (p_Var3 == (_func_603 *)0x0) {
        return iVar1;
      }
      lVar2 = (*p_Var3)(bp,0x84,buf,0,0,(long)iVar1);
      return (int)lVar2;
    }
    iVar1 = 0x78;
    line = 0x100;
  }
  ERR_put_error(0x20,0x6e,iVar1,"crypto/bio/bio_lib.c",line);
  return -2;
}

