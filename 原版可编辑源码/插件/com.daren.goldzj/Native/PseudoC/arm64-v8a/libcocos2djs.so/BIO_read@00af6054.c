
int BIO_read(BIO *b,void *data,int len)

{
  int iVar1;
  long lVar2;
  int line;
  _func_603 *p_Var3;
  
  if (((b == (BIO *)0x0) || (b->method == (BIO_METHOD *)0x0)) ||
     (b->method->bread == (_func_596 *)0x0)) {
    iVar1 = 0x79;
    line = 0xb7;
  }
  else {
    p_Var3 = b->callback;
    if (p_Var3 != (_func_603 *)0x0) {
      lVar2 = (*p_Var3)(b,2,data,len,0,1);
      if ((int)lVar2 < 1) {
        return (int)lVar2;
      }
    }
    if (b->init != 0) {
      iVar1 = (*b->method->bread)(b,data,len);
      if (0 < iVar1) {
        b->num_read = b->num_read + (long)iVar1;
      }
      if (p_Var3 == (_func_603 *)0x0) {
        return iVar1;
      }
      lVar2 = (*p_Var3)(b,0x82,data,len,0,(long)iVar1);
      return (int)lVar2;
    }
    iVar1 = 0x78;
    line = 0xc1;
  }
  ERR_put_error(0x20,0x6f,iVar1,"crypto/bio/bio_lib.c",line);
  return -2;
}

