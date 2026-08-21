
int ASN1_parse(BIO *bp,uchar *pp,long len,int indent)

{
  int iVar1;
  uchar *local_18;
  
  local_18 = pp;
  iVar1 = FUN_00afca7c((int)bp,&local_18,len,0,0,indent,0);
  return iVar1;
}

