
int ASN1_parse(BIO *bp,uchar *pp,long len,int indent)

{
  int iVar1;
  uchar *local_18;
  
  local_18 = pp;
  iVar1 = FUN_00aec5fc((int)bp,&local_18,len,0,0,indent,0);
                    /* try { // try from 00aec5f8 to 00bec6ef has its CatchHandler @ 00aec5f8
                       catch() { ... } // from try @ 00aec5f8 with catch @ 00aec5f8
                       catch() { ... } // from try @ 00aec6f8 with catch @ 00aec5f8 */
  return iVar1;
}

