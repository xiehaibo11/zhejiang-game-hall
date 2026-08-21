
int BIO_dump_fp(FILE *fp,char *s,int len)

{
  int iVar1;
  
  iVar1 = BIO_dump_indent_cb(FUN_00b031ec,fp,s,len,0);
  return iVar1;
}

