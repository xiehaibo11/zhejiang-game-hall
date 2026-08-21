
int X509V3_EXT_print_fp(FILE *out,X509_EXTENSION *ext,int flag,int indent)

{
  int iVar1;
  BIO *out_00;
  
  out_00 = BIO_new_fp(out,0);
  iVar1 = 0;
  if (out_00 != (BIO *)0x0) {
    iVar1 = X509V3_EXT_print(out_00,ext,(long)flag,indent);
    BIO_free(out_00);
  }
  return iVar1;
}

