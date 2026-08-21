
int BIO_dump_indent(BIO *b,char *bytes,int len,int indent)

{
  int iVar1;
  
  iVar1 = BIO_dump_indent_cb((cb *)&LAB_00af2de8,b,bytes,len,indent);
  return iVar1;
}

