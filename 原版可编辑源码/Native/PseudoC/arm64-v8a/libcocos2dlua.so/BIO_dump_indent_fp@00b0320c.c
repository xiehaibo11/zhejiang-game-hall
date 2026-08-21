
int BIO_dump_indent_fp(FILE *fp,char *s,int len,int indent)

{
  int iVar1;
  
  iVar1 = BIO_dump_indent_cb(FUN_00b031ec,fp,s,len,indent);
  return iVar1;
}

