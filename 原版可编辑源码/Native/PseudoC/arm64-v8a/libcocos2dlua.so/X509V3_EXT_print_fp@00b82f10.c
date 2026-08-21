
int X509V3_EXT_print_fp(FILE *out,X509_EXTENSION *ext,int flag,int indent)

{
  int iVar1;
  BIO *out_00;
  
  out_00 = BIO_new_fp(out,0);
  iVar1 = 0;
  if (out_00 != (BIO *)0x0) {
    iVar1 = X509V3_EXT_print(out_00,ext,(long)flag,indent);
    BIO_free(out_00);
                    /* try { // try from 00b82f5c to 00c82f63 has its CatchHandler @ 00b83084 */
  }
                    /* try { // try from 00b82f64 to 00c82f6f has its CatchHandler @ 00b83070 */
  return iVar1;
}

