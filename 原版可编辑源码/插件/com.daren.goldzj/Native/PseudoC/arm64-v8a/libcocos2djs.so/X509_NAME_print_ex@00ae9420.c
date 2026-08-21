
int X509_NAME_print_ex(BIO *out,X509_NAME *nm,int indent,ulong flags)

{
  int iVar1;
  
  if (flags != 0) {
    iVar1 = FUN_00ae9460(&DAT_00ae9814,out,nm,indent,flags);
    return iVar1;
  }
  iVar1 = X509_NAME_print(out,nm,indent);
  return iVar1;
}

