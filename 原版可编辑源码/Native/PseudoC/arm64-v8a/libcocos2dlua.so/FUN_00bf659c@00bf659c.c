
int FUN_00bf659c(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  BIO *b;
  
  b = BIO_next(param_1);
  if (b != (BIO *)0x0) {
    iVar1 = BIO_read(b,param_2,param_3);
    return iVar1;
  }
  return 0;
}

