
int BIO_dump(BIO *b,char *bytes,int len)

{
  int iVar1;
  
  iVar1 = BIO_dump_indent_cb((cb *)&LAB_00af2de8,b,bytes,len,0);
  return iVar1;
}

