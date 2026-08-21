
int BIO_write(BIO *b,void *data,int len)

{
  int iVar1;
  long lVar2;
  int line;
  _func_603 *p_Var3;
  
  if (b == (BIO *)0x0) {
    return 0;
  }
  if ((b->method == (BIO_METHOD *)0x0) || (b->method->bwrite == (_func_595 *)0x0)) {
    iVar1 = 0x79;
    line = 0xd9;
  }
  else {
    p_Var3 = b->callback;
    if (p_Var3 != (_func_603 *)0x0) {
      lVar2 = (*p_Var3)(b,3,data,len,0,1);
      if ((int)lVar2 < 1) {
        return (int)lVar2;
      }
    }
    if (b->init != 0) {
      iVar1 = (*b->method->bwrite)(b,data,len);
      if (0 < iVar1) {
        b->num_write = b->num_write + (long)iVar1;
      }
      if (p_Var3 == (_func_603 *)0x0) {
        return iVar1;
      }
      lVar2 = (*p_Var3)(b,0x83,data,len,0,(long)iVar1);
      return (int)lVar2;
    }
    iVar1 = 0x78;
    line = 0xe2;
  }
  ERR_put_error(0x20,0x71,iVar1,"crypto/bio/bio_lib.c",line);
  return -2;
}

