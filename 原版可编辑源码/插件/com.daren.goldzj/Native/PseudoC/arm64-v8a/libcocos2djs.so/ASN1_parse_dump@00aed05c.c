
int ASN1_parse_dump(BIO *bp,uchar *pp,long len,int indent,int dump)

{
  int iVar1;
  uchar *local_18;
  
  local_18 = pp;
  iVar1 = FUN_00aec5fc((int)bp,&local_18,len,0,0,indent,dump);
  return iVar1;
}

